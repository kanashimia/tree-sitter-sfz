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

  externals: $ => [
    $.literal,
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

    define: $ => seq("#define", $.variable, $.literal),

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

    variable: $ => /\$\w+/,
    identifier: $ => /[a-z_0-9]+/,

    opcode: $ => seq(
      $.identifier, 
      optional($.variable), 
      "=", 
      choice($.variable, $.literal)
    ),
  }
});
