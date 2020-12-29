#pragma once

#include "config_common.h"


#define PRODUCT         Dactyl-Manuform (Ergodox)

/* key matrix size */
// Rows are doubled-up
#define MATRIX_ROWS 12
#define MATRIX_COLS 7

// wiring of each half
#define MATRIX_ROW_PINS { B11, B10, B1, B0, A7, A6 }
#define MATRIX_COL_PINS { B12, B13, B14, B15, A8, B4, B5 }

#define DIODE_DIRECTION COL2ROW

// Iso fix for Space Cadet, comment for ANSI layouts
#define LSPO_KEY KC_8
#define RSPC_KEY KC_9
