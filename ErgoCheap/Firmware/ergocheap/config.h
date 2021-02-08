/*
Copyright 2021 xSteins <itsmesteins@gmail.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x6465
#define DEVICE_VER      0x0001
#define MANUFACTURER    xSteins
#define PRODUCT         ERGOCHEAP
#define DESCRIPTION     ergo with bluepill

/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 15

#define MATRIX_COL_PINS { A8, A9, A10, B12, B13, A11, B3, A3, A4, A5, A6, A7, B0, B1, B10 }
#define MATRIX_ROW_PINS { B5, B6, B7, B8, B9 }

#define DIODE_DIRECTION COL2ROW

/* key led setting */
#define BACKLIGHT_PIN A8
#define BACKLIGHT_PWM_DRIVER PWMD1
#define BACKLIGHT_PWM_CHANNEL 1
#define BACKLIGHT_LEVELS 6
#define BACKLIGHT_BREATHING
#define BREATHING_PERIOD 6

/* define if matrix has ghost */
//#define MATRIX    _HAS_GHOST

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE    5

#define TAPPING_TERM 500

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT
//#define NO_ACTION_MACRO
//#define NO_ACTION_FUNCTION