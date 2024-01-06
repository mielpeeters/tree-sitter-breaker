#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 53
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 56
#define ALIAS_COUNT 0
#define TOKEN_COUNT 36
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 2

enum {
  anon_sym_set = 1,
  anon_sym_bpm = 2,
  anon_sym_swing = 3,
  anon_sym_DQUOTE = 4,
  aux_sym_string_token1 = 5,
  anon_sym_beat = 6,
  anon_sym_grid = 7,
  anon_sym_LBRACE = 8,
  anon_sym_RBRACE = 9,
  anon_sym_stop = 10,
  anon_sym_play = 11,
  anon_sym_SLASH = 12,
  anon_sym_PERCENT = 13,
  anon_sym_x = 14,
  anon_sym__ = 15,
  anon_sym_QMARK = 16,
  aux_sym_note_token1 = 17,
  anon_sym_POUND = 18,
  anon_sym_b = 19,
  anon_sym_maj = 20,
  anon_sym_m = 21,
  anon_sym_dim = 22,
  anon_sym_aug = 23,
  anon_sym_sus2 = 24,
  anon_sym_sus4 = 25,
  anon_sym_7 = 26,
  anon_sym_9 = 27,
  anon_sym_11 = 28,
  anon_sym_13 = 29,
  anon_sym_M7 = 30,
  anon_sym_6 = 31,
  sym_comment = 32,
  sym_integer = 33,
  sym_number = 34,
  sym_identifier = 35,
  sym_source_file = 36,
  sym__definition = 37,
  sym_setter = 38,
  sym_property = 39,
  sym_value = 40,
  sym_string = 41,
  sym_beat = 42,
  sym_grid = 43,
  sym_stop = 44,
  sym_play = 45,
  sym_time_signature = 46,
  sym_probability = 47,
  sym_grid_token = 48,
  sym_chord = 49,
  sym_note = 50,
  sym_mode = 51,
  sym_augmentation = 52,
  aux_sym_source_file_repeat1 = 53,
  aux_sym_string_repeat1 = 54,
  aux_sym_grid_repeat1 = 55,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_set] = "set",
  [anon_sym_bpm] = "bpm",
  [anon_sym_swing] = "swing",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [anon_sym_beat] = "beat",
  [anon_sym_grid] = "grid",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_stop] = "stop",
  [anon_sym_play] = "play",
  [anon_sym_SLASH] = "/",
  [anon_sym_PERCENT] = "%",
  [anon_sym_x] = "x",
  [anon_sym__] = "_",
  [anon_sym_QMARK] = "\?",
  [aux_sym_note_token1] = "note_token1",
  [anon_sym_POUND] = "#",
  [anon_sym_b] = "b",
  [anon_sym_maj] = "maj",
  [anon_sym_m] = "m",
  [anon_sym_dim] = "dim",
  [anon_sym_aug] = "aug",
  [anon_sym_sus2] = "sus2",
  [anon_sym_sus4] = "sus4",
  [anon_sym_7] = "7",
  [anon_sym_9] = "9",
  [anon_sym_11] = "11",
  [anon_sym_13] = "13",
  [anon_sym_M7] = "M7",
  [anon_sym_6] = "6",
  [sym_comment] = "comment",
  [sym_integer] = "integer",
  [sym_number] = "number",
  [sym_identifier] = "identifier",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_setter] = "setter",
  [sym_property] = "property",
  [sym_value] = "value",
  [sym_string] = "string",
  [sym_beat] = "beat",
  [sym_grid] = "grid",
  [sym_stop] = "stop",
  [sym_play] = "play",
  [sym_time_signature] = "time_signature",
  [sym_probability] = "probability",
  [sym_grid_token] = "grid_token",
  [sym_chord] = "chord",
  [sym_note] = "note",
  [sym_mode] = "mode",
  [sym_augmentation] = "augmentation",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_grid_repeat1] = "grid_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_set] = anon_sym_set,
  [anon_sym_bpm] = anon_sym_bpm,
  [anon_sym_swing] = anon_sym_swing,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [anon_sym_beat] = anon_sym_beat,
  [anon_sym_grid] = anon_sym_grid,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_stop] = anon_sym_stop,
  [anon_sym_play] = anon_sym_play,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_x] = anon_sym_x,
  [anon_sym__] = anon_sym__,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [aux_sym_note_token1] = aux_sym_note_token1,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_b] = anon_sym_b,
  [anon_sym_maj] = anon_sym_maj,
  [anon_sym_m] = anon_sym_m,
  [anon_sym_dim] = anon_sym_dim,
  [anon_sym_aug] = anon_sym_aug,
  [anon_sym_sus2] = anon_sym_sus2,
  [anon_sym_sus4] = anon_sym_sus4,
  [anon_sym_7] = anon_sym_7,
  [anon_sym_9] = anon_sym_9,
  [anon_sym_11] = anon_sym_11,
  [anon_sym_13] = anon_sym_13,
  [anon_sym_M7] = anon_sym_M7,
  [anon_sym_6] = anon_sym_6,
  [sym_comment] = sym_comment,
  [sym_integer] = sym_integer,
  [sym_number] = sym_number,
  [sym_identifier] = sym_identifier,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_setter] = sym_setter,
  [sym_property] = sym_property,
  [sym_value] = sym_value,
  [sym_string] = sym_string,
  [sym_beat] = sym_beat,
  [sym_grid] = sym_grid,
  [sym_stop] = sym_stop,
  [sym_play] = sym_play,
  [sym_time_signature] = sym_time_signature,
  [sym_probability] = sym_probability,
  [sym_grid_token] = sym_grid_token,
  [sym_chord] = sym_chord,
  [sym_note] = sym_note,
  [sym_mode] = sym_mode,
  [sym_augmentation] = sym_augmentation,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym_grid_repeat1] = aux_sym_grid_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_set] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bpm] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_swing] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_beat] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_grid] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_stop] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_play] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_x] = {
    .visible = true,
    .named = false,
  },
  [anon_sym__] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_note_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_b] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_maj] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_m] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dim] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_aug] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sus2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sus4] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_7] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_9] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_11] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_13] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_M7] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_6] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__definition] = {
    .visible = false,
    .named = true,
  },
  [sym_setter] = {
    .visible = true,
    .named = true,
  },
  [sym_property] = {
    .visible = true,
    .named = true,
  },
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_beat] = {
    .visible = true,
    .named = true,
  },
  [sym_grid] = {
    .visible = true,
    .named = true,
  },
  [sym_stop] = {
    .visible = true,
    .named = true,
  },
  [sym_play] = {
    .visible = true,
    .named = true,
  },
  [sym_time_signature] = {
    .visible = true,
    .named = true,
  },
  [sym_probability] = {
    .visible = true,
    .named = true,
  },
  [sym_grid_token] = {
    .visible = true,
    .named = true,
  },
  [sym_chord] = {
    .visible = true,
    .named = true,
  },
  [sym_note] = {
    .visible = true,
    .named = true,
  },
  [sym_mode] = {
    .visible = true,
    .named = true,
  },
  [sym_augmentation] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_grid_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_name = 1,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_name] = "name",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
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
  [13] = 3,
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
  [33] = 4,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(38);
      if (lookahead == '"') ADVANCE(42);
      if (lookahead == '#') ADVANCE(58);
      if (lookahead == '%') ADVANCE(53);
      if (lookahead == '/') ADVANCE(52);
      if (lookahead == '1') ADVANCE(74);
      if (lookahead == '6') ADVANCE(72);
      if (lookahead == '7') ADVANCE(67);
      if (lookahead == '9') ADVANCE(68);
      if (lookahead == '?') ADVANCE(56);
      if (lookahead == 'M') ADVANCE(8);
      if (lookahead == '_') ADVANCE(55);
      if (lookahead == 'a') ADVANCE(33);
      if (lookahead == 'b') ADVANCE(60);
      if (lookahead == 'd') ADVANCE(21);
      if (lookahead == 'g') ADVANCE(29);
      if (lookahead == 'm') ADVANCE(62);
      if (lookahead == 'p') ADVANCE(23);
      if (lookahead == 's') ADVANCE(15);
      if (lookahead == 'x') ADVANCE(54);
      if (lookahead == '{') ADVANCE(47);
      if (lookahead == '}') ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '8')) ADVANCE(75);
      if (('A' <= lookahead && lookahead <= 'G')) ADVANCE(57);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(3)
      if (lookahead == '"') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(43);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(76);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(58);
      if (lookahead == '/') ADVANCE(51);
      if (lookahead == '1') ADVANCE(74);
      if (lookahead == '6') ADVANCE(72);
      if (lookahead == '7') ADVANCE(67);
      if (lookahead == '9') ADVANCE(68);
      if (lookahead == '?') ADVANCE(56);
      if (lookahead == 'M') ADVANCE(8);
      if (lookahead == '_') ADVANCE(55);
      if (lookahead == 'a') ADVANCE(33);
      if (lookahead == 'b') ADVANCE(59);
      if (lookahead == 'd') ADVANCE(21);
      if (lookahead == 'm') ADVANCE(62);
      if (lookahead == 's') ADVANCE(34);
      if (lookahead == 'x') ADVANCE(54);
      if (lookahead == '}') ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '8')) ADVANCE(75);
      if (('A' <= lookahead && lookahead <= 'G')) ADVANCE(57);
      END_STATE();
    case 5:
      if (lookahead == '#') ADVANCE(58);
      if (lookahead == '/') ADVANCE(51);
      if (lookahead == '?') ADVANCE(56);
      if (lookahead == '_') ADVANCE(55);
      if (lookahead == 'b') ADVANCE(59);
      if (lookahead == 'x') ADVANCE(54);
      if (lookahead == '}') ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('A' <= lookahead && lookahead <= 'G')) ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(75);
      END_STATE();
    case 6:
      if (lookahead == '/') ADVANCE(73);
      END_STATE();
    case 7:
      if (lookahead == '2') ADVANCE(65);
      if (lookahead == '4') ADVANCE(66);
      END_STATE();
    case 8:
      if (lookahead == '7') ADVANCE(71);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(35);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(32);
      END_STATE();
    case 11:
      if (lookahead == 'd') ADVANCE(46);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(10);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(10);
      if (lookahead == 'p') ADVANCE(24);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(31);
      if (lookahead == 't') ADVANCE(27);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(31);
      if (lookahead == 't') ADVANCE(27);
      if (lookahead == 'u') ADVANCE(30);
      if (lookahead == 'w') ADVANCE(20);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(31);
      if (lookahead == 't') ADVANCE(27);
      if (lookahead == 'w') ADVANCE(20);
      END_STATE();
    case 17:
      if (lookahead == 'g') ADVANCE(64);
      END_STATE();
    case 18:
      if (lookahead == 'g') ADVANCE(41);
      END_STATE();
    case 19:
      if (lookahead == 'i') ADVANCE(11);
      END_STATE();
    case 20:
      if (lookahead == 'i') ADVANCE(26);
      END_STATE();
    case 21:
      if (lookahead == 'i') ADVANCE(25);
      END_STATE();
    case 22:
      if (lookahead == 'j') ADVANCE(61);
      END_STATE();
    case 23:
      if (lookahead == 'l') ADVANCE(9);
      END_STATE();
    case 24:
      if (lookahead == 'm') ADVANCE(40);
      END_STATE();
    case 25:
      if (lookahead == 'm') ADVANCE(63);
      END_STATE();
    case 26:
      if (lookahead == 'n') ADVANCE(18);
      END_STATE();
    case 27:
      if (lookahead == 'o') ADVANCE(28);
      END_STATE();
    case 28:
      if (lookahead == 'p') ADVANCE(49);
      END_STATE();
    case 29:
      if (lookahead == 'r') ADVANCE(19);
      END_STATE();
    case 30:
      if (lookahead == 's') ADVANCE(7);
      END_STATE();
    case 31:
      if (lookahead == 't') ADVANCE(39);
      END_STATE();
    case 32:
      if (lookahead == 't') ADVANCE(45);
      END_STATE();
    case 33:
      if (lookahead == 'u') ADVANCE(17);
      END_STATE();
    case 34:
      if (lookahead == 'u') ADVANCE(30);
      END_STATE();
    case 35:
      if (lookahead == 'y') ADVANCE(50);
      END_STATE();
    case 36:
      if (eof) ADVANCE(38);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == '?') ADVANCE(56);
      if (lookahead == '_') ADVANCE(55);
      if (lookahead == 'b') ADVANCE(13);
      if (lookahead == 'g') ADVANCE(29);
      if (lookahead == 'p') ADVANCE(23);
      if (lookahead == 's') ADVANCE(16);
      if (lookahead == 'x') ADVANCE(54);
      if (lookahead == '}') ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(36)
      if (('A' <= lookahead && lookahead <= 'G')) ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(75);
      END_STATE();
    case 37:
      if (eof) ADVANCE(38);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == 'b') ADVANCE(12);
      if (lookahead == 'g') ADVANCE(29);
      if (lookahead == 'p') ADVANCE(23);
      if (lookahead == 's') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(37)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(76);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_bpm);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_swing);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(44);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_beat);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_grid);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_stop);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_play);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(73);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_x);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_note_token1);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_b);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_b);
      if (lookahead == 'e') ADVANCE(10);
      if (lookahead == 'p') ADVANCE(24);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_maj);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_m);
      if (lookahead == 'a') ADVANCE(22);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_dim);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_aug);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_sus2);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_sus4);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(75);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_9);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(75);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_11);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(75);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_13);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(75);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_M7);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(75);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(73);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '1') ADVANCE(69);
      if (lookahead == '3') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(75);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(75);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(76);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 36},
  [2] = {.lex_state = 4},
  [3] = {.lex_state = 4},
  [4] = {.lex_state = 4},
  [5] = {.lex_state = 4},
  [6] = {.lex_state = 36},
  [7] = {.lex_state = 36},
  [8] = {.lex_state = 4},
  [9] = {.lex_state = 36},
  [10] = {.lex_state = 36},
  [11] = {.lex_state = 36},
  [12] = {.lex_state = 37},
  [13] = {.lex_state = 5},
  [14] = {.lex_state = 37},
  [15] = {.lex_state = 36},
  [16] = {.lex_state = 5},
  [17] = {.lex_state = 36},
  [18] = {.lex_state = 5},
  [19] = {.lex_state = 36},
  [20] = {.lex_state = 36},
  [21] = {.lex_state = 36},
  [22] = {.lex_state = 36},
  [23] = {.lex_state = 36},
  [24] = {.lex_state = 5},
  [25] = {.lex_state = 36},
  [26] = {.lex_state = 36},
  [27] = {.lex_state = 36},
  [28] = {.lex_state = 36},
  [29] = {.lex_state = 36},
  [30] = {.lex_state = 36},
  [31] = {.lex_state = 36},
  [32] = {.lex_state = 36},
  [33] = {.lex_state = 36},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 36},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 36},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 4},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 36},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_set] = ACTIONS(1),
    [anon_sym_bpm] = ACTIONS(1),
    [anon_sym_swing] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_beat] = ACTIONS(1),
    [anon_sym_grid] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_stop] = ACTIONS(1),
    [anon_sym_play] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_x] = ACTIONS(1),
    [anon_sym__] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [aux_sym_note_token1] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_b] = ACTIONS(1),
    [anon_sym_maj] = ACTIONS(1),
    [anon_sym_m] = ACTIONS(1),
    [anon_sym_dim] = ACTIONS(1),
    [anon_sym_aug] = ACTIONS(1),
    [anon_sym_sus2] = ACTIONS(1),
    [anon_sym_sus4] = ACTIONS(1),
    [anon_sym_7] = ACTIONS(1),
    [anon_sym_9] = ACTIONS(1),
    [anon_sym_11] = ACTIONS(1),
    [anon_sym_13] = ACTIONS(1),
    [anon_sym_M7] = ACTIONS(1),
    [anon_sym_6] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(46),
    [sym__definition] = STATE(6),
    [sym_setter] = STATE(6),
    [sym_beat] = STATE(6),
    [sym_grid] = STATE(6),
    [sym_stop] = STATE(6),
    [sym_play] = STATE(6),
    [aux_sym_source_file_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_set] = ACTIONS(5),
    [anon_sym_beat] = ACTIONS(7),
    [anon_sym_grid] = ACTIONS(9),
    [anon_sym_stop] = ACTIONS(11),
    [anon_sym_play] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(19), 1,
      anon_sym_SLASH,
    ACTIONS(23), 1,
      anon_sym_m,
    ACTIONS(27), 1,
      anon_sym_M7,
    ACTIONS(29), 1,
      sym_integer,
    STATE(5), 1,
      sym_mode,
    STATE(24), 1,
      sym_augmentation,
    ACTIONS(17), 5,
      anon_sym_RBRACE,
      anon_sym_x,
      anon_sym__,
      anon_sym_QMARK,
      aux_sym_note_token1,
    ACTIONS(21), 5,
      anon_sym_maj,
      anon_sym_dim,
      anon_sym_aug,
      anon_sym_sus2,
      anon_sym_sus4,
    ACTIONS(25), 5,
      anon_sym_7,
      anon_sym_9,
      anon_sym_11,
      anon_sym_13,
      anon_sym_6,
  [40] = 3,
    ACTIONS(33), 2,
      anon_sym_POUND,
      anon_sym_b,
    ACTIONS(35), 7,
      anon_sym_m,
      anon_sym_7,
      anon_sym_9,
      anon_sym_11,
      anon_sym_13,
      anon_sym_6,
      sym_integer,
    ACTIONS(31), 12,
      anon_sym_RBRACE,
      anon_sym_SLASH,
      anon_sym_x,
      anon_sym__,
      anon_sym_QMARK,
      aux_sym_note_token1,
      anon_sym_maj,
      anon_sym_dim,
      anon_sym_aug,
      anon_sym_sus2,
      anon_sym_sus4,
      anon_sym_M7,
  [68] = 2,
    ACTIONS(39), 7,
      anon_sym_m,
      anon_sym_7,
      anon_sym_9,
      anon_sym_11,
      anon_sym_13,
      anon_sym_6,
      sym_integer,
    ACTIONS(37), 12,
      anon_sym_RBRACE,
      anon_sym_SLASH,
      anon_sym_x,
      anon_sym__,
      anon_sym_QMARK,
      aux_sym_note_token1,
      anon_sym_maj,
      anon_sym_dim,
      anon_sym_aug,
      anon_sym_sus2,
      anon_sym_sus4,
      anon_sym_M7,
  [92] = 6,
    ACTIONS(27), 1,
      anon_sym_M7,
    ACTIONS(43), 1,
      anon_sym_SLASH,
    ACTIONS(45), 1,
      sym_integer,
    STATE(18), 1,
      sym_augmentation,
    ACTIONS(25), 5,
      anon_sym_7,
      anon_sym_9,
      anon_sym_11,
      anon_sym_13,
      anon_sym_6,
    ACTIONS(41), 5,
      anon_sym_RBRACE,
      anon_sym_x,
      anon_sym__,
      anon_sym_QMARK,
      aux_sym_note_token1,
  [119] = 8,
    ACTIONS(5), 1,
      anon_sym_set,
    ACTIONS(7), 1,
      anon_sym_beat,
    ACTIONS(9), 1,
      anon_sym_grid,
    ACTIONS(11), 1,
      anon_sym_stop,
    ACTIONS(13), 1,
      anon_sym_play,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    ACTIONS(49), 1,
      sym_comment,
    STATE(7), 7,
      sym__definition,
      sym_setter,
      sym_beat,
      sym_grid,
      sym_stop,
      sym_play,
      aux_sym_source_file_repeat1,
  [150] = 8,
    ACTIONS(51), 1,
      ts_builtin_sym_end,
    ACTIONS(53), 1,
      anon_sym_set,
    ACTIONS(56), 1,
      anon_sym_beat,
    ACTIONS(59), 1,
      anon_sym_grid,
    ACTIONS(62), 1,
      anon_sym_stop,
    ACTIONS(65), 1,
      anon_sym_play,
    ACTIONS(68), 1,
      sym_comment,
    STATE(7), 7,
      sym__definition,
      sym_setter,
      sym_beat,
      sym_grid,
      sym_stop,
      sym_play,
      aux_sym_source_file_repeat1,
  [181] = 2,
    ACTIONS(73), 6,
      anon_sym_7,
      anon_sym_9,
      anon_sym_11,
      anon_sym_13,
      anon_sym_6,
      sym_integer,
    ACTIONS(71), 7,
      anon_sym_RBRACE,
      anon_sym_SLASH,
      anon_sym_x,
      anon_sym__,
      anon_sym_QMARK,
      aux_sym_note_token1,
      anon_sym_M7,
  [199] = 6,
    ACTIONS(75), 1,
      anon_sym_RBRACE,
    ACTIONS(80), 1,
      aux_sym_note_token1,
    STATE(2), 1,
      sym_note,
    STATE(29), 1,
      sym_chord,
    STATE(9), 2,
      sym_grid_token,
      aux_sym_grid_repeat1,
    ACTIONS(77), 4,
      anon_sym_x,
      anon_sym__,
      anon_sym_QMARK,
      sym_integer,
  [222] = 6,
    ACTIONS(83), 1,
      anon_sym_RBRACE,
    ACTIONS(87), 1,
      aux_sym_note_token1,
    STATE(2), 1,
      sym_note,
    STATE(29), 1,
      sym_chord,
    STATE(9), 2,
      sym_grid_token,
      aux_sym_grid_repeat1,
    ACTIONS(85), 4,
      anon_sym_x,
      anon_sym__,
      anon_sym_QMARK,
      sym_integer,
  [245] = 6,
    ACTIONS(87), 1,
      aux_sym_note_token1,
    ACTIONS(89), 1,
      anon_sym_RBRACE,
    STATE(2), 1,
      sym_note,
    STATE(29), 1,
      sym_chord,
    STATE(10), 2,
      sym_grid_token,
      aux_sym_grid_repeat1,
    ACTIONS(85), 4,
      anon_sym_x,
      anon_sym__,
      anon_sym_QMARK,
      sym_integer,
  [268] = 3,
    ACTIONS(93), 1,
      sym_number,
    STATE(27), 1,
      sym_probability,
    ACTIONS(91), 7,
      ts_builtin_sym_end,
      anon_sym_set,
      anon_sym_beat,
      anon_sym_grid,
      anon_sym_stop,
      anon_sym_play,
      sym_comment,
  [284] = 2,
    ACTIONS(95), 2,
      anon_sym_POUND,
      anon_sym_b,
    ACTIONS(31), 6,
      anon_sym_RBRACE,
      anon_sym_x,
      anon_sym__,
      anon_sym_QMARK,
      aux_sym_note_token1,
      sym_integer,
  [297] = 1,
    ACTIONS(97), 8,
      ts_builtin_sym_end,
      anon_sym_set,
      anon_sym_beat,
      anon_sym_grid,
      anon_sym_stop,
      anon_sym_play,
      sym_comment,
      sym_number,
  [308] = 2,
    ACTIONS(101), 1,
      sym_integer,
    ACTIONS(99), 7,
      ts_builtin_sym_end,
      anon_sym_set,
      anon_sym_beat,
      anon_sym_grid,
      anon_sym_stop,
      anon_sym_play,
      sym_comment,
  [321] = 1,
    ACTIONS(103), 7,
      anon_sym_RBRACE,
      anon_sym_SLASH,
      anon_sym_x,
      anon_sym__,
      anon_sym_QMARK,
      aux_sym_note_token1,
      sym_integer,
  [331] = 1,
    ACTIONS(105), 7,
      ts_builtin_sym_end,
      anon_sym_set,
      anon_sym_beat,
      anon_sym_grid,
      anon_sym_stop,
      anon_sym_play,
      sym_comment,
  [341] = 2,
    ACTIONS(109), 1,
      anon_sym_SLASH,
    ACTIONS(107), 6,
      anon_sym_RBRACE,
      anon_sym_x,
      anon_sym__,
      anon_sym_QMARK,
      aux_sym_note_token1,
      sym_integer,
  [353] = 1,
    ACTIONS(111), 7,
      ts_builtin_sym_end,
      anon_sym_set,
      anon_sym_beat,
      anon_sym_grid,
      anon_sym_stop,
      anon_sym_play,
      sym_comment,
  [363] = 1,
    ACTIONS(113), 7,
      ts_builtin_sym_end,
      anon_sym_set,
      anon_sym_beat,
      anon_sym_grid,
      anon_sym_stop,
      anon_sym_play,
      sym_comment,
  [373] = 1,
    ACTIONS(115), 7,
      ts_builtin_sym_end,
      anon_sym_set,
      anon_sym_beat,
      anon_sym_grid,
      anon_sym_stop,
      anon_sym_play,
      sym_comment,
  [383] = 1,
    ACTIONS(117), 7,
      ts_builtin_sym_end,
      anon_sym_set,
      anon_sym_beat,
      anon_sym_grid,
      anon_sym_stop,
      anon_sym_play,
      sym_comment,
  [393] = 1,
    ACTIONS(119), 7,
      ts_builtin_sym_end,
      anon_sym_set,
      anon_sym_beat,
      anon_sym_grid,
      anon_sym_stop,
      anon_sym_play,
      sym_comment,
  [403] = 2,
    ACTIONS(43), 1,
      anon_sym_SLASH,
    ACTIONS(41), 6,
      anon_sym_RBRACE,
      anon_sym_x,
      anon_sym__,
      anon_sym_QMARK,
      aux_sym_note_token1,
      sym_integer,
  [415] = 1,
    ACTIONS(121), 7,
      ts_builtin_sym_end,
      anon_sym_set,
      anon_sym_beat,
      anon_sym_grid,
      anon_sym_stop,
      anon_sym_play,
      sym_comment,
  [425] = 1,
    ACTIONS(123), 7,
      ts_builtin_sym_end,
      anon_sym_set,
      anon_sym_beat,
      anon_sym_grid,
      anon_sym_stop,
      anon_sym_play,
      sym_comment,
  [435] = 1,
    ACTIONS(125), 7,
      ts_builtin_sym_end,
      anon_sym_set,
      anon_sym_beat,
      anon_sym_grid,
      anon_sym_stop,
      anon_sym_play,
      sym_comment,
  [445] = 1,
    ACTIONS(127), 7,
      ts_builtin_sym_end,
      anon_sym_set,
      anon_sym_beat,
      anon_sym_grid,
      anon_sym_stop,
      anon_sym_play,
      sym_comment,
  [455] = 1,
    ACTIONS(129), 6,
      anon_sym_RBRACE,
      anon_sym_x,
      anon_sym__,
      anon_sym_QMARK,
      aux_sym_note_token1,
      sym_integer,
  [464] = 1,
    ACTIONS(131), 6,
      anon_sym_RBRACE,
      anon_sym_x,
      anon_sym__,
      anon_sym_QMARK,
      aux_sym_note_token1,
      sym_integer,
  [473] = 1,
    ACTIONS(133), 6,
      anon_sym_RBRACE,
      anon_sym_x,
      anon_sym__,
      anon_sym_QMARK,
      aux_sym_note_token1,
      sym_integer,
  [482] = 1,
    ACTIONS(107), 6,
      anon_sym_RBRACE,
      anon_sym_x,
      anon_sym__,
      anon_sym_QMARK,
      aux_sym_note_token1,
      sym_integer,
  [491] = 1,
    ACTIONS(37), 6,
      anon_sym_RBRACE,
      anon_sym_x,
      anon_sym__,
      anon_sym_QMARK,
      aux_sym_note_token1,
      sym_integer,
  [500] = 4,
    ACTIONS(135), 1,
      anon_sym_DQUOTE,
    STATE(19), 1,
      sym_string,
    STATE(20), 1,
      sym_value,
    ACTIONS(137), 2,
      sym_number,
      sym_identifier,
  [514] = 2,
    STATE(34), 1,
      sym_property,
    ACTIONS(139), 2,
      anon_sym_bpm,
      anon_sym_swing,
  [522] = 3,
    ACTIONS(141), 1,
      anon_sym_DQUOTE,
    ACTIONS(143), 1,
      aux_sym_string_token1,
    STATE(39), 1,
      aux_sym_string_repeat1,
  [532] = 3,
    ACTIONS(145), 1,
      anon_sym_DQUOTE,
    ACTIONS(147), 1,
      aux_sym_string_token1,
    STATE(37), 1,
      aux_sym_string_repeat1,
  [542] = 1,
    ACTIONS(150), 3,
      anon_sym_DQUOTE,
      sym_number,
      sym_identifier,
  [548] = 3,
    ACTIONS(152), 1,
      anon_sym_DQUOTE,
    ACTIONS(154), 1,
      aux_sym_string_token1,
    STATE(37), 1,
      aux_sym_string_repeat1,
  [558] = 2,
    ACTIONS(156), 1,
      aux_sym_note_token1,
    STATE(31), 1,
      sym_note,
  [565] = 2,
    ACTIONS(158), 1,
      sym_integer,
    STATE(12), 1,
      sym_time_signature,
  [572] = 2,
    ACTIONS(156), 1,
      aux_sym_note_token1,
    STATE(32), 1,
      sym_note,
  [579] = 2,
    ACTIONS(156), 1,
      aux_sym_note_token1,
    STATE(30), 1,
      sym_note,
  [586] = 1,
    ACTIONS(160), 1,
      anon_sym_PERCENT,
  [590] = 1,
    ACTIONS(162), 1,
      sym_identifier,
  [594] = 1,
    ACTIONS(164), 1,
      ts_builtin_sym_end,
  [598] = 1,
    ACTIONS(166), 1,
      sym_identifier,
  [602] = 1,
    ACTIONS(168), 1,
      sym_identifier,
  [606] = 1,
    ACTIONS(170), 1,
      anon_sym_SLASH,
  [610] = 1,
    ACTIONS(172), 1,
      anon_sym_LBRACE,
  [614] = 1,
    ACTIONS(174), 1,
      sym_identifier,
  [618] = 1,
    ACTIONS(176), 1,
      sym_integer,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 40,
  [SMALL_STATE(4)] = 68,
  [SMALL_STATE(5)] = 92,
  [SMALL_STATE(6)] = 119,
  [SMALL_STATE(7)] = 150,
  [SMALL_STATE(8)] = 181,
  [SMALL_STATE(9)] = 199,
  [SMALL_STATE(10)] = 222,
  [SMALL_STATE(11)] = 245,
  [SMALL_STATE(12)] = 268,
  [SMALL_STATE(13)] = 284,
  [SMALL_STATE(14)] = 297,
  [SMALL_STATE(15)] = 308,
  [SMALL_STATE(16)] = 321,
  [SMALL_STATE(17)] = 331,
  [SMALL_STATE(18)] = 341,
  [SMALL_STATE(19)] = 353,
  [SMALL_STATE(20)] = 363,
  [SMALL_STATE(21)] = 373,
  [SMALL_STATE(22)] = 383,
  [SMALL_STATE(23)] = 393,
  [SMALL_STATE(24)] = 403,
  [SMALL_STATE(25)] = 415,
  [SMALL_STATE(26)] = 425,
  [SMALL_STATE(27)] = 435,
  [SMALL_STATE(28)] = 445,
  [SMALL_STATE(29)] = 455,
  [SMALL_STATE(30)] = 464,
  [SMALL_STATE(31)] = 473,
  [SMALL_STATE(32)] = 482,
  [SMALL_STATE(33)] = 491,
  [SMALL_STATE(34)] = 500,
  [SMALL_STATE(35)] = 514,
  [SMALL_STATE(36)] = 522,
  [SMALL_STATE(37)] = 532,
  [SMALL_STATE(38)] = 542,
  [SMALL_STATE(39)] = 548,
  [SMALL_STATE(40)] = 558,
  [SMALL_STATE(41)] = 565,
  [SMALL_STATE(42)] = 572,
  [SMALL_STATE(43)] = 579,
  [SMALL_STATE(44)] = 586,
  [SMALL_STATE(45)] = 590,
  [SMALL_STATE(46)] = 594,
  [SMALL_STATE(47)] = 598,
  [SMALL_STATE(48)] = 602,
  [SMALL_STATE(49)] = 606,
  [SMALL_STATE(50)] = 610,
  [SMALL_STATE(51)] = 614,
  [SMALL_STATE(52)] = 618,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord, 1),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chord, 1),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 1),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note, 1),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 2),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note, 2),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord, 2),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chord, 2),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(35),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(51),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(48),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(45),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(47),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mode, 1),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mode, 1),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_grid_repeat1, 2),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_grid_repeat1, 2), SHIFT_REPEAT(29),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_grid_repeat1, 2), SHIFT_REPEAT(3),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_beat, 3, .production_id = 1),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time_signature, 3),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_play, 2),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_augmentation, 1),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord, 3),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setter, 3),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grid, 5, .production_id = 1),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_play, 3),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_probability, 2),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stop, 2),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_beat, 4, .production_id = 1),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grid, 4, .production_id = 1),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grid_token, 1),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord, 4),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord, 5),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [147] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(37),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 1),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [164] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_breaker(void) {
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
