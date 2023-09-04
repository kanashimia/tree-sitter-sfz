#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 84
#define LARGE_STATE_COUNT 13
#define SYMBOL_COUNT 33
#define ALIAS_COUNT 0
#define TOKEN_COUNT 16
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_POUNDdefine = 1,
  anon_sym_DQUOTE = 2,
  aux_sym_include_path_token1 = 3,
  anon_sym_DQUOTE2 = 4,
  anon_sym_POUNDinclude = 5,
  sym_comment = 6,
  anon_sym_LTglobal_GT = 7,
  anon_sym_LTmaster_GT = 8,
  anon_sym_LTgroup_GT = 9,
  anon_sym_LTregion_GT = 10,
  aux_sym_special_token1 = 11,
  sym_variable = 12,
  sym_identifier = 13,
  anon_sym_EQ = 14,
  sym_literal = 15,
  sym_document = 16,
  sym__statement = 17,
  sym_define = 18,
  sym_include_path = 19,
  sym_include = 20,
  sym_global = 21,
  sym_master = 22,
  sym_group = 23,
  sym_region = 24,
  sym_special = 25,
  sym_opcode = 26,
  aux_sym_document_repeat1 = 27,
  aux_sym_document_repeat2 = 28,
  aux_sym_document_repeat3 = 29,
  aux_sym_document_repeat4 = 30,
  aux_sym_document_repeat5 = 31,
  aux_sym_document_repeat6 = 32,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_POUNDdefine] = "#define",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_include_path_token1] = "include_path_token1",
  [anon_sym_DQUOTE2] = "\"",
  [anon_sym_POUNDinclude] = "#include",
  [sym_comment] = "comment",
  [anon_sym_LTglobal_GT] = "header",
  [anon_sym_LTmaster_GT] = "header",
  [anon_sym_LTgroup_GT] = "header",
  [anon_sym_LTregion_GT] = "header",
  [aux_sym_special_token1] = "header",
  [sym_variable] = "variable",
  [sym_identifier] = "identifier",
  [anon_sym_EQ] = "=",
  [sym_literal] = "literal",
  [sym_document] = "document",
  [sym__statement] = "_statement",
  [sym_define] = "define",
  [sym_include_path] = "include_path",
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
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_include_path_token1] = aux_sym_include_path_token1,
  [anon_sym_DQUOTE2] = anon_sym_DQUOTE,
  [anon_sym_POUNDinclude] = anon_sym_POUNDinclude,
  [sym_comment] = sym_comment,
  [anon_sym_LTglobal_GT] = anon_sym_LTglobal_GT,
  [anon_sym_LTmaster_GT] = anon_sym_LTglobal_GT,
  [anon_sym_LTgroup_GT] = anon_sym_LTglobal_GT,
  [anon_sym_LTregion_GT] = anon_sym_LTglobal_GT,
  [aux_sym_special_token1] = anon_sym_LTglobal_GT,
  [sym_variable] = sym_variable,
  [sym_identifier] = sym_identifier,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_literal] = sym_literal,
  [sym_document] = sym_document,
  [sym__statement] = sym__statement,
  [sym_define] = sym_define,
  [sym_include_path] = sym_include_path,
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
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_include_path_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE2] = {
    .visible = true,
    .named = false,
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
  [sym_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_define] = {
    .visible = true,
    .named = true,
  },
  [sym_include_path] = {
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
  [82] = 82,
  [83] = 83,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(46);
      if (lookahead == '"') ADVANCE(55);
      if (lookahead == '#') ADVANCE(32);
      if (lookahead == '$') ADVANCE(44);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '<') ADVANCE(38);
      if (lookahead == '=') ADVANCE(66);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(45)
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(55);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(48);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == '/') ADVANCE(58);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(4);
      if (lookahead == '/') ADVANCE(57);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(4);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      END_STATE();
    case 7:
      if (lookahead == '/') ADVANCE(50);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(53);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(6)
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(54);
      END_STATE();
    case 8:
      if (lookahead == '>') ADVANCE(63);
      if (lookahead == 'a') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 9:
      if (lookahead == '>') ADVANCE(63);
      if (lookahead == 'a') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 10:
      if (lookahead == '>') ADVANCE(63);
      if (lookahead == 'b') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 11:
      if (lookahead == '>') ADVANCE(63);
      if (lookahead == 'e') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 12:
      if (lookahead == '>') ADVANCE(63);
      if (lookahead == 'e') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 13:
      if (lookahead == '>') ADVANCE(63);
      if (lookahead == 'g') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 14:
      if (lookahead == '>') ADVANCE(63);
      if (lookahead == 'i') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 15:
      if (lookahead == '>') ADVANCE(63);
      if (lookahead == 'l') ADVANCE(18);
      if (lookahead == 'r') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 16:
      if (lookahead == '>') ADVANCE(63);
      if (lookahead == 'l') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 17:
      if (lookahead == '>') ADVANCE(63);
      if (lookahead == 'n') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 18:
      if (lookahead == '>') ADVANCE(63);
      if (lookahead == 'o') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 19:
      if (lookahead == '>') ADVANCE(63);
      if (lookahead == 'o') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 20:
      if (lookahead == '>') ADVANCE(63);
      if (lookahead == 'o') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 21:
      if (lookahead == '>') ADVANCE(63);
      if (lookahead == 'p') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 22:
      if (lookahead == '>') ADVANCE(63);
      if (lookahead == 'r') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 23:
      if (lookahead == '>') ADVANCE(63);
      if (lookahead == 's') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 24:
      if (lookahead == '>') ADVANCE(63);
      if (lookahead == 't') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 25:
      if (lookahead == '>') ADVANCE(63);
      if (lookahead == 'u') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 26:
      if (lookahead == '>') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 27:
      if (lookahead == '>') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 28:
      if (lookahead == '>') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 29:
      if (lookahead == '>') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 30:
      if (lookahead == '>') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 31:
      if (lookahead == 'c') ADVANCE(40);
      END_STATE();
    case 32:
      if (lookahead == 'd') ADVANCE(34);
      if (lookahead == 'i') ADVANCE(41);
      END_STATE();
    case 33:
      if (lookahead == 'd') ADVANCE(36);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 37:
      if (lookahead == 'f') ADVANCE(39);
      END_STATE();
    case 38:
      if (lookahead == 'g') ADVANCE(15);
      if (lookahead == 'm') ADVANCE(8);
      if (lookahead == 'r') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 39:
      if (lookahead == 'i') ADVANCE(42);
      END_STATE();
    case 40:
      if (lookahead == 'l') ADVANCE(43);
      END_STATE();
    case 41:
      if (lookahead == 'n') ADVANCE(31);
      END_STATE();
    case 42:
      if (lookahead == 'n') ADVANCE(35);
      END_STATE();
    case 43:
      if (lookahead == 'u') ADVANCE(33);
      END_STATE();
    case 44:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 45:
      if (eof) ADVANCE(46);
      if (lookahead == '"') ADVANCE(48);
      if (lookahead == '#') ADVANCE(32);
      if (lookahead == '$') ADVANCE(44);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '<') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(45)
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_POUNDdefine);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_include_path_token1);
      if (lookahead == '"') ADVANCE(58);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_include_path_token1);
      if (lookahead == '*') ADVANCE(52);
      if (lookahead == '/') ADVANCE(49);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(54);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_include_path_token1);
      if (lookahead == '*') ADVANCE(51);
      if (lookahead == '/') ADVANCE(54);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '"') ADVANCE(5);
      if (lookahead != 0) ADVANCE(52);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_include_path_token1);
      if (lookahead == '*') ADVANCE(51);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '"') ADVANCE(5);
      if (lookahead != 0) ADVANCE(52);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_include_path_token1);
      if (lookahead == '/') ADVANCE(50);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(54);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_include_path_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_DQUOTE2);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_POUNDinclude);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(58);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_LTglobal_GT);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_LTmaster_GT);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_LTgroup_GT);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_LTregion_GT);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_special_token1);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_variable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
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
  [74] = {.lex_state = 2},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0, .external_lex_state = 1},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 7},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0, .external_lex_state = 1},
  [83] = {.lex_state = 0, .external_lex_state = 1},
};

enum {
  ts_external_token_literal = 0,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_literal] = sym_literal,
};

static const bool ts_external_scanner_states[2][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_literal] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_POUNDdefine] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE2] = ACTIONS(1),
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
    [sym_literal] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(81),
    [sym__statement] = STATE(2),
    [sym_define] = STATE(2),
    [sym_include] = STATE(2),
    [sym_global] = STATE(68),
    [sym_master] = STATE(54),
    [sym_group] = STATE(31),
    [sym_region] = STATE(19),
    [sym_special] = STATE(9),
    [sym_opcode] = STATE(2),
    [aux_sym_document_repeat1] = STATE(2),
    [aux_sym_document_repeat2] = STATE(9),
    [aux_sym_document_repeat3] = STATE(19),
    [aux_sym_document_repeat4] = STATE(31),
    [aux_sym_document_repeat5] = STATE(54),
    [aux_sym_document_repeat6] = STATE(68),
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
    [sym_define] = STATE(14),
    [sym_include] = STATE(14),
    [sym_global] = STATE(71),
    [sym_master] = STATE(48),
    [sym_group] = STATE(27),
    [sym_region] = STATE(20),
    [sym_special] = STATE(10),
    [sym_opcode] = STATE(14),
    [aux_sym_document_repeat1] = STATE(14),
    [aux_sym_document_repeat2] = STATE(10),
    [aux_sym_document_repeat3] = STATE(20),
    [aux_sym_document_repeat4] = STATE(27),
    [aux_sym_document_repeat5] = STATE(48),
    [aux_sym_document_repeat6] = STATE(71),
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
    [sym__statement] = STATE(4),
    [sym_define] = STATE(4),
    [sym_include] = STATE(4),
    [sym_master] = STATE(65),
    [sym_group] = STATE(45),
    [sym_region] = STATE(25),
    [sym_special] = STATE(15),
    [sym_opcode] = STATE(4),
    [aux_sym_document_repeat1] = STATE(4),
    [aux_sym_document_repeat2] = STATE(15),
    [aux_sym_document_repeat3] = STATE(25),
    [aux_sym_document_repeat4] = STATE(45),
    [aux_sym_document_repeat5] = STATE(65),
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
    [sym__statement] = STATE(14),
    [sym_define] = STATE(14),
    [sym_include] = STATE(14),
    [sym_master] = STATE(66),
    [sym_group] = STATE(44),
    [sym_region] = STATE(23),
    [sym_special] = STATE(13),
    [sym_opcode] = STATE(14),
    [aux_sym_document_repeat1] = STATE(14),
    [aux_sym_document_repeat2] = STATE(13),
    [aux_sym_document_repeat3] = STATE(23),
    [aux_sym_document_repeat4] = STATE(44),
    [aux_sym_document_repeat5] = STATE(66),
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
    [sym_define] = STATE(14),
    [sym_include] = STATE(14),
    [sym_group] = STATE(57),
    [sym_region] = STATE(38),
    [sym_special] = STATE(21),
    [sym_opcode] = STATE(14),
    [aux_sym_document_repeat1] = STATE(14),
    [aux_sym_document_repeat2] = STATE(21),
    [aux_sym_document_repeat3] = STATE(38),
    [aux_sym_document_repeat4] = STATE(57),
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
    [sym_define] = STATE(5),
    [sym_include] = STATE(5),
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
    [sym_define] = STATE(8),
    [sym_include] = STATE(8),
    [sym_region] = STATE(53),
    [sym_special] = STATE(29),
    [sym_opcode] = STATE(8),
    [aux_sym_document_repeat1] = STATE(8),
    [aux_sym_document_repeat2] = STATE(29),
    [aux_sym_document_repeat3] = STATE(53),
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
    [sym_define] = STATE(14),
    [sym_include] = STATE(14),
    [sym_region] = STATE(47),
    [sym_special] = STATE(30),
    [sym_opcode] = STATE(14),
    [aux_sym_document_repeat1] = STATE(14),
    [aux_sym_document_repeat2] = STATE(30),
    [aux_sym_document_repeat3] = STATE(47),
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
    [sym_global] = STATE(71),
    [sym_master] = STATE(48),
    [sym_group] = STATE(27),
    [sym_region] = STATE(20),
    [sym_special] = STATE(41),
    [aux_sym_document_repeat2] = STATE(41),
    [aux_sym_document_repeat3] = STATE(20),
    [aux_sym_document_repeat4] = STATE(27),
    [aux_sym_document_repeat5] = STATE(48),
    [aux_sym_document_repeat6] = STATE(71),
    [ts_builtin_sym_end] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LTglobal_GT] = ACTIONS(11),
    [anon_sym_LTmaster_GT] = ACTIONS(13),
    [anon_sym_LTgroup_GT] = ACTIONS(15),
    [anon_sym_LTregion_GT] = ACTIONS(17),
    [aux_sym_special_token1] = ACTIONS(19),
  },
  [10] = {
    [sym_global] = STATE(69),
    [sym_master] = STATE(55),
    [sym_group] = STATE(26),
    [sym_region] = STATE(18),
    [sym_special] = STATE(41),
    [aux_sym_document_repeat2] = STATE(41),
    [aux_sym_document_repeat3] = STATE(18),
    [aux_sym_document_repeat4] = STATE(26),
    [aux_sym_document_repeat5] = STATE(55),
    [aux_sym_document_repeat6] = STATE(69),
    [ts_builtin_sym_end] = ACTIONS(37),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LTglobal_GT] = ACTIONS(11),
    [anon_sym_LTmaster_GT] = ACTIONS(13),
    [anon_sym_LTgroup_GT] = ACTIONS(15),
    [anon_sym_LTregion_GT] = ACTIONS(17),
    [aux_sym_special_token1] = ACTIONS(19),
  },
  [11] = {
    [sym__statement] = STATE(14),
    [sym_define] = STATE(14),
    [sym_include] = STATE(14),
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
  [12] = {
    [sym__statement] = STATE(11),
    [sym_define] = STATE(11),
    [sym_include] = STATE(11),
    [sym_special] = STATE(43),
    [sym_opcode] = STATE(11),
    [aux_sym_document_repeat1] = STATE(11),
    [aux_sym_document_repeat2] = STATE(43),
    [ts_builtin_sym_end] = ACTIONS(41),
    [anon_sym_POUNDdefine] = ACTIONS(7),
    [anon_sym_POUNDinclude] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LTglobal_GT] = ACTIONS(41),
    [anon_sym_LTmaster_GT] = ACTIONS(41),
    [anon_sym_LTgroup_GT] = ACTIONS(41),
    [anon_sym_LTregion_GT] = ACTIONS(41),
    [aux_sym_special_token1] = ACTIONS(19),
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
    ACTIONS(43), 2,
      ts_builtin_sym_end,
      anon_sym_LTglobal_GT,
    STATE(24), 2,
      sym_region,
      aux_sym_document_repeat3,
    STATE(40), 2,
      sym_group,
      aux_sym_document_repeat4,
    STATE(41), 2,
      sym_special,
      aux_sym_document_repeat2,
    STATE(61), 2,
      sym_master,
      aux_sym_document_repeat5,
  [36] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 1,
      anon_sym_POUNDdefine,
    ACTIONS(50), 1,
      anon_sym_POUNDinclude,
    ACTIONS(53), 1,
      aux_sym_special_token1,
    ACTIONS(55), 1,
      sym_identifier,
    ACTIONS(45), 5,
      ts_builtin_sym_end,
      anon_sym_LTglobal_GT,
      anon_sym_LTmaster_GT,
      anon_sym_LTgroup_GT,
      anon_sym_LTregion_GT,
    STATE(14), 5,
      sym__statement,
      sym_define,
      sym_include,
      sym_opcode,
      aux_sym_document_repeat1,
  [66] = 10,
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
    ACTIONS(27), 2,
      ts_builtin_sym_end,
      anon_sym_LTglobal_GT,
    STATE(23), 2,
      sym_region,
      aux_sym_document_repeat3,
    STATE(41), 2,
      sym_special,
      aux_sym_document_repeat2,
    STATE(44), 2,
      sym_group,
      aux_sym_document_repeat4,
    STATE(66), 2,
      sym_master,
      aux_sym_document_repeat5,
  [102] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_POUNDdefine,
    ACTIONS(9), 1,
      anon_sym_POUNDinclude,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(60), 1,
      aux_sym_special_token1,
    ACTIONS(58), 5,
      ts_builtin_sym_end,
      anon_sym_LTglobal_GT,
      anon_sym_LTmaster_GT,
      anon_sym_LTgroup_GT,
      anon_sym_LTregion_GT,
    STATE(14), 5,
      sym__statement,
      sym_define,
      sym_include,
      sym_opcode,
      aux_sym_document_repeat1,
  [132] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_POUNDdefine,
    ACTIONS(9), 1,
      anon_sym_POUNDinclude,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(64), 1,
      aux_sym_special_token1,
    ACTIONS(62), 5,
      ts_builtin_sym_end,
      anon_sym_LTglobal_GT,
      anon_sym_LTmaster_GT,
      anon_sym_LTgroup_GT,
      anon_sym_LTregion_GT,
    STATE(16), 5,
      sym__statement,
      sym_define,
      sym_include,
      sym_opcode,
      aux_sym_document_repeat1,
  [162] = 10,
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
    ACTIONS(66), 1,
      ts_builtin_sym_end,
    STATE(28), 2,
      sym_group,
      aux_sym_document_repeat4,
    STATE(50), 2,
      sym_region,
      aux_sym_document_repeat3,
    STATE(51), 2,
      sym_master,
      aux_sym_document_repeat5,
    STATE(70), 2,
      sym_global,
      aux_sym_document_repeat6,
  [197] = 10,
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
    STATE(27), 2,
      sym_group,
      aux_sym_document_repeat4,
    STATE(48), 2,
      sym_master,
      aux_sym_document_repeat5,
    STATE(50), 2,
      sym_region,
      aux_sym_document_repeat3,
    STATE(71), 2,
      sym_global,
      aux_sym_document_repeat6,
  [232] = 10,
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
    ACTIONS(37), 1,
      ts_builtin_sym_end,
    STATE(26), 2,
      sym_group,
      aux_sym_document_repeat4,
    STATE(50), 2,
      sym_region,
      aux_sym_document_repeat3,
    STATE(55), 2,
      sym_master,
      aux_sym_document_repeat5,
    STATE(69), 2,
      sym_global,
      aux_sym_document_repeat6,
  [267] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LTgroup_GT,
    ACTIONS(17), 1,
      anon_sym_LTregion_GT,
    ACTIONS(19), 1,
      aux_sym_special_token1,
    STATE(34), 2,
      sym_region,
      aux_sym_document_repeat3,
    STATE(41), 2,
      sym_special,
      aux_sym_document_repeat2,
    STATE(56), 2,
      sym_group,
      aux_sym_document_repeat4,
    ACTIONS(68), 3,
      ts_builtin_sym_end,
      anon_sym_LTglobal_GT,
      anon_sym_LTmaster_GT,
  [297] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LTgroup_GT,
    ACTIONS(17), 1,
      anon_sym_LTregion_GT,
    ACTIONS(19), 1,
      aux_sym_special_token1,
    STATE(38), 2,
      sym_region,
      aux_sym_document_repeat3,
    STATE(41), 2,
      sym_special,
      aux_sym_document_repeat2,
    STATE(57), 2,
      sym_group,
      aux_sym_document_repeat4,
    ACTIONS(29), 3,
      ts_builtin_sym_end,
      anon_sym_LTglobal_GT,
      anon_sym_LTmaster_GT,
  [327] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LTmaster_GT,
    ACTIONS(15), 1,
      anon_sym_LTgroup_GT,
    ACTIONS(17), 1,
      anon_sym_LTregion_GT,
    ACTIONS(43), 2,
      ts_builtin_sym_end,
      anon_sym_LTglobal_GT,
    STATE(40), 2,
      sym_group,
      aux_sym_document_repeat4,
    STATE(50), 2,
      sym_region,
      aux_sym_document_repeat3,
    STATE(61), 2,
      sym_master,
      aux_sym_document_repeat5,
  [356] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LTmaster_GT,
    ACTIONS(15), 1,
      anon_sym_LTgroup_GT,
    ACTIONS(17), 1,
      anon_sym_LTregion_GT,
    ACTIONS(70), 2,
      ts_builtin_sym_end,
      anon_sym_LTglobal_GT,
    STATE(42), 2,
      sym_group,
      aux_sym_document_repeat4,
    STATE(50), 2,
      sym_region,
      aux_sym_document_repeat3,
    STATE(63), 2,
      sym_master,
      aux_sym_document_repeat5,
  [385] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LTmaster_GT,
    ACTIONS(15), 1,
      anon_sym_LTgroup_GT,
    ACTIONS(17), 1,
      anon_sym_LTregion_GT,
    ACTIONS(27), 2,
      ts_builtin_sym_end,
      anon_sym_LTglobal_GT,
    STATE(44), 2,
      sym_group,
      aux_sym_document_repeat4,
    STATE(50), 2,
      sym_region,
      aux_sym_document_repeat3,
    STATE(66), 2,
      sym_master,
      aux_sym_document_repeat5,
  [414] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LTglobal_GT,
    ACTIONS(13), 1,
      anon_sym_LTmaster_GT,
    ACTIONS(15), 1,
      anon_sym_LTgroup_GT,
    ACTIONS(66), 1,
      ts_builtin_sym_end,
    STATE(51), 2,
      sym_master,
      aux_sym_document_repeat5,
    STATE(58), 2,
      sym_group,
      aux_sym_document_repeat4,
    STATE(70), 2,
      sym_global,
      aux_sym_document_repeat6,
  [442] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LTglobal_GT,
    ACTIONS(13), 1,
      anon_sym_LTmaster_GT,
    ACTIONS(15), 1,
      anon_sym_LTgroup_GT,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
    STATE(55), 2,
      sym_master,
      aux_sym_document_repeat5,
    STATE(58), 2,
      sym_group,
      aux_sym_document_repeat4,
    STATE(69), 2,
      sym_global,
      aux_sym_document_repeat6,
  [470] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LTglobal_GT,
    ACTIONS(13), 1,
      anon_sym_LTmaster_GT,
    ACTIONS(15), 1,
      anon_sym_LTgroup_GT,
    ACTIONS(72), 1,
      ts_builtin_sym_end,
    STATE(49), 2,
      sym_master,
      aux_sym_document_repeat5,
    STATE(58), 2,
      sym_group,
      aux_sym_document_repeat4,
    STATE(72), 2,
      sym_global,
      aux_sym_document_repeat6,
  [498] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LTregion_GT,
    ACTIONS(19), 1,
      aux_sym_special_token1,
    STATE(41), 2,
      sym_special,
      aux_sym_document_repeat2,
    STATE(47), 2,
      sym_region,
      aux_sym_document_repeat3,
    ACTIONS(35), 4,
      ts_builtin_sym_end,
      anon_sym_LTglobal_GT,
      anon_sym_LTmaster_GT,
      anon_sym_LTgroup_GT,
  [522] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LTregion_GT,
    ACTIONS(19), 1,
      aux_sym_special_token1,
    STATE(41), 2,
      sym_special,
      aux_sym_document_repeat2,
    STATE(52), 2,
      sym_region,
      aux_sym_document_repeat3,
    ACTIONS(74), 4,
      ts_builtin_sym_end,
      anon_sym_LTglobal_GT,
      anon_sym_LTmaster_GT,
      anon_sym_LTgroup_GT,
  [546] = 8,
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
    STATE(48), 2,
      sym_master,
      aux_sym_document_repeat5,
    STATE(58), 2,
      sym_group,
      aux_sym_document_repeat4,
    STATE(71), 2,
      sym_global,
      aux_sym_document_repeat6,
  [574] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 1,
      aux_sym_special_token1,
    ACTIONS(76), 8,
      ts_builtin_sym_end,
      anon_sym_POUNDdefine,
      anon_sym_POUNDinclude,
      anon_sym_LTglobal_GT,
      anon_sym_LTmaster_GT,
      anon_sym_LTgroup_GT,
      anon_sym_LTregion_GT,
      sym_identifier,
  [591] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LTgroup_GT,
    ACTIONS(17), 1,
      anon_sym_LTregion_GT,
    STATE(50), 2,
      sym_region,
      aux_sym_document_repeat3,
    STATE(57), 2,
      sym_group,
      aux_sym_document_repeat4,
    ACTIONS(29), 3,
      ts_builtin_sym_end,
      anon_sym_LTglobal_GT,
      anon_sym_LTmaster_GT,
  [614] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LTgroup_GT,
    ACTIONS(17), 1,
      anon_sym_LTregion_GT,
    STATE(50), 2,
      sym_region,
      aux_sym_document_repeat3,
    STATE(59), 2,
      sym_group,
      aux_sym_document_repeat4,
    ACTIONS(80), 3,
      ts_builtin_sym_end,
      anon_sym_LTglobal_GT,
      anon_sym_LTmaster_GT,
  [637] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(84), 1,
      aux_sym_special_token1,
    ACTIONS(82), 8,
      ts_builtin_sym_end,
      anon_sym_POUNDdefine,
      anon_sym_POUNDinclude,
      anon_sym_LTglobal_GT,
      anon_sym_LTmaster_GT,
      anon_sym_LTgroup_GT,
      anon_sym_LTregion_GT,
      sym_identifier,
  [654] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 1,
      aux_sym_special_token1,
    ACTIONS(86), 8,
      ts_builtin_sym_end,
      anon_sym_POUNDdefine,
      anon_sym_POUNDinclude,
      anon_sym_LTglobal_GT,
      anon_sym_LTmaster_GT,
      anon_sym_LTgroup_GT,
      anon_sym_LTregion_GT,
      sym_identifier,
  [671] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      aux_sym_special_token1,
    ACTIONS(90), 8,
      ts_builtin_sym_end,
      anon_sym_POUNDdefine,
      anon_sym_POUNDinclude,
      anon_sym_LTglobal_GT,
      anon_sym_LTmaster_GT,
      anon_sym_LTgroup_GT,
      anon_sym_LTregion_GT,
      sym_identifier,
  [688] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LTgroup_GT,
    ACTIONS(17), 1,
      anon_sym_LTregion_GT,
    STATE(50), 2,
      sym_region,
      aux_sym_document_repeat3,
    STATE(56), 2,
      sym_group,
      aux_sym_document_repeat4,
    ACTIONS(68), 3,
      ts_builtin_sym_end,
      anon_sym_LTglobal_GT,
      anon_sym_LTmaster_GT,
  [711] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      aux_sym_special_token1,
    ACTIONS(94), 8,
      ts_builtin_sym_end,
      anon_sym_POUNDdefine,
      anon_sym_POUNDinclude,
      anon_sym_LTglobal_GT,
      anon_sym_LTmaster_GT,
      anon_sym_LTgroup_GT,
      anon_sym_LTregion_GT,
      sym_identifier,
  [728] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LTmaster_GT,
    ACTIONS(15), 1,
      anon_sym_LTgroup_GT,
    ACTIONS(70), 2,
      ts_builtin_sym_end,
      anon_sym_LTglobal_GT,
    STATE(58), 2,
      sym_group,
      aux_sym_document_repeat4,
    STATE(63), 2,
      sym_master,
      aux_sym_document_repeat5,
  [750] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 1,
      aux_sym_special_token1,
    STATE(41), 2,
      sym_special,
      aux_sym_document_repeat2,
    ACTIONS(98), 5,
      ts_builtin_sym_end,
      anon_sym_LTglobal_GT,
      anon_sym_LTmaster_GT,
      anon_sym_LTgroup_GT,
      anon_sym_LTregion_GT,
  [768] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LTmaster_GT,
    ACTIONS(15), 1,
      anon_sym_LTgroup_GT,
    ACTIONS(103), 2,
      ts_builtin_sym_end,
      anon_sym_LTglobal_GT,
    STATE(58), 2,
      sym_group,
      aux_sym_document_repeat4,
    STATE(62), 2,
      sym_master,
      aux_sym_document_repeat5,
  [790] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      aux_sym_special_token1,
    STATE(41), 2,
      sym_special,
      aux_sym_document_repeat2,
    ACTIONS(39), 5,
      ts_builtin_sym_end,
      anon_sym_LTglobal_GT,
      anon_sym_LTmaster_GT,
      anon_sym_LTgroup_GT,
      anon_sym_LTregion_GT,
  [808] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LTmaster_GT,
    ACTIONS(15), 1,
      anon_sym_LTgroup_GT,
    ACTIONS(43), 2,
      ts_builtin_sym_end,
      anon_sym_LTglobal_GT,
    STATE(58), 2,
      sym_group,
      aux_sym_document_repeat4,
    STATE(61), 2,
      sym_master,
      aux_sym_document_repeat5,
  [830] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LTmaster_GT,
    ACTIONS(15), 1,
      anon_sym_LTgroup_GT,
    ACTIONS(27), 2,
      ts_builtin_sym_end,
      anon_sym_LTglobal_GT,
    STATE(58), 2,
      sym_group,
      aux_sym_document_repeat4,
    STATE(66), 2,
      sym_master,
      aux_sym_document_repeat5,
  [852] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      aux_sym_special_token1,
    STATE(41), 2,
      sym_special,
      aux_sym_document_repeat2,
    ACTIONS(105), 5,
      ts_builtin_sym_end,
      anon_sym_LTglobal_GT,
      anon_sym_LTmaster_GT,
      anon_sym_LTgroup_GT,
      anon_sym_LTregion_GT,
  [870] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LTregion_GT,
    STATE(50), 2,
      sym_region,
      aux_sym_document_repeat3,
    ACTIONS(74), 4,
      ts_builtin_sym_end,
      anon_sym_LTglobal_GT,
      anon_sym_LTmaster_GT,
      anon_sym_LTgroup_GT,
  [887] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LTglobal_GT,
    ACTIONS(13), 1,
      anon_sym_LTmaster_GT,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
    STATE(64), 2,
      sym_master,
      aux_sym_document_repeat5,
    STATE(69), 2,
      sym_global,
      aux_sym_document_repeat6,
  [908] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LTglobal_GT,
    ACTIONS(13), 1,
      anon_sym_LTmaster_GT,
    ACTIONS(107), 1,
      ts_builtin_sym_end,
    STATE(64), 2,
      sym_master,
      aux_sym_document_repeat5,
    STATE(73), 2,
      sym_global,
      aux_sym_document_repeat6,
  [929] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 1,
      anon_sym_LTregion_GT,
    STATE(50), 2,
      sym_region,
      aux_sym_document_repeat3,
    ACTIONS(109), 4,
      ts_builtin_sym_end,
      anon_sym_LTglobal_GT,
      anon_sym_LTmaster_GT,
      anon_sym_LTgroup_GT,
  [946] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LTglobal_GT,
    ACTIONS(13), 1,
      anon_sym_LTmaster_GT,
    ACTIONS(72), 1,
      ts_builtin_sym_end,
    STATE(64), 2,
      sym_master,
      aux_sym_document_repeat5,
    STATE(72), 2,
      sym_global,
      aux_sym_document_repeat6,
  [967] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LTregion_GT,
    STATE(50), 2,
      sym_region,
      aux_sym_document_repeat3,
    ACTIONS(114), 4,
      ts_builtin_sym_end,
      anon_sym_LTglobal_GT,
      anon_sym_LTmaster_GT,
      anon_sym_LTgroup_GT,
  [984] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LTregion_GT,
    STATE(50), 2,
      sym_region,
      aux_sym_document_repeat3,
    ACTIONS(35), 4,
      ts_builtin_sym_end,
      anon_sym_LTglobal_GT,
      anon_sym_LTmaster_GT,
      anon_sym_LTgroup_GT,
  [1001] = 6,
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
    STATE(71), 2,
      sym_global,
      aux_sym_document_repeat6,
  [1022] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LTglobal_GT,
    ACTIONS(13), 1,
      anon_sym_LTmaster_GT,
    ACTIONS(66), 1,
      ts_builtin_sym_end,
    STATE(64), 2,
      sym_master,
      aux_sym_document_repeat5,
    STATE(70), 2,
      sym_global,
      aux_sym_document_repeat6,
  [1043] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LTgroup_GT,
    STATE(58), 2,
      sym_group,
      aux_sym_document_repeat4,
    ACTIONS(80), 3,
      ts_builtin_sym_end,
      anon_sym_LTglobal_GT,
      anon_sym_LTmaster_GT,
  [1059] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LTgroup_GT,
    STATE(58), 2,
      sym_group,
      aux_sym_document_repeat4,
    ACTIONS(68), 3,
      ts_builtin_sym_end,
      anon_sym_LTglobal_GT,
      anon_sym_LTmaster_GT,
  [1075] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(118), 1,
      anon_sym_LTgroup_GT,
    STATE(58), 2,
      sym_group,
      aux_sym_document_repeat4,
    ACTIONS(116), 3,
      ts_builtin_sym_end,
      anon_sym_LTglobal_GT,
      anon_sym_LTmaster_GT,
  [1091] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LTgroup_GT,
    STATE(58), 2,
      sym_group,
      aux_sym_document_repeat4,
    ACTIONS(121), 3,
      ts_builtin_sym_end,
      anon_sym_LTglobal_GT,
      anon_sym_LTmaster_GT,
  [1107] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LTgroup_GT,
    STATE(58), 2,
      sym_group,
      aux_sym_document_repeat4,
    ACTIONS(29), 3,
      ts_builtin_sym_end,
      anon_sym_LTglobal_GT,
      anon_sym_LTmaster_GT,
  [1123] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LTmaster_GT,
    ACTIONS(70), 2,
      ts_builtin_sym_end,
      anon_sym_LTglobal_GT,
    STATE(64), 2,
      sym_master,
      aux_sym_document_repeat5,
  [1138] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LTmaster_GT,
    ACTIONS(123), 2,
      ts_builtin_sym_end,
      anon_sym_LTglobal_GT,
    STATE(64), 2,
      sym_master,
      aux_sym_document_repeat5,
  [1153] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LTmaster_GT,
    ACTIONS(103), 2,
      ts_builtin_sym_end,
      anon_sym_LTglobal_GT,
    STATE(64), 2,
      sym_master,
      aux_sym_document_repeat5,
  [1168] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 1,
      anon_sym_LTmaster_GT,
    ACTIONS(125), 2,
      ts_builtin_sym_end,
      anon_sym_LTglobal_GT,
    STATE(64), 2,
      sym_master,
      aux_sym_document_repeat5,
  [1183] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LTmaster_GT,
    ACTIONS(27), 2,
      ts_builtin_sym_end,
      anon_sym_LTglobal_GT,
    STATE(64), 2,
      sym_master,
      aux_sym_document_repeat5,
  [1198] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LTmaster_GT,
    ACTIONS(43), 2,
      ts_builtin_sym_end,
      anon_sym_LTglobal_GT,
    STATE(64), 2,
      sym_master,
      aux_sym_document_repeat5,
  [1213] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(130), 1,
      ts_builtin_sym_end,
    ACTIONS(132), 1,
      anon_sym_LTglobal_GT,
    STATE(67), 2,
      sym_global,
      aux_sym_document_repeat6,
  [1227] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LTglobal_GT,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    STATE(67), 2,
      sym_global,
      aux_sym_document_repeat6,
  [1241] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LTglobal_GT,
    ACTIONS(66), 1,
      ts_builtin_sym_end,
    STATE(67), 2,
      sym_global,
      aux_sym_document_repeat6,
  [1255] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LTglobal_GT,
    ACTIONS(72), 1,
      ts_builtin_sym_end,
    STATE(67), 2,
      sym_global,
      aux_sym_document_repeat6,
  [1269] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LTglobal_GT,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
    STATE(67), 2,
      sym_global,
      aux_sym_document_repeat6,
  [1283] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LTglobal_GT,
    ACTIONS(107), 1,
      ts_builtin_sym_end,
    STATE(67), 2,
      sym_global,
      aux_sym_document_repeat6,
  [1297] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LTglobal_GT,
    ACTIONS(135), 1,
      ts_builtin_sym_end,
    STATE(67), 2,
      sym_global,
      aux_sym_document_repeat6,
  [1311] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 1,
      anon_sym_DQUOTE,
    STATE(35), 1,
      sym_include_path,
  [1321] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 1,
      sym_variable,
    ACTIONS(141), 1,
      anon_sym_EQ,
  [1331] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 1,
      anon_sym_EQ,
  [1338] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      sym_literal,
  [1345] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 1,
      anon_sym_DQUOTE2,
  [1352] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 1,
      sym_variable,
  [1359] = 2,
    ACTIONS(151), 1,
      aux_sym_include_path_token1,
    ACTIONS(153), 1,
      sym_comment,
  [1366] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      ts_builtin_sym_end,
  [1373] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      sym_literal,
  [1380] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 1,
      sym_literal,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(13)] = 0,
  [SMALL_STATE(14)] = 36,
  [SMALL_STATE(15)] = 66,
  [SMALL_STATE(16)] = 102,
  [SMALL_STATE(17)] = 132,
  [SMALL_STATE(18)] = 162,
  [SMALL_STATE(19)] = 197,
  [SMALL_STATE(20)] = 232,
  [SMALL_STATE(21)] = 267,
  [SMALL_STATE(22)] = 297,
  [SMALL_STATE(23)] = 327,
  [SMALL_STATE(24)] = 356,
  [SMALL_STATE(25)] = 385,
  [SMALL_STATE(26)] = 414,
  [SMALL_STATE(27)] = 442,
  [SMALL_STATE(28)] = 470,
  [SMALL_STATE(29)] = 498,
  [SMALL_STATE(30)] = 522,
  [SMALL_STATE(31)] = 546,
  [SMALL_STATE(32)] = 574,
  [SMALL_STATE(33)] = 591,
  [SMALL_STATE(34)] = 614,
  [SMALL_STATE(35)] = 637,
  [SMALL_STATE(36)] = 654,
  [SMALL_STATE(37)] = 671,
  [SMALL_STATE(38)] = 688,
  [SMALL_STATE(39)] = 711,
  [SMALL_STATE(40)] = 728,
  [SMALL_STATE(41)] = 750,
  [SMALL_STATE(42)] = 768,
  [SMALL_STATE(43)] = 790,
  [SMALL_STATE(44)] = 808,
  [SMALL_STATE(45)] = 830,
  [SMALL_STATE(46)] = 852,
  [SMALL_STATE(47)] = 870,
  [SMALL_STATE(48)] = 887,
  [SMALL_STATE(49)] = 908,
  [SMALL_STATE(50)] = 929,
  [SMALL_STATE(51)] = 946,
  [SMALL_STATE(52)] = 967,
  [SMALL_STATE(53)] = 984,
  [SMALL_STATE(54)] = 1001,
  [SMALL_STATE(55)] = 1022,
  [SMALL_STATE(56)] = 1043,
  [SMALL_STATE(57)] = 1059,
  [SMALL_STATE(58)] = 1075,
  [SMALL_STATE(59)] = 1091,
  [SMALL_STATE(60)] = 1107,
  [SMALL_STATE(61)] = 1123,
  [SMALL_STATE(62)] = 1138,
  [SMALL_STATE(63)] = 1153,
  [SMALL_STATE(64)] = 1168,
  [SMALL_STATE(65)] = 1183,
  [SMALL_STATE(66)] = 1198,
  [SMALL_STATE(67)] = 1213,
  [SMALL_STATE(68)] = 1227,
  [SMALL_STATE(69)] = 1241,
  [SMALL_STATE(70)] = 1255,
  [SMALL_STATE(71)] = 1269,
  [SMALL_STATE(72)] = 1283,
  [SMALL_STATE(73)] = 1297,
  [SMALL_STATE(74)] = 1311,
  [SMALL_STATE(75)] = 1321,
  [SMALL_STATE(76)] = 1331,
  [SMALL_STATE(77)] = 1338,
  [SMALL_STATE(78)] = 1345,
  [SMALL_STATE(79)] = 1352,
  [SMALL_STATE(80)] = 1359,
  [SMALL_STATE(81)] = 1366,
  [SMALL_STATE(82)] = 1373,
  [SMALL_STATE(83)] = 1380,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global, 1),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global, 2),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_master, 2),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_master, 1),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 1),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 2),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 2),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_region, 2),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_region, 1),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global, 3),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(79),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(74),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(75),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_special, 2),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_special, 2),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_special, 1),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_special, 1),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 3),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_master, 3),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global, 4),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 4),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 3),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_opcode, 4),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_opcode, 4),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_master, 4),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 2),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include, 2),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_path, 3),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include_path, 3),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_opcode, 3),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_opcode, 3),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define, 3),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define, 3),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat2, 2),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(17),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global, 5),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_region, 3),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 5),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat3, 2),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat3, 2), SHIFT_REPEAT(12),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 4),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat4, 2),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat4, 2), SHIFT_REPEAT(7),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_master, 5),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global, 6),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat5, 2),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat5, 2), SHIFT_REPEAT(6),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat6, 2),
  [132] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat6, 2), SHIFT_REPEAT(3),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 6),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [155] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_sfz_external_scanner_create(void);
void tree_sitter_sfz_external_scanner_destroy(void *);
bool tree_sitter_sfz_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_sfz_external_scanner_serialize(void *, char *);
void tree_sitter_sfz_external_scanner_deserialize(void *, const char *, unsigned);

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
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_sfz_external_scanner_create,
      tree_sitter_sfz_external_scanner_destroy,
      tree_sitter_sfz_external_scanner_scan,
      tree_sitter_sfz_external_scanner_serialize,
      tree_sitter_sfz_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
