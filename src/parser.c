#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 58
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 26
#define ALIAS_COUNT 0
#define TOKEN_COUNT 17
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 13
#define PRODUCTION_ID_COUNT 3

enum ts_symbol_identifiers {
  anon_sym_LF = 1,
  sym_comment = 2,
  sym__sp = 3,
  sym_date = 4,
  anon_sym_STAR = 5,
  anon_sym_BANG = 6,
  sym_payee = 7,
  sym_linked_prefix = 8,
  sym_account = 9,
  anon_sym_DASH_GT = 10,
  anon_sym_SLASH_SLASH = 11,
  anon_sym_u2192 = 12,
  anon_sym_GT = 13,
  sym_word = 14,
  sym_amount = 15,
  sym_commodity = 16,
  sym_source_file = 17,
  sym_transaction = 18,
  sym_header = 19,
  sym_flag = 20,
  sym_movement = 21,
  sym_arrow = 22,
  aux_sym_source_file_repeat1 = 23,
  aux_sym_transaction_repeat1 = 24,
  aux_sym_movement_repeat1 = 25,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [sym_comment] = "comment",
  [sym__sp] = "_sp",
  [sym_date] = "date",
  [anon_sym_STAR] = "*",
  [anon_sym_BANG] = "!",
  [sym_payee] = "payee",
  [sym_linked_prefix] = "linked_prefix",
  [sym_account] = "account",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_SLASH_SLASH] = "//",
  [anon_sym_u2192] = "\u2192",
  [anon_sym_GT] = ">",
  [sym_word] = "word",
  [sym_amount] = "amount",
  [sym_commodity] = "commodity",
  [sym_source_file] = "source_file",
  [sym_transaction] = "transaction",
  [sym_header] = "header",
  [sym_flag] = "flag",
  [sym_movement] = "movement",
  [sym_arrow] = "arrow",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_transaction_repeat1] = "transaction_repeat1",
  [aux_sym_movement_repeat1] = "movement_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [sym_comment] = sym_comment,
  [sym__sp] = sym__sp,
  [sym_date] = sym_date,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_BANG] = anon_sym_BANG,
  [sym_payee] = sym_payee,
  [sym_linked_prefix] = sym_linked_prefix,
  [sym_account] = sym_account,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_SLASH_SLASH] = anon_sym_SLASH_SLASH,
  [anon_sym_u2192] = anon_sym_u2192,
  [anon_sym_GT] = anon_sym_GT,
  [sym_word] = sym_word,
  [sym_amount] = sym_amount,
  [sym_commodity] = sym_commodity,
  [sym_source_file] = sym_source_file,
  [sym_transaction] = sym_transaction,
  [sym_header] = sym_header,
  [sym_flag] = sym_flag,
  [sym_movement] = sym_movement,
  [sym_arrow] = sym_arrow,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_transaction_repeat1] = aux_sym_transaction_repeat1,
  [aux_sym_movement_repeat1] = aux_sym_movement_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__sp] = {
    .visible = false,
    .named = true,
  },
  [sym_date] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [sym_payee] = {
    .visible = true,
    .named = true,
  },
  [sym_linked_prefix] = {
    .visible = true,
    .named = true,
  },
  [sym_account] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u2192] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [sym_word] = {
    .visible = true,
    .named = true,
  },
  [sym_amount] = {
    .visible = true,
    .named = true,
  },
  [sym_commodity] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_transaction] = {
    .visible = true,
    .named = true,
  },
  [sym_header] = {
    .visible = true,
    .named = true,
  },
  [sym_flag] = {
    .visible = true,
    .named = true,
  },
  [sym_movement] = {
    .visible = true,
    .named = true,
  },
  [sym_arrow] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_transaction_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_movement_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_from = 1,
  field_to = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_from] = "from",
  [field_to] = "to",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_from, 1},
    {field_to, 5},
  [2] =
    {field_from, 2},
    {field_to, 6},
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(21);
      if (lookahead == '\n') ADVANCE(22);
      if (lookahead == '\r') SKIP(0);
      if (lookahead == ' ') ADVANCE(24);
      if (lookahead == '!') ADVANCE(27);
      if (lookahead == '*') ADVANCE(26);
      if (lookahead == '+') ADVANCE(30);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == '>') ADVANCE(35);
      if (lookahead == 0x2192) ADVANCE(34);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 1:
      if (lookahead == '\r') SKIP(1);
      if (lookahead == '-') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 2:
      if (lookahead == '\r') SKIP(2);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(18);
      END_STATE();
    case 3:
      if (lookahead == '\r') ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(29);
      END_STATE();
    case 4:
      if (lookahead == '-') ADVANCE(13);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(14);
      END_STATE();
    case 6:
      if (lookahead == '/') ADVANCE(33);
      END_STATE();
    case 7:
      if (lookahead == ':') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '>') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      END_STATE();
    case 9:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      END_STATE();
    case 10:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      END_STATE();
    case 11:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      END_STATE();
    case 12:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 13:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 14:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 15:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(4);
      END_STATE();
    case 16:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 17:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 18:
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      END_STATE();
    case 19:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 20:
      if (eof) ADVANCE(21);
      if (lookahead == '\n') ADVANCE(22);
      if (lookahead == '\r') SKIP(20);
      if (lookahead == ' ') ADVANCE(24);
      if (lookahead == '+') ADVANCE(30);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(7);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym__sp);
      if (lookahead == ' ') ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_date);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_payee);
      if (lookahead == '\r') ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(29);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_payee);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_linked_prefix);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_account);
      if (lookahead == ':') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_u2192);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ':') ADVANCE(19);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ':') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_amount);
      if (lookahead == ',') ADVANCE(43);
      if (lookahead == '.') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_amount);
      if (lookahead == ',') ADVANCE(43);
      if (lookahead == '.') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_amount);
      if (lookahead == ',') ADVANCE(43);
      if (lookahead == '.') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_amount);
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_amount);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_amount);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_commodity);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 20},
  [2] = {.lex_state = 20},
  [3] = {.lex_state = 20},
  [4] = {.lex_state = 20},
  [5] = {.lex_state = 20},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 20},
  [9] = {.lex_state = 20},
  [10] = {.lex_state = 20},
  [11] = {.lex_state = 20},
  [12] = {.lex_state = 20},
  [13] = {.lex_state = 20},
  [14] = {.lex_state = 20},
  [15] = {.lex_state = 20},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 20},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 20},
  [39] = {.lex_state = 20},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 20},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 3},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym__sp] = ACTIONS(1),
    [sym_date] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [sym_linked_prefix] = ACTIONS(1),
    [sym_account] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_SLASH_SLASH] = ACTIONS(1),
    [anon_sym_u2192] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [sym_word] = ACTIONS(1),
    [sym_amount] = ACTIONS(1),
    [sym_commodity] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(57),
    [sym_transaction] = STATE(3),
    [sym_header] = STATE(16),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_date] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(11), 1,
      sym__sp,
    STATE(4), 2,
      sym_movement,
      aux_sym_transaction_repeat1,
    ACTIONS(9), 4,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      sym_date,
  [14] = 5,
    ACTIONS(7), 1,
      sym_date,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    STATE(16), 1,
      sym_header,
    ACTIONS(15), 2,
      anon_sym_LF,
      sym_comment,
    STATE(5), 2,
      sym_transaction,
      aux_sym_source_file_repeat1,
  [32] = 3,
    ACTIONS(19), 1,
      sym__sp,
    STATE(4), 2,
      sym_movement,
      aux_sym_transaction_repeat1,
    ACTIONS(17), 4,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      sym_date,
  [46] = 5,
    ACTIONS(22), 1,
      ts_builtin_sym_end,
    ACTIONS(27), 1,
      sym_date,
    STATE(16), 1,
      sym_header,
    ACTIONS(24), 2,
      anon_sym_LF,
      sym_comment,
    STATE(5), 2,
      sym_transaction,
      aux_sym_source_file_repeat1,
  [64] = 2,
    STATE(50), 1,
      sym_arrow,
    ACTIONS(30), 4,
      anon_sym_DASH_GT,
      anon_sym_SLASH_SLASH,
      anon_sym_u2192,
      anon_sym_GT,
  [74] = 2,
    STATE(37), 1,
      sym_arrow,
    ACTIONS(30), 4,
      anon_sym_DASH_GT,
      anon_sym_SLASH_SLASH,
      anon_sym_u2192,
      anon_sym_GT,
  [84] = 1,
    ACTIONS(32), 5,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      sym__sp,
      sym_date,
  [92] = 1,
    ACTIONS(34), 5,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      sym__sp,
      sym_date,
  [100] = 1,
    ACTIONS(36), 5,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      sym__sp,
      sym_date,
  [108] = 1,
    ACTIONS(38), 5,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      sym__sp,
      sym_date,
  [116] = 1,
    ACTIONS(40), 5,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      sym__sp,
      sym_date,
  [124] = 1,
    ACTIONS(42), 5,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      sym__sp,
      sym_date,
  [132] = 1,
    ACTIONS(44), 5,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      sym__sp,
      sym_date,
  [140] = 1,
    ACTIONS(46), 5,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      sym__sp,
      sym_date,
  [148] = 2,
    ACTIONS(11), 1,
      sym__sp,
    STATE(2), 2,
      sym_movement,
      aux_sym_transaction_repeat1,
  [156] = 2,
    STATE(31), 1,
      sym_flag,
    ACTIONS(48), 2,
      anon_sym_STAR,
      anon_sym_BANG,
  [164] = 2,
    ACTIONS(50), 1,
      sym__sp,
    STATE(25), 1,
      aux_sym_movement_repeat1,
  [171] = 2,
    ACTIONS(52), 1,
      sym_linked_prefix,
    ACTIONS(54), 1,
      sym_account,
  [178] = 2,
    ACTIONS(56), 1,
      sym__sp,
    STATE(23), 1,
      aux_sym_movement_repeat1,
  [185] = 1,
    ACTIONS(58), 2,
      anon_sym_LF,
      sym__sp,
  [190] = 2,
    ACTIONS(60), 1,
      sym_word,
    ACTIONS(62), 1,
      sym_amount,
  [197] = 2,
    ACTIONS(64), 1,
      sym__sp,
    STATE(28), 1,
      aux_sym_movement_repeat1,
  [204] = 2,
    ACTIONS(60), 1,
      sym_word,
    ACTIONS(66), 1,
      sym_amount,
  [211] = 2,
    ACTIONS(68), 1,
      sym__sp,
    STATE(28), 1,
      aux_sym_movement_repeat1,
  [218] = 2,
    ACTIONS(70), 1,
      anon_sym_LF,
    ACTIONS(72), 1,
      sym__sp,
  [225] = 2,
    ACTIONS(60), 1,
      sym_word,
    ACTIONS(74), 1,
      sym_amount,
  [232] = 2,
    ACTIONS(76), 1,
      sym__sp,
    STATE(28), 1,
      aux_sym_movement_repeat1,
  [239] = 2,
    ACTIONS(79), 1,
      anon_sym_LF,
    ACTIONS(81), 1,
      sym__sp,
  [246] = 2,
    ACTIONS(60), 1,
      sym_word,
    ACTIONS(83), 1,
      sym_amount,
  [253] = 2,
    ACTIONS(85), 1,
      anon_sym_LF,
    ACTIONS(87), 1,
      sym__sp,
  [260] = 2,
    ACTIONS(89), 1,
      anon_sym_LF,
    ACTIONS(91), 1,
      sym__sp,
  [267] = 2,
    ACTIONS(93), 1,
      anon_sym_LF,
    ACTIONS(95), 1,
      sym__sp,
  [274] = 1,
    ACTIONS(97), 1,
      sym__sp,
  [278] = 1,
    ACTIONS(99), 1,
      sym__sp,
  [282] = 1,
    ACTIONS(101), 1,
      sym__sp,
  [286] = 1,
    ACTIONS(103), 1,
      sym__sp,
  [290] = 1,
    ACTIONS(105), 1,
      sym_account,
  [294] = 1,
    ACTIONS(107), 1,
      sym_account,
  [298] = 1,
    ACTIONS(109), 1,
      sym_commodity,
  [302] = 1,
    ACTIONS(111), 1,
      sym__sp,
  [306] = 1,
    ACTIONS(60), 1,
      sym_word,
  [310] = 1,
    ACTIONS(113), 1,
      sym_account,
  [314] = 1,
    ACTIONS(115), 1,
      sym_commodity,
  [318] = 1,
    ACTIONS(117), 1,
      sym__sp,
  [322] = 1,
    ACTIONS(119), 1,
      anon_sym_LF,
  [326] = 1,
    ACTIONS(121), 1,
      anon_sym_LF,
  [330] = 1,
    ACTIONS(123), 1,
      sym_commodity,
  [334] = 1,
    ACTIONS(125), 1,
      anon_sym_LF,
  [338] = 1,
    ACTIONS(127), 1,
      sym__sp,
  [342] = 1,
    ACTIONS(129), 1,
      sym_commodity,
  [346] = 1,
    ACTIONS(131), 1,
      sym__sp,
  [350] = 1,
    ACTIONS(133), 1,
      anon_sym_LF,
  [354] = 1,
    ACTIONS(135), 1,
      sym_payee,
  [358] = 1,
    ACTIONS(137), 1,
      anon_sym_LF,
  [362] = 1,
    ACTIONS(139), 1,
      sym__sp,
  [366] = 1,
    ACTIONS(141), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 14,
  [SMALL_STATE(4)] = 32,
  [SMALL_STATE(5)] = 46,
  [SMALL_STATE(6)] = 64,
  [SMALL_STATE(7)] = 74,
  [SMALL_STATE(8)] = 84,
  [SMALL_STATE(9)] = 92,
  [SMALL_STATE(10)] = 100,
  [SMALL_STATE(11)] = 108,
  [SMALL_STATE(12)] = 116,
  [SMALL_STATE(13)] = 124,
  [SMALL_STATE(14)] = 132,
  [SMALL_STATE(15)] = 140,
  [SMALL_STATE(16)] = 148,
  [SMALL_STATE(17)] = 156,
  [SMALL_STATE(18)] = 164,
  [SMALL_STATE(19)] = 171,
  [SMALL_STATE(20)] = 178,
  [SMALL_STATE(21)] = 185,
  [SMALL_STATE(22)] = 190,
  [SMALL_STATE(23)] = 197,
  [SMALL_STATE(24)] = 204,
  [SMALL_STATE(25)] = 211,
  [SMALL_STATE(26)] = 218,
  [SMALL_STATE(27)] = 225,
  [SMALL_STATE(28)] = 232,
  [SMALL_STATE(29)] = 239,
  [SMALL_STATE(30)] = 246,
  [SMALL_STATE(31)] = 253,
  [SMALL_STATE(32)] = 260,
  [SMALL_STATE(33)] = 267,
  [SMALL_STATE(34)] = 274,
  [SMALL_STATE(35)] = 278,
  [SMALL_STATE(36)] = 282,
  [SMALL_STATE(37)] = 286,
  [SMALL_STATE(38)] = 290,
  [SMALL_STATE(39)] = 294,
  [SMALL_STATE(40)] = 298,
  [SMALL_STATE(41)] = 302,
  [SMALL_STATE(42)] = 306,
  [SMALL_STATE(43)] = 310,
  [SMALL_STATE(44)] = 314,
  [SMALL_STATE(45)] = 318,
  [SMALL_STATE(46)] = 322,
  [SMALL_STATE(47)] = 326,
  [SMALL_STATE(48)] = 330,
  [SMALL_STATE(49)] = 334,
  [SMALL_STATE(50)] = 338,
  [SMALL_STATE(51)] = 342,
  [SMALL_STATE(52)] = 346,
  [SMALL_STATE(53)] = 350,
  [SMALL_STATE(54)] = 354,
  [SMALL_STATE(55)] = 358,
  [SMALL_STATE(56)] = 362,
  [SMALL_STATE(57)] = 366,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 2, 0, 0),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_transaction_repeat1, 2, 0, 0),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transaction_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [22] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [24] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(35),
  [30] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_movement, 9, 0, 1),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_movement, 10, 0, 2),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_movement, 10, 0, 1),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_movement, 11, 0, 2),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_movement, 11, 0, 1),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_movement, 12, 0, 2),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_movement, 12, 0, 1),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_movement, 13, 0, 2),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag, 1, 0, 0),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_movement_repeat1, 2, 0, 0), SHIFT_REPEAT(42),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 6, 0, 0),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_movement_repeat1, 2, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arrow, 1, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 4, 0, 0),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [141] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_pta(void) {
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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
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
