module.exports = grammar({
    name: 'breaker',

    rules: {
        source_file: $ => repeat($._definition),

        _definition: $ => choice(
            $.beat,
            $.grid,
            $.stop,
            $.play,
            $.comment,
            $.setter,
        ),

        setter: $ => seq(
            "set",
            $.property,
            $.value,
        ),

        property: _ => choice(
            "bpm",
            "swing",
        ),

        value: $ => choice(
            $.number,
            $.identifier,
            $.string,
        ),

        string: _ => seq(
            '"',
            repeat(
                token.immediate(prec(1, /[^"\n]+/)),
            ),
            '"'
        ),

        beat: $ => seq(
            "beat",
            field('name', $.identifier),
            $.time_signature,
            optional($.probability),
        ),

        grid: $ => seq(
            "grid",
            field('name', $.identifier),
            "{",
            repeat($.grid_token),
            "}",
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
            $.integer,
            '/',
            $.integer,
        ),

        probability: $ => seq(
            $.number,
            '%',
        ),

        grid_token: $ => choice(
            "x",
            "_",
            "?",
            $.integer,
            $.chord,
        ),

        chord: $ => seq(
            $.note,
            optional($.mode),
            optional($.augmentation),
            optional(seq(
                "/",
                $.note,
            ))
        ),

        note: _ => seq(
            // capital letter
            /[A-G]/,
            optional(choice(
                "#",
                "b",
            )),
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
            "7",
            "9",
            "11",
            "13",
            "M7",
            "6",
        ),

        comment: _ => token(seq('//', /.*/)),

        integer: _ => /[0-9]+/,

        number: _ => /\d+/,

        identifier: _ => /[a-z]+/,
    }
});
