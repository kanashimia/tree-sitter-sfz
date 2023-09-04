"=" @punctuation.delimiter
"#define" @keyword
"#include" @keyword

((literal) @constant.numeric (#match? @constant.numeric "^-?[.0-9]+$"))
((literal) @constant.builtin (#match? @constant.builtin "^[a-g]#?[0-9]$"))
((literal) @constant (#match? @constant "^[$][A-Za-z_-]+$"))
(literal) @string

(header) @keyword

(comment) @comment
(identifier) @property
(variable) @constant
(include_path) @string

(ERROR) @error
