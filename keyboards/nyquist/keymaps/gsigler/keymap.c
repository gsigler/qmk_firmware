#include QMK_KEYBOARD_H

extern keymap_config_t keymap_config;

enum iris_layers {
  _QWERTY,
  _LOWER,
  _RAISE
};

#define LOWER MO(_LOWER)
#define RAISE MO(_RAISE)


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_QWERTY] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐            ┌────────┬────────┬────────┬────────┬────────┬────────┐
  //|   ESC  |   1    |   2    |   3    |    4   |    5   |            |    6   |   7    |   8    |   9    |   0    | BKSPACE|
    GRAVE_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                  KC_6,    KC_7,    KC_8,    KC_9,    KC_0,   KC_BSPC,
  //├────────┼────────┼────────┼────────┼────────┼────────┤            ├────────┼────────┼────────┼────────┼────────┼────────┤
  //|  TAB   |   Q    |   W    |   E    |    R   |    T   |            |    Y   |   U    |   I    |   O    |   P    |  "/'   |
     KC_TAB,   KC_Q,     KC_W,     KC_E,   KC_R,    KC_T,                  KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,  KC_QUOT,
  //├────────┼────────┼────────┼────────┼────────┼────────┤            ├────────┼────────┼────────┼────────┼────────┼────────┤
  //| RAISE  |   A    |   S    |   D    |    F   |    G   |            |    H   |   J    |   K    |   L    |   :/;  | ENTER  |
      RAISE,   KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                   KC_H,    KC_J,    KC_K,    KC_L,   KC_SCLN, KC_ENT,
  //├────────┼────────┼────────┼────────┼────────┼────────|            ┌────────┼────────┼────────┼────────┼────────┼────────|
  //| SHIFT  |   Z    |   X    |   C    |    V   |    B   |            |    N   |   M    |   </,  |  >/.   |  ?-/   |   |-\  |
     KC_LSFT,   KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                 KC_N,    KC_M,  KC_COMM, KC_DOT,   KC_SLSH, KC_BSLS,
  //├────────┼────────┼────────┼────────┼────────┼────────|            ┌────────┼────────┼────────┼────────┼────────┼────────┤
  //   LOWER |  CTRL  |   ALT  |COMMAND | SPACE  | SPACE  |            | SPACE  |  SPACE |   ←    |   ↓    |   ↑    |    →   |
       LOWER,  KC_LCTL, KC_LALT,KC_LGUI,  KC_SPC,  KC_SPC,               KC_SPC,   KC_SPC, KC_LEFT, KC_DOWN,  KC_UP,  KC_RGHT
  //└────────┴────────┴────────┴────────┴────────┴────────┘            └────────┴────────┴────────┴────────┴────────┴────────┘
  ),
/// 
  [_RAISE] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐             ┌────────┬────────┬────────┬────────┬────────┬────────┐
  //|        |   F1   |   F2   |   F3   |    F4  |   F5   |             |   F6   |   F7   |   F8   |   F9   |   F10  |   F11  |
     XXXXXXX,  KC_F1,    KC_F2,  KC_F3,   KC_F4,   KC_F5,                  KC_F6,    KC_F7,   KC_F8,  KC_F9,   KC_F10,  KC_F11,
  //├────────┼────────┼────────┼────────┼────────┼────────┤             ├────────┼────────┼────────┼────────┼────────┼────────┤
  //|        |    !   |    @   |   {    |   }    |        |             |        |   |    |   \    |    /   |        |   F12  |
     XXXXXXX, KC_EXLM,   KC_AT,  KC_LCBR, KC_RCBR, XXXXXXX,              XXXXXXX, KC_PIPE, KC_BSLS,  KC_SLSH, XXXXXXX, KC_F12,
  //├────────┼────────┼────────┼────────┼────────┼────────┤             ├────────┼────────┼────────┼────────┼────────┼────────┤
  //|  RAISE |    #   |    $   |   (    |   )    |    `   |             |   ?    |    =   |    +   |   -    |    _  |        |
      KC_TRNS,  KC_HASH, KC_DLR, KC_LPRN, KC_RPRN,  KC_GRV,               KC_QUES, KC_EQUAL,KC_PLUS, KC_MINS, KC_UNDS, XXXXXXX,
  //├────────┼────────┼────────┼────────┼────────┼────────┤             ├────────┼────────┼────────┼────────┼────────┼────────┤
  //|        |    %   |    ^   |   [    |   ]    |    ~   |             |    &   |    "    |  '    |    <   |    >   |        |
     XXXXXXX, KC_PERC, KC_CIRC, KC_LBRC, KC_RBRC, KC_TILD,                KC_AMPR, KC_QUOT, KC_QUOT,  KC_LT,  KC_GT, XXXXXXX,
  //├────────┼────────┼────────┼────────┼────────┼────────|             ┌────────┼────────┼────────┼────────┼────────┼────────┤
  //         |  CTRL  |   ALT  |COMMAND | SPACE  | SPACE  |               SPACE  |        |        |        |        |        |
     XXXXXXX,  KC_TRNS, KC_TRNS,KC_TRNS,  XXXXXXX,  KC_SPC,              KC_SPC, XXXXXXX, XXXXXXX, XXXXXXX,  XXXXXXX, XXXXXXX
  //└────────┴────────┴────────┴────────┴────────┴────────┘             └────────┴────────┴────────┴────────┴────────┴────────┘
  ),
// KC_EQUAL    KC_MINS   -  KC_UNDS  _  
  [_LOWER] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐              ┌────────┬────────┬────────┬────────┬────────┬────────┐
  //|        |        |        |        |        |        |              |        |        |        |        |        |        |
     KC_ASUP, KC_ASON, KC_ASRP,  XXXXXXX, XXXXXXX, XXXXXXX,                XXXXXXX, XXXXXXX, XXXXXXX,  XXXXXXX, XXXXXXX, XXXXXXX,
  //├────────┼────────┼────────┼────────┼────────┼────────┤              ├────────┼────────┼────────┼────────┼────────┼────────┤
  //|        |        |        |        |        |        |              |        |        |        |        |        |        |
     KC_ASDN, KC_ASOFF, XXXXXXX, XXXXXXX, XXXXXXX,  XXXXXXX,               XXXXXXX, XXXXXXX,XXXXXXX, XXXXXXX,  XXXXXXX, XXXXXXX,
  //├────────┼────────┼────────┼────────┼────────┼────────┤              ├────────┼────────┼────────┼────────┼────────┼────────┤
  //|        |        |        |        |        |        |              |        |   ←    |   ↓    |  ↑     |  →     |        |
     XXXXXXX, KC_ASTG, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                XXXXXXX, KC_LEFT, KC_DOWN,  KC_UP,  KC_RGHT, XXXXXXX,
  //├────────┼────────┼────────┼────────┼────────┼────────┼              ├────────┼────────┼────────┼────────┼────────┼────────┤
  //|        |        |        |        |        |        |              |        |        |        |        |        |        |
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //├────────┼────────┼────────┼────────┼────────┼────────|              ┌────────┼────────┼────────┼────────┼────────┼────────┤
  //   LOWER |  CTRL  |   ALT  |COMMAND |        | SPACE  |                SPACE  |        |        |        |        |        |
     KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, XXXXXXX,  KC_SPC,                KC_SPC, XXXXXXX, XXXXXXX, XXXXXXX,  XXXXXXX,  XXXXXXX
  //└────────┴────────┴────────┴────────┴────────┴────────┘               └────────┴────────┴────────┴────────┴────────┴────────┘
  ),

};
