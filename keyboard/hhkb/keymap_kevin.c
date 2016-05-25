#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* 
     * Layer 0: Default Layer
     */
    [0] = KEYMAP(
        GRV ,   1,   2,   3,   4,   5,   6,   7,   8,   9,   0,MINS,EQL,BSLS,BSPC, \
        TAB ,   Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,LBRC,RBRC,BSPC, \
        FN2 ,   A,   S,   D,   F,   G,   H,   J,   K,   L,SCLN,QUOT,     ENT,  \
        LSFT,   Z,   X,   C,   V,   B,   N,   M,COMM, DOT,SLSH,RSFT, FN0, \
             LGUI,LALT,           FN1,                RALT,RGUI
    ),

    /* 
     * Layer 1: SpaceFN overlay
     */
    [1] = KEYMAP(
        ESC,  F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12,TRNS,TRNS, \
        TRNS,TRNS,  UP,TRNS,TRNS,TRNS,TRNS,MPRV,MPLY,MNXT,PSCR,TRNS,TRNS, DEL, \
        TRNS,LEFT,DOWN,RGHT,TRNS,TRNS,TRNS,VOLD,MUTE,VOLU,TRNS,TRNS,    TRNS, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
        TRNS,TRNS,           TRNS,               TRNS,TRNS
    ),
};

const uint16_t PROGMEM fn_actions[] = {
    [0] = ACTION_LAYER_TOGGLE(1),
    [1] = ACTION_LAYER_TAP_KEY(1, KC_SPC),
    [2] = ACTION_MODS_TAP_KEY(MOD_LCTL, KC_ESC),
};
