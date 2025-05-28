#include QMK_KEYBOARD_H

// clang-format off

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_split_3x5_3(
     KC_QUOT, KC_COMM, KC_DOT, KC_P, KC_Y,                                              KC_F, KC_G, KC_C, KC_R, KC_L,
     KC_A, KC_O, KC_E, KC_U, KC_I,                                                      KC_D, KC_H, KC_T, KC_N, KC_S,
     LGUI_T(KC_SCLN), LALT_T(KC_Q), LCTL_T(KC_J), LSFT_T(KC_K), RALT_T(KC_X),           RALT_T(KC_B), RSFT_T(KC_M), RCTL_T(KC_W), LALT_T(KC_V), RGUI_T(KC_Z),
     KC_NO, LT(1,KC_SPC), LT(2,KC_TAB),                                                 LT(2,KC_BSPC), LT(1,KC_SPC), KC_NO),
    [1] = LAYOUT_split_3x5_3(
     KC_F1, KC_F2, KC_F3, KC_F4, KC_F5,                                                 KC_F6, KC_F7, KC_F8, KC_F9, KC_F10,
     KC_1, KC_2, KC_3, KC_4, KC_5,                                                      KC_6, KC_7, KC_8, KC_9, KC_0,
     LGUI_T(KC_F11), LALT_T(KC_F12), LCTL_T(KC_LBRC), LSFT_T(KC_RBRC), RALT_T(KC_SLSH), RALT_T(KC_BSLS), RSFT_T(KC_MINS), RCTL_T(KC_EQL), LALT_T(KC_GRV), RGUI_T(KC_NO),
     KC_NO, KC_ENT, KC_TAB,                                                             KC_BSPC, KC_ENT, KC_NO),
    [2] = LAYOUT_split_3x5_3(
     KC_NO, KC_BRIU, KC_MNXT, KC_VOLU, KC_MPLY,                                         KC_HOME, KC_PGUP, KC_UP, KC_PGDN, KC_END,
     KC_NO, KC_BRID, KC_MPRV, KC_VOLD, KC_MSTP,                                         KC_NO, KC_LEFT, KC_DOWN, KC_RGHT, KC_NO,
     LGUI_T(KC_NO), LALT_T(KC_NO), LCTL_T(KC_NO), LSFT_T(KC_MUTE), RALT_T(KC_NO),       RALT_T(KC_PSCR), RSFT_T(KC_SCRL), RCTL_T(KC_BRK), LALT_T(KC_NUM), RGUI_T(KC_INS),
     KC_NO, KC_SPC, KC_TAB,                                                             KC_DEL, KC_SPC, KC_NO)
};

#include "combos.i"
