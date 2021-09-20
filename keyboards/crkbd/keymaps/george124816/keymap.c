#include QMK_KEYBOARD_H


#define _LAYER0 0
#define _LAYER1 1
#define _LAYER2 2
#define _LAYER3 3
#define _LAYER4 4
#define _LAYER5 5
#define _LAYER6 6
#define _LAYER7 7

enum custom_keycodes {
    LAYER0 = SAFE_RANGE,
    LAYER1,
    LAYER2,
    LAYER3,
    LAYER4,
    LAYER5,
    LAYER6,
    LAYER7,
};

 const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[_LAYER0] = LAYOUT(
     KC_NO,         KC_Q,         KC_W,         KC_E,         KC_R,    KC_T,                 KC_Y,         KC_U,         KC_I,           KC_O,            KC_P, KC_NO,
     KC_NO, LGUI_T(KC_A), LALT_T(KC_S), LSFT_T(KC_D), LCTL_T(KC_F),    KC_G,                 KC_H, LCTL_T(KC_J), LSFT_T(KC_K),   LALT_T(KC_L), LGUI_T(KC_SCLN), KC_NO,
     KC_NO,         KC_Z, RALT_T(KC_X),         KC_C,         KC_V,    KC_B,                 KC_N,         KC_M,      KC_COMM, RALT_T(KC_DOT),         KC_SLSH, KC_NO,
                                   LT(6,KC_ESC), LT(1,KC_SPC), LT(5,KC_TAB),                 LT(3,KC_ENT), LT(2,KC_BSPC), LT(4,KC_DEL)),

[_LAYER1] = LAYOUT(
    KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                         KC_AGIN, KC_PSTE, KC_COPY, KC_CUT, KC_UNDO, KC_NO,
   KC_NO, KC_LGUI, KC_LALT, KC_LSFT, KC_LCTL , KC_TRNS,                         KC_LEFT, KC_DOWN, KC_UP , KC_RGHT, KC_CAPS, KC_NO,
    KC_NO, KC_NO  , KC_RALT, KC_TRNS, KC_TRNS, KC_TRNS,                         KC_INS , KC_HOME, KC_END, KC_PGUP, KC_PGDN, KC_NO,
                             KC_TRNS, KC_TRNS, KC_TRNS,                         KC_ENT, KC_BSPC, KC_DEL),

[_LAYER2] = LAYOUT(
             KC_NO, KC_LBRC, KC_7, KC_8, KC_9, KC_RBRC,                         KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO,
             KC_NO, KC_SCLN, KC_4, KC_5, KC_6, KC_PEQL,                         KC_TRNS, KC_LCTL, KC_LSFT, KC_LALT, KC_LGUI, KC_NO,
             KC_NO, KC_GRV , KC_1, KC_2, KC_3, KC_BSLS,                         KC_TRNS, KC_TRNS, KC_TRNS, KC_RALT, KC_NO,
                                  KC_NO, KC_QUOT, KC_0,                         KC_MINS, KC_TRNS, KC_TRNS, KC_TRNS),

[_LAYER3] = LAYOUT(
    KC_NO, KC_LCBR, KC_AMPR, KC_ASTR, KC_LPRN, KC_RCBR,                         KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO,
     KC_NO, KC_COLN, KC_DLR, KC_PERC, KC_CIRC, KC_PLUS,                         KC_TRNS, KC_LCTL, KC_LSFT, KC_LALT, KC_LGUI, KC_NO,
      KC_NO, KC_TILD, KC_EXLM, KC_AT, KC_HASH, KC_PIPE,                         KC_TRNS, KC_TRNS, KC_TRNS, KC_RALT, KC_TRNS, KC_NO,
                                      KC_LPRN, KC_RPRN,                         KC_UNDS, KC_TRNS, KC_TRNS, KC_TRNS),

[_LAYER4] = LAYOUT(
           KC_NO, KC_F12, KC_F7, KC_F8, KC_F9, KC_PSCR,                          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO,
           KC_NO, KC_F11, KC_F4, KC_F5, KC_F6, KC_SLCK,                          KC_TRNS, KC_LCTL, KC_LSFT, KC_LALT, KC_LGUI, KC_NO,
           KC_NO, KC_F10, KC_F1, KC_F2, KC_F3, KC_PAUS,                          KC_TRNS, KC_TRNS, KC_TRNS, KC_RALT, KC_TRNS, KC_NO,
                                KC_APP, KC_SPC, KC_TAB,                          KC_TRNS, KC_TRNS, KC_TRNS),

[_LAYER5] = LAYOUT(
    KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                         KC_AGIN, KC_PSTE, KC_COPY, KC_CUT,  KC_UNDO, KC_NO,
    KC_NO, KC_LGUI, KC_LALT, KC_LSFT, KC_LCTL, KC_TRNS,                         KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, KC_TRNS, KC_NO,
    KC_NO, KC_TRNS, KC_RALT, KC_TRNS, KC_TRNS, KC_TRNS,                         KC_TRNS, KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R, KC_NO,
                             KC_TRNS, KC_TRNS, KC_TRNS,                         KC_BTN1, KC_BTN3, KC_BTN2),

[_LAYER6] = LAYOUT(
    KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO,
    KC_NO, KC_LGUI, KC_LALT, KC_LSFT, KC_LCTL, KC_TRNS,                          KC_TRNS, KC_MPRV, KC_VOLD, KC_VOLU, KC_MNXT, KC_NO,
    KC_NO, KC_TRNS, KC_RALT, KC_TRNS, KC_TRNS, KC_TRNS,                          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO,
                             KC_TRNS, KC_TRNS, KC_TRNS,                          KC_MSTP, KC_MPLY, KC_MUTE),

[_LAYER7] = LAYOUT(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS) 

};


