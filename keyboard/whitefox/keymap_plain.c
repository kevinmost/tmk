/*
Copyright 2015 Jun Wako <wakojun@gmail.com>

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
#include "keymap_common.h"

const uint8_t keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Layer 0: Default Layer
     * ,---------------------------------------------------------------.
     * |Esc|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|  \|  `|Ins|
     * |---------------------------------------------------------------|
     * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|Backs|Del|
     * |---------------------------------------------------------------|
     * |CapsLo|  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '|Enter   |PgU|
     * |---------------------------------------------------------------|
     * |Shif|   |  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /|Shift |Up |PgD|
     * |---------------------------------------------------------------|
     * |Ctrl|Gui |Alt |         Space    |Fn0 |Alt |Gui |  |Lef|Dow|Rig|
     * `---------------------------------------------------------------'
     */
    [0] = KEYMAP( \
         GRV,   1,   2,   3,   4,   5,   6,   7,   8,   9,   0,MINS, EQL,  NO,BSLS,HOME,\
         TAB,   Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,LBRC,RBRC,BSPC,     PGUP,\
         FN1,   A,   S,   D,   F,   G,   H,   J,   K,   L,SCLN,QUOT,NUHS, ENT,     PGDN,\
        LSFT,  NO,   Z,   X,   C,   V,   B,   N,   M,COMM, DOT,SLSH,RSFT,       UP, END,\
        LCTL,LGUI,LALT,                FN0,          RALT,RGUI,RCTL,     LEFT,DOWN,RGHT \
    ),

    [1] = KEYMAP( \
        TRNS,  F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9, F10, F11, F12,TRNS,TRNS,TRNS,\
        TRNS,TRNS,  UP,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS,\
        TRNS,LEFT,DOWN,RGHT,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS,\
        TRNS,  NO,MPRV,MPLY,MNXT,TRNS,TRNS,TRNS,MUTE, FN3, FN4,TRNS,TRNS,     TRNS,TRNS,\
        TRNS,TRNS,TRNS,                TRNS,          TRNS,TRNS,TRNS,     TRNS,TRNS,TRNS\
    ),
};

const uint16_t fn_actions[] = {
    // SpaceFn
    [0] = ACTION_LAYER_TAP_KEY(1, KC_SPC),

    // "supercharged vim" key (esc on tap, ctrl on hold)
    [1] = ACTION_MODS_TAP_KEY(MOD_LCTL, KC_ESC),

    // Volume keys that also hold down super + shift,
    // so that we get 1/4-step movement on OS X
    [3] = ACTION_MODS_KEY(MOD_LGUI | MOD_LSFT, KC_VOLD),
    [4] = ACTION_MODS_KEY(MOD_LGUI | MOD_LSFT, KC_VOLU),
};
