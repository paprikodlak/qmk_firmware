// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┐
     * │ A │ B │ C │
     * ├───┼───┼───┤
     * │ D │ E │ F │
     * ├───┼───┼───┤
     * │ G │ H │ I │
     * └───┴───┴───┘
     */
    [0] = LAYOUT_ortho_4x3(
        KC_A,
        KC_B,    KC_C,    KC_D,
        KC_E,    KC_F,    KC_G,
        KC_H,    KC_I,    KC_J
    )
    // [0] = LAYOUT_ortho_4x3(
    //     KC_A,
    //     RGB_MOD,    RGB_HUI,    BL_STEP,
    //     RGB_M_T,    KC_E,    KC_F,
    //     KC_G,    KC_H,    KC_I
    // )
};

#ifdef OLED_ENABLE

// Rotate OLED
// oled_rotation_t oled_init_user(oled_rotation_t rotation) {
//     return OLED_ROTATION_90;  
// }

// Draw to OLED
bool oled_task_user() {
    // Set cursor position
    oled_set_cursor(0, 1);
    
    // Write text to OLED
    oled_write("Hello World!", false);
    
    return false;
}

#endif