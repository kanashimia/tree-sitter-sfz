function order($, n) {
  return [
    repeat($._statement),
    repeat($.special),
    repeat($.region),
    repeat($.group),
    repeat($.master),
    repeat($.global),
  ].slice(0, n);
};

function scope($, name, n) {
  return seq(alias(name, $.header), ...order($, n));
}

module.exports = grammar({
  name: "sfz",

  extras: $ => [
    /\s/,
    $.comment,
  ],

  rules: {
    document: $ => seq(...order($)),

    _statement: $ => choice(
      $.macro,
      $.opcode,
    ),

    macro: $ => choice(
      $.define,
      $.include,
    ),

    define_name: $ => /\$\w+/,
    define_value: $ => /[0-9a-zA-Z_-]+/,
    define: $ => seq("#define", $.define_name, $.define_value),

    include_path: $ => token(/"[^"]+"/),
    include: $ => seq("#include", $.include_path),
    
    comment: $ => token(choice(
      seq("//", /[^\r\n]*/),
      seq("/*", /[^*]*\*+([^/*][^*]*\*+)*/, "/"),
    )),

    global: $ => scope($, "<global>", -1),
    master: $ => scope($, "<master>", -2),
    group: $ => scope($, "<group>", -3),
    region: $ => scope($, "<region>", -4),
    special: $ => scope($, /<(control|curve|effect|midi|sample)>/, -5),
    
    opcode: $ => seq($.opcode_name, "=", $.opcode_value),
    opcode_name: $ => seq(/[A-Za-z_0-9]+/, optional($.opcode_fragment)),
    opcode_fragment: $ => token.immediate(/\$\w+/),

    opcode_value: $ =>  /([^=\r\n\/]|\/[^\/*])+\s/,

    // opcode_value: $ => choice($.opcode_value_number, $.opcode_value_string),
    // opcode_value_number: $ => choice(/\-?[0-9.]+\s/, /[abcdefg]#?[0-9]\s/),
    // opcode_value_string: $ => /[^=\r/\n]+\s/,
  }
});
