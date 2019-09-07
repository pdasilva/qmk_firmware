#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT_ortho_5x15(KC_GESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_GRV, KC_BSLS, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_LBRC, KC_RBRC, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSPC, KC_BSPC, LCTL_T(KC_ESC), KC_A, KC_S, KC_D, KC_F, KC_G, KC_ENT, KC_ENT, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT, KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_RSFT, KC_RSFT, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, RSFT_T(KC_QUOT), RSFT_T(KC_QUOT), MEH_T(KC_ESC), KC_LCTL, KC_LALT, KC_LGUI, KC_SPC, KC_SPC, MO(2), MO(1), KC_SPC, KC_SPC, KC_RGUI, KC_RALT, KC_RCTL, KC_BSLS, KC_GRV),
	[1] = LAYOUT_ortho_5x15(KC_GESC, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_F13, KC_F14, RGB_M_P, RGB_M_B, RGB_M_R, RGB_M_SW, RGB_M_SN, RGB_M_K, KC_NO, KC_NO, RGB_M_X, RGB_M_G, KC_NO, KC_NO, KC_NO, KC_DEL, KC_DEL, BL_TOGG, BL_STEP, BL_INC, BL_DEC, BL_BRTG, KC_NO, KC_NO, KC_NO, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_NO, KC_NO, KC_NO, BL_ON, BL_OFF, RGB_SPI, RGB_SPD, RGB_HUI, RGB_HUD, RGB_SAI, RGB_SAD, RGB_VAI, RGB_VAD, KC_NO, KC_NO, KC_MRWD, KC_MPLY, KC_MFFD, RGB_TOG, RGB_MOD, RGB_RMOD, KC_NO, RESET, KC_LGUI, KC_TRNS, KC_TRNS, KC_LGUI, RESET, KC_NO, KC_NO, KC__MUTE, KC__VOLDOWN, KC__VOLUP),
	[2] = LAYOUT_ortho_5x15(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_BTN1, KC_BTN2, KC_BTN3, KC_NO, KC_NO, KC_NO, KC_NO, LGUI(KC_Q), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_ACL0, KC_ACL1, KC_ACL2, KC_NO, KC_DEL, KC_DEL, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R, KC_NO, KC_NO, KC_NO, KC_NO, LGUI(KC_Z), LGUI(KC_X), LGUI(KC_C), LGUI(KC_V), KC_NO, KC_NO, KC_NO, KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, KC_NO, KC_PGUP, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, LGUI(KC_SPC), KC_TRNS, KC_TRNS, LGUI(KC_SPC), KC_NO, KC_NO, KC_NO, KC_HOME, KC_PGDN, KC_END)
};