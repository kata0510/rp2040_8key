#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_ortho_2x8(
        KC_P1,  KC_P2,  KC_P3,  KC_P4, KC_P5,  KC_P6,  KC_P7,  KC_P8,
        KC_A,  KC_B,  KC_C,  KC_D, KC_E,  KC_F,  KC_G,  KC_H
    )
};
