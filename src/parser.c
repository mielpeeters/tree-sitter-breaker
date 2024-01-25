#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 127
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 100
#define ALIAS_COUNT 0
#define TOKEN_COUNT 66
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 18
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 25

enum {
  anon_sym_set = 1,
  anon_sym_EQ = 2,
  anon_sym_lp_cutoff = 3,
  anon_sym_DQUOTE = 4,
  aux_sym_string_token1 = 5,
  anon_sym_grid = 6,
  anon_sym_LBRACE = 7,
  anon_sym_RBRACE = 8,
  anon_sym_map = 9,
  anon_sym_COLON = 10,
  anon_sym_COMMA = 11,
  anon_sym_tempo = 12,
  anon_sym_SLASH = 13,
  anon_sym_note = 14,
  anon_sym_mix = 15,
  anon_sym_stop = 16,
  anon_sym_play = 17,
  anon_sym_PERCENT = 18,
  anon_sym_x = 19,
  anon_sym__ = 20,
  anon_sym_QMARK = 21,
  anon_sym_AMP = 22,
  anon_sym_LBRACK = 23,
  anon_sym_RBRACK = 24,
  anon_sym_1 = 25,
  anon_sym_2 = 26,
  anon_sym_3 = 27,
  anon_sym_4 = 28,
  anon_sym_5 = 29,
  anon_sym_6 = 30,
  anon_sym_7 = 31,
  anon_sym_a = 32,
  anon_sym_t = 33,
  anon_sym_c = 34,
  anon_sym_d = 35,
  anon_sym_e = 36,
  anon_sym_f = 37,
  anon_sym_g = 38,
  anon_sym_A = 39,
  anon_sym_B = 40,
  anon_sym_C = 41,
  anon_sym_D = 42,
  anon_sym_E = 43,
  anon_sym_F = 44,
  anon_sym_G = 45,
  anon_sym_POUND = 46,
  anon_sym_b = 47,
  anon_sym_maj = 48,
  anon_sym_m = 49,
  anon_sym_dim = 50,
  anon_sym_aug = 51,
  anon_sym_sus2 = 52,
  anon_sym_sus4 = 53,
  anon_sym_M6 = 54,
  anon_sym_M7 = 55,
  anon_sym_9 = 56,
  anon_sym_M9 = 57,
  anon_sym_11 = 58,
  anon_sym_M11 = 59,
  anon_sym_13 = 60,
  anon_sym_M13 = 61,
  sym_comment = 62,
  sym_integer = 63,
  sym_float = 64,
  sym_identifier = 65,
  sym_source_file = 66,
  sym__definition = 67,
  sym_setter = 68,
  sym_property = 69,
  sym_value = 70,
  sym_string = 71,
  sym_grid = 72,
  sym_map = 73,
  sym_map_entry = 74,
  sym_tempo = 75,
  sym_speed = 76,
  sym_mix = 77,
  sym_playable = 78,
  sym_sample = 79,
  sym_stop = 80,
  sym_play = 81,
  sym_time_signature = 82,
  sym_probability = 83,
  sym_grid_token = 84,
  sym_raw_token = 85,
  sym_chord = 86,
  sym_note = 87,
  sym_single_note = 88,
  sym_octave = 89,
  sym_small_bass = 90,
  sym_bass = 91,
  sym_accidental = 92,
  sym_mode = 93,
  sym_augmentation = 94,
  aux_sym_source_file_repeat1 = 95,
  aux_sym_string_repeat1 = 96,
  aux_sym_grid_repeat1 = 97,
  aux_sym_map_repeat1 = 98,
  aux_sym_chord_repeat1 = 99,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_set] = "set",
  [anon_sym_EQ] = "=",
  [anon_sym_lp_cutoff] = "lp_cutoff",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [anon_sym_grid] = "grid",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_map] = "map",
  [anon_sym_COLON] = ":",
  [anon_sym_COMMA] = ",",
  [anon_sym_tempo] = "tempo",
  [anon_sym_SLASH] = "/",
  [anon_sym_note] = "note",
  [anon_sym_mix] = "mix",
  [anon_sym_stop] = "stop",
  [anon_sym_play] = "play",
  [anon_sym_PERCENT] = "%",
  [anon_sym_x] = "x",
  [anon_sym__] = "_",
  [anon_sym_QMARK] = "\?",
  [anon_sym_AMP] = "&",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_1] = "1",
  [anon_sym_2] = "2",
  [anon_sym_3] = "3",
  [anon_sym_4] = "4",
  [anon_sym_5] = "5",
  [anon_sym_6] = "6",
  [anon_sym_7] = "7",
  [anon_sym_a] = "a",
  [anon_sym_t] = "t",
  [anon_sym_c] = "c",
  [anon_sym_d] = "d",
  [anon_sym_e] = "e",
  [anon_sym_f] = "f",
  [anon_sym_g] = "g",
  [anon_sym_A] = "A",
  [anon_sym_B] = "B",
  [anon_sym_C] = "C",
  [anon_sym_D] = "D",
  [anon_sym_E] = "E",
  [anon_sym_F] = "F",
  [anon_sym_G] = "G",
  [anon_sym_POUND] = "#",
  [anon_sym_b] = "b",
  [anon_sym_maj] = "maj",
  [anon_sym_m] = "m",
  [anon_sym_dim] = "dim",
  [anon_sym_aug] = "aug",
  [anon_sym_sus2] = "sus2",
  [anon_sym_sus4] = "sus4",
  [anon_sym_M6] = "M6",
  [anon_sym_M7] = "M7",
  [anon_sym_9] = "9",
  [anon_sym_M9] = "M9",
  [anon_sym_11] = "11",
  [anon_sym_M11] = "M11",
  [anon_sym_13] = "13",
  [anon_sym_M13] = "M13",
  [sym_comment] = "comment",
  [sym_integer] = "integer",
  [sym_float] = "float",
  [sym_identifier] = "identifier",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_setter] = "setter",
  [sym_property] = "property",
  [sym_value] = "value",
  [sym_string] = "string",
  [sym_grid] = "grid",
  [sym_map] = "map",
  [sym_map_entry] = "map_entry",
  [sym_tempo] = "tempo",
  [sym_speed] = "speed",
  [sym_mix] = "mix",
  [sym_playable] = "playable",
  [sym_sample] = "sample",
  [sym_stop] = "stop",
  [sym_play] = "play",
  [sym_time_signature] = "time_signature",
  [sym_probability] = "probability",
  [sym_grid_token] = "grid_token",
  [sym_raw_token] = "raw_token",
  [sym_chord] = "chord",
  [sym_note] = "note",
  [sym_single_note] = "single_note",
  [sym_octave] = "octave",
  [sym_small_bass] = "small_bass",
  [sym_bass] = "bass",
  [sym_accidental] = "accidental",
  [sym_mode] = "mode",
  [sym_augmentation] = "augmentation",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_grid_repeat1] = "grid_repeat1",
  [aux_sym_map_repeat1] = "map_repeat1",
  [aux_sym_chord_repeat1] = "chord_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_set] = anon_sym_set,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_lp_cutoff] = anon_sym_lp_cutoff,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [anon_sym_grid] = anon_sym_grid,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_map] = anon_sym_map,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_tempo] = anon_sym_tempo,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_note] = anon_sym_note,
  [anon_sym_mix] = anon_sym_mix,
  [anon_sym_stop] = anon_sym_stop,
  [anon_sym_play] = anon_sym_play,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_x] = anon_sym_x,
  [anon_sym__] = anon_sym__,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_1] = anon_sym_1,
  [anon_sym_2] = anon_sym_2,
  [anon_sym_3] = anon_sym_3,
  [anon_sym_4] = anon_sym_4,
  [anon_sym_5] = anon_sym_5,
  [anon_sym_6] = anon_sym_6,
  [anon_sym_7] = anon_sym_7,
  [anon_sym_a] = anon_sym_a,
  [anon_sym_t] = anon_sym_t,
  [anon_sym_c] = anon_sym_c,
  [anon_sym_d] = anon_sym_d,
  [anon_sym_e] = anon_sym_e,
  [anon_sym_f] = anon_sym_f,
  [anon_sym_g] = anon_sym_g,
  [anon_sym_A] = anon_sym_A,
  [anon_sym_B] = anon_sym_B,
  [anon_sym_C] = anon_sym_C,
  [anon_sym_D] = anon_sym_D,
  [anon_sym_E] = anon_sym_E,
  [anon_sym_F] = anon_sym_F,
  [anon_sym_G] = anon_sym_G,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_b] = anon_sym_b,
  [anon_sym_maj] = anon_sym_maj,
  [anon_sym_m] = anon_sym_m,
  [anon_sym_dim] = anon_sym_dim,
  [anon_sym_aug] = anon_sym_aug,
  [anon_sym_sus2] = anon_sym_sus2,
  [anon_sym_sus4] = anon_sym_sus4,
  [anon_sym_M6] = anon_sym_M6,
  [anon_sym_M7] = anon_sym_M7,
  [anon_sym_9] = anon_sym_9,
  [anon_sym_M9] = anon_sym_M9,
  [anon_sym_11] = anon_sym_11,
  [anon_sym_M11] = anon_sym_M11,
  [anon_sym_13] = anon_sym_13,
  [anon_sym_M13] = anon_sym_M13,
  [sym_comment] = sym_comment,
  [sym_integer] = sym_integer,
  [sym_float] = sym_float,
  [sym_identifier] = sym_identifier,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_setter] = sym_setter,
  [sym_property] = sym_property,
  [sym_value] = sym_value,
  [sym_string] = sym_string,
  [sym_grid] = sym_grid,
  [sym_map] = sym_map,
  [sym_map_entry] = sym_map_entry,
  [sym_tempo] = sym_tempo,
  [sym_speed] = sym_speed,
  [sym_mix] = sym_mix,
  [sym_playable] = sym_playable,
  [sym_sample] = sym_sample,
  [sym_stop] = sym_stop,
  [sym_play] = sym_play,
  [sym_time_signature] = sym_time_signature,
  [sym_probability] = sym_probability,
  [sym_grid_token] = sym_grid_token,
  [sym_raw_token] = sym_raw_token,
  [sym_chord] = sym_chord,
  [sym_note] = sym_note,
  [sym_single_note] = sym_single_note,
  [sym_octave] = sym_octave,
  [sym_small_bass] = sym_small_bass,
  [sym_bass] = sym_bass,
  [sym_accidental] = sym_accidental,
  [sym_mode] = sym_mode,
  [sym_augmentation] = sym_augmentation,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym_grid_repeat1] = aux_sym_grid_repeat1,
  [aux_sym_map_repeat1] = aux_sym_map_repeat1,
  [aux_sym_chord_repeat1] = aux_sym_chord_repeat1,
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
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lp_cutoff] = {
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
  [anon_sym_map] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tempo] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_note] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mix] = {
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
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_3] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_4] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_5] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_6] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_7] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_a] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_t] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_c] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_d] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_e] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_g] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_A] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_B] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_C] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_D] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_E] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_F] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_G] = {
    .visible = true,
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
  [anon_sym_M6] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_M7] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_9] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_M9] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_11] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_M11] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_13] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_M13] = {
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
  [sym_float] = {
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
  [sym_grid] = {
    .visible = true,
    .named = true,
  },
  [sym_map] = {
    .visible = true,
    .named = true,
  },
  [sym_map_entry] = {
    .visible = true,
    .named = true,
  },
  [sym_tempo] = {
    .visible = true,
    .named = true,
  },
  [sym_speed] = {
    .visible = true,
    .named = true,
  },
  [sym_mix] = {
    .visible = true,
    .named = true,
  },
  [sym_playable] = {
    .visible = true,
    .named = true,
  },
  [sym_sample] = {
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
  [sym_raw_token] = {
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
  [sym_single_note] = {
    .visible = true,
    .named = true,
  },
  [sym_octave] = {
    .visible = true,
    .named = true,
  },
  [sym_small_bass] = {
    .visible = true,
    .named = true,
  },
  [sym_bass] = {
    .visible = true,
    .named = true,
  },
  [sym_accidental] = {
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
  [aux_sym_map_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_chord_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_acc = 1,
  field_augm = 2,
  field_bass = 3,
  field_bpm = 4,
  field_count = 5,
  field_denom = 6,
  field_key = 7,
  field_mode = 8,
  field_name = 9,
  field_note = 10,
  field_numer = 11,
  field_oct = 12,
  field_pair = 13,
  field_probability = 14,
  field_prop = 15,
  field_root = 16,
  field_token = 17,
  field_value = 18,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_acc] = "acc",
  [field_augm] = "augm",
  [field_bass] = "bass",
  [field_bpm] = "bpm",
  [field_count] = "count",
  [field_denom] = "denom",
  [field_key] = "key",
  [field_mode] = "mode",
  [field_name] = "name",
  [field_note] = "note",
  [field_numer] = "numer",
  [field_oct] = "oct",
  [field_pair] = "pair",
  [field_probability] = "probability",
  [field_prop] = "prop",
  [field_root] = "root",
  [field_token] = "token",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 1},
  [4] = {.index = 4, .length = 1},
  [5] = {.index = 5, .length = 3},
  [6] = {.index = 8, .length = 2},
  [7] = {.index = 10, .length = 1},
  [8] = {.index = 11, .length = 2},
  [9] = {.index = 13, .length = 2},
  [10] = {.index = 15, .length = 2},
  [11] = {.index = 17, .length = 2},
  [12] = {.index = 19, .length = 3},
  [13] = {.index = 22, .length = 2},
  [14] = {.index = 24, .length = 2},
  [15] = {.index = 26, .length = 3},
  [16] = {.index = 29, .length = 2},
  [17] = {.index = 31, .length = 1},
  [18] = {.index = 32, .length = 2},
  [19] = {.index = 34, .length = 3},
  [20] = {.index = 37, .length = 3},
  [21] = {.index = 40, .length = 2},
  [22] = {.index = 42, .length = 2},
  [23] = {.index = 44, .length = 3},
  [24] = {.index = 47, .length = 4},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_name, 1},
    {field_value, 2},
  [3] =
    {field_root, 0},
  [4] =
    {field_bass, 0},
  [5] =
    {field_name, 1},
    {field_prop, 2},
    {field_value, 4},
  [8] =
    {field_mode, 1},
    {field_root, 0},
  [10] =
    {field_augm, 0},
  [11] =
    {field_augm, 1, .inherited = true},
    {field_root, 0},
  [13] =
    {field_acc, 1},
    {field_bass, 0},
  [15] =
    {field_name, 1},
    {field_token, 3},
  [17] =
    {field_name, 1},
    {field_pair, 3},
  [19] =
    {field_bpm, 1},
    {field_count, 2},
    {field_note, 4},
  [22] =
    {field_denom, 2},
    {field_numer, 0},
  [24] =
    {field_bass, 2},
    {field_root, 0},
  [26] =
    {field_augm, 2, .inherited = true},
    {field_mode, 1},
    {field_root, 0},
  [29] =
    {field_augm, 0, .inherited = true},
    {field_augm, 1, .inherited = true},
  [31] =
    {field_name, 0},
  [32] =
    {field_bass, 3},
    {field_oct, 1},
  [34] =
    {field_bass, 3},
    {field_mode, 1},
    {field_root, 0},
  [37] =
    {field_augm, 1, .inherited = true},
    {field_bass, 3},
    {field_root, 0},
  [40] =
    {field_name, 0},
    {field_probability, 1},
  [42] =
    {field_key, 0},
    {field_value, 2},
  [44] =
    {field_acc, 4},
    {field_bass, 3},
    {field_oct, 1},
  [47] =
    {field_augm, 2, .inherited = true},
    {field_bass, 4},
    {field_mode, 1},
    {field_root, 0},
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
  [20] = 3,
  [21] = 21,
  [22] = 2,
  [23] = 4,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 8,
  [30] = 30,
  [31] = 5,
  [32] = 32,
  [33] = 3,
  [34] = 34,
  [35] = 2,
  [36] = 36,
  [37] = 7,
  [38] = 6,
  [39] = 4,
  [40] = 40,
  [41] = 41,
  [42] = 6,
  [43] = 7,
  [44] = 8,
  [45] = 45,
  [46] = 46,
  [47] = 11,
  [48] = 9,
  [49] = 12,
  [50] = 10,
  [51] = 13,
  [52] = 15,
  [53] = 14,
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
  [68] = 59,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 61,
  [73] = 57,
  [74] = 58,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 80,
  [84] = 80,
  [85] = 81,
  [86] = 81,
  [87] = 87,
  [88] = 88,
  [89] = 3,
  [90] = 2,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 121,
  [125] = 121,
  [126] = 126,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(51);
      if (lookahead == '"') ADVANCE(55);
      if (lookahead == '#') ADVANCE(116);
      if (lookahead == '%') ADVANCE(71);
      if (lookahead == '&') ADVANCE(75);
      if (lookahead == ',') ADVANCE(63);
      if (lookahead == '/') ADVANCE(66);
      if (lookahead == '1') ADVANCE(79);
      if (lookahead == '2') ADVANCE(81);
      if (lookahead == '3') ADVANCE(83);
      if (lookahead == '4') ADVANCE(85);
      if (lookahead == '5') ADVANCE(87);
      if (lookahead == '6') ADVANCE(89);
      if (lookahead == '7') ADVANCE(91);
      if (lookahead == '9') ADVANCE(128);
      if (lookahead == ':') ADVANCE(62);
      if (lookahead == '=') ADVANCE(53);
      if (lookahead == '?') ADVANCE(74);
      if (lookahead == 'A') ADVANCE(102);
      if (lookahead == 'B') ADVANCE(104);
      if (lookahead == 'C') ADVANCE(106);
      if (lookahead == 'D') ADVANCE(108);
      if (lookahead == 'E') ADVANCE(110);
      if (lookahead == 'F') ADVANCE(112);
      if (lookahead == 'G') ADVANCE(114);
      if (lookahead == 'M') ADVANCE(8);
      if (lookahead == '[') ADVANCE(76);
      if (lookahead == ']') ADVANCE(77);
      if (lookahead == '_') ADVANCE(73);
      if (lookahead == 'a') ADVANCE(93);
      if (lookahead == 'b') ADVANCE(117);
      if (lookahead == 'c') ADVANCE(95);
      if (lookahead == 'd') ADVANCE(97);
      if (lookahead == 'e') ADVANCE(98);
      if (lookahead == 'f') ADVANCE(99);
      if (lookahead == 'g') ADVANCE(101);
      if (lookahead == 'l') ADVANCE(35);
      if (lookahead == 'm') ADVANCE(120);
      if (lookahead == 'n') ADVANCE(31);
      if (lookahead == 'p') ADVANCE(28);
      if (lookahead == 's') ADVANCE(21);
      if (lookahead == 't') ADVANCE(94);
      if (lookahead == 'x') ADVANCE(72);
      if (lookahead == '{') ADVANCE(59);
      if (lookahead == '}') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '8')) ADVANCE(139);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(3)
      if (lookahead == '"') ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(56);
      if (lookahead != 0) ADVANCE(57);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(137);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(116);
      if (lookahead == '&') ADVANCE(75);
      if (lookahead == ',') ADVANCE(63);
      if (lookahead == '/') ADVANCE(65);
      if (lookahead == '1') ADVANCE(138);
      if (lookahead == '6') ADVANCE(89);
      if (lookahead == '7') ADVANCE(91);
      if (lookahead == '9') ADVANCE(128);
      if (lookahead == '?') ADVANCE(74);
      if (lookahead == 'A') ADVANCE(102);
      if (lookahead == 'B') ADVANCE(104);
      if (lookahead == 'C') ADVANCE(106);
      if (lookahead == 'D') ADVANCE(108);
      if (lookahead == 'E') ADVANCE(110);
      if (lookahead == 'F') ADVANCE(112);
      if (lookahead == 'G') ADVANCE(114);
      if (lookahead == 'M') ADVANCE(8);
      if (lookahead == '[') ADVANCE(76);
      if (lookahead == '_') ADVANCE(73);
      if (lookahead == 'a') ADVANCE(93);
      if (lookahead == 'b') ADVANCE(117);
      if (lookahead == 'c') ADVANCE(95);
      if (lookahead == 'd') ADVANCE(97);
      if (lookahead == 'e') ADVANCE(98);
      if (lookahead == 'f') ADVANCE(99);
      if (lookahead == 'g') ADVANCE(100);
      if (lookahead == 'm') ADVANCE(119);
      if (lookahead == 's') ADVANCE(45);
      if (lookahead == 't') ADVANCE(94);
      if (lookahead == 'x') ADVANCE(72);
      if (lookahead == '}') ADVANCE(60);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '8')) ADVANCE(139);
      END_STATE();
    case 5:
      if (lookahead == '#') ADVANCE(116);
      if (lookahead == '&') ADVANCE(75);
      if (lookahead == ',') ADVANCE(63);
      if (lookahead == ':') ADVANCE(62);
      if (lookahead == '?') ADVANCE(74);
      if (lookahead == 'A') ADVANCE(102);
      if (lookahead == 'B') ADVANCE(104);
      if (lookahead == 'C') ADVANCE(106);
      if (lookahead == 'D') ADVANCE(108);
      if (lookahead == 'E') ADVANCE(110);
      if (lookahead == 'F') ADVANCE(112);
      if (lookahead == 'G') ADVANCE(114);
      if (lookahead == '[') ADVANCE(76);
      if (lookahead == '_') ADVANCE(73);
      if (lookahead == 'a') ADVANCE(92);
      if (lookahead == 'b') ADVANCE(117);
      if (lookahead == 'c') ADVANCE(95);
      if (lookahead == 'd') ADVANCE(96);
      if (lookahead == 'e') ADVANCE(98);
      if (lookahead == 'f') ADVANCE(99);
      if (lookahead == 'g') ADVANCE(100);
      if (lookahead == 't') ADVANCE(94);
      if (lookahead == 'x') ADVANCE(72);
      if (lookahead == '}') ADVANCE(60);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(139);
      END_STATE();
    case 6:
      if (lookahead == '#') ADVANCE(116);
      if (lookahead == ',') ADVANCE(63);
      if (lookahead == '/') ADVANCE(65);
      if (lookahead == '1') ADVANCE(10);
      if (lookahead == '6') ADVANCE(88);
      if (lookahead == '7') ADVANCE(90);
      if (lookahead == '9') ADVANCE(127);
      if (lookahead == 'M') ADVANCE(8);
      if (lookahead == 'a') ADVANCE(44);
      if (lookahead == 'b') ADVANCE(117);
      if (lookahead == 'd') ADVANCE(25);
      if (lookahead == 'm') ADVANCE(119);
      if (lookahead == 's') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      END_STATE();
    case 7:
      if (lookahead == '/') ADVANCE(136);
      END_STATE();
    case 8:
      if (lookahead == '1') ADVANCE(9);
      if (lookahead == '6') ADVANCE(125);
      if (lookahead == '7') ADVANCE(126);
      if (lookahead == '9') ADVANCE(129);
      END_STATE();
    case 9:
      if (lookahead == '1') ADVANCE(132);
      if (lookahead == '3') ADVANCE(135);
      END_STATE();
    case 10:
      if (lookahead == '1') ADVANCE(130);
      if (lookahead == '3') ADVANCE(133);
      END_STATE();
    case 11:
      if (lookahead == '1') ADVANCE(78);
      if (lookahead == '2') ADVANCE(80);
      if (lookahead == '3') ADVANCE(82);
      if (lookahead == '4') ADVANCE(84);
      if (lookahead == '5') ADVANCE(86);
      if (lookahead == '6') ADVANCE(88);
      if (lookahead == '7') ADVANCE(90);
      if (lookahead == 'A') ADVANCE(103);
      if (lookahead == 'B') ADVANCE(105);
      if (lookahead == 'C') ADVANCE(107);
      if (lookahead == 'D') ADVANCE(109);
      if (lookahead == 'E') ADVANCE(111);
      if (lookahead == 'F') ADVANCE(113);
      if (lookahead == 'G') ADVANCE(115);
      if (lookahead == '[') ADVANCE(76);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('H' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 12:
      if (lookahead == '2') ADVANCE(123);
      if (lookahead == '4') ADVANCE(124);
      END_STATE();
    case 13:
      if (lookahead == '_') ADVANCE(16);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(48);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(37);
      if (lookahead == 'i') ADVANCE(47);
      END_STATE();
    case 16:
      if (lookahead == 'c') ADVANCE(46);
      END_STATE();
    case 17:
      if (lookahead == 'd') ADVANCE(58);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(42);
      if (lookahead == 't') ADVANCE(34);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(42);
      if (lookahead == 't') ADVANCE(34);
      if (lookahead == 'u') ADVANCE(40);
      END_STATE();
    case 22:
      if (lookahead == 'f') ADVANCE(54);
      END_STATE();
    case 23:
      if (lookahead == 'f') ADVANCE(22);
      END_STATE();
    case 24:
      if (lookahead == 'g') ADVANCE(122);
      END_STATE();
    case 25:
      if (lookahead == 'i') ADVANCE(29);
      END_STATE();
    case 26:
      if (lookahead == 'i') ADVANCE(17);
      END_STATE();
    case 27:
      if (lookahead == 'j') ADVANCE(118);
      END_STATE();
    case 28:
      if (lookahead == 'l') ADVANCE(14);
      END_STATE();
    case 29:
      if (lookahead == 'm') ADVANCE(121);
      END_STATE();
    case 30:
      if (lookahead == 'm') ADVANCE(38);
      END_STATE();
    case 31:
      if (lookahead == 'o') ADVANCE(41);
      END_STATE();
    case 32:
      if (lookahead == 'o') ADVANCE(23);
      END_STATE();
    case 33:
      if (lookahead == 'o') ADVANCE(64);
      END_STATE();
    case 34:
      if (lookahead == 'o') ADVANCE(36);
      END_STATE();
    case 35:
      if (lookahead == 'p') ADVANCE(13);
      END_STATE();
    case 36:
      if (lookahead == 'p') ADVANCE(69);
      END_STATE();
    case 37:
      if (lookahead == 'p') ADVANCE(61);
      END_STATE();
    case 38:
      if (lookahead == 'p') ADVANCE(33);
      END_STATE();
    case 39:
      if (lookahead == 'r') ADVANCE(26);
      END_STATE();
    case 40:
      if (lookahead == 's') ADVANCE(12);
      END_STATE();
    case 41:
      if (lookahead == 't') ADVANCE(18);
      END_STATE();
    case 42:
      if (lookahead == 't') ADVANCE(52);
      END_STATE();
    case 43:
      if (lookahead == 't') ADVANCE(32);
      END_STATE();
    case 44:
      if (lookahead == 'u') ADVANCE(24);
      END_STATE();
    case 45:
      if (lookahead == 'u') ADVANCE(40);
      END_STATE();
    case 46:
      if (lookahead == 'u') ADVANCE(43);
      END_STATE();
    case 47:
      if (lookahead == 'x') ADVANCE(68);
      END_STATE();
    case 48:
      if (lookahead == 'y') ADVANCE(70);
      END_STATE();
    case 49:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(140);
      END_STATE();
    case 50:
      if (eof) ADVANCE(51);
      if (lookahead == '&') ADVANCE(75);
      if (lookahead == ',') ADVANCE(63);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '?') ADVANCE(74);
      if (lookahead == '_') ADVANCE(73);
      if (lookahead == 'g') ADVANCE(39);
      if (lookahead == 'm') ADVANCE(15);
      if (lookahead == 'n') ADVANCE(31);
      if (lookahead == 'p') ADVANCE(28);
      if (lookahead == 's') ADVANCE(20);
      if (lookahead == 't') ADVANCE(19);
      if (lookahead == 'x') ADVANCE(72);
      if (lookahead == '}') ADVANCE(60);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(50)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(137);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_lp_cutoff);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(57);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(57);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_grid);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_map);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_tempo);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(136);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_note);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_mix);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_stop);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_play);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_x);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_1);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_1);
      if (lookahead == '1') ADVANCE(131);
      if (lookahead == '3') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(139);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_2);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(139);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_3);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(139);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_4);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(139);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_5);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_5);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(139);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_6);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(139);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_7);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(139);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_a);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_a);
      if (lookahead == 'u') ADVANCE(24);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_t);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_c);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_d);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_d);
      if (lookahead == 'i') ADVANCE(29);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_e);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_f);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_g);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_g);
      if (lookahead == 'r') ADVANCE(26);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_A);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_A);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_B);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_B);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_C);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_C);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_D);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_D);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_E);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_E);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_F);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_F);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_G);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_G);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_b);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_maj);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_m);
      if (lookahead == 'a') ADVANCE(27);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_m);
      if (lookahead == 'a') ADVANCE(27);
      if (lookahead == 'i') ADVANCE(47);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_dim);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_aug);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_sus2);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_sus4);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_M6);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_M7);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_9);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_9);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(139);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_M9);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_11);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_11);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(139);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_M11);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_13);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_13);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(139);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_M13);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(136);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(137);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '1') ADVANCE(131);
      if (lookahead == '3') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(139);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(139);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(140);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 50},
  [2] = {.lex_state = 4},
  [3] = {.lex_state = 4},
  [4] = {.lex_state = 4},
  [5] = {.lex_state = 4},
  [6] = {.lex_state = 4},
  [7] = {.lex_state = 4},
  [8] = {.lex_state = 4},
  [9] = {.lex_state = 4},
  [10] = {.lex_state = 4},
  [11] = {.lex_state = 4},
  [12] = {.lex_state = 4},
  [13] = {.lex_state = 4},
  [14] = {.lex_state = 4},
  [15] = {.lex_state = 4},
  [16] = {.lex_state = 5},
  [17] = {.lex_state = 5},
  [18] = {.lex_state = 5},
  [19] = {.lex_state = 5},
  [20] = {.lex_state = 5},
  [21] = {.lex_state = 5},
  [22] = {.lex_state = 5},
  [23] = {.lex_state = 5},
  [24] = {.lex_state = 5},
  [25] = {.lex_state = 5},
  [26] = {.lex_state = 5},
  [27] = {.lex_state = 5},
  [28] = {.lex_state = 5},
  [29] = {.lex_state = 5},
  [30] = {.lex_state = 5},
  [31] = {.lex_state = 6},
  [32] = {.lex_state = 5},
  [33] = {.lex_state = 6},
  [34] = {.lex_state = 5},
  [35] = {.lex_state = 6},
  [36] = {.lex_state = 5},
  [37] = {.lex_state = 5},
  [38] = {.lex_state = 5},
  [39] = {.lex_state = 6},
  [40] = {.lex_state = 50},
  [41] = {.lex_state = 50},
  [42] = {.lex_state = 6},
  [43] = {.lex_state = 6},
  [44] = {.lex_state = 6},
  [45] = {.lex_state = 4},
  [46] = {.lex_state = 11},
  [47] = {.lex_state = 6},
  [48] = {.lex_state = 6},
  [49] = {.lex_state = 6},
  [50] = {.lex_state = 6},
  [51] = {.lex_state = 6},
  [52] = {.lex_state = 6},
  [53] = {.lex_state = 6},
  [54] = {.lex_state = 50},
  [55] = {.lex_state = 50},
  [56] = {.lex_state = 50},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 50},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 50},
  [63] = {.lex_state = 50},
  [64] = {.lex_state = 50},
  [65] = {.lex_state = 50},
  [66] = {.lex_state = 50},
  [67] = {.lex_state = 50},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 50},
  [70] = {.lex_state = 50},
  [71] = {.lex_state = 50},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 50},
  [76] = {.lex_state = 50},
  [77] = {.lex_state = 50},
  [78] = {.lex_state = 50},
  [79] = {.lex_state = 50},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 11},
  [82] = {.lex_state = 11},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 11},
  [86] = {.lex_state = 11},
  [87] = {.lex_state = 2},
  [88] = {.lex_state = 50},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 1},
  [92] = {.lex_state = 1},
  [93] = {.lex_state = 1},
  [94] = {.lex_state = 50},
  [95] = {.lex_state = 50},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 50},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 50},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 50},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 2},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 4},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 2},
  [113] = {.lex_state = 4},
  [114] = {.lex_state = 2},
  [115] = {.lex_state = 2},
  [116] = {.lex_state = 2},
  [117] = {.lex_state = 50},
  [118] = {.lex_state = 2},
  [119] = {.lex_state = 2},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 50},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_set] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_lp_cutoff] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_grid] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_note] = ACTIONS(1),
    [anon_sym_mix] = ACTIONS(1),
    [anon_sym_stop] = ACTIONS(1),
    [anon_sym_play] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_x] = ACTIONS(1),
    [anon_sym__] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_1] = ACTIONS(1),
    [anon_sym_2] = ACTIONS(1),
    [anon_sym_3] = ACTIONS(1),
    [anon_sym_4] = ACTIONS(1),
    [anon_sym_5] = ACTIONS(1),
    [anon_sym_6] = ACTIONS(1),
    [anon_sym_7] = ACTIONS(1),
    [anon_sym_a] = ACTIONS(1),
    [anon_sym_t] = ACTIONS(1),
    [anon_sym_c] = ACTIONS(1),
    [anon_sym_d] = ACTIONS(1),
    [anon_sym_e] = ACTIONS(1),
    [anon_sym_f] = ACTIONS(1),
    [anon_sym_g] = ACTIONS(1),
    [anon_sym_A] = ACTIONS(1),
    [anon_sym_B] = ACTIONS(1),
    [anon_sym_C] = ACTIONS(1),
    [anon_sym_D] = ACTIONS(1),
    [anon_sym_E] = ACTIONS(1),
    [anon_sym_F] = ACTIONS(1),
    [anon_sym_G] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_b] = ACTIONS(1),
    [anon_sym_maj] = ACTIONS(1),
    [anon_sym_m] = ACTIONS(1),
    [anon_sym_dim] = ACTIONS(1),
    [anon_sym_aug] = ACTIONS(1),
    [anon_sym_sus2] = ACTIONS(1),
    [anon_sym_sus4] = ACTIONS(1),
    [anon_sym_M6] = ACTIONS(1),
    [anon_sym_M7] = ACTIONS(1),
    [anon_sym_9] = ACTIONS(1),
    [anon_sym_M9] = ACTIONS(1),
    [anon_sym_11] = ACTIONS(1),
    [anon_sym_M11] = ACTIONS(1),
    [anon_sym_13] = ACTIONS(1),
    [anon_sym_M13] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(110),
    [sym__definition] = STATE(40),
    [sym_setter] = STATE(40),
    [sym_grid] = STATE(40),
    [sym_map] = STATE(40),
    [sym_tempo] = STATE(40),
    [sym_speed] = STATE(40),
    [sym_mix] = STATE(40),
    [sym_stop] = STATE(40),
    [sym_play] = STATE(40),
    [aux_sym_source_file_repeat1] = STATE(40),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_set] = ACTIONS(5),
    [anon_sym_grid] = ACTIONS(7),
    [anon_sym_map] = ACTIONS(9),
    [anon_sym_tempo] = ACTIONS(11),
    [anon_sym_note] = ACTIONS(13),
    [anon_sym_mix] = ACTIONS(15),
    [anon_sym_stop] = ACTIONS(17),
    [anon_sym_play] = ACTIONS(19),
    [sym_comment] = ACTIONS(21),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    STATE(7), 1,
      sym_accidental,
    ACTIONS(27), 2,
      anon_sym_POUND,
      anon_sym_b,
    ACTIONS(25), 9,
      anon_sym_6,
      anon_sym_7,
      anon_sym_a,
      anon_sym_d,
      anon_sym_m,
      anon_sym_9,
      anon_sym_11,
      anon_sym_13,
      sym_integer,
    ACTIONS(23), 29,
      anon_sym_RBRACE,
      anon_sym_SLASH,
      anon_sym_x,
      anon_sym__,
      anon_sym_QMARK,
      anon_sym_AMP,
      anon_sym_LBRACK,
      anon_sym_t,
      anon_sym_c,
      anon_sym_e,
      anon_sym_f,
      anon_sym_g,
      anon_sym_A,
      anon_sym_B,
      anon_sym_C,
      anon_sym_D,
      anon_sym_E,
      anon_sym_F,
      anon_sym_G,
      anon_sym_maj,
      anon_sym_dim,
      anon_sym_aug,
      anon_sym_sus2,
      anon_sym_sus4,
      anon_sym_M6,
      anon_sym_M7,
      anon_sym_M9,
      anon_sym_M11,
      anon_sym_M13,
  [50] = 4,
    STATE(6), 1,
      sym_accidental,
    ACTIONS(27), 2,
      anon_sym_POUND,
      anon_sym_b,
    ACTIONS(31), 9,
      anon_sym_6,
      anon_sym_7,
      anon_sym_a,
      anon_sym_d,
      anon_sym_m,
      anon_sym_9,
      anon_sym_11,
      anon_sym_13,
      sym_integer,
    ACTIONS(29), 29,
      anon_sym_RBRACE,
      anon_sym_SLASH,
      anon_sym_x,
      anon_sym__,
      anon_sym_QMARK,
      anon_sym_AMP,
      anon_sym_LBRACK,
      anon_sym_t,
      anon_sym_c,
      anon_sym_e,
      anon_sym_f,
      anon_sym_g,
      anon_sym_A,
      anon_sym_B,
      anon_sym_C,
      anon_sym_D,
      anon_sym_E,
      anon_sym_F,
      anon_sym_G,
      anon_sym_maj,
      anon_sym_dim,
      anon_sym_aug,
      anon_sym_sus2,
      anon_sym_sus4,
      anon_sym_M6,
      anon_sym_M7,
      anon_sym_M9,
      anon_sym_M11,
      anon_sym_M13,
  [100] = 2,
    ACTIONS(35), 9,
      anon_sym_6,
      anon_sym_7,
      anon_sym_a,
      anon_sym_d,
      anon_sym_m,
      anon_sym_9,
      anon_sym_11,
      anon_sym_13,
      sym_integer,
    ACTIONS(33), 32,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_SLASH,
      anon_sym_x,
      anon_sym__,
      anon_sym_QMARK,
      anon_sym_AMP,
      anon_sym_LBRACK,
      anon_sym_t,
      anon_sym_c,
      anon_sym_e,
      anon_sym_f,
      anon_sym_g,
      anon_sym_A,
      anon_sym_B,
      anon_sym_C,
      anon_sym_D,
      anon_sym_E,
      anon_sym_F,
      anon_sym_G,
      anon_sym_POUND,
      anon_sym_b,
      anon_sym_maj,
      anon_sym_dim,
      anon_sym_aug,
      anon_sym_sus2,
      anon_sym_sus4,
      anon_sym_M6,
      anon_sym_M7,
      anon_sym_M9,
      anon_sym_M11,
      anon_sym_M13,
  [146] = 10,
    ACTIONS(39), 1,
      anon_sym_SLASH,
    ACTIONS(47), 1,
      anon_sym_m,
    STATE(10), 1,
      sym_mode,
    STATE(12), 1,
      aux_sym_chord_repeat1,
    STATE(15), 1,
      sym_augmentation,
    ACTIONS(43), 3,
      anon_sym_a,
      anon_sym_d,
      sym_integer,
    ACTIONS(41), 5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_9,
      anon_sym_11,
      anon_sym_13,
    ACTIONS(45), 5,
      anon_sym_maj,
      anon_sym_dim,
      anon_sym_aug,
      anon_sym_sus2,
      anon_sym_sus4,
    ACTIONS(49), 5,
      anon_sym_M6,
      anon_sym_M7,
      anon_sym_M9,
      anon_sym_M11,
      anon_sym_M13,
    ACTIONS(37), 18,
      anon_sym_RBRACE,
      anon_sym_x,
      anon_sym__,
      anon_sym_QMARK,
      anon_sym_AMP,
      anon_sym_LBRACK,
      anon_sym_t,
      anon_sym_c,
      anon_sym_e,
      anon_sym_f,
      anon_sym_g,
      anon_sym_A,
      anon_sym_B,
      anon_sym_C,
      anon_sym_D,
      anon_sym_E,
      anon_sym_F,
      anon_sym_G,
  [208] = 2,
    ACTIONS(53), 9,
      anon_sym_6,
      anon_sym_7,
      anon_sym_a,
      anon_sym_d,
      anon_sym_m,
      anon_sym_9,
      anon_sym_11,
      anon_sym_13,
      sym_integer,
    ACTIONS(51), 30,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_SLASH,
      anon_sym_x,
      anon_sym__,
      anon_sym_QMARK,
      anon_sym_AMP,
      anon_sym_LBRACK,
      anon_sym_t,
      anon_sym_c,
      anon_sym_e,
      anon_sym_f,
      anon_sym_g,
      anon_sym_A,
      anon_sym_B,
      anon_sym_C,
      anon_sym_D,
      anon_sym_E,
      anon_sym_F,
      anon_sym_G,
      anon_sym_maj,
      anon_sym_dim,
      anon_sym_aug,
      anon_sym_sus2,
      anon_sym_sus4,
      anon_sym_M6,
      anon_sym_M7,
      anon_sym_M9,
      anon_sym_M11,
      anon_sym_M13,
  [252] = 2,
    ACTIONS(57), 9,
      anon_sym_6,
      anon_sym_7,
      anon_sym_a,
      anon_sym_d,
      anon_sym_m,
      anon_sym_9,
      anon_sym_11,
      anon_sym_13,
      sym_integer,
    ACTIONS(55), 30,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_SLASH,
      anon_sym_x,
      anon_sym__,
      anon_sym_QMARK,
      anon_sym_AMP,
      anon_sym_LBRACK,
      anon_sym_t,
      anon_sym_c,
      anon_sym_e,
      anon_sym_f,
      anon_sym_g,
      anon_sym_A,
      anon_sym_B,
      anon_sym_C,
      anon_sym_D,
      anon_sym_E,
      anon_sym_F,
      anon_sym_G,
      anon_sym_maj,
      anon_sym_dim,
      anon_sym_aug,
      anon_sym_sus2,
      anon_sym_sus4,
      anon_sym_M6,
      anon_sym_M7,
      anon_sym_M9,
      anon_sym_M11,
      anon_sym_M13,
  [296] = 2,
    ACTIONS(61), 9,
      anon_sym_6,
      anon_sym_7,
      anon_sym_a,
      anon_sym_d,
      anon_sym_m,
      anon_sym_9,
      anon_sym_11,
      anon_sym_13,
      sym_integer,
    ACTIONS(59), 29,
      anon_sym_RBRACE,
      anon_sym_SLASH,
      anon_sym_x,
      anon_sym__,
      anon_sym_QMARK,
      anon_sym_AMP,
      anon_sym_LBRACK,
      anon_sym_t,
      anon_sym_c,
      anon_sym_e,
      anon_sym_f,
      anon_sym_g,
      anon_sym_A,
      anon_sym_B,
      anon_sym_C,
      anon_sym_D,
      anon_sym_E,
      anon_sym_F,
      anon_sym_G,
      anon_sym_maj,
      anon_sym_dim,
      anon_sym_aug,
      anon_sym_sus2,
      anon_sym_sus4,
      anon_sym_M6,
      anon_sym_M7,
      anon_sym_M9,
      anon_sym_M11,
      anon_sym_M13,
  [339] = 6,
    ACTIONS(71), 1,
      sym_integer,
    STATE(9), 1,
      aux_sym_chord_repeat1,
    STATE(15), 1,
      sym_augmentation,
    ACTIONS(65), 5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_9,
      anon_sym_11,
      anon_sym_13,
    ACTIONS(68), 5,
      anon_sym_M6,
      anon_sym_M7,
      anon_sym_M9,
      anon_sym_M11,
      anon_sym_M13,
    ACTIONS(63), 21,
      anon_sym_RBRACE,
      anon_sym_SLASH,
      anon_sym_x,
      anon_sym__,
      anon_sym_QMARK,
      anon_sym_AMP,
      anon_sym_LBRACK,
      anon_sym_a,
      anon_sym_t,
      anon_sym_c,
      anon_sym_d,
      anon_sym_e,
      anon_sym_f,
      anon_sym_g,
      anon_sym_A,
      anon_sym_B,
      anon_sym_C,
      anon_sym_D,
      anon_sym_E,
      anon_sym_F,
      anon_sym_G,
  [386] = 7,
    ACTIONS(75), 1,
      anon_sym_SLASH,
    ACTIONS(77), 1,
      sym_integer,
    STATE(11), 1,
      aux_sym_chord_repeat1,
    STATE(15), 1,
      sym_augmentation,
    ACTIONS(41), 5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_9,
      anon_sym_11,
      anon_sym_13,
    ACTIONS(49), 5,
      anon_sym_M6,
      anon_sym_M7,
      anon_sym_M9,
      anon_sym_M11,
      anon_sym_M13,
    ACTIONS(73), 20,
      anon_sym_RBRACE,
      anon_sym_x,
      anon_sym__,
      anon_sym_QMARK,
      anon_sym_AMP,
      anon_sym_LBRACK,
      anon_sym_a,
      anon_sym_t,
      anon_sym_c,
      anon_sym_d,
      anon_sym_e,
      anon_sym_f,
      anon_sym_g,
      anon_sym_A,
      anon_sym_B,
      anon_sym_C,
      anon_sym_D,
      anon_sym_E,
      anon_sym_F,
      anon_sym_G,
  [435] = 7,
    ACTIONS(81), 1,
      anon_sym_SLASH,
    ACTIONS(83), 1,
      sym_integer,
    STATE(9), 1,
      aux_sym_chord_repeat1,
    STATE(15), 1,
      sym_augmentation,
    ACTIONS(41), 5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_9,
      anon_sym_11,
      anon_sym_13,
    ACTIONS(49), 5,
      anon_sym_M6,
      anon_sym_M7,
      anon_sym_M9,
      anon_sym_M11,
      anon_sym_M13,
    ACTIONS(79), 20,
      anon_sym_RBRACE,
      anon_sym_x,
      anon_sym__,
      anon_sym_QMARK,
      anon_sym_AMP,
      anon_sym_LBRACK,
      anon_sym_a,
      anon_sym_t,
      anon_sym_c,
      anon_sym_d,
      anon_sym_e,
      anon_sym_f,
      anon_sym_g,
      anon_sym_A,
      anon_sym_B,
      anon_sym_C,
      anon_sym_D,
      anon_sym_E,
      anon_sym_F,
      anon_sym_G,
  [484] = 7,
    ACTIONS(87), 1,
      anon_sym_SLASH,
    ACTIONS(89), 1,
      sym_integer,
    STATE(9), 1,
      aux_sym_chord_repeat1,
    STATE(15), 1,
      sym_augmentation,
    ACTIONS(41), 5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_9,
      anon_sym_11,
      anon_sym_13,
    ACTIONS(49), 5,
      anon_sym_M6,
      anon_sym_M7,
      anon_sym_M9,
      anon_sym_M11,
      anon_sym_M13,
    ACTIONS(85), 20,
      anon_sym_RBRACE,
      anon_sym_x,
      anon_sym__,
      anon_sym_QMARK,
      anon_sym_AMP,
      anon_sym_LBRACK,
      anon_sym_a,
      anon_sym_t,
      anon_sym_c,
      anon_sym_d,
      anon_sym_e,
      anon_sym_f,
      anon_sym_g,
      anon_sym_A,
      anon_sym_B,
      anon_sym_C,
      anon_sym_D,
      anon_sym_E,
      anon_sym_F,
      anon_sym_G,
  [533] = 2,
    ACTIONS(93), 6,
      anon_sym_6,
      anon_sym_7,
      anon_sym_9,
      anon_sym_11,
      anon_sym_13,
      sym_integer,
    ACTIONS(91), 26,
      anon_sym_RBRACE,
      anon_sym_SLASH,
      anon_sym_x,
      anon_sym__,
      anon_sym_QMARK,
      anon_sym_AMP,
      anon_sym_LBRACK,
      anon_sym_a,
      anon_sym_t,
      anon_sym_c,
      anon_sym_d,
      anon_sym_e,
      anon_sym_f,
      anon_sym_g,
      anon_sym_A,
      anon_sym_B,
      anon_sym_C,
      anon_sym_D,
      anon_sym_E,
      anon_sym_F,
      anon_sym_G,
      anon_sym_M6,
      anon_sym_M7,
      anon_sym_M9,
      anon_sym_M11,
      anon_sym_M13,
  [570] = 2,
    ACTIONS(97), 6,
      anon_sym_6,
      anon_sym_7,
      anon_sym_9,
      anon_sym_11,
      anon_sym_13,
      sym_integer,
    ACTIONS(95), 26,
      anon_sym_RBRACE,
      anon_sym_SLASH,
      anon_sym_x,
      anon_sym__,
      anon_sym_QMARK,
      anon_sym_AMP,
      anon_sym_LBRACK,
      anon_sym_a,
      anon_sym_t,
      anon_sym_c,
      anon_sym_d,
      anon_sym_e,
      anon_sym_f,
      anon_sym_g,
      anon_sym_A,
      anon_sym_B,
      anon_sym_C,
      anon_sym_D,
      anon_sym_E,
      anon_sym_F,
      anon_sym_G,
      anon_sym_M6,
      anon_sym_M7,
      anon_sym_M9,
      anon_sym_M11,
      anon_sym_M13,
  [607] = 2,
    ACTIONS(101), 6,
      anon_sym_6,
      anon_sym_7,
      anon_sym_9,
      anon_sym_11,
      anon_sym_13,
      sym_integer,
    ACTIONS(99), 26,
      anon_sym_RBRACE,
      anon_sym_SLASH,
      anon_sym_x,
      anon_sym__,
      anon_sym_QMARK,
      anon_sym_AMP,
      anon_sym_LBRACK,
      anon_sym_a,
      anon_sym_t,
      anon_sym_c,
      anon_sym_d,
      anon_sym_e,
      anon_sym_f,
      anon_sym_g,
      anon_sym_A,
      anon_sym_B,
      anon_sym_C,
      anon_sym_D,
      anon_sym_E,
      anon_sym_F,
      anon_sym_G,
      anon_sym_M6,
      anon_sym_M7,
      anon_sym_M9,
      anon_sym_M11,
      anon_sym_M13,
  [644] = 10,
    ACTIONS(103), 1,
      anon_sym_RBRACE,
    ACTIONS(107), 1,
      anon_sym_LBRACK,
    STATE(2), 1,
      sym_bass,
    STATE(5), 1,
      sym_note,
    STATE(21), 1,
      sym_small_bass,
    STATE(17), 2,
      sym_grid_token,
      aux_sym_grid_repeat1,
    STATE(34), 3,
      sym_raw_token,
      sym_chord,
      sym_single_note,
    ACTIONS(105), 5,
      anon_sym_x,
      anon_sym__,
      anon_sym_QMARK,
      anon_sym_AMP,
      sym_integer,
    ACTIONS(109), 7,
      anon_sym_a,
      anon_sym_t,
      anon_sym_c,
      anon_sym_d,
      anon_sym_e,
      anon_sym_f,
      anon_sym_g,
    ACTIONS(111), 7,
      anon_sym_A,
      anon_sym_B,
      anon_sym_C,
      anon_sym_D,
      anon_sym_E,
      anon_sym_F,
      anon_sym_G,
  [694] = 10,
    ACTIONS(107), 1,
      anon_sym_LBRACK,
    ACTIONS(113), 1,
      anon_sym_RBRACE,
    STATE(2), 1,
      sym_bass,
    STATE(5), 1,
      sym_note,
    STATE(21), 1,
      sym_small_bass,
    STATE(18), 2,
      sym_grid_token,
      aux_sym_grid_repeat1,
    STATE(34), 3,
      sym_raw_token,
      sym_chord,
      sym_single_note,
    ACTIONS(105), 5,
      anon_sym_x,
      anon_sym__,
      anon_sym_QMARK,
      anon_sym_AMP,
      sym_integer,
    ACTIONS(109), 7,
      anon_sym_a,
      anon_sym_t,
      anon_sym_c,
      anon_sym_d,
      anon_sym_e,
      anon_sym_f,
      anon_sym_g,
    ACTIONS(111), 7,
      anon_sym_A,
      anon_sym_B,
      anon_sym_C,
      anon_sym_D,
      anon_sym_E,
      anon_sym_F,
      anon_sym_G,
  [744] = 10,
    ACTIONS(115), 1,
      anon_sym_RBRACE,
    ACTIONS(120), 1,
      anon_sym_LBRACK,
    STATE(2), 1,
      sym_bass,
    STATE(5), 1,
      sym_note,
    STATE(21), 1,
      sym_small_bass,
    STATE(18), 2,
      sym_grid_token,
      aux_sym_grid_repeat1,
    STATE(34), 3,
      sym_raw_token,
      sym_chord,
      sym_single_note,
    ACTIONS(117), 5,
      anon_sym_x,
      anon_sym__,
      anon_sym_QMARK,
      anon_sym_AMP,
      sym_integer,
    ACTIONS(123), 7,
      anon_sym_a,
      anon_sym_t,
      anon_sym_c,
      anon_sym_d,
      anon_sym_e,
      anon_sym_f,
      anon_sym_g,
    ACTIONS(126), 7,
      anon_sym_A,
      anon_sym_B,
      anon_sym_C,
      anon_sym_D,
      anon_sym_E,
      anon_sym_F,
      anon_sym_G,
  [794] = 3,
    STATE(32), 1,
      sym_accidental,
    ACTIONS(131), 2,
      anon_sym_POUND,
      anon_sym_b,
    ACTIONS(129), 21,
      anon_sym_RBRACE,
      anon_sym_x,
      anon_sym__,
      anon_sym_QMARK,
      anon_sym_AMP,
      anon_sym_LBRACK,
      anon_sym_a,
      anon_sym_t,
      anon_sym_c,
      anon_sym_d,
      anon_sym_e,
      anon_sym_f,
      anon_sym_g,
      anon_sym_A,
      anon_sym_B,
      anon_sym_C,
      anon_sym_D,
      anon_sym_E,
      anon_sym_F,
      anon_sym_G,
      sym_integer,
  [825] = 3,
    STATE(38), 1,
      sym_accidental,
    ACTIONS(131), 2,
      anon_sym_POUND,
      anon_sym_b,
    ACTIONS(29), 21,
      anon_sym_RBRACE,
      anon_sym_x,
      anon_sym__,
      anon_sym_QMARK,
      anon_sym_AMP,
      anon_sym_LBRACK,
      anon_sym_a,
      anon_sym_t,
      anon_sym_c,
      anon_sym_d,
      anon_sym_e,
      anon_sym_f,
      anon_sym_g,
      anon_sym_A,
      anon_sym_B,
      anon_sym_C,
      anon_sym_D,
      anon_sym_E,
      anon_sym_F,
      anon_sym_G,
      sym_integer,
  [856] = 3,
    STATE(36), 1,
      sym_accidental,
    ACTIONS(131), 2,
      anon_sym_POUND,
      anon_sym_b,
    ACTIONS(133), 21,
      anon_sym_RBRACE,
      anon_sym_x,
      anon_sym__,
      anon_sym_QMARK,
      anon_sym_AMP,
      anon_sym_LBRACK,
      anon_sym_a,
      anon_sym_t,
      anon_sym_c,
      anon_sym_d,
      anon_sym_e,
      anon_sym_f,
      anon_sym_g,
      anon_sym_A,
      anon_sym_B,
      anon_sym_C,
      anon_sym_D,
      anon_sym_E,
      anon_sym_F,
      anon_sym_G,
      sym_integer,
  [887] = 3,
    STATE(37), 1,
      sym_accidental,
    ACTIONS(131), 2,
      anon_sym_POUND,
      anon_sym_b,
    ACTIONS(23), 21,
      anon_sym_RBRACE,
      anon_sym_x,
      anon_sym__,
      anon_sym_QMARK,
      anon_sym_AMP,
      anon_sym_LBRACK,
      anon_sym_a,
      anon_sym_t,
      anon_sym_c,
      anon_sym_d,
      anon_sym_e,
      anon_sym_f,
      anon_sym_g,
      anon_sym_A,
      anon_sym_B,
      anon_sym_C,
      anon_sym_D,
      anon_sym_E,
      anon_sym_F,
      anon_sym_G,
      sym_integer,
  [918] = 1,
    ACTIONS(33), 23,
      anon_sym_RBRACE,
      anon_sym_x,
      anon_sym__,
      anon_sym_QMARK,
      anon_sym_AMP,
      anon_sym_LBRACK,
      anon_sym_a,
      anon_sym_t,
      anon_sym_c,
      anon_sym_d,
      anon_sym_e,
      anon_sym_f,
      anon_sym_g,
      anon_sym_A,
      anon_sym_B,
      anon_sym_C,
      anon_sym_D,
      anon_sym_E,
      anon_sym_F,
      anon_sym_G,
      anon_sym_POUND,
      anon_sym_b,
      sym_integer,
  [944] = 1,
    ACTIONS(135), 23,
      anon_sym_RBRACE,
      anon_sym_x,
      anon_sym__,
      anon_sym_QMARK,
      anon_sym_AMP,
      anon_sym_LBRACK,
      anon_sym_a,
      anon_sym_t,
      anon_sym_c,
      anon_sym_d,
      anon_sym_e,
      anon_sym_f,
      anon_sym_g,
      anon_sym_A,
      anon_sym_B,
      anon_sym_C,
      anon_sym_D,
      anon_sym_E,
      anon_sym_F,
      anon_sym_G,
      anon_sym_POUND,
      anon_sym_b,
      sym_integer,
  [970] = 1,
    ACTIONS(137), 22,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_x,
      anon_sym__,
      anon_sym_QMARK,
      anon_sym_AMP,
      anon_sym_LBRACK,
      anon_sym_a,
      anon_sym_t,
      anon_sym_c,
      anon_sym_d,
      anon_sym_e,
      anon_sym_f,
      anon_sym_g,
      anon_sym_A,
      anon_sym_B,
      anon_sym_C,
      anon_sym_D,
      anon_sym_E,
      anon_sym_F,
      anon_sym_G,
      sym_integer,
  [995] = 1,
    ACTIONS(139), 22,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_x,
      anon_sym__,
      anon_sym_QMARK,
      anon_sym_AMP,
      anon_sym_LBRACK,
      anon_sym_a,
      anon_sym_t,
      anon_sym_c,
      anon_sym_d,
      anon_sym_e,
      anon_sym_f,
      anon_sym_g,
      anon_sym_A,
      anon_sym_B,
      anon_sym_C,
      anon_sym_D,
      anon_sym_E,
      anon_sym_F,
      anon_sym_G,
      sym_integer,
  [1020] = 1,
    ACTIONS(141), 22,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_x,
      anon_sym__,
      anon_sym_QMARK,
      anon_sym_AMP,
      anon_sym_LBRACK,
      anon_sym_a,
      anon_sym_t,
      anon_sym_c,
      anon_sym_d,
      anon_sym_e,
      anon_sym_f,
      anon_sym_g,
      anon_sym_A,
      anon_sym_B,
      anon_sym_C,
      anon_sym_D,
      anon_sym_E,
      anon_sym_F,
      anon_sym_G,
      sym_integer,
  [1045] = 1,
    ACTIONS(143), 22,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_x,
      anon_sym__,
      anon_sym_QMARK,
      anon_sym_AMP,
      anon_sym_LBRACK,
      anon_sym_a,
      anon_sym_t,
      anon_sym_c,
      anon_sym_d,
      anon_sym_e,
      anon_sym_f,
      anon_sym_g,
      anon_sym_A,
      anon_sym_B,
      anon_sym_C,
      anon_sym_D,
      anon_sym_E,
      anon_sym_F,
      anon_sym_G,
      sym_integer,
  [1070] = 1,
    ACTIONS(59), 22,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_x,
      anon_sym__,
      anon_sym_QMARK,
      anon_sym_AMP,
      anon_sym_LBRACK,
      anon_sym_a,
      anon_sym_t,
      anon_sym_c,
      anon_sym_d,
      anon_sym_e,
      anon_sym_f,
      anon_sym_g,
      anon_sym_A,
      anon_sym_B,
      anon_sym_C,
      anon_sym_D,
      anon_sym_E,
      anon_sym_F,
      anon_sym_G,
      sym_integer,
  [1095] = 1,
    ACTIONS(145), 22,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_x,
      anon_sym__,
      anon_sym_QMARK,
      anon_sym_AMP,
      anon_sym_LBRACK,
      anon_sym_a,
      anon_sym_t,
      anon_sym_c,
      anon_sym_d,
      anon_sym_e,
      anon_sym_f,
      anon_sym_g,
      anon_sym_A,
      anon_sym_B,
      anon_sym_C,
      anon_sym_D,
      anon_sym_E,
      anon_sym_F,
      anon_sym_G,
      sym_integer,
  [1120] = 8,
    ACTIONS(37), 1,
      anon_sym_COMMA,
    ACTIONS(147), 1,
      anon_sym_SLASH,
    ACTIONS(153), 1,
      anon_sym_m,
    STATE(49), 1,
      aux_sym_chord_repeat1,
    STATE(50), 1,
      sym_mode,
    STATE(52), 1,
      sym_augmentation,
    ACTIONS(151), 5,
      anon_sym_maj,
      anon_sym_dim,
      anon_sym_aug,
      anon_sym_sus2,
      anon_sym_sus4,
    ACTIONS(149), 10,
      anon_sym_6,
      anon_sym_7,
      anon_sym_M6,
      anon_sym_M7,
      anon_sym_9,
      anon_sym_M9,
      anon_sym_11,
      anon_sym_M11,
      anon_sym_13,
      anon_sym_M13,
  [1158] = 1,
    ACTIONS(155), 21,
      anon_sym_RBRACE,
      anon_sym_x,
      anon_sym__,
      anon_sym_QMARK,
      anon_sym_AMP,
      anon_sym_LBRACK,
      anon_sym_a,
      anon_sym_t,
      anon_sym_c,
      anon_sym_d,
      anon_sym_e,
      anon_sym_f,
      anon_sym_g,
      anon_sym_A,
      anon_sym_B,
      anon_sym_C,
      anon_sym_D,
      anon_sym_E,
      anon_sym_F,
      anon_sym_G,
      sym_integer,
  [1182] = 4,
    ACTIONS(31), 1,
      anon_sym_m,
    STATE(42), 1,
      sym_accidental,
    ACTIONS(157), 2,
      anon_sym_POUND,
      anon_sym_b,
    ACTIONS(29), 17,
      anon_sym_COMMA,
      anon_sym_SLASH,
      anon_sym_6,
      anon_sym_7,
      anon_sym_maj,
      anon_sym_dim,
      anon_sym_aug,
      anon_sym_sus2,
      anon_sym_sus4,
      anon_sym_M6,
      anon_sym_M7,
      anon_sym_9,
      anon_sym_M9,
      anon_sym_11,
      anon_sym_M11,
      anon_sym_13,
      anon_sym_M13,
  [1212] = 1,
    ACTIONS(159), 21,
      anon_sym_RBRACE,
      anon_sym_x,
      anon_sym__,
      anon_sym_QMARK,
      anon_sym_AMP,
      anon_sym_LBRACK,
      anon_sym_a,
      anon_sym_t,
      anon_sym_c,
      anon_sym_d,
      anon_sym_e,
      anon_sym_f,
      anon_sym_g,
      anon_sym_A,
      anon_sym_B,
      anon_sym_C,
      anon_sym_D,
      anon_sym_E,
      anon_sym_F,
      anon_sym_G,
      sym_integer,
  [1236] = 4,
    ACTIONS(25), 1,
      anon_sym_m,
    STATE(43), 1,
      sym_accidental,
    ACTIONS(157), 2,
      anon_sym_POUND,
      anon_sym_b,
    ACTIONS(23), 17,
      anon_sym_COMMA,
      anon_sym_SLASH,
      anon_sym_6,
      anon_sym_7,
      anon_sym_maj,
      anon_sym_dim,
      anon_sym_aug,
      anon_sym_sus2,
      anon_sym_sus4,
      anon_sym_M6,
      anon_sym_M7,
      anon_sym_9,
      anon_sym_M9,
      anon_sym_11,
      anon_sym_M11,
      anon_sym_13,
      anon_sym_M13,
  [1266] = 1,
    ACTIONS(161), 21,
      anon_sym_RBRACE,
      anon_sym_x,
      anon_sym__,
      anon_sym_QMARK,
      anon_sym_AMP,
      anon_sym_LBRACK,
      anon_sym_a,
      anon_sym_t,
      anon_sym_c,
      anon_sym_d,
      anon_sym_e,
      anon_sym_f,
      anon_sym_g,
      anon_sym_A,
      anon_sym_B,
      anon_sym_C,
      anon_sym_D,
      anon_sym_E,
      anon_sym_F,
      anon_sym_G,
      sym_integer,
  [1290] = 1,
    ACTIONS(55), 21,
      anon_sym_RBRACE,
      anon_sym_x,
      anon_sym__,
      anon_sym_QMARK,
      anon_sym_AMP,
      anon_sym_LBRACK,
      anon_sym_a,
      anon_sym_t,
      anon_sym_c,
      anon_sym_d,
      anon_sym_e,
      anon_sym_f,
      anon_sym_g,
      anon_sym_A,
      anon_sym_B,
      anon_sym_C,
      anon_sym_D,
      anon_sym_E,
      anon_sym_F,
      anon_sym_G,
      sym_integer,
  [1314] = 1,
    ACTIONS(51), 21,
      anon_sym_RBRACE,
      anon_sym_x,
      anon_sym__,
      anon_sym_QMARK,
      anon_sym_AMP,
      anon_sym_LBRACK,
      anon_sym_a,
      anon_sym_t,
      anon_sym_c,
      anon_sym_d,
      anon_sym_e,
      anon_sym_f,
      anon_sym_g,
      anon_sym_A,
      anon_sym_B,
      anon_sym_C,
      anon_sym_D,
      anon_sym_E,
      anon_sym_F,
      anon_sym_G,
      sym_integer,
  [1338] = 2,
    ACTIONS(35), 1,
      anon_sym_m,
    ACTIONS(33), 19,
      anon_sym_COMMA,
      anon_sym_SLASH,
      anon_sym_6,
      anon_sym_7,
      anon_sym_POUND,
      anon_sym_b,
      anon_sym_maj,
      anon_sym_dim,
      anon_sym_aug,
      anon_sym_sus2,
      anon_sym_sus4,
      anon_sym_M6,
      anon_sym_M7,
      anon_sym_9,
      anon_sym_M9,
      anon_sym_11,
      anon_sym_M11,
      anon_sym_13,
      anon_sym_M13,
  [1363] = 11,
    ACTIONS(5), 1,
      anon_sym_set,
    ACTIONS(7), 1,
      anon_sym_grid,
    ACTIONS(9), 1,
      anon_sym_map,
    ACTIONS(11), 1,
      anon_sym_tempo,
    ACTIONS(13), 1,
      anon_sym_note,
    ACTIONS(15), 1,
      anon_sym_mix,
    ACTIONS(17), 1,
      anon_sym_stop,
    ACTIONS(19), 1,
      anon_sym_play,
    ACTIONS(163), 1,
      ts_builtin_sym_end,
    ACTIONS(165), 1,
      sym_comment,
    STATE(41), 10,
      sym__definition,
      sym_setter,
      sym_grid,
      sym_map,
      sym_tempo,
      sym_speed,
      sym_mix,
      sym_stop,
      sym_play,
      aux_sym_source_file_repeat1,
  [1406] = 11,
    ACTIONS(167), 1,
      ts_builtin_sym_end,
    ACTIONS(169), 1,
      anon_sym_set,
    ACTIONS(172), 1,
      anon_sym_grid,
    ACTIONS(175), 1,
      anon_sym_map,
    ACTIONS(178), 1,
      anon_sym_tempo,
    ACTIONS(181), 1,
      anon_sym_note,
    ACTIONS(184), 1,
      anon_sym_mix,
    ACTIONS(187), 1,
      anon_sym_stop,
    ACTIONS(190), 1,
      anon_sym_play,
    ACTIONS(193), 1,
      sym_comment,
    STATE(41), 10,
      sym__definition,
      sym_setter,
      sym_grid,
      sym_map,
      sym_tempo,
      sym_speed,
      sym_mix,
      sym_stop,
      sym_play,
      aux_sym_source_file_repeat1,
  [1449] = 2,
    ACTIONS(53), 1,
      anon_sym_m,
    ACTIONS(51), 17,
      anon_sym_COMMA,
      anon_sym_SLASH,
      anon_sym_6,
      anon_sym_7,
      anon_sym_maj,
      anon_sym_dim,
      anon_sym_aug,
      anon_sym_sus2,
      anon_sym_sus4,
      anon_sym_M6,
      anon_sym_M7,
      anon_sym_9,
      anon_sym_M9,
      anon_sym_11,
      anon_sym_M11,
      anon_sym_13,
      anon_sym_M13,
  [1472] = 2,
    ACTIONS(57), 1,
      anon_sym_m,
    ACTIONS(55), 17,
      anon_sym_COMMA,
      anon_sym_SLASH,
      anon_sym_6,
      anon_sym_7,
      anon_sym_maj,
      anon_sym_dim,
      anon_sym_aug,
      anon_sym_sus2,
      anon_sym_sus4,
      anon_sym_M6,
      anon_sym_M7,
      anon_sym_9,
      anon_sym_M9,
      anon_sym_11,
      anon_sym_M11,
      anon_sym_13,
      anon_sym_M13,
  [1495] = 2,
    ACTIONS(61), 1,
      anon_sym_m,
    ACTIONS(59), 17,
      anon_sym_COMMA,
      anon_sym_SLASH,
      anon_sym_6,
      anon_sym_7,
      anon_sym_maj,
      anon_sym_dim,
      anon_sym_aug,
      anon_sym_sus2,
      anon_sym_sus4,
      anon_sym_M6,
      anon_sym_M7,
      anon_sym_9,
      anon_sym_M9,
      anon_sym_11,
      anon_sym_M11,
      anon_sym_13,
      anon_sym_M13,
  [1518] = 4,
    STATE(3), 1,
      sym_bass,
    STATE(19), 1,
      sym_small_bass,
    ACTIONS(109), 7,
      anon_sym_a,
      anon_sym_t,
      anon_sym_c,
      anon_sym_d,
      anon_sym_e,
      anon_sym_f,
      anon_sym_g,
    ACTIONS(111), 7,
      anon_sym_A,
      anon_sym_B,
      anon_sym_C,
      anon_sym_D,
      anon_sym_E,
      anon_sym_F,
      anon_sym_G,
  [1543] = 7,
    ACTIONS(196), 1,
      anon_sym_LBRACK,
    ACTIONS(200), 1,
      sym_identifier,
    STATE(31), 1,
      sym_note,
    STATE(35), 1,
      sym_bass,
    STATE(101), 1,
      sym_playable,
    STATE(103), 2,
      sym_sample,
      sym_chord,
    ACTIONS(198), 7,
      anon_sym_A,
      anon_sym_B,
      anon_sym_C,
      anon_sym_D,
      anon_sym_E,
      anon_sym_F,
      anon_sym_G,
  [1572] = 5,
    ACTIONS(79), 1,
      anon_sym_COMMA,
    ACTIONS(202), 1,
      anon_sym_SLASH,
    STATE(48), 1,
      aux_sym_chord_repeat1,
    STATE(52), 1,
      sym_augmentation,
    ACTIONS(149), 10,
      anon_sym_6,
      anon_sym_7,
      anon_sym_M6,
      anon_sym_M7,
      anon_sym_9,
      anon_sym_M9,
      anon_sym_11,
      anon_sym_M11,
      anon_sym_13,
      anon_sym_M13,
  [1597] = 4,
    STATE(48), 1,
      aux_sym_chord_repeat1,
    STATE(52), 1,
      sym_augmentation,
    ACTIONS(63), 2,
      anon_sym_COMMA,
      anon_sym_SLASH,
    ACTIONS(204), 10,
      anon_sym_6,
      anon_sym_7,
      anon_sym_M6,
      anon_sym_M7,
      anon_sym_9,
      anon_sym_M9,
      anon_sym_11,
      anon_sym_M11,
      anon_sym_13,
      anon_sym_M13,
  [1620] = 5,
    ACTIONS(85), 1,
      anon_sym_COMMA,
    ACTIONS(207), 1,
      anon_sym_SLASH,
    STATE(48), 1,
      aux_sym_chord_repeat1,
    STATE(52), 1,
      sym_augmentation,
    ACTIONS(149), 10,
      anon_sym_6,
      anon_sym_7,
      anon_sym_M6,
      anon_sym_M7,
      anon_sym_9,
      anon_sym_M9,
      anon_sym_11,
      anon_sym_M11,
      anon_sym_13,
      anon_sym_M13,
  [1645] = 5,
    ACTIONS(73), 1,
      anon_sym_COMMA,
    ACTIONS(209), 1,
      anon_sym_SLASH,
    STATE(47), 1,
      aux_sym_chord_repeat1,
    STATE(52), 1,
      sym_augmentation,
    ACTIONS(149), 10,
      anon_sym_6,
      anon_sym_7,
      anon_sym_M6,
      anon_sym_M7,
      anon_sym_9,
      anon_sym_M9,
      anon_sym_11,
      anon_sym_M11,
      anon_sym_13,
      anon_sym_M13,
  [1670] = 1,
    ACTIONS(91), 12,
      anon_sym_COMMA,
      anon_sym_SLASH,
      anon_sym_6,
      anon_sym_7,
      anon_sym_M6,
      anon_sym_M7,
      anon_sym_9,
      anon_sym_M9,
      anon_sym_11,
      anon_sym_M11,
      anon_sym_13,
      anon_sym_M13,
  [1685] = 1,
    ACTIONS(99), 12,
      anon_sym_COMMA,
      anon_sym_SLASH,
      anon_sym_6,
      anon_sym_7,
      anon_sym_M6,
      anon_sym_M7,
      anon_sym_9,
      anon_sym_M9,
      anon_sym_11,
      anon_sym_M11,
      anon_sym_13,
      anon_sym_M13,
  [1700] = 1,
    ACTIONS(95), 12,
      anon_sym_COMMA,
      anon_sym_SLASH,
      anon_sym_6,
      anon_sym_7,
      anon_sym_M6,
      anon_sym_M7,
      anon_sym_9,
      anon_sym_M9,
      anon_sym_11,
      anon_sym_M11,
      anon_sym_13,
      anon_sym_M13,
  [1715] = 2,
    ACTIONS(213), 1,
      sym_integer,
    ACTIONS(211), 10,
      ts_builtin_sym_end,
      anon_sym_set,
      anon_sym_grid,
      anon_sym_map,
      anon_sym_tempo,
      anon_sym_note,
      anon_sym_mix,
      anon_sym_stop,
      anon_sym_play,
      sym_comment,
  [1731] = 1,
    ACTIONS(215), 10,
      ts_builtin_sym_end,
      anon_sym_set,
      anon_sym_grid,
      anon_sym_map,
      anon_sym_tempo,
      anon_sym_note,
      anon_sym_mix,
      anon_sym_stop,
      anon_sym_play,
      sym_comment,
  [1744] = 1,
    ACTIONS(217), 10,
      ts_builtin_sym_end,
      anon_sym_set,
      anon_sym_grid,
      anon_sym_map,
      anon_sym_tempo,
      anon_sym_note,
      anon_sym_mix,
      anon_sym_stop,
      anon_sym_play,
      sym_comment,
  [1757] = 4,
    ACTIONS(219), 1,
      anon_sym_LBRACK,
    STATE(26), 1,
      sym_note,
    STATE(90), 1,
      sym_bass,
    ACTIONS(111), 7,
      anon_sym_A,
      anon_sym_B,
      anon_sym_C,
      anon_sym_D,
      anon_sym_E,
      anon_sym_F,
      anon_sym_G,
  [1776] = 4,
    ACTIONS(219), 1,
      anon_sym_LBRACK,
    STATE(25), 1,
      sym_note,
    STATE(90), 1,
      sym_bass,
    ACTIONS(111), 7,
      anon_sym_A,
      anon_sym_B,
      anon_sym_C,
      anon_sym_D,
      anon_sym_E,
      anon_sym_F,
      anon_sym_G,
  [1795] = 4,
    ACTIONS(221), 1,
      anon_sym_LBRACK,
    STATE(22), 1,
      sym_bass,
    STATE(30), 1,
      sym_note,
    ACTIONS(223), 7,
      anon_sym_A,
      anon_sym_B,
      anon_sym_C,
      anon_sym_D,
      anon_sym_E,
      anon_sym_F,
      anon_sym_G,
  [1814] = 1,
    ACTIONS(225), 10,
      ts_builtin_sym_end,
      anon_sym_set,
      anon_sym_grid,
      anon_sym_map,
      anon_sym_tempo,
      anon_sym_note,
      anon_sym_mix,
      anon_sym_stop,
      anon_sym_play,
      sym_comment,
  [1827] = 4,
    ACTIONS(219), 1,
      anon_sym_LBRACK,
    STATE(27), 1,
      sym_note,
    STATE(90), 1,
      sym_bass,
    ACTIONS(111), 7,
      anon_sym_A,
      anon_sym_B,
      anon_sym_C,
      anon_sym_D,
      anon_sym_E,
      anon_sym_F,
      anon_sym_G,
  [1846] = 1,
    ACTIONS(227), 10,
      ts_builtin_sym_end,
      anon_sym_set,
      anon_sym_grid,
      anon_sym_map,
      anon_sym_tempo,
      anon_sym_note,
      anon_sym_mix,
      anon_sym_stop,
      anon_sym_play,
      sym_comment,
  [1859] = 1,
    ACTIONS(229), 10,
      ts_builtin_sym_end,
      anon_sym_set,
      anon_sym_grid,
      anon_sym_map,
      anon_sym_tempo,
      anon_sym_note,
      anon_sym_mix,
      anon_sym_stop,
      anon_sym_play,
      sym_comment,
  [1872] = 1,
    ACTIONS(231), 10,
      ts_builtin_sym_end,
      anon_sym_set,
      anon_sym_grid,
      anon_sym_map,
      anon_sym_tempo,
      anon_sym_note,
      anon_sym_mix,
      anon_sym_stop,
      anon_sym_play,
      sym_comment,
  [1885] = 1,
    ACTIONS(233), 10,
      ts_builtin_sym_end,
      anon_sym_set,
      anon_sym_grid,
      anon_sym_map,
      anon_sym_tempo,
      anon_sym_note,
      anon_sym_mix,
      anon_sym_stop,
      anon_sym_play,
      sym_comment,
  [1898] = 1,
    ACTIONS(235), 10,
      ts_builtin_sym_end,
      anon_sym_set,
      anon_sym_grid,
      anon_sym_map,
      anon_sym_tempo,
      anon_sym_note,
      anon_sym_mix,
      anon_sym_stop,
      anon_sym_play,
      sym_comment,
  [1911] = 1,
    ACTIONS(237), 10,
      ts_builtin_sym_end,
      anon_sym_set,
      anon_sym_grid,
      anon_sym_map,
      anon_sym_tempo,
      anon_sym_note,
      anon_sym_mix,
      anon_sym_stop,
      anon_sym_play,
      sym_comment,
  [1924] = 4,
    ACTIONS(219), 1,
      anon_sym_LBRACK,
    STATE(30), 1,
      sym_note,
    STATE(90), 1,
      sym_bass,
    ACTIONS(111), 7,
      anon_sym_A,
      anon_sym_B,
      anon_sym_C,
      anon_sym_D,
      anon_sym_E,
      anon_sym_F,
      anon_sym_G,
  [1943] = 1,
    ACTIONS(239), 10,
      ts_builtin_sym_end,
      anon_sym_set,
      anon_sym_grid,
      anon_sym_map,
      anon_sym_tempo,
      anon_sym_note,
      anon_sym_mix,
      anon_sym_stop,
      anon_sym_play,
      sym_comment,
  [1956] = 1,
    ACTIONS(241), 10,
      ts_builtin_sym_end,
      anon_sym_set,
      anon_sym_grid,
      anon_sym_map,
      anon_sym_tempo,
      anon_sym_note,
      anon_sym_mix,
      anon_sym_stop,
      anon_sym_play,
      sym_comment,
  [1969] = 1,
    ACTIONS(243), 10,
      ts_builtin_sym_end,
      anon_sym_set,
      anon_sym_grid,
      anon_sym_map,
      anon_sym_tempo,
      anon_sym_note,
      anon_sym_mix,
      anon_sym_stop,
      anon_sym_play,
      sym_comment,
  [1982] = 4,
    ACTIONS(221), 1,
      anon_sym_LBRACK,
    STATE(22), 1,
      sym_bass,
    STATE(27), 1,
      sym_note,
    ACTIONS(223), 7,
      anon_sym_A,
      anon_sym_B,
      anon_sym_C,
      anon_sym_D,
      anon_sym_E,
      anon_sym_F,
      anon_sym_G,
  [2001] = 4,
    ACTIONS(221), 1,
      anon_sym_LBRACK,
    STATE(22), 1,
      sym_bass,
    STATE(26), 1,
      sym_note,
    ACTIONS(223), 7,
      anon_sym_A,
      anon_sym_B,
      anon_sym_C,
      anon_sym_D,
      anon_sym_E,
      anon_sym_F,
      anon_sym_G,
  [2020] = 4,
    ACTIONS(221), 1,
      anon_sym_LBRACK,
    STATE(22), 1,
      sym_bass,
    STATE(25), 1,
      sym_note,
    ACTIONS(223), 7,
      anon_sym_A,
      anon_sym_B,
      anon_sym_C,
      anon_sym_D,
      anon_sym_E,
      anon_sym_F,
      anon_sym_G,
  [2039] = 1,
    ACTIONS(245), 10,
      ts_builtin_sym_end,
      anon_sym_set,
      anon_sym_grid,
      anon_sym_map,
      anon_sym_tempo,
      anon_sym_note,
      anon_sym_mix,
      anon_sym_stop,
      anon_sym_play,
      sym_comment,
  [2052] = 1,
    ACTIONS(247), 10,
      ts_builtin_sym_end,
      anon_sym_set,
      anon_sym_grid,
      anon_sym_map,
      anon_sym_tempo,
      anon_sym_note,
      anon_sym_mix,
      anon_sym_stop,
      anon_sym_play,
      sym_comment,
  [2065] = 4,
    ACTIONS(249), 1,
      anon_sym_RBRACE,
    STATE(126), 1,
      sym_raw_token,
    STATE(79), 2,
      sym_map_entry,
      aux_sym_map_repeat1,
    ACTIONS(105), 5,
      anon_sym_x,
      anon_sym__,
      anon_sym_QMARK,
      anon_sym_AMP,
      sym_integer,
  [2083] = 4,
    ACTIONS(251), 1,
      anon_sym_RBRACE,
    STATE(126), 1,
      sym_raw_token,
    STATE(77), 2,
      sym_map_entry,
      aux_sym_map_repeat1,
    ACTIONS(105), 5,
      anon_sym_x,
      anon_sym__,
      anon_sym_QMARK,
      anon_sym_AMP,
      sym_integer,
  [2101] = 4,
    ACTIONS(253), 1,
      anon_sym_RBRACE,
    STATE(126), 1,
      sym_raw_token,
    STATE(79), 2,
      sym_map_entry,
      aux_sym_map_repeat1,
    ACTIONS(255), 5,
      anon_sym_x,
      anon_sym__,
      anon_sym_QMARK,
      anon_sym_AMP,
      sym_integer,
  [2119] = 2,
    STATE(20), 1,
      sym_bass,
    ACTIONS(223), 7,
      anon_sym_A,
      anon_sym_B,
      anon_sym_C,
      anon_sym_D,
      anon_sym_E,
      anon_sym_F,
      anon_sym_G,
  [2132] = 2,
    STATE(121), 1,
      sym_octave,
    ACTIONS(258), 7,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
  [2145] = 2,
    STATE(108), 1,
      sym_octave,
    ACTIONS(258), 7,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
  [2158] = 2,
    STATE(33), 1,
      sym_bass,
    ACTIONS(260), 7,
      anon_sym_A,
      anon_sym_B,
      anon_sym_C,
      anon_sym_D,
      anon_sym_E,
      anon_sym_F,
      anon_sym_G,
  [2171] = 2,
    STATE(89), 1,
      sym_bass,
    ACTIONS(111), 7,
      anon_sym_A,
      anon_sym_B,
      anon_sym_C,
      anon_sym_D,
      anon_sym_E,
      anon_sym_F,
      anon_sym_G,
  [2184] = 2,
    STATE(124), 1,
      sym_octave,
    ACTIONS(258), 7,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
  [2197] = 2,
    STATE(125), 1,
      sym_octave,
    ACTIONS(258), 7,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
  [2210] = 5,
    ACTIONS(262), 1,
      anon_sym_DQUOTE,
    ACTIONS(264), 1,
      sym_integer,
    STATE(62), 1,
      sym_string,
    STATE(70), 1,
      sym_value,
    ACTIONS(266), 2,
      sym_float,
      sym_identifier,
  [2227] = 1,
    ACTIONS(268), 6,
      anon_sym_RBRACE,
      anon_sym_x,
      anon_sym__,
      anon_sym_QMARK,
      anon_sym_AMP,
      sym_integer,
  [2236] = 3,
    ACTIONS(29), 1,
      anon_sym_COMMA,
    STATE(6), 1,
      sym_accidental,
    ACTIONS(131), 2,
      anon_sym_POUND,
      anon_sym_b,
  [2247] = 3,
    ACTIONS(23), 1,
      anon_sym_COMMA,
    STATE(7), 1,
      sym_accidental,
    ACTIONS(131), 2,
      anon_sym_POUND,
      anon_sym_b,
  [2258] = 3,
    ACTIONS(270), 1,
      anon_sym_DQUOTE,
    ACTIONS(272), 1,
      aux_sym_string_token1,
    STATE(91), 1,
      aux_sym_string_repeat1,
  [2268] = 3,
    ACTIONS(275), 1,
      anon_sym_DQUOTE,
    ACTIONS(277), 1,
      aux_sym_string_token1,
    STATE(91), 1,
      aux_sym_string_repeat1,
  [2278] = 3,
    ACTIONS(279), 1,
      anon_sym_DQUOTE,
    ACTIONS(281), 1,
      aux_sym_string_token1,
    STATE(92), 1,
      aux_sym_string_repeat1,
  [2288] = 3,
    ACTIONS(283), 1,
      anon_sym_COMMA,
    ACTIONS(285), 1,
      sym_integer,
    STATE(120), 1,
      sym_probability,
  [2298] = 2,
    ACTIONS(287), 1,
      sym_integer,
    ACTIONS(289), 1,
      sym_float,
  [2305] = 2,
    ACTIONS(291), 1,
      anon_sym_lp_cutoff,
    STATE(100), 1,
      sym_property,
  [2312] = 2,
    ACTIONS(293), 1,
      sym_integer,
    STATE(69), 1,
      sym_time_signature,
  [2319] = 1,
    ACTIONS(295), 1,
      anon_sym_EQ,
  [2323] = 1,
    ACTIONS(297), 1,
      anon_sym_COMMA,
  [2327] = 1,
    ACTIONS(299), 1,
      anon_sym_EQ,
  [2331] = 1,
    ACTIONS(301), 1,
      anon_sym_COMMA,
  [2335] = 1,
    ACTIONS(303), 1,
      sym_float,
  [2339] = 1,
    ACTIONS(305), 1,
      anon_sym_COMMA,
  [2343] = 1,
    ACTIONS(307), 1,
      sym_integer,
  [2347] = 1,
    ACTIONS(309), 1,
      anon_sym_LBRACE,
  [2351] = 1,
    ACTIONS(311), 1,
      sym_identifier,
  [2355] = 1,
    ACTIONS(313), 1,
      anon_sym_LBRACE,
  [2359] = 1,
    ACTIONS(315), 1,
      anon_sym_RBRACK,
  [2363] = 1,
    ACTIONS(317), 1,
      anon_sym_SLASH,
  [2367] = 1,
    ACTIONS(319), 1,
      ts_builtin_sym_end,
  [2371] = 1,
    ACTIONS(321), 1,
      anon_sym_RBRACK,
  [2375] = 1,
    ACTIONS(323), 1,
      sym_identifier,
  [2379] = 1,
    ACTIONS(325), 1,
      anon_sym_SLASH,
  [2383] = 1,
    ACTIONS(327), 1,
      sym_identifier,
  [2387] = 1,
    ACTIONS(329), 1,
      sym_identifier,
  [2391] = 1,
    ACTIONS(331), 1,
      sym_identifier,
  [2395] = 1,
    ACTIONS(333), 1,
      sym_integer,
  [2399] = 1,
    ACTIONS(335), 1,
      sym_identifier,
  [2403] = 1,
    ACTIONS(337), 1,
      sym_identifier,
  [2407] = 1,
    ACTIONS(339), 1,
      anon_sym_COMMA,
  [2411] = 1,
    ACTIONS(341), 1,
      anon_sym_RBRACK,
  [2415] = 1,
    ACTIONS(343), 1,
      anon_sym_PERCENT,
  [2419] = 1,
    ACTIONS(345), 1,
      sym_integer,
  [2423] = 1,
    ACTIONS(347), 1,
      anon_sym_RBRACK,
  [2427] = 1,
    ACTIONS(349), 1,
      anon_sym_RBRACK,
  [2431] = 1,
    ACTIONS(351), 1,
      anon_sym_COLON,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 50,
  [SMALL_STATE(4)] = 100,
  [SMALL_STATE(5)] = 146,
  [SMALL_STATE(6)] = 208,
  [SMALL_STATE(7)] = 252,
  [SMALL_STATE(8)] = 296,
  [SMALL_STATE(9)] = 339,
  [SMALL_STATE(10)] = 386,
  [SMALL_STATE(11)] = 435,
  [SMALL_STATE(12)] = 484,
  [SMALL_STATE(13)] = 533,
  [SMALL_STATE(14)] = 570,
  [SMALL_STATE(15)] = 607,
  [SMALL_STATE(16)] = 644,
  [SMALL_STATE(17)] = 694,
  [SMALL_STATE(18)] = 744,
  [SMALL_STATE(19)] = 794,
  [SMALL_STATE(20)] = 825,
  [SMALL_STATE(21)] = 856,
  [SMALL_STATE(22)] = 887,
  [SMALL_STATE(23)] = 918,
  [SMALL_STATE(24)] = 944,
  [SMALL_STATE(25)] = 970,
  [SMALL_STATE(26)] = 995,
  [SMALL_STATE(27)] = 1020,
  [SMALL_STATE(28)] = 1045,
  [SMALL_STATE(29)] = 1070,
  [SMALL_STATE(30)] = 1095,
  [SMALL_STATE(31)] = 1120,
  [SMALL_STATE(32)] = 1158,
  [SMALL_STATE(33)] = 1182,
  [SMALL_STATE(34)] = 1212,
  [SMALL_STATE(35)] = 1236,
  [SMALL_STATE(36)] = 1266,
  [SMALL_STATE(37)] = 1290,
  [SMALL_STATE(38)] = 1314,
  [SMALL_STATE(39)] = 1338,
  [SMALL_STATE(40)] = 1363,
  [SMALL_STATE(41)] = 1406,
  [SMALL_STATE(42)] = 1449,
  [SMALL_STATE(43)] = 1472,
  [SMALL_STATE(44)] = 1495,
  [SMALL_STATE(45)] = 1518,
  [SMALL_STATE(46)] = 1543,
  [SMALL_STATE(47)] = 1572,
  [SMALL_STATE(48)] = 1597,
  [SMALL_STATE(49)] = 1620,
  [SMALL_STATE(50)] = 1645,
  [SMALL_STATE(51)] = 1670,
  [SMALL_STATE(52)] = 1685,
  [SMALL_STATE(53)] = 1700,
  [SMALL_STATE(54)] = 1715,
  [SMALL_STATE(55)] = 1731,
  [SMALL_STATE(56)] = 1744,
  [SMALL_STATE(57)] = 1757,
  [SMALL_STATE(58)] = 1776,
  [SMALL_STATE(59)] = 1795,
  [SMALL_STATE(60)] = 1814,
  [SMALL_STATE(61)] = 1827,
  [SMALL_STATE(62)] = 1846,
  [SMALL_STATE(63)] = 1859,
  [SMALL_STATE(64)] = 1872,
  [SMALL_STATE(65)] = 1885,
  [SMALL_STATE(66)] = 1898,
  [SMALL_STATE(67)] = 1911,
  [SMALL_STATE(68)] = 1924,
  [SMALL_STATE(69)] = 1943,
  [SMALL_STATE(70)] = 1956,
  [SMALL_STATE(71)] = 1969,
  [SMALL_STATE(72)] = 1982,
  [SMALL_STATE(73)] = 2001,
  [SMALL_STATE(74)] = 2020,
  [SMALL_STATE(75)] = 2039,
  [SMALL_STATE(76)] = 2052,
  [SMALL_STATE(77)] = 2065,
  [SMALL_STATE(78)] = 2083,
  [SMALL_STATE(79)] = 2101,
  [SMALL_STATE(80)] = 2119,
  [SMALL_STATE(81)] = 2132,
  [SMALL_STATE(82)] = 2145,
  [SMALL_STATE(83)] = 2158,
  [SMALL_STATE(84)] = 2171,
  [SMALL_STATE(85)] = 2184,
  [SMALL_STATE(86)] = 2197,
  [SMALL_STATE(87)] = 2210,
  [SMALL_STATE(88)] = 2227,
  [SMALL_STATE(89)] = 2236,
  [SMALL_STATE(90)] = 2247,
  [SMALL_STATE(91)] = 2258,
  [SMALL_STATE(92)] = 2268,
  [SMALL_STATE(93)] = 2278,
  [SMALL_STATE(94)] = 2288,
  [SMALL_STATE(95)] = 2298,
  [SMALL_STATE(96)] = 2305,
  [SMALL_STATE(97)] = 2312,
  [SMALL_STATE(98)] = 2319,
  [SMALL_STATE(99)] = 2323,
  [SMALL_STATE(100)] = 2327,
  [SMALL_STATE(101)] = 2331,
  [SMALL_STATE(102)] = 2335,
  [SMALL_STATE(103)] = 2339,
  [SMALL_STATE(104)] = 2343,
  [SMALL_STATE(105)] = 2347,
  [SMALL_STATE(106)] = 2351,
  [SMALL_STATE(107)] = 2355,
  [SMALL_STATE(108)] = 2359,
  [SMALL_STATE(109)] = 2363,
  [SMALL_STATE(110)] = 2367,
  [SMALL_STATE(111)] = 2371,
  [SMALL_STATE(112)] = 2375,
  [SMALL_STATE(113)] = 2379,
  [SMALL_STATE(114)] = 2383,
  [SMALL_STATE(115)] = 2387,
  [SMALL_STATE(116)] = 2391,
  [SMALL_STATE(117)] = 2395,
  [SMALL_STATE(118)] = 2399,
  [SMALL_STATE(119)] = 2403,
  [SMALL_STATE(120)] = 2407,
  [SMALL_STATE(121)] = 2411,
  [SMALL_STATE(122)] = 2415,
  [SMALL_STATE(123)] = 2419,
  [SMALL_STATE(124)] = 2423,
  [SMALL_STATE(125)] = 2427,
  [SMALL_STATE(126)] = 2431,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 1, .production_id = 4),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note, 1, .production_id = 4),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 4, .production_id = 18),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note, 4, .production_id = 18),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bass, 1),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bass, 1),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord, 1, .production_id = 3),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chord, 1, .production_id = 3),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 5, .production_id = 23),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note, 5, .production_id = 23),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 2, .production_id = 9),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note, 2, .production_id = 9),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accidental, 1),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_accidental, 1),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_chord_repeat1, 2, .production_id = 16),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_chord_repeat1, 2, .production_id = 16), SHIFT_REPEAT(13),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_chord_repeat1, 2, .production_id = 16), SHIFT_REPEAT(13),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_chord_repeat1, 2, .production_id = 16),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord, 2, .production_id = 6),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chord, 2, .production_id = 6),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord, 3, .production_id = 15),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chord, 3, .production_id = 15),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord, 2, .production_id = 8),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chord, 2, .production_id = 8),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_augmentation, 1),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_augmentation, 1),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mode, 1),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mode, 1),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_chord_repeat1, 1, .production_id = 7),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_chord_repeat1, 1, .production_id = 7),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_grid_repeat1, 2),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_grid_repeat1, 2), SHIFT_REPEAT(28),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_grid_repeat1, 2), SHIFT_REPEAT(82),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_grid_repeat1, 2), SHIFT_REPEAT(24),
  [126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_grid_repeat1, 2), SHIFT_REPEAT(4),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_note, 4, .production_id = 18),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_note, 1, .production_id = 4),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_small_bass, 1),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord, 4, .production_id = 20),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord, 5, .production_id = 24),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord, 4, .production_id = 19),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw_token, 1),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord, 3, .production_id = 14),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_note, 5, .production_id = 23),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grid_token, 1),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_note, 2, .production_id = 9),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [169] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(106),
  [172] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(119),
  [175] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(118),
  [178] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(95),
  [181] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(116),
  [184] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(115),
  [187] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(114),
  [190] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(112),
  [193] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(41),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [204] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_chord_repeat1, 2, .production_id = 16), SHIFT_REPEAT(51),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_play, 2),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grid, 4, .production_id = 1),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mix, 3, .production_id = 2),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grid, 5, .production_id = 10),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map, 5, .production_id = 11),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stop, 2),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tempo, 5, .production_id = 12),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time_signature, 3, .production_id = 13),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_speed, 3, .production_id = 1),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setter, 5, .production_id = 5),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_play, 3),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map, 4, .production_id = 1),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_map_repeat1, 2),
  [255] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_map_repeat1, 2), SHIFT_REPEAT(28),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [264] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_entry, 4, .production_id = 22),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [272] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(91),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sample, 1, .production_id = 17),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [287] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 1),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_probability, 2),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_playable, 1),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [319] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_octave, 1),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sample, 2, .production_id = 21),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
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
