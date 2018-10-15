#include QMK_KEYBOARD_H

extern keymap_config_t keymap_config;

enum iris_layers {
  _QWERTY,
  _LOWER,
  _RAISE
};

#define RAISE MO(_RAISE)


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_QWERTY] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
  //|   `/~  |   1    |   2    |   3    |    4   |    5   |                          |    6   |   7    |   8    |   9    |   0    |   _/-  |
      KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                               KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
  //|  TAB   |   Q    |   W    |   E    |    R   |    T   |                          |    Y   |   U    |   I    |   O    |   P    |   +/=  |
      KC_TAB,   KC_Q,     KC_W,     KC_E,   KC_R,    KC_T,                               KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,   KC_EQL,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
  //| RAISE  |   A    |   S    |   D    |    F   |    G   |                          |    H   |   J    |   K    |   L    |   :/;  |   "/'  |
      RAISE,   KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                               KC_H,    KC_J,    KC_K,    KC_L,   KC_SCLN, KC_QUOT,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
  //| SHIFT  |   Z    |   X    |   C    |    V   |    B   |   ESC  |        | ALT    |    N   |   M    |   </,  |  >/.   |  ?-/   |   |-\  |
      KC_LSFT,   KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,   KC_ESC,            KC_LALT,  KC_N,    KC_M,  KC_COMM, KC_DOT,   KC_SLSH, KC_BSLS,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
  //                                COMMAND | BKSPACE | SPACE |                 | SPACE  |  ENTER |  CTRL  |
                                     KC_LGUI, KC_BSPC, KC_SPC,                    KC_SPC,  KC_ENT,  KC_LCTL
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),
//KC_LALT  ALT
  [_RAISE] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
  //|  `/~   |   F1   |   F2   |   F3   |    F4  |   F5   |                          |   F6   |   F7   |   F8   |   F9   |   F10  |   F11  |
     KC_TRNS,  KC_F1,    KC_F2,  KC_F3,   KC_F4,   KC_F5,                              KC_F6,    KC_F7,   KC_F8,  KC_F9,   KC_F10,  KC_F11,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
  //|  TAB   |    !   |    @   |   {    |   }    |    |   |                          |        |        |   ↑    |        |        |   F12  |
     KC_TRNS, KC_EXLM,   KC_AT,  KC_LCBR, KC_RCBR, KC_PIPE,                           XXXXXXX, XXXXXXX,  KC_UP,  XXXXXXX, XXXXXXX, KC_F12,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
  //|  RAISE |    #   |    $   |   (    |   )    |    `   |                          |   ?    |    ←   |   ↓    |    →   |        |  VOLUP |
      KC_TRNS,  KC_HASH, KC_DLR, KC_LPRN, KC_RPRN,  KC_GRV,                            KC_QUES, KC_LEFT,KC_DOWN, KC_RGHT, XXXXXXX,  KC__VOLUP,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
  //| SHIFT  |    %   |    ^   |   [    |   ]    |    ~   |  ESC            | ALT  |    &   |        |        |        |  MUTE  |  VOLDN |
     KC_TRNS, KC_PERC, KC_CIRC, KC_LBRC, KC_RBRC, KC_TILD,  KC_TRNS,          KC_TRNS, KC_AMPR, XXXXXXX, XXXXXXX,XXXXXXX, KC__MUTE,KC__VOLDOWN,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
  //                               |COMMAND | BKSPACE|  SPACE |                 | SPACE  |  ENTER |  CTRL  |
                                    KC_TRNS, KC_TRNS, KC_TRNS,                   KC_TRNS,  KC_TRNS, KC_TRNS
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

};
