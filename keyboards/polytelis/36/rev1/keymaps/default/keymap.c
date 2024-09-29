// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
KC_Q,           KC_W,           KC_F,            KC_R,           KC_T,           KC_Y,           KC_U,           KC_I,            KC_O,           KC_P,
KC_A,           LALT_T(KC_S),   LCTL_T(KC_D),    LGUI_T(KC_E),   KC_G,           KC_H,           RGUI_T(KC_J),   RCTL_T(KC_K),    LALT_T(KC_L),   KC_SCLN,
KC_Z,           KC_X,           KC_C,            KC_V,           KC_B,           KC_N,           KC_M,           KC_COMM,         KC_DOT,         KC_SLSH,
                                LT(1, KC_ESC),   LSFT_T(KC_ENT), LT(2, KC_TAB),  LT(2, KC_BSPC), RSFT_T(KC_SPC), LT(1, KC_MINS)
    /*
     * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┐
     * │ ; │ , │ . │ P │ Q │ Y │ G │ D │ M │ F │
     * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
     * │ A │ O │ E │ I │ U │ B │ N │ T │ R │ S │
     * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
     * │ C │ X │ V │ Z │ W │ H │ J │ K │ L │ / │
     * └───┴───┼───┼───┼───┼───┼───┼───┼───┴───┘
     *         │Esc│Ent│Tab│Bsp│Spc│ - │
     *         └───┴───┴───┴───┴───┴───┘
     */
// KC_Q,           KC_P,           KC_R,            KC_D,           KC_C,           KC_B,           KC_K,           KC_U,            KC_Y,           KC_X,
// KC_A,           LALT_T(KC_T),   LCTL_T(KC_N),    LGUI_T(KC_S),   KC_W,           KC_M,           RGUI_T(KC_H),   RCTL_T(KC_E),    LALT_T(KC_I),   KC_O,
// KC_SCLN,        KC_L,           KC_G,            KC_J,           KC_F,           KC_V,           KC_Z,           KC_COMM,            KC_DOT,        KC_SLSH,
//                                 LT(1, KC_ESC),   LSFT_T(KC_ENT), LT(2, KC_TAB),  LT(2, KC_BSPC), RSFT_T(KC_SPC), LT(1, KC_MINS)
    ),
    [1] = LAYOUT(
KC_1,           KC_2,           KC_3,            KC_4,           KC_5,           KC_6,           KC_7,           KC_8,            KC_9,           KC_0,
KC_F1,          LALT_T(KC_F2),  LCTL_T(KC_F3),   LGUI_T(KC_F4),  KC_F5,          KC_F6,          RGUI_T(KC_F7),  RCTL_T(KC_F8),   LALT_T(KC_F9),  KC_F10,
KC_LNG2,        KC_GRV,         KC_QUOT,         KC_EQL,         KC_F11,         KC_F12,         KC_LBRC,         KC_RBRC,        KC_BSLS,        KC_LNG1,
                                KC_NO,           LSFT_T(KC_NO),  KC_NO,          KC_NO,          RSFT_T(KC_NO),   KC_NO
    ),
    [2] = LAYOUT(
        KC_NO,
        KC_NO,
        KC_NO,
        KC_NO,
        KC_NO,
        KC_NO,
        KC_NO,
        KC_NO,
        KC_NO,
        KC_NO,
        KC_NO,
        KC_NO,
        KC_NO,
        KC_NO,
        KC_NO,
        KC_NO,
        KC_NO,
        KC_NO,
        KC_NO,
        KC_NO,
        KC_NO,
        KC_NO,
        KC_NO,
        KC_NO,
        KC_NO,
        KC_NO,
        KC_NO,
        KC_NO,
        KC_NO,
        KC_NO,
        KC_NO,
        KC_NO,
        KC_NO,
        KC_NO,
        KC_NO,
        KC_NO
    )
};
