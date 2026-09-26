#pragma once

// How long (ms) the Caps/Esc/Ctrl tap-dance key must be held before it
// resolves to a hold (Ctrl) rather than a tap (Escape), absent an
// interrupting keypress (see cur_dance() in keymap.c, which resolves
// to a hold immediately on interruption if the key is still pressed).
// Lower this if deliberate holds still feel slow to register; raise
// it if quick taps ever get misread as holds.
#define TAPPING_TERM 180
