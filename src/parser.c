#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 82
#define LARGE_STATE_COUNT 16
#define SYMBOL_COUNT 31
#define ALIAS_COUNT 0
#define TOKEN_COUNT 14
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_POUNDdefine = 1,
  sym_include_path = 2,
  anon_sym_POUNDinclude = 3,
  sym_comment = 4,
  anon_sym_LTglobal_GT = 5,
  anon_sym_LTmaster_GT = 6,
  anon_sym_LTgroup_GT = 7,
  anon_sym_LTregion_GT = 8,
  aux_sym_special_token1 = 9,
  sym_literal = 10,
  sym_variable = 11,
  sym_identifier = 12,
  anon_sym_EQ = 13,
  sym_document = 14,
  sym__statement = 15,
  sym_macro = 16,
  sym_define = 17,
  sym_include = 18,
  sym_global = 19,
  sym_master = 20,
  sym_group = 21,
  sym_region = 22,
  sym_special = 23,
  sym_opcode = 24,
  aux_sym_document_repeat1 = 25,
  aux_sym_document_repeat2 = 26,
  aux_sym_document_repeat3 = 27,
  aux_sym_document_repeat4 = 28,
  aux_sym_document_repeat5 = 29,
  aux_sym_document_repeat6 = 30,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_POUNDdefine] = "#define",
  [sym_include_path] = "include_path",
  [anon_sym_POUNDinclude] = "#include",
  [sym_comment] = "comment",
  [anon_sym_LTglobal_GT] = "header",
  [anon_sym_LTmaster_GT] = "header",
  [anon_sym_LTgroup_GT] = "header",
  [anon_sym_LTregion_GT] = "header",
  [aux_sym_special_token1] = "header",
  [sym_literal] = "literal",
  [sym_variable] = "variable",
  [sym_identifier] = "identifier",
  [anon_sym_EQ] = "=",
  [sym_document] = "document",
  [sym__statement] = "_statement",
  [sym_macro] = "macro",
  [sym_define] = "define",
  [sym_include] = "include",
  [sym_global] = "global",
  [sym_master] = "master",
  [sym_group] = "group",
  [sym_region] = "region",
  [sym_special] = "special",
  [sym_opcode] = "opcode",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_document_repeat2] = "document_repeat2",
  [aux_sym_document_repeat3] = "document_repeat3",
  [aux_sym_document_repeat4] = "document_repeat4",
  [aux_sym_document_repeat5] = "document_repeat5",
  [aux_sym_document_repeat6] = "document_repeat6",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_POUNDdefine] = anon_sym_POUNDdefine,
  [sym_include_path] = sym_include_path,
  [anon_sym_POUNDinclude] = anon_sym_POUNDinclude,
  [sym_comment] = sym_comment,
  [anon_sym_LTglobal_GT] = anon_sym_LTglobal_GT,
  [anon_sym_LTmaster_GT] = anon_sym_LTglobal_GT,
  [anon_sym_LTgroup_GT] = anon_sym_LTglobal_GT,
  [anon_sym_LTregion_GT] = anon_sym_LTglobal_GT,
  [aux_sym_special_token1] = anon_sym_LTglobal_GT,
  [sym_literal] = sym_literal,
  [sym_variable] = sym_variable,
  [sym_identifier] = sym_identifier,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_document] = sym_document,
  [sym__statement] = sym__statement,
  [sym_macro] = sym_macro,
  [sym_define] = sym_define,
  [sym_include] = sym_include,
  [sym_global] = sym_global,
  [sym_master] = sym_master,
  [sym_group] = sym_group,
  [sym_region] = sym_region,
  [sym_special] = sym_special,
  [sym_opcode] = sym_opcode,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_document_repeat2] = aux_sym_document_repeat2,
  [aux_sym_document_repeat3] = aux_sym_document_repeat3,
  [aux_sym_document_repeat4] = aux_sym_document_repeat4,
  [aux_sym_document_repeat5] = aux_sym_document_repeat5,
  [aux_sym_document_repeat6] = aux_sym_document_repeat6,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_POUNDdefine] = {
    .visible = true,
    .named = false,
  },
  [sym_include_path] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_POUNDinclude] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LTglobal_GT] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LTmaster_GT] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LTgroup_GT] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LTregion_GT] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_special_token1] = {
    .visible = true,
    .named = true,
  },
  [sym_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_macro] = {
    .visible = true,
    .named = true,
  },
  [sym_define] = {
    .visible = true,
    .named = true,
  },
  [sym_include] = {
    .visible = true,
    .named = true,
  },
  [sym_global] = {
    .visible = true,
    .named = true,
  },
  [sym_master] = {
    .visible = true,
    .named = true,
  },
  [sym_group] = {
    .visible = true,
    .named = true,
  },
  [sym_region] = {
    .visible = true,
    .named = true,
  },
  [sym_special] = {
    .visible = true,
    .named = true,
  },
  [sym_opcode] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_document_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_document_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_document_repeat3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_document_repeat4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_document_repeat5] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_document_repeat6] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
};

static inline bool sym_literal_character_set_1(int32_t c) {
  return (c < '/'
    ? (c < '\r'
      ? (c < '\t'
        ? c == 0
        : c <= '\n')
      : (c <= '\r' || c == ' '))
    : (c <= '9' || (c < '_'
      ? (c < 'A'
        ? c == '='
        : c <= 'Z')
      : (c <= '_' || (c >= 'a' && c <= 'z')))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(71);
      if (lookahead == '"') ADVANCE(70);
      if (lookahead == '#') ADVANCE(21);
      if (lookahead == '$') ADVANCE(65);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '<') ADVANCE(18);
      if (lookahead == '=') ADVANCE(89);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(73);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '#') ADVANCE(8);
      END_STATE();
    case 3:
      if (lookahead == '$') ADVANCE(66);
      if (lookahead == '/') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(4);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(3)
      if (lookahead == '#' ||
          lookahead == '=') ADVANCE(2);
      if (lookahead != 0) ADVANCE(67);
      END_STATE();
    case 4:
      if (lookahead == '$') ADVANCE(66);
      if (lookahead == '/') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(84);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(83);
      if (lookahead == '#' ||
          lookahead == '=') ADVANCE(2);
      if (lookahead != 0) ADVANCE(67);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(7);
      if (lookahead == '/') ADVANCE(76);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '/') ADVANCE(75);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(6);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '/') ADVANCE(68);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(85);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(82);
      if (lookahead == '#' ||
          lookahead == '=') ADVANCE(2);
      if (lookahead != 0) ADVANCE(67);
      END_STATE();
    case 9:
      if (lookahead == '>') ADVANCE(81);
      END_STATE();
    case 10:
      if (lookahead == '>') ADVANCE(79);
      END_STATE();
    case 11:
      if (lookahead == '>') ADVANCE(77);
      END_STATE();
    case 12:
      if (lookahead == '>') ADVANCE(78);
      END_STATE();
    case 13:
      if (lookahead == '>') ADVANCE(80);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(58);
      if (lookahead == 'i') ADVANCE(22);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(43);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(41);
      END_STATE();
    case 17:
      if (lookahead == 'b') ADVANCE(16);
      END_STATE();
    case 18:
      if (lookahead == 'c') ADVANCE(50);
      if (lookahead == 'e') ADVANCE(33);
      if (lookahead == 'g') ADVANCE(38);
      if (lookahead == 'm') ADVANCE(14);
      if (lookahead == 'r') ADVANCE(24);
      if (lookahead == 's') ADVANCE(15);
      END_STATE();
    case 19:
      if (lookahead == 'c') ADVANCE(40);
      END_STATE();
    case 20:
      if (lookahead == 'c') ADVANCE(59);
      END_STATE();
    case 21:
      if (lookahead == 'd') ADVANCE(28);
      if (lookahead == 'i') ADVANCE(44);
      END_STATE();
    case 22:
      if (lookahead == 'd') ADVANCE(35);
      END_STATE();
    case 23:
      if (lookahead == 'd') ADVANCE(27);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(9);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(74);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 31:
      if (lookahead == 'f') ADVANCE(36);
      END_STATE();
    case 32:
      if (lookahead == 'f') ADVANCE(29);
      END_STATE();
    case 33:
      if (lookahead == 'f') ADVANCE(32);
      END_STATE();
    case 34:
      if (lookahead == 'g') ADVANCE(37);
      END_STATE();
    case 35:
      if (lookahead == 'i') ADVANCE(9);
      END_STATE();
    case 36:
      if (lookahead == 'i') ADVANCE(47);
      END_STATE();
    case 37:
      if (lookahead == 'i') ADVANCE(51);
      END_STATE();
    case 38:
      if (lookahead == 'l') ADVANCE(48);
      if (lookahead == 'r') ADVANCE(49);
      END_STATE();
    case 39:
      if (lookahead == 'l') ADVANCE(9);
      END_STATE();
    case 40:
      if (lookahead == 'l') ADVANCE(62);
      END_STATE();
    case 41:
      if (lookahead == 'l') ADVANCE(11);
      END_STATE();
    case 42:
      if (lookahead == 'l') ADVANCE(25);
      END_STATE();
    case 43:
      if (lookahead == 'm') ADVANCE(53);
      END_STATE();
    case 44:
      if (lookahead == 'n') ADVANCE(19);
      END_STATE();
    case 45:
      if (lookahead == 'n') ADVANCE(60);
      END_STATE();
    case 46:
      if (lookahead == 'n') ADVANCE(13);
      END_STATE();
    case 47:
      if (lookahead == 'n') ADVANCE(26);
      END_STATE();
    case 48:
      if (lookahead == 'o') ADVANCE(17);
      END_STATE();
    case 49:
      if (lookahead == 'o') ADVANCE(63);
      END_STATE();
    case 50:
      if (lookahead == 'o') ADVANCE(45);
      if (lookahead == 'u') ADVANCE(55);
      END_STATE();
    case 51:
      if (lookahead == 'o') ADVANCE(46);
      END_STATE();
    case 52:
      if (lookahead == 'o') ADVANCE(39);
      END_STATE();
    case 53:
      if (lookahead == 'p') ADVANCE(42);
      END_STATE();
    case 54:
      if (lookahead == 'p') ADVANCE(10);
      END_STATE();
    case 55:
      if (lookahead == 'r') ADVANCE(64);
      END_STATE();
    case 56:
      if (lookahead == 'r') ADVANCE(52);
      END_STATE();
    case 57:
      if (lookahead == 'r') ADVANCE(12);
      END_STATE();
    case 58:
      if (lookahead == 's') ADVANCE(61);
      END_STATE();
    case 59:
      if (lookahead == 't') ADVANCE(9);
      END_STATE();
    case 60:
      if (lookahead == 't') ADVANCE(56);
      END_STATE();
    case 61:
      if (lookahead == 't') ADVANCE(30);
      END_STATE();
    case 62:
      if (lookahead == 'u') ADVANCE(23);
      END_STATE();
    case 63:
      if (lookahead == 'u') ADVANCE(54);
      END_STATE();
    case 64:
      if (lookahead == 'v') ADVANCE(25);
      END_STATE();
    case 65:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 66:
      if (!sym_literal_character_set_1(lookahead)) ADVANCE(67);
      if (lookahead == '/') ADVANCE(68);
      if (lookahead == '=') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(85);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 67:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != '=') ADVANCE(67);
      if (lookahead == '/') ADVANCE(68);
      if (lookahead == '=') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(85);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(82);
      END_STATE();
    case 68:
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != '/') ADVANCE(8);
      END_STATE();
    case 69:
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != '/') ADVANCE(8);
      if (lookahead == '*') ADVANCE(7);
      if (lookahead == '/') ADVANCE(76);
      END_STATE();
    case 70:
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_POUNDdefine);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_include_path);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_POUNDinclude);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(76);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_LTglobal_GT);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_LTmaster_GT);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_LTgroup_GT);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_LTregion_GT);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_special_token1);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_literal);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_literal);
      if (lookahead == '$') ADVANCE(66);
      if (lookahead == '/') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(4);
      if (lookahead == '#' ||
          lookahead == '=') ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(67);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_literal);
      if (lookahead == '$') ADVANCE(66);
      if (lookahead == '/') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(84);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(83);
      if (lookahead == '#' ||
          lookahead == '=') ADVANCE(2);
      if (lookahead != 0) ADVANCE(67);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_literal);
      if (lookahead == '/') ADVANCE(68);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(85);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(82);
      if (lookahead == '#' ||
          lookahead == '=') ADVANCE(2);
      if (lookahead != 0) ADVANCE(67);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_variable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_variable);
      if (!sym_literal_character_set_1(lookahead)) ADVANCE(67);
      if (lookahead == '/') ADVANCE(68);
      if (lookahead == '=') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(85);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 3},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 3},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 3},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_POUNDdefine] = ACTIONS(1),
    [sym_include_path] = ACTIONS(1),
    [anon_sym_POUNDinclude] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LTglobal_GT] = ACTIONS(1),
    [anon_sym_LTmaster_GT] = ACTIONS(1),
    [anon_sym_LTgroup_GT] = ACTIONS(1),
    [anon_sym_LTregion_GT] = ACTIONS(1),
    [aux_sym_special_token1] = ACTIONS(1),
    [sym_variable] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(77),
    [sym__statement] = STATE(2),
    [sym_macro] = STATE(2),
    [sym_define] = STATE(36),
    [sym_include] = STATE(36),
    [sym_global] = STATE(70),
    [sym_master] = STATE(51),
    [sym_group] = STATE(30),
    [sym_region] = STATE(18),
    [sym_special] = STATE(11),
    [sym_opcode] = STATE(2),
    [aux_sym_document_repeat1] = STATE(2),
    [aux_sym_document_repeat2] = STATE(11),
    [aux_sym_document_repeat3] = STATE(18),
    [aux_sym_document_repeat4] = STATE(30),
    [aux_sym_document_repeat5] = STATE(51),
    [aux_sym_document_repeat6] = STATE(70),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_POUNDdefine] = ACTIONS(7),
    [anon_sym_POUNDinclude] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LTglobal_GT] = ACTIONS(11),
    [anon_sym_LTmaster_GT] = ACTIONS(13),
    [anon_sym_LTgroup_GT] = ACTIONS(15),
    [anon_sym_LTregion_GT] = ACTIONS(17),
    [aux_sym_special_token1] = ACTIONS(19),
    [sym_identifier] = ACTIONS(21),
  },
  [2] = {
    [sym__statement] = STATE(14),
    [sym_macro] = STATE(14),
    [sym_define] = STATE(36),
    [sym_include] = STATE(36),
    [sym_global] = STATE(69),
    [sym_master] = STATE(47),
    [sym_group] = STATE(26),
    [sym_region] = STATE(19),
    [sym_special] = STATE(12),
    [sym_opcode] = STATE(14),
    [aux_sym_document_repeat1] = STATE(14),
    [aux_sym_document_repeat2] = STATE(12),
    [aux_sym_document_repeat3] = STATE(19),
    [aux_sym_document_repeat4] = STATE(26),
    [aux_sym_document_repeat5] = STATE(47),
    [aux_sym_document_repeat6] = STATE(69),
    [ts_builtin_sym_end] = ACTIONS(23),
    [anon_sym_POUNDdefine] = ACTIONS(7),
    [anon_sym_POUNDinclude] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LTglobal_GT] = ACTIONS(11),
    [anon_sym_LTmaster_GT] = ACTIONS(13),
    [anon_sym_LTgroup_GT] = ACTIONS(15),
    [anon_sym_LTregion_GT] = ACTIONS(17),
    [aux_sym_special_token1] = ACTIONS(19),
    [sym_identifier] = ACTIONS(21),
  },
  [3] = {
    [sym__statement] = STATE(14),
    [sym_macro] = STATE(14),
    [sym_define] = STATE(36),
    [sym_include] = STATE(36),
    [sym_master] = STATE(61),
    [sym_group] = STATE(43),
    [sym_region] = STATE(23),
    [sym_special] = STATE(16),
    [sym_opcode] = STATE(14),
    [aux_sym_document_repeat1] = STATE(14),
    [aux_sym_document_repeat2] = STATE(16),
    [aux_sym_document_repeat3] = STATE(23),
    [aux_sym_document_repeat4] = STATE(43),
    [aux_sym_document_repeat5] = STATE(61),
    [ts_builtin_sym_end] = ACTIONS(25),
    [anon_sym_POUNDdefine] = ACTIONS(7),
    [anon_sym_POUNDinclude] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LTglobal_GT] = ACTIONS(25),
    [anon_sym_LTmaster_GT] = ACTIONS(13),
    [anon_sym_LTgroup_GT] = ACTIONS(15),
    [anon_sym_LTregion_GT] = ACTIONS(17),
    [aux_sym_special_token1] = ACTIONS(19),
    [sym_identifier] = ACTIONS(21),
  },
  [4] = {
    [sym__statement] = STATE(3),
    [sym_macro] = STATE(3),
    [sym_define] = STATE(36),
    [sym_include] = STATE(36),
    [sym_master] = STATE(63),
    [sym_group] = STATE(44),
    [sym_region] = STATE(25),
    [sym_special] = STATE(17),
    [sym_opcode] = STATE(3),
    [aux_sym_document_repeat1] = STATE(3),
    [aux_sym_document_repeat2] = STATE(17),
    [aux_sym_document_repeat3] = STATE(25),
    [aux_sym_document_repeat4] = STATE(44),
    [aux_sym_document_repeat5] = STATE(63),
    [ts_builtin_sym_end] = ACTIONS(27),
    [anon_sym_POUNDdefine] = ACTIONS(7),
    [anon_sym_POUNDinclude] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LTglobal_GT] = ACTIONS(27),
    [anon_sym_LTmaster_GT] = ACTIONS(13),
    [anon_sym_LTgroup_GT] = ACTIONS(15),
    [anon_sym_LTregion_GT] = ACTIONS(17),
    [aux_sym_special_token1] = ACTIONS(19),
    [sym_identifier] = ACTIONS(21),
  },
  [5] = {
    [sym__statement] = STATE(14),
    [sym_macro] = STATE(14),
    [sym_define] = STATE(36),
    [sym_include] = STATE(36),
    [sym_group] = STATE(59),
    [sym_region] = STATE(35),
    [sym_special] = STATE(21),
    [sym_opcode] = STATE(14),
    [aux_sym_document_repeat1] = STATE(14),
    [aux_sym_document_repeat2] = STATE(21),
    [aux_sym_document_repeat3] = STATE(35),
    [aux_sym_document_repeat4] = STATE(59),
    [ts_builtin_sym_end] = ACTIONS(29),
    [anon_sym_POUNDdefine] = ACTIONS(7),
    [anon_sym_POUNDinclude] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LTglobal_GT] = ACTIONS(29),
    [anon_sym_LTmaster_GT] = ACTIONS(29),
    [anon_sym_LTgroup_GT] = ACTIONS(15),
    [anon_sym_LTregion_GT] = ACTIONS(17),
    [aux_sym_special_token1] = ACTIONS(19),
    [sym_identifier] = ACTIONS(21),
  },
  [6] = {
    [sym__statement] = STATE(5),
    [sym_macro] = STATE(5),
    [sym_define] = STATE(36),
    [sym_include] = STATE(36),
    [sym_group] = STATE(60),
    [sym_region] = STATE(33),
    [sym_special] = STATE(22),
    [sym_opcode] = STATE(5),
    [aux_sym_document_repeat1] = STATE(5),
    [aux_sym_document_repeat2] = STATE(22),
    [aux_sym_document_repeat3] = STATE(33),
    [aux_sym_document_repeat4] = STATE(60),
    [ts_builtin_sym_end] = ACTIONS(31),
    [anon_sym_POUNDdefine] = ACTIONS(7),
    [anon_sym_POUNDinclude] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LTglobal_GT] = ACTIONS(31),
    [anon_sym_LTmaster_GT] = ACTIONS(31),
    [anon_sym_LTgroup_GT] = ACTIONS(15),
    [anon_sym_LTregion_GT] = ACTIONS(17),
    [aux_sym_special_token1] = ACTIONS(19),
    [sym_identifier] = ACTIONS(21),
  },
  [7] = {
    [sym__statement] = STATE(8),
    [sym_macro] = STATE(8),
    [sym_define] = STATE(36),
    [sym_include] = STATE(36),
    [sym_region] = STATE(54),
    [sym_special] = STATE(28),
    [sym_opcode] = STATE(8),
    [aux_sym_document_repeat1] = STATE(8),
    [aux_sym_document_repeat2] = STATE(28),
    [aux_sym_document_repeat3] = STATE(54),
    [ts_builtin_sym_end] = ACTIONS(33),
    [anon_sym_POUNDdefine] = ACTIONS(7),
    [anon_sym_POUNDinclude] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LTglobal_GT] = ACTIONS(33),
    [anon_sym_LTmaster_GT] = ACTIONS(33),
    [anon_sym_LTgroup_GT] = ACTIONS(33),
    [anon_sym_LTregion_GT] = ACTIONS(17),
    [aux_sym_special_token1] = ACTIONS(19),
    [sym_identifier] = ACTIONS(21),
  },
  [8] = {
    [sym__statement] = STATE(14),
    [sym_macro] = STATE(14),
    [sym_define] = STATE(36),
    [sym_include] = STATE(36),
    [sym_region] = STATE(53),
    [sym_special] = STATE(29),
    [sym_opcode] = STATE(14),
    [aux_sym_document_repeat1] = STATE(14),
    [aux_sym_document_repeat2] = STATE(29),
    [aux_sym_document_repeat3] = STATE(53),
    [ts_builtin_sym_end] = ACTIONS(35),
    [anon_sym_POUNDdefine] = ACTIONS(7),
    [anon_sym_POUNDinclude] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LTglobal_GT] = ACTIONS(35),
    [anon_sym_LTmaster_GT] = ACTIONS(35),
    [anon_sym_LTgroup_GT] = ACTIONS(35),
    [anon_sym_LTregion_GT] = ACTIONS(17),
    [aux_sym_special_token1] = ACTIONS(19),
    [sym_identifier] = ACTIONS(21),
  },
  [9] = {
    [sym__statement] = STATE(10),
    [sym_macro] = STATE(10),
    [sym_define] = STATE(36),
    [sym_include] = STATE(36),
    [sym_special] = STATE(45),
    [sym_opcode] = STATE(10),
    [aux_sym_document_repeat1] = STATE(10),
    [aux_sym_document_repeat2] = STATE(45),
    [ts_builtin_sym_end] = ACTIONS(37),
    [anon_sym_POUNDdefine] = ACTIONS(7),
    [anon_sym_POUNDinclude] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LTglobal_GT] = ACTIONS(37),
    [anon_sym_LTmaster_GT] = ACTIONS(37),
    [anon_sym_LTgroup_GT] = ACTIONS(37),
    [anon_sym_LTregion_GT] = ACTIONS(37),
    [aux_sym_special_token1] = ACTIONS(19),
    [sym_identifier] = ACTIONS(21),
  },
  [10] = {
    [sym__statement] = STATE(14),
    [sym_macro] = STATE(14),
    [sym_define] = STATE(36),
    [sym_include] = STATE(36),
    [sym_special] = STATE(46),
    [sym_opcode] = STATE(14),
    [aux_sym_document_repeat1] = STATE(14),
    [aux_sym_document_repeat2] = STATE(46),
    [ts_builtin_sym_end] = ACTIONS(39),
    [anon_sym_POUNDdefine] = ACTIONS(7),
    [anon_sym_POUNDinclude] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LTglobal_GT] = ACTIONS(39),
    [anon_sym_LTmaster_GT] = ACTIONS(39),
    [anon_sym_LTgroup_GT] = ACTIONS(39),
    [anon_sym_LTregion_GT] = ACTIONS(39),
    [aux_sym_special_token1] = ACTIONS(19),
    [sym_identifier] = ACTIONS(21),
  },
  [11] = {
    [sym_global] = STATE(69),
    [sym_master] = STATE(47),
    [sym_group] = STATE(26),
    [sym_region] = STATE(19),
    [sym_special] = STATE(40),
    [aux_sym_document_repeat2] = STATE(40),
    [aux_sym_document_repeat3] = STATE(19),
    [aux_sym_document_repeat4] = STATE(26),
    [aux_sym_document_repeat5] = STATE(47),
    [aux_sym_document_repeat6] = STATE(69),
    [ts_builtin_sym_end] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LTglobal_GT] = ACTIONS(11),
    [anon_sym_LTmaster_GT] = ACTIONS(13),
    [anon_sym_LTgroup_GT] = ACTIONS(15),
    [anon_sym_LTregion_GT] = ACTIONS(17),
    [aux_sym_special_token1] = ACTIONS(19),
  },
  [12] = {
    [sym_global] = STATE(67),
    [sym_master] = STATE(55),
    [sym_group] = STATE(27),
    [sym_region] = STATE(20),
    [sym_special] = STATE(40),
    [aux_sym_document_repeat2] = STATE(40),
    [aux_sym_document_repeat3] = STATE(20),
    [aux_sym_document_repeat4] = STATE(27),
    [aux_sym_document_repeat5] = STATE(55),
    [aux_sym_document_repeat6] = STATE(67),
    [ts_builtin_sym_end] = ACTIONS(41),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LTglobal_GT] = ACTIONS(11),
    [anon_sym_LTmaster_GT] = ACTIONS(13),
    [anon_sym_LTgroup_GT] = ACTIONS(15),
    [anon_sym_LTregion_GT] = ACTIONS(17),
    [aux_sym_special_token1] = ACTIONS(19),
  },
  [13] = {
    [sym__statement] = STATE(15),
    [sym_macro] = STATE(15),
    [sym_define] = STATE(36),
    [sym_include] = STATE(36),
    [sym_opcode] = STATE(15),
    [aux_sym_document_repeat1] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(43),
    [anon_sym_POUNDdefine] = ACTIONS(7),
    [anon_sym_POUNDinclude] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LTglobal_GT] = ACTIONS(43),
    [anon_sym_LTmaster_GT] = ACTIONS(43),
    [anon_sym_LTgroup_GT] = ACTIONS(43),
    [anon_sym_LTregion_GT] = ACTIONS(43),
    [aux_sym_special_token1] = ACTIONS(43),
    [sym_identifier] = ACTIONS(21),
  },
  [14] = {
    [sym__statement] = STATE(14),
    [sym_macro] = STATE(14),
    [sym_define] = STATE(36),
    [sym_include] = STATE(36),
    [sym_opcode] = STATE(14),
    [aux_sym_document_repeat1] = STATE(14),
    [ts_builtin_sym_end] = ACTIONS(45),
    [anon_sym_POUNDdefine] = ACTIONS(47),
    [anon_sym_POUNDinclude] = ACTIONS(50),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LTglobal_GT] = ACTIONS(45),
    [anon_sym_LTmaster_GT] = ACTIONS(45),
    [anon_sym_LTgroup_GT] = ACTIONS(45),
    [anon_sym_LTregion_GT] = ACTIONS(45),
    [aux_sym_special_token1] = ACTIONS(45),
    [sym_identifier] = ACTIONS(53),
  },
  [15] = {
    [sym__statement] = STATE(14),
    [sym_macro] = STATE(14),
    [sym_define] = STATE(36),
    [sym_include] = STATE(36),
    [sym_opcode] = STATE(14),
    [aux_sym_document_repeat1] = STATE(14),
    [ts_builtin_sym_end] = ACTIONS(56),
    [anon_sym_POUNDdefine] = ACTIONS(7),
    [anon_sym_POUNDinclude] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LTglobal_GT] = ACTIONS(56),
    [anon_sym_LTmaster_GT] = ACTIONS(56),
    [anon_sym_LTgroup_GT] = ACTIONS(56),
    [anon_sym_LTregion_GT] = ACTIONS(56),
    [aux_sym_special_token1] = ACTIONS(56),
    [sym_identifier] = ACTIONS(21),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LTmaster_GT,
    ACTIONS(15), 1,
      anon_sym_LTgroup_GT,
    ACTIONS(17), 1,
      anon_sym_LTregion_GT,
    ACTIONS(19), 1,
      aux_sym_special_token1,
    ACTIONS(58), 2,
      ts_builtin_sym_end,
      anon_sym_LTglobal_GT,
    STATE(24), 2,
      sym_region,
      aux_sym_document_repeat3,
    STATE(40), 2,
      sym_special,
      aux_sym_document_repeat2,
    STATE(41), 2,
      sym_group,
      aux_sym_document_repeat4,
    STATE(62), 2,
      sym_master,
      aux_sym_document_repeat5,
  [36] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LTmaster_GT,
    ACTIONS(15), 1,
      anon_sym_LTgroup_GT,
    ACTIONS(17), 1,
      anon_sym_LTregion_GT,
    ACTIONS(19), 1,
      aux_sym_special_token1,
    ACTIONS(25), 2,
      ts_builtin_sym_end,
      anon_sym_LTglobal_GT,
    STATE(23), 2,
      sym_region,
      aux_sym_document_repeat3,
    STATE(40), 2,
      sym_special,
      aux_sym_document_repeat2,
    STATE(43), 2,
      sym_group,
      aux_sym_document_repeat4,
    STATE(61), 2,
      sym_master,
      aux_sym_document_repeat5,
  [72] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LTglobal_GT,
    ACTIONS(13), 1,
      anon_sym_LTmaster_GT,
    ACTIONS(15), 1,
      anon_sym_LTgroup_GT,
    ACTIONS(17), 1,
      anon_sym_LTregion_GT,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    STATE(26), 2,
      sym_group,
      aux_sym_document_repeat4,
    STATE(47), 2,
      sym_master,
      aux_sym_document_repeat5,
    STATE(49), 2,
      sym_region,
      aux_sym_document_repeat3,
    STATE(69), 2,
      sym_global,
      aux_sym_document_repeat6,
  [107] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LTglobal_GT,
    ACTIONS(13), 1,
      anon_sym_LTmaster_GT,
    ACTIONS(15), 1,
      anon_sym_LTgroup_GT,
    ACTIONS(17), 1,
      anon_sym_LTregion_GT,
    ACTIONS(41), 1,
      ts_builtin_sym_end,
    STATE(27), 2,
      sym_group,
      aux_sym_document_repeat4,
    STATE(49), 2,
      sym_region,
      aux_sym_document_repeat3,
    STATE(55), 2,
      sym_master,
      aux_sym_document_repeat5,
    STATE(67), 2,
      sym_global,
      aux_sym_document_repeat6,
  [142] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LTglobal_GT,
    ACTIONS(13), 1,
      anon_sym_LTmaster_GT,
    ACTIONS(15), 1,
      anon_sym_LTgroup_GT,
    ACTIONS(17), 1,
      anon_sym_LTregion_GT,
    ACTIONS(60), 1,
      ts_builtin_sym_end,
    STATE(31), 2,
      sym_group,
      aux_sym_document_repeat4,
    STATE(49), 2,
      sym_region,
      aux_sym_document_repeat3,
    STATE(52), 2,
      sym_master,
      aux_sym_document_repeat5,
    STATE(71), 2,
      sym_global,
      aux_sym_document_repeat6,
  [177] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LTgroup_GT,
    ACTIONS(17), 1,
      anon_sym_LTregion_GT,
    ACTIONS(19), 1,
      aux_sym_special_token1,
    STATE(32), 2,
      sym_region,
      aux_sym_document_repeat3,
    STATE(40), 2,
      sym_special,
      aux_sym_document_repeat2,
    STATE(57), 2,
      sym_group,
      aux_sym_document_repeat4,
    ACTIONS(62), 3,
      ts_builtin_sym_end,
      anon_sym_LTglobal_GT,
      anon_sym_LTmaster_GT,
  [207] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LTgroup_GT,
    ACTIONS(17), 1,
      anon_sym_LTregion_GT,
    ACTIONS(19), 1,
      aux_sym_special_token1,
    STATE(35), 2,
      sym_region,
      aux_sym_document_repeat3,
    STATE(40), 2,
      sym_special,
      aux_sym_document_repeat2,
    STATE(59), 2,
      sym_group,
      aux_sym_document_repeat4,
    ACTIONS(29), 3,
      ts_builtin_sym_end,
      anon_sym_LTglobal_GT,
      anon_sym_LTmaster_GT,
  [237] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LTmaster_GT,
    ACTIONS(15), 1,
      anon_sym_LTgroup_GT,
    ACTIONS(17), 1,
      anon_sym_LTregion_GT,
    ACTIONS(58), 2,
      ts_builtin_sym_end,
      anon_sym_LTglobal_GT,
    STATE(41), 2,
      sym_group,
      aux_sym_document_repeat4,
    STATE(49), 2,
      sym_region,
      aux_sym_document_repeat3,
    STATE(62), 2,
      sym_master,
      aux_sym_document_repeat5,
  [266] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LTmaster_GT,
    ACTIONS(15), 1,
      anon_sym_LTgroup_GT,
    ACTIONS(17), 1,
      anon_sym_LTregion_GT,
    ACTIONS(64), 2,
      ts_builtin_sym_end,
      anon_sym_LTglobal_GT,
    STATE(42), 2,
      sym_group,
      aux_sym_document_repeat4,
    STATE(49), 2,
      sym_region,
      aux_sym_document_repeat3,
    STATE(65), 2,
      sym_master,
      aux_sym_document_repeat5,
  [295] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LTmaster_GT,
    ACTIONS(15), 1,
      anon_sym_LTgroup_GT,
    ACTIONS(17), 1,
      anon_sym_LTregion_GT,
    ACTIONS(25), 2,
      ts_builtin_sym_end,
      anon_sym_LTglobal_GT,
    STATE(43), 2,
      sym_group,
      aux_sym_document_repeat4,
    STATE(49), 2,
      sym_region,
      aux_sym_document_repeat3,
    STATE(61), 2,
      sym_master,
      aux_sym_document_repeat5,
  [324] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LTglobal_GT,
    ACTIONS(13), 1,
      anon_sym_LTmaster_GT,
    ACTIONS(15), 1,
      anon_sym_LTgroup_GT,
    ACTIONS(41), 1,
      ts_builtin_sym_end,
    STATE(55), 2,
      sym_master,
      aux_sym_document_repeat5,
    STATE(56), 2,
      sym_group,
      aux_sym_document_repeat4,
    STATE(67), 2,
      sym_global,
      aux_sym_document_repeat6,
  [352] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LTglobal_GT,
    ACTIONS(13), 1,
      anon_sym_LTmaster_GT,
    ACTIONS(15), 1,
      anon_sym_LTgroup_GT,
    ACTIONS(60), 1,
      ts_builtin_sym_end,
    STATE(52), 2,
      sym_master,
      aux_sym_document_repeat5,
    STATE(56), 2,
      sym_group,
      aux_sym_document_repeat4,
    STATE(71), 2,
      sym_global,
      aux_sym_document_repeat6,
  [380] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LTregion_GT,
    ACTIONS(19), 1,
      aux_sym_special_token1,
    STATE(40), 2,
      sym_special,
      aux_sym_document_repeat2,
    STATE(53), 2,
      sym_region,
      aux_sym_document_repeat3,
    ACTIONS(35), 4,
      ts_builtin_sym_end,
      anon_sym_LTglobal_GT,
      anon_sym_LTmaster_GT,
      anon_sym_LTgroup_GT,
  [404] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LTregion_GT,
    ACTIONS(19), 1,
      aux_sym_special_token1,
    STATE(40), 2,
      sym_special,
      aux_sym_document_repeat2,
    STATE(48), 2,
      sym_region,
      aux_sym_document_repeat3,
    ACTIONS(66), 4,
      ts_builtin_sym_end,
      anon_sym_LTglobal_GT,
      anon_sym_LTmaster_GT,
      anon_sym_LTgroup_GT,
  [428] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LTglobal_GT,
    ACTIONS(13), 1,
      anon_sym_LTmaster_GT,
    ACTIONS(15), 1,
      anon_sym_LTgroup_GT,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    STATE(47), 2,
      sym_master,
      aux_sym_document_repeat5,
    STATE(56), 2,
      sym_group,
      aux_sym_document_repeat4,
    STATE(69), 2,
      sym_global,
      aux_sym_document_repeat6,
  [456] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LTglobal_GT,
    ACTIONS(13), 1,
      anon_sym_LTmaster_GT,
    ACTIONS(15), 1,
      anon_sym_LTgroup_GT,
    ACTIONS(68), 1,
      ts_builtin_sym_end,
    STATE(50), 2,
      sym_master,
      aux_sym_document_repeat5,
    STATE(56), 2,
      sym_group,
      aux_sym_document_repeat4,
    STATE(72), 2,
      sym_global,
      aux_sym_document_repeat6,
  [484] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LTgroup_GT,
    ACTIONS(17), 1,
      anon_sym_LTregion_GT,
    STATE(49), 2,
      sym_region,
      aux_sym_document_repeat3,
    STATE(58), 2,
      sym_group,
      aux_sym_document_repeat4,
    ACTIONS(70), 3,
      ts_builtin_sym_end,
      anon_sym_LTglobal_GT,
      anon_sym_LTmaster_GT,
  [507] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LTgroup_GT,
    ACTIONS(17), 1,
      anon_sym_LTregion_GT,
    STATE(49), 2,
      sym_region,
      aux_sym_document_repeat3,
    STATE(59), 2,
      sym_group,
      aux_sym_document_repeat4,
    ACTIONS(29), 3,
      ts_builtin_sym_end,
      anon_sym_LTglobal_GT,
      anon_sym_LTmaster_GT,
  [530] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(72), 9,
      ts_builtin_sym_end,
      anon_sym_POUNDdefine,
      anon_sym_POUNDinclude,
      anon_sym_LTglobal_GT,
      anon_sym_LTmaster_GT,
      anon_sym_LTgroup_GT,
      anon_sym_LTregion_GT,
      aux_sym_special_token1,
      sym_identifier,
  [545] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LTgroup_GT,
    ACTIONS(17), 1,
      anon_sym_LTregion_GT,
    STATE(49), 2,
      sym_region,
      aux_sym_document_repeat3,
    STATE(57), 2,
      sym_group,
      aux_sym_document_repeat4,
    ACTIONS(62), 3,
      ts_builtin_sym_end,
      anon_sym_LTglobal_GT,
      anon_sym_LTmaster_GT,
  [568] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(74), 9,
      ts_builtin_sym_end,
      anon_sym_POUNDdefine,
      anon_sym_POUNDinclude,
      anon_sym_LTglobal_GT,
      anon_sym_LTmaster_GT,
      anon_sym_LTgroup_GT,
      anon_sym_LTregion_GT,
      aux_sym_special_token1,
      sym_identifier,
  [583] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 9,
      ts_builtin_sym_end,
      anon_sym_POUNDdefine,
      anon_sym_POUNDinclude,
      anon_sym_LTglobal_GT,
      anon_sym_LTmaster_GT,
      anon_sym_LTgroup_GT,
      anon_sym_LTregion_GT,
      aux_sym_special_token1,
      sym_identifier,
  [598] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 9,
      ts_builtin_sym_end,
      anon_sym_POUNDdefine,
      anon_sym_POUNDinclude,
      anon_sym_LTglobal_GT,
      anon_sym_LTmaster_GT,
      anon_sym_LTgroup_GT,
      anon_sym_LTregion_GT,
      aux_sym_special_token1,
      sym_identifier,
  [613] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(80), 9,
      ts_builtin_sym_end,
      anon_sym_POUNDdefine,
      anon_sym_POUNDinclude,
      anon_sym_LTglobal_GT,
      anon_sym_LTmaster_GT,
      anon_sym_LTgroup_GT,
      anon_sym_LTregion_GT,
      aux_sym_special_token1,
      sym_identifier,
  [628] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(84), 1,
      aux_sym_special_token1,
    STATE(40), 2,
      sym_special,
      aux_sym_document_repeat2,
    ACTIONS(82), 5,
      ts_builtin_sym_end,
      anon_sym_LTglobal_GT,
      anon_sym_LTmaster_GT,
      anon_sym_LTgroup_GT,
      anon_sym_LTregion_GT,
  [646] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LTmaster_GT,
    ACTIONS(15), 1,
      anon_sym_LTgroup_GT,
    ACTIONS(64), 2,
      ts_builtin_sym_end,
      anon_sym_LTglobal_GT,
    STATE(56), 2,
      sym_group,
      aux_sym_document_repeat4,
    STATE(65), 2,
      sym_master,
      aux_sym_document_repeat5,
  [668] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LTmaster_GT,
    ACTIONS(15), 1,
      anon_sym_LTgroup_GT,
    ACTIONS(87), 2,
      ts_builtin_sym_end,
      anon_sym_LTglobal_GT,
    STATE(56), 2,
      sym_group,
      aux_sym_document_repeat4,
    STATE(66), 2,
      sym_master,
      aux_sym_document_repeat5,
  [690] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LTmaster_GT,
    ACTIONS(15), 1,
      anon_sym_LTgroup_GT,
    ACTIONS(58), 2,
      ts_builtin_sym_end,
      anon_sym_LTglobal_GT,
    STATE(56), 2,
      sym_group,
      aux_sym_document_repeat4,
    STATE(62), 2,
      sym_master,
      aux_sym_document_repeat5,
  [712] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LTmaster_GT,
    ACTIONS(15), 1,
      anon_sym_LTgroup_GT,
    ACTIONS(25), 2,
      ts_builtin_sym_end,
      anon_sym_LTglobal_GT,
    STATE(56), 2,
      sym_group,
      aux_sym_document_repeat4,
    STATE(61), 2,
      sym_master,
      aux_sym_document_repeat5,
  [734] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      aux_sym_special_token1,
    STATE(40), 2,
      sym_special,
      aux_sym_document_repeat2,
    ACTIONS(39), 5,
      ts_builtin_sym_end,
      anon_sym_LTglobal_GT,
      anon_sym_LTmaster_GT,
      anon_sym_LTgroup_GT,
      anon_sym_LTregion_GT,
  [752] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      aux_sym_special_token1,
    STATE(40), 2,
      sym_special,
      aux_sym_document_repeat2,
    ACTIONS(89), 5,
      ts_builtin_sym_end,
      anon_sym_LTglobal_GT,
      anon_sym_LTmaster_GT,
      anon_sym_LTgroup_GT,
      anon_sym_LTregion_GT,
  [770] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LTglobal_GT,
    ACTIONS(13), 1,
      anon_sym_LTmaster_GT,
    ACTIONS(41), 1,
      ts_builtin_sym_end,
    STATE(64), 2,
      sym_master,
      aux_sym_document_repeat5,
    STATE(67), 2,
      sym_global,
      aux_sym_document_repeat6,
  [791] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LTregion_GT,
    STATE(49), 2,
      sym_region,
      aux_sym_document_repeat3,
    ACTIONS(91), 4,
      ts_builtin_sym_end,
      anon_sym_LTglobal_GT,
      anon_sym_LTmaster_GT,
      anon_sym_LTgroup_GT,
  [808] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      anon_sym_LTregion_GT,
    STATE(49), 2,
      sym_region,
      aux_sym_document_repeat3,
    ACTIONS(93), 4,
      ts_builtin_sym_end,
      anon_sym_LTglobal_GT,
      anon_sym_LTmaster_GT,
      anon_sym_LTgroup_GT,
  [825] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LTglobal_GT,
    ACTIONS(13), 1,
      anon_sym_LTmaster_GT,
    ACTIONS(98), 1,
      ts_builtin_sym_end,
    STATE(64), 2,
      sym_master,
      aux_sym_document_repeat5,
    STATE(73), 2,
      sym_global,
      aux_sym_document_repeat6,
  [846] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LTglobal_GT,
    ACTIONS(13), 1,
      anon_sym_LTmaster_GT,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    STATE(64), 2,
      sym_master,
      aux_sym_document_repeat5,
    STATE(69), 2,
      sym_global,
      aux_sym_document_repeat6,
  [867] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LTglobal_GT,
    ACTIONS(13), 1,
      anon_sym_LTmaster_GT,
    ACTIONS(68), 1,
      ts_builtin_sym_end,
    STATE(64), 2,
      sym_master,
      aux_sym_document_repeat5,
    STATE(72), 2,
      sym_global,
      aux_sym_document_repeat6,
  [888] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LTregion_GT,
    STATE(49), 2,
      sym_region,
      aux_sym_document_repeat3,
    ACTIONS(66), 4,
      ts_builtin_sym_end,
      anon_sym_LTglobal_GT,
      anon_sym_LTmaster_GT,
      anon_sym_LTgroup_GT,
  [905] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LTregion_GT,
    STATE(49), 2,
      sym_region,
      aux_sym_document_repeat3,
    ACTIONS(35), 4,
      ts_builtin_sym_end,
      anon_sym_LTglobal_GT,
      anon_sym_LTmaster_GT,
      anon_sym_LTgroup_GT,
  [922] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LTglobal_GT,
    ACTIONS(13), 1,
      anon_sym_LTmaster_GT,
    ACTIONS(60), 1,
      ts_builtin_sym_end,
    STATE(64), 2,
      sym_master,
      aux_sym_document_repeat5,
    STATE(71), 2,
      sym_global,
      aux_sym_document_repeat6,
  [943] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      anon_sym_LTgroup_GT,
    STATE(56), 2,
      sym_group,
      aux_sym_document_repeat4,
    ACTIONS(100), 3,
      ts_builtin_sym_end,
      anon_sym_LTglobal_GT,
      anon_sym_LTmaster_GT,
  [959] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LTgroup_GT,
    STATE(56), 2,
      sym_group,
      aux_sym_document_repeat4,
    ACTIONS(70), 3,
      ts_builtin_sym_end,
      anon_sym_LTglobal_GT,
      anon_sym_LTmaster_GT,
  [975] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LTgroup_GT,
    STATE(56), 2,
      sym_group,
      aux_sym_document_repeat4,
    ACTIONS(105), 3,
      ts_builtin_sym_end,
      anon_sym_LTglobal_GT,
      anon_sym_LTmaster_GT,
  [991] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LTgroup_GT,
    STATE(56), 2,
      sym_group,
      aux_sym_document_repeat4,
    ACTIONS(62), 3,
      ts_builtin_sym_end,
      anon_sym_LTglobal_GT,
      anon_sym_LTmaster_GT,
  [1007] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LTgroup_GT,
    STATE(56), 2,
      sym_group,
      aux_sym_document_repeat4,
    ACTIONS(29), 3,
      ts_builtin_sym_end,
      anon_sym_LTglobal_GT,
      anon_sym_LTmaster_GT,
  [1023] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LTmaster_GT,
    ACTIONS(58), 2,
      ts_builtin_sym_end,
      anon_sym_LTglobal_GT,
    STATE(64), 2,
      sym_master,
      aux_sym_document_repeat5,
  [1038] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LTmaster_GT,
    ACTIONS(64), 2,
      ts_builtin_sym_end,
      anon_sym_LTglobal_GT,
    STATE(64), 2,
      sym_master,
      aux_sym_document_repeat5,
  [1053] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LTmaster_GT,
    ACTIONS(25), 2,
      ts_builtin_sym_end,
      anon_sym_LTglobal_GT,
    STATE(64), 2,
      sym_master,
      aux_sym_document_repeat5,
  [1068] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_LTmaster_GT,
    ACTIONS(107), 2,
      ts_builtin_sym_end,
      anon_sym_LTglobal_GT,
    STATE(64), 2,
      sym_master,
      aux_sym_document_repeat5,
  [1083] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LTmaster_GT,
    ACTIONS(87), 2,
      ts_builtin_sym_end,
      anon_sym_LTglobal_GT,
    STATE(64), 2,
      sym_master,
      aux_sym_document_repeat5,
  [1098] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LTmaster_GT,
    ACTIONS(112), 2,
      ts_builtin_sym_end,
      anon_sym_LTglobal_GT,
    STATE(64), 2,
      sym_master,
      aux_sym_document_repeat5,
  [1113] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LTglobal_GT,
    ACTIONS(60), 1,
      ts_builtin_sym_end,
    STATE(68), 2,
      sym_global,
      aux_sym_document_repeat6,
  [1127] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 1,
      ts_builtin_sym_end,
    ACTIONS(116), 1,
      anon_sym_LTglobal_GT,
    STATE(68), 2,
      sym_global,
      aux_sym_document_repeat6,
  [1141] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LTglobal_GT,
    ACTIONS(41), 1,
      ts_builtin_sym_end,
    STATE(68), 2,
      sym_global,
      aux_sym_document_repeat6,
  [1155] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LTglobal_GT,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    STATE(68), 2,
      sym_global,
      aux_sym_document_repeat6,
  [1169] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LTglobal_GT,
    ACTIONS(68), 1,
      ts_builtin_sym_end,
    STATE(68), 2,
      sym_global,
      aux_sym_document_repeat6,
  [1183] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LTglobal_GT,
    ACTIONS(98), 1,
      ts_builtin_sym_end,
    STATE(68), 2,
      sym_global,
      aux_sym_document_repeat6,
  [1197] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LTglobal_GT,
    ACTIONS(119), 1,
      ts_builtin_sym_end,
    STATE(68), 2,
      sym_global,
      aux_sym_document_repeat6,
  [1211] = 3,
    ACTIONS(121), 1,
      sym_comment,
    ACTIONS(123), 1,
      sym_literal,
    ACTIONS(125), 1,
      sym_variable,
  [1221] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 1,
      sym_variable,
    ACTIONS(129), 1,
      anon_sym_EQ,
  [1231] = 3,
    ACTIONS(121), 1,
      sym_comment,
    ACTIONS(131), 1,
      sym_literal,
    ACTIONS(133), 1,
      sym_variable,
  [1241] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      ts_builtin_sym_end,
  [1248] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 1,
      sym_include_path,
  [1255] = 2,
    ACTIONS(121), 1,
      sym_comment,
    ACTIONS(139), 1,
      sym_literal,
  [1262] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 1,
      anon_sym_EQ,
  [1269] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 1,
      sym_variable,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(16)] = 0,
  [SMALL_STATE(17)] = 36,
  [SMALL_STATE(18)] = 72,
  [SMALL_STATE(19)] = 107,
  [SMALL_STATE(20)] = 142,
  [SMALL_STATE(21)] = 177,
  [SMALL_STATE(22)] = 207,
  [SMALL_STATE(23)] = 237,
  [SMALL_STATE(24)] = 266,
  [SMALL_STATE(25)] = 295,
  [SMALL_STATE(26)] = 324,
  [SMALL_STATE(27)] = 352,
  [SMALL_STATE(28)] = 380,
  [SMALL_STATE(29)] = 404,
  [SMALL_STATE(30)] = 428,
  [SMALL_STATE(31)] = 456,
  [SMALL_STATE(32)] = 484,
  [SMALL_STATE(33)] = 507,
  [SMALL_STATE(34)] = 530,
  [SMALL_STATE(35)] = 545,
  [SMALL_STATE(36)] = 568,
  [SMALL_STATE(37)] = 583,
  [SMALL_STATE(38)] = 598,
  [SMALL_STATE(39)] = 613,
  [SMALL_STATE(40)] = 628,
  [SMALL_STATE(41)] = 646,
  [SMALL_STATE(42)] = 668,
  [SMALL_STATE(43)] = 690,
  [SMALL_STATE(44)] = 712,
  [SMALL_STATE(45)] = 734,
  [SMALL_STATE(46)] = 752,
  [SMALL_STATE(47)] = 770,
  [SMALL_STATE(48)] = 791,
  [SMALL_STATE(49)] = 808,
  [SMALL_STATE(50)] = 825,
  [SMALL_STATE(51)] = 846,
  [SMALL_STATE(52)] = 867,
  [SMALL_STATE(53)] = 888,
  [SMALL_STATE(54)] = 905,
  [SMALL_STATE(55)] = 922,
  [SMALL_STATE(56)] = 943,
  [SMALL_STATE(57)] = 959,
  [SMALL_STATE(58)] = 975,
  [SMALL_STATE(59)] = 991,
  [SMALL_STATE(60)] = 1007,
  [SMALL_STATE(61)] = 1023,
  [SMALL_STATE(62)] = 1038,
  [SMALL_STATE(63)] = 1053,
  [SMALL_STATE(64)] = 1068,
  [SMALL_STATE(65)] = 1083,
  [SMALL_STATE(66)] = 1098,
  [SMALL_STATE(67)] = 1113,
  [SMALL_STATE(68)] = 1127,
  [SMALL_STATE(69)] = 1141,
  [SMALL_STATE(70)] = 1155,
  [SMALL_STATE(71)] = 1169,
  [SMALL_STATE(72)] = 1183,
  [SMALL_STATE(73)] = 1197,
  [SMALL_STATE(74)] = 1211,
  [SMALL_STATE(75)] = 1221,
  [SMALL_STATE(76)] = 1231,
  [SMALL_STATE(77)] = 1241,
  [SMALL_STATE(78)] = 1248,
  [SMALL_STATE(79)] = 1255,
  [SMALL_STATE(80)] = 1262,
  [SMALL_STATE(81)] = 1269,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global, 2),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global, 1),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_master, 2),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_master, 1),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 1),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 2),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_region, 1),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_region, 2),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 2),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_special, 1),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(81),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(78),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(75),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_special, 2),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global, 3),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 3),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_master, 3),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global, 4),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 3),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 4),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_master, 4),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_opcode, 3),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro, 1),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define, 3),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 2),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_opcode, 4),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat2, 2),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(13),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global, 5),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_region, 3),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 4),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat3, 2),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat3, 2), SHIFT_REPEAT(9),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 5),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat4, 2),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat4, 2), SHIFT_REPEAT(7),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_master, 5),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat5, 2),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat5, 2), SHIFT_REPEAT(6),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global, 6),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat6, 2),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat6, 2), SHIFT_REPEAT(4),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 6),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [135] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_sfz(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
