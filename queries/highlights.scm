; Keywords

[
 "stop"
 "play"
 "beat"
 "grid"
 "set"
] @keyword

[
 "bpm"
 "swing"
] @variable.builtin

(chord) @string.special

[
    "/"
    "%"
] @operator

(beat name: (identifier) @function )  

(grid (grid_token) @constant)

(comment) @comment

(number) @number
(integer) @number

(ERROR) @error
