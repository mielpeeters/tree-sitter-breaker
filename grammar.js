module.exports = grammar({
    name: 'breaker',

    rules: {
        source_file: $ => repeat($._definition),

        _definition: $ => choice(
            $.grid,
            $.stop,
            $.play,
            $.comment,
            $.setter,
            $.map,
            $.tempo,
            $.speed,
            $.mix,
        ),

        setter: $ => seq(
            "set",
            field("name", $.identifier),
            // TODO: find a better name
            field("prop", $.property),
            "=",
            field("value", $.value),
        ),

        property: _ => choice(
            "lp_cutoff",
        ),

        value: $ => choice(
            $.integer,
            $.identifier,
            $.string,
            $.float,
        ),

        string: _ => seq(
            '"',
            repeat(
                token.immediate(prec(1, /[^"\n]+/)),
            ),
            '"'
        ),

        grid: $ => seq(
            "grid",
            field('name', $.identifier),
            "{",
            field('token', repeat($.grid_token)),
            "}",
        ),

        map: $ => seq(
            "map",
            field('name', $.identifier),
            "{",
            field("pair", repeat($.map_entry)),
            "}",
        ),

        map_entry: $ => seq(
            field('key', $.raw_token),
            ":",
            field('value', $.playable),
            ",",
        ),

        tempo: $ => seq(
            "tempo",
            field("bpm", choice($.float, $.integer)),
            field("count", $.integer),
            "/",
            field("note", $.integer),
        ),

        speed: $ => seq(
            "note",
            field('name', $.identifier),
            $.time_signature,
        ),

        mix: $ => seq(
            "mix",
            field('name', $.identifier),
            field('value', $.float)
        ),

        playable: $ => choice(
            $.chord,
            $.sample,
        ),

        sample: $ => seq(
            field("name", $.identifier),
            optional(
                field("probability", $.probability),
            )
        ),

        stop: $ => seq(
            'stop',
            $.identifier,
        ),

        play: $ => seq(
            'play',
            $.identifier,
            optional($.integer)
        ),

        time_signature: $ => seq(
            field("numer", $.integer),
            "/",
            field("denom", $.integer),
        ),

        probability: $ => seq(
            $.integer,
            '%',
        ),

        grid_token: $ => choice(
            $.raw_token,
            $.chord,
            $.single_note,
        ),

        raw_token: $ => choice(
            "x", // hit
            "_", // rest
            "?", // random
            "&", // repeat 
            $.integer
        ),

        chord: $ => seq(
            field("root", $.note),
            optional(field("mode", $.mode)),
            optional(repeat(field("augm", $.augmentation))),
            optional(seq(
                "/",
                field("bass", $.note),
            ))
        ),

        note: $ => seq(
            optional(
                seq(
                    "[",
                    field("oct", $.octave),
                    "]"
                )
            ),
            field("bass", $.bass),
            optional(field("acc", $.accidental)),
        ),

        single_note: $ => seq(
            optional(
                seq(
                    "[",
                    field("oct", $.octave),
                    "]"
                )
            ),
            field("bass", $.small_bass),
            optional(field("acc", $.accidental)),
        ),

        octave: _ => choice(
            "1",
            "2",
            "3",
            "4",
            "5",
            "6",
            "7",
        ),

        small_bass: _ => choice(
            "a",
            "t",
            "c",
            "d",
            "e",
            "f",
            "g",
        ),

        bass: _ => choice(
            "A",
            "B",
            "C",
            "D",
            "E",
            "F",
            "G",
        ),

        accidental: _ => choice(
            "#",
            "b",
        ),

        mode: _ => choice(
            "maj",
            "m",
            "dim",
            "aug",
            "sus2",
            "sus4",
        ),

        augmentation: _ => choice(
            "6",
            "M6",
            "7",
            "M7",
            "9",
            "M9",
            "11",
            "M11",
            "13",
            "M13",
        ),

        comment: _ => token(seq('//', /.*/)),

        integer: _ => /[0-9]+/,

        float: _ => /[0-9]+\.[0-9]+/,

        identifier: _ => /[a-zA-Z_][a-zA-Z0-9_-]*/,
    }
});
