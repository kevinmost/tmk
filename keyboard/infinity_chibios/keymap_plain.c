#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * Layer 0: Default Layer
     * NOTE: For some reason, RALT just wasn't working. So now I have a LALT on both sides...
     */
    [0] = KEYMAP(
        GRV ,   1,   2,   3,   4,   5,   6,   7,   8,   9,   0,MINS, EQL,BSLS, DEL,\
        TAB ,   Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,LBRC,RBRC,BSPC, \
         FN5,   A,   S,   D,   F,   G,   H,   J,   K,   L,SCLN,QUOT,      ENT,  \
        LSFT,   Z,   X,   C,   V,   B,   N,   M,COMM, DOT,SLSH,RSFT,FN2, \
        LCTL,LGUI,LALT,           FN1,               LALT,RGUI, FN2,RCTL
    ),

    /*
     * Layer 1: SpaceFN overlay
     */ 
    [1] = KEYMAP(
        TRNS,  F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9, F10, F11, F12,TRNS,TRNS, \
        TRNS,TRNS,  UP,TRNS,TRNS,TRNS,TRNS,WH_U,MS_U,WH_D,PSCR,TRNS,TRNS,TRNS, \
        TRNS,LEFT,DOWN,RGHT,TRNS,TRNS,BTN1,MS_L,MS_D,MS_R,BTN2,TRNS,     TRNS, \
        TRNS,MPRV,MPLY,MNXT,TRNS,TRNS,TRNS,MUTE, FN3, FN4,TRNS,TRNS,TRNS, \
        TRNS,TRNS,TRNS,          TRNS,               TRNS,TRNS,TRNS,TRNS
    ),

    // Copy + uncomment to make a new layer
    /*[]= KEYMAP(
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, TRNS, TRNS, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
        TRNS,TRNS,TRNS,          TRNS,               TRNS,TRNS,TRNS,TRNS
    ),*/
};

// TODO: Reorganize these in some logical order... or give them names maybe that are ints? I hate C...
const uint16_t PROGMEM fn_actions[] = {
    [0] = ACTION_LAYER_TOGGLE(1),
    [1] = ACTION_LAYER_TAP_KEY(1, KC_SPC),
    [2] = ACTION_LAYER_MOMENTARY(1),

    // Press vol down and vol up with Shift + GUI to get 1/4 step on Mac
    [3] = ACTION_MODS_KEY(MOD_LGUI | MOD_LSFT, KC_VOLD),
    [4] = ACTION_MODS_KEY(MOD_LGUI | MOD_LSFT, KC_VOLU),

    [5] = ACTION_MODS_TAP_KEY(MOD_LCTL, KC_ESC),
};
