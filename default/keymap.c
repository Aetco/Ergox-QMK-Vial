/* Copyright 2025
 * Aetco
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

 #include QMK_KEYBOARD_H
 
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT (
        KC_ESC,  KC_F1,   KC_F2,  KC_F3,   KC_F4,  KC_F5,  KC_PGUP,      KC_F6,   KC_F7,  KC_F8, KC_F9,   KC_F10,   KC_F11,  KC_F12,
        KC_NUHS, KC_1,    KC_2,   KC_3,    KC_4,   KC_5,   KC_PGDN,      KC_MINS, KC_6,   KC_7,  KC_8,    KC_9,     KC_0,    KC_BSPC,
        KC_TAB,  KC_Q,    KC_W,   KC_E,    KC_R,   KC_T,   KC_INS,       KC_EQL,  KC_Y,   KC_U,  KC_I,    KC_O,     KC_P,    KC_BSLS,
        KC_CAPS, KC_A,    KC_S,   KC_D,    KC_F,   KC_G,   KC_DEL,       KC_QUOT, KC_H,   KC_J,  KC_K,    KC_L,     KC_SCLN, KC_PENT,
        KC_LSFT, KC_Z,    KC_X,   KC_C,    KC_V,   KC_B,   KC_MUTE,      KC_SCRL, KC_N,   KC_M,  KC_COMM, KC_DOT,   KC_SLSH, KC_RSFT,
        KC_LCTL, KC_LWIN, KC_UP,  KC_DOWN, MO(1),  KC_SPC, KC_SPC,       KC_SPC,  KC_SPC, MO(2), KC_LALT, KC_RIGHT, KC_LEFT, KC_RCTL        
    ),
    [1] = LAYOUT (
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_PEQL,        KC_PEQL, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS 
    ),
    //Debug布局
    [2] = LAYOUT (
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,         KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, PDF(0),  KC_TRNS, KC_TRNS, PDF(3),  PDF(4),  KC_TRNS,         KC_TRNS,  PDF(5),  PDF(6),  PDF(7),  KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,         KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, EE_CLR,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,         KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,         EE_CLR,   EE_CLR,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,         QK_BOOT,  QK_BOOT, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
    ),
    //Dvorak布局
    [3] = LAYOUT ( 
        KC_ESC,   KC_F1,    KC_F2,    KC_F3,    KC_F4,  KC_F5,   KC_PGUP,      KC_F6,    KC_F7,   KC_F8,  KC_F9,    KC_F10,    KC_F11,   KC_F12,
        KC_NUHS,  KC_1,     KC_2,     KC_3,     KC_4,   KC_5,    KC_LBRC,      KC_RBRC,  KC_6,    KC_7,   KC_8,     KC_9,      KC_0,     KC_BSPC,
        KC_TAB,   KC_MINS,  KC_COMM,  KC_DOT,   KC_P,   KC_Y,    KC_SLSH,      KC_EQL,   KC_F,    KC_G,   KC_C,     KC_R,      KC_L,     KC_TAB,
        KC_CAPS,  KC_A,     KC_O,     KC_E,     KC_U,   KC_I,    KC_PGDN,      KC_MINS,  KC_D,    KC_H,   KC_T,     KC_N,      KC_S,     KC_PENT,
        KC_LSFT,  KC_SCLN,  KC_Q,     KC_J,     KC_K,   KC_X,    KC_MUTE,      KC_SCRL,  KC_B,    KC_M,   KC_W,     KC_V,      KC_Z,     KC_RSFT,
        KC_LCTL,  KC_LWIN,  KC_UP,    KC_DOWN,  MO(1),  KC_SPC,  KC_SPC,       KC_SPC,   KC_SPC,  MO(2),  KC_LALT,  KC_RIGHT,  KC_LEFT,  KC_RCTL
    ),
    //Colemak布局
    [4] = LAYOUT (
        KC_ESC,   KC_F1,    KC_F2,  KC_F3,    KC_F4,  KC_F5,   KC_PGUP,       KC_F6,    KC_F7,   KC_F8,  KC_F9,    KC_F10,  KC_F11,  KC_F12,
        KC_NUHS,  KC_1,     KC_2,   KC_3,     KC_4,   KC_5,    KC_MINS,       KC_EQL,   KC_6,    KC_7,   KC_8,     KC_9,  KC_0,  KC_BSPC,
        KC_TAB,   KC_Q,     KC_W,   KC_F,     KC_P,   KC_G,    KC_LBRC,       KC_RBRC,  KC_J,    KC_L,   KC_U,     KC_Y,  KC_SCLN,  KC_BSLS,
        KC_CAPS,  KC_A,     KC_R,   KC_S,     KC_T,   KC_D,    KC_PGDN,       KC_QUOT,  KC_H,    KC_E,   KC_N,     KC_I,  KC_O,  KC_PENT,
        KC_LSFT,  KC_Z,     KC_X,   KC_C,     KC_V,   KC_B,    KC_MUTE,       KC_SCRL,  KC_K,    KC_M,   KC_COMM,  KC_DOT,  KC_SLSH,  KC_RSFT,
        KC_LCTL,  KC_LWIN,  KC_UP,  KC_DOWN,  MO(1),  KC_SPC,  KC_SPC,        KC_SPC,   KC_SPC,  MO(2),  KC_LALT,  KC_RIGHT,  KC_LEFT,  KC_RCTL
    ),
    //colemak-DH布局
    [5] = LAYOUT (
        KC_ESC,   KC_F1,    KC_F2,  KC_F3,    KC_F4,  KC_F5,   KC_PGUP,       KC_F6,    KC_F7,   KC_F8,  KC_F9,  KC_F10,  KC_F11,  KC_F12,
        KC_NUHS,  KC_1,     KC_2,   KC_3,     KC_4,   KC_5,    KC_MINS,       KC_EQL,   KC_6,    KC_7,   KC_8,  KC_9,  KC_0,  KC_BSPC,
        KC_TAB,   KC_Q,     KC_W,   KC_F,     KC_P,   KC_B,    KC_LBRC,       KC_RBRC,  KC_J,    KC_L,   KC_U,  KC_Y,  KC_SCLN,  KC_BSLS,
        KC_CAPS,  KC_A,     KC_R,   KC_S,     KC_T,   KC_G,    KC_DEL,        KC_INS,   KC_M,    KC_N,   KC_E,  KC_I,  KC_O,  KC_PENT,
        KC_LSFT,  KC_Z,     KC_X,   KC_C,     KC_D,   KC_V,    KC_MUTE,       KC_SCRL,  KC_K,    KC_H,   KC_COMM,  KC_DOT,  KC_SLSH,  KC_RSFT,
        KC_LCTL,  KC_LWIN,  KC_UP,  KC_DOWN,  MO(1),  KC_SPC,  KC_SPC,        KC_SPC,   KC_SPC,  MO(2),  KC_LALT,  KC_RIGHT,  KC_LEFT,  KC_RCTL
     ),
    //norman布局
    [6] = LAYOUT (
        KC_ESC,   KC_F1,    KC_F2,  KC_F3,    KC_F4,  KC_F5,  KC_PGUP,       KC_F6,    KC_F7,   KC_F8,   KC_F9,  KC_F10,  KC_F11,  KC_F12,
        KC_NUHS,  KC_1,     KC_2,   KC_3,     KC_4,  KC_5,    KC_MINS,       KC_EQL,   KC_6,    KC_7,    KC_8,  KC_9,  KC_0,  KC_BSPC,
        KC_TAB,   KC_Q,     KC_W,   KC_D,     KC_F,  KC_K,    KC_LBRC,       KC_RBRC,  KC_J,    KC_U,    KC_R,  KC_L,  KC_SCLN,  KC_BSLS,
        KC_CAPS,  KC_A,     KC_S,   KC_E,     KC_T,  KC_G,    KC_PGDN,       KC_QUOT,  KC_Y,    KC_N,    KC_I,  KC_O,  KC_H,  KC_PENT,
        KC_LSFT,  KC_Z,     KC_X,   KC_C,     KC_V,  KC_B,    KC_MUTE,       KC_SCRL,  KC_P,    KC_M,    KC_COMM,  KC_DOT,  KC_SLSH,  KC_RSFT,
        KC_LCTL,  KC_LWIN,  KC_UP,  KC_DOWN,  MO(1), KC_SPC,  KC_SPC,        KC_SPC,   KC_SPC,  MO(2),   KC_LALT,  KC_RIGHT,  KC_LEFT,  KC_RCTL
    ),
    //workman布局
    [7] = LAYOUT (
        KC_ESC,   KC_F1,    KC_F2,  KC_F3,    KC_F4,  KC_F5,    KC_PGUP,      KC_F6,    KC_F7,   KC_F8,    KC_F9,  KC_F10,  KC_F11,  KC_F12,
        KC_NUHS,  KC_1,     KC_2,   KC_3,     KC_4,   KC_5,    KC_MINS,       KC_EQL,   KC_6,    KC_7,     KC_8,  KC_9,  KC_0,  KC_BSPC,
        KC_TAB,   KC_Q,     KC_D,   KC_R,     KC_W,   KC_B,    KC_LBRC,       KC_RBRC,  KC_J,    KC_F,     KC_U,  KC_P,  KC_SCLN,  KC_BSLS,
        KC_CAPS,  KC_A,     KC_S,   KC_H,     KC_T,   KC_G,    KC_PGDN,       KC_QUOT,  KC_Y,    KC_N,     KC_E,  KC_O,  KC_I,  KC_PENT,
        KC_LSFT,  KC_Z,     KC_X,   KC_M,     KC_C,   KC_V,    KC_MUTE,       KC_SCRL,  KC_K,    KC_L,     KC_COMM,  KC_DOT,  KC_SLSH,  KC_RSFT,
        KC_LCTL,  KC_LWIN,  KC_UP,  KC_DOWN,  MO(1),  KC_SPC,  KC_SPC,        KC_SPC,   KC_SPC,  MO(2),    KC_LALT,  KC_RIGHT,  KC_LEFT,  KC_RCTL
    )
 };
