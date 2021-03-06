/* Copyright 2022 bojiguard (@bojiguard)
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once



#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0x5892      
#define PRODUCT_ID      0x1233
#define DEVICE_VER      0x0001
#define MANUFACTURER    Fungo
#define PRODUCT         FungoSplit




/* Use I2C or Serial, not both */
#define USE_SERIAL
#define SOFT_SERIAL_PIN D3	// RX8

/* select keyboard  master board  - I2C or Serial communication master    */
#define MASTER_RIGHT


/* key matrix size */
// Rows are doubled-up
#define MATRIX_ROWS 12
#define MATRIX_COLS 7

// wiring of each half
#define MATRIX_COL_PINS { F4, F5, F6, F7, B1, B3, B2}
#define MATRIX_ROW_PINS { D4, C6, D7, E6, B4, B5}

#define MATRIX_COL_PINS_RIGHT {F7, F6, F5, F4, B5, B4, E6}
#define MATRIX_ROW_PINS_RIGHT { D1, D0, D4, C6, D7, D3}    	// TX   




/* COL2ROW, ROW2COL*/
#define DIODE_DIRECTION COL2ROW



/*************************************/
/**       public parameter       **/
/*************************************/

#define MATRIX_IO_DELAY 15  // default  30
//#define QMK_KEYS_PER_SCAN 4
#define TAP_CODE_DELAY  50   // default 100
#define USB_POLLING_INTERVAL_MS   5 // default 1

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 3

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE

/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

//????????? ????????? ????????? ?????????
#define TAPPING_TOGGLE 3

//tap or holding
#define TAPPING_TERM 200
#define IGNORE_MOD_TAP_INTERRUPT

//caps word, left shift + right shift => capslock
#define BOTH_SHIFTS_TURNS_ON_CAPS_WORD
#define CAPS_WORD_IDLE_TIMEOUT 500   //default 5000msec

#define MK_3_SPEED
#define MOUSEKEY_INTERVAL 3
#define MOUSEKEY_INITIAL_SPEED	20