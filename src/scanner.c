#include "tree_sitter/parser.h"
#include <wctype.h>
#include <stdio.h>

enum {
  LITERAL
};

void *tree_sitter_sfz_external_scanner_create() { return NULL; }
void tree_sitter_sfz_external_scanner_destroy(void *p) {}
void tree_sitter_sfz_external_scanner_reset(void *p) {}
unsigned tree_sitter_sfz_external_scanner_serialize(void *p, char *buffer) { return 0; }
void tree_sitter_sfz_external_scanner_deserialize(void *p, const char *b, unsigned n) {}

static void advance(TSLexer *lexer) {
  lexer->advance(lexer, false);
}

static void mark_end(TSLexer *lexer) {
  lexer->mark_end(lexer);
}

static bool line_end(TSLexer *lexer) {
  return lexer->lookahead == '\n' || lexer->eof(lexer);
}

static bool space(TSLexer *lexer) {
  return lexer->lookahead != '\n' && iswspace(lexer->lookahead);
}

bool tree_sitter_sfz_external_scanner_scan(
  void *payload,
  TSLexer *lexer,
  const bool *valid_symbols
) {
  if (valid_symbols[LITERAL]) {
    while (!line_end(lexer)) {
      if (lexer->lookahead == '/') {
        mark_end(lexer);
        advance(lexer);
        if(lexer->lookahead == '/' || lexer->lookahead == '*') {
          return true;
        }
        continue;
      }
      if (space(lexer)) {
        mark_end(lexer);
        while (space(lexer)) {
          advance(lexer);
        }
        if (line_end(lexer) || lexer->lookahead == '#' || lexer->lookahead == '<') {
          return true;
        }
        continue;
      }
      if (lexer->lookahead == '=') {
        return true;
      }
      advance(lexer);
    }

    mark_end(lexer);

    lexer->result_symbol = LITERAL;
    return true;
  }

  return false;
}

