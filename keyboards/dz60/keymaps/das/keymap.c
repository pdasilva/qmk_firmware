#include QMK_KEYBOARD_H
// #include "quantum.h"
// #include "action_layer.h"

// Make special keycodes more visible
#define ____ KC_TRNS
#define _____ KC_TRNS
#define XXXX KC_NO
#define XXXXX KC_NO


// Layer definition
#define L0 0
#define L1 1
#define L2 2

// Custom #defined keycodes (shorter macros for readability)
// #define KC_CTES CTL_T(KC_ESC)
// #define KC_RSUP RSFT_T(KC_UP)
// #define KC_RGLT RGUI_T(KC_LEFT)
// #define KC_RADN RALT_T(KC_DOWN)
// #define KC_RCRT RCTL_T(KC_RIGHT)


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  /* Base layer
   * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┐
   * │Esc│ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │ - │ = │ \ │ ` │
   * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┤
   * │ Tab │ Q │ W │ E │ R │ T │ Y │ U │ I │ O │ P │ [ │ ] │Bspc │
   * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴─────┤
   * │ LCtl │ A │ S │ D │ F │ G │ H │ J │ K │ L │ ; │ ' │ Enter  │
   * ├──────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴────┬───┤
   * │Shift   │ Z │ X │ C │ V │ B │ N │ M │ , │ . │ / │ RShft│Del│
   * ├────┬───┴┬──┴─┬─┴───┴──┬┴───┼───┴───┴──┬┴───┼───┴┬────┬┴───┤
   * │LCtl│LAlt│LGui│ Space  │ Fn1│  Space   │RGui│RAlt│RCtl│ Fn2│
   * └────┴────┴────┴────────┴────┴──────────┴────┴────┴────┴────┘
  */
  [L0] = LAYOUT_65_split_space_bs_rshift( \
    KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSLS, KC_GRV,  \
    KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSPC,          \
    KC_LCTL,          KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT,           \
    KC_LSFT,          KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, KC_DEL,           \
    KC_LCTL, KC_LALT, KC_LGUI,                 KC_SPC,    MO(1),          KC_SPC,                      KC_LGUI, KC_LALT, KC_LCTL,  MO(2)   \
  ),


  /* Function layer 1
   * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┐
   * │ ` │F1 │F2 │F3 │F4 │F5 │F6 │F7 │F8 │F9 │F10│F11│Prv│Ply│Nxt│
   * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┤
   * │     │   │M↑ │   │   │   │   │   │   │   │   │   │   │Del  │
   * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴─────┤
   * │      │M← │M↓ │M→ │MW↑│Hom│ ← │ ↓ │ ↑ │ → │End│   │        │
   * ├──────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴────┬───┤
   * │        │   │   │MW←│MW→│   │   │   │   │   │   │      │   │
   * ├────┬───┴┬──┴─┬─┴───┴──┬┴───┼───┴───┴──┬┴───┼───┴┬────┬┴───┤
   * │LCtl│LAlt│LGui│  MW↓   │    │          │Mute│Vol-│Vol+│ Fn │
   * └────┴────┴────┴────────┴────┴──────────┴────┴────┴────┴────┘
  */
  [L1] = LAYOUT_65_split_space_bs_rshift( \
    KC_GRV, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,    KC_F11, KC_MPRV, KC_MPLY, KC_MNXT,  \
    _____,  _____, KC_MS_U,   _____,   _____,   _____,   _____,   _____,   _____,   _____,   _____,      _____,   _____, KC_DEL,            \
    _____,         KC_MS_L, KC_MS_D, KC_MS_R, KC_WH_U, KC_HOME, KC_LEFT, KC_DOWN,    KC_UP, KC_RIGHT,   KC_END,    _____, _____,            \
    _____,           _____, KC_WH_L, KC_WH_R,  _____,      _____,    _____,    _____,     _____,    _____,     _____,    _____,   _____,    \
    KC_LCTL, KC_LALT, KC_LGUI,                 KC_WH_D,     _____,           _____,                      KC_MUTE, KC_VOLD, KC_VOLU,  _____  \
  ),


  /* Function layer 2
   * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┐
   * │Esc│ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │ - │ = │ \ │ ` │
   * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┤
   * │ Tab │ Q │ W │ E │ R │ T │ Y │ U │ I │ O │ P │ [ │ ] │Bspc │
   * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴─────┤
   * │ LCtl │ A │ S │ D │ F │ G │ H │ J │ K │ L │ ; │ ' │ Enter  │
   * ├──────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴────┬───┤
   * │Shift   │ Z │ X │ C │ V │ B │ N │ M │ , │ . │ / │RBGTOG│BLt│
   * ├────┬───┴┬──┴─┬─┴───┴──┬┴───┼───┴───┴──┬┴───┼───┴┬────┬┴───┤
   * │LCtl│LAlt│LGui│ Space  │RST │          │Mute│Vol-│Vol+│    │
   * └────┴────┴────┴────────┴────┴──────────┴────┴────┴────┴────┘
  */
  [L2] = LAYOUT_65_split_space_bs_rshift( \
    RESET,  ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____, ____,  ____, KC_GRV,  \
    ____,  ____,     ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____, ____, KC_BSPC,        \
    ____,            ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____, ____, KC_ENT,         \
    ____,            ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____, ____,  ____, RGB_TOG, BL_TOGG,          \
    ____, ____, ____,                 ____,   RESET,             ____,                      KC_MUTE, KC_VOLD, KC_VOLU,  ____      \
  )

};
