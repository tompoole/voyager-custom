#include QMK_KEYBOARD_H
#include "version.h"
#define MOON_LED_LEVEL LED_LEVEL
#define ML_SAFE_RANGE SAFE_RANGE

enum custom_keycodes {
  RGB_SLD = ML_SAFE_RANGE,
  ST_MACRO_0,
  ST_MACRO_1,
  ST_MACRO_2,
  ST_MACRO_3,
};



enum tap_dance_codes {
  DANCE_0,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_voyager(
    KC_EQUAL,       KC_1,           KC_2,           KC_3,           KC_4,           KC_5,                                           KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_NUBS,        
    KC_TAB,         KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,                                           KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_MINUS,       
    OSM(MOD_LSFT),  KC_A,           MT(MOD_LALT, KC_S),MT(MOD_LCTL, KC_D),MT(MOD_LSFT, KC_F),KC_G,                                           KC_H,           MT(MOD_RSFT, KC_J),MT(MOD_RCTL, KC_K),MT(MOD_RALT, KC_L),KC_SCLN,        KC_QUOTE,       
    OSM(MOD_LCTL),  MT(MOD_LGUI, KC_Z),KC_X,           KC_C,           KC_V,           KC_B,                                           KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       KC_GRAVE,       
                                                    LT(1,KC_BSPC),  TT(3),                                          LT(2,KC_ENTER), LT(1,KC_SPACE)
  ),
  [1] = LAYOUT_voyager(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_LPRN,        KC_RPRN,        KC_NO,                                          KC_NO,          KC_EXLM,        KC_QUES,        KC_NO,          KC_NO,          KC_NO,          
    KC_BSPC,        KC_LBRC,        KC_RBRC,        KC_LCBR,        KC_RCBR,        KC_DQUO,                                        KC_QUOTE,       KC_EQUAL,       KC_PLUS,        KC_MINUS,       KC_UNDS,        KC_GRAVE,       
    KC_NO,          KC_NO,          KC_NO,          KC_LABK,        KC_RABK,        KC_NO,                                          KC_NO,          KC_BSLS,        KC_SLASH,       KC_ASTR,        ST_MACRO_1,     KC_TILD,        
                                                    KC_TRANSPARENT, QK_LLCK,                                        QK_LLCK,        OSM(MOD_LSFT)
  ),
  [2] = LAYOUT_voyager(
    RGB_TOG,        RGB_VAD,        RGB_VAI,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_AUDIO_MUTE,  KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, QK_BOOT,        
    KC_TRANSPARENT, KC_NO,          KC_HOME,        KC_UP,          KC_END,         KC_PAGE_UP,                                     KC_AUDIO_VOL_UP,KC_PSCR,        KC_TRANSPARENT, KC_BRIGHTNESS_DOWN,KC_BRIGHTNESS_UP,LALT(KC_F8),    
    CW_TOGG,        KC_ESCAPE,      KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_PGDN,                                        KC_AUDIO_VOL_DOWN,KC_LEFT_SHIFT,  KC_LEFT_CTRL,   KC_LEFT_ALT,    KC_LEFT_GUI,    KC_TAB,         
    KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_APPLICATION, KC_NO,                                          KC_TRANSPARENT, KC_MEDIA_PREV_TRACK,KC_MEDIA_PLAY_PAUSE,KC_MEDIA_NEXT_TRACK,LGUI(KC_L),     LALT(LCTL(KC_DELETE)),
                                                    KC_DELETE,      QK_LLCK,                                        KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [3] = LAYOUT_voyager(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_F1,          KC_F2,          KC_F3,          TD(DANCE_0),    KC_F5,                                          KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11,         
    KC_NO,          KC_1,           KC_2,           KC_3,           KC_4,           KC_5,                                           KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_F12,         
    KC_NO,          KC_NO,          OSM(MOD_LGUI),  OSM(MOD_LCTL),  OSM(MOD_LALT),  KC_NO,                                          ST_MACRO_2,     ST_MACRO_3,     KC_COMMA,       KC_DOT,         KC_ENTER,       KC_NO,          
                                                    KC_BSPC,        KC_TRANSPARENT,                                 KC_ENTER,       KC_SPACE
  ),
  [4] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_7,           KC_8,           KC_9,           KC_MINUS,       KC_SLASH,       
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_4,           KC_5,           KC_6,           KC_PLUS,        KC_ASTR,        
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_0,           KC_1,           KC_2,           KC_3,           KC_DOT,         KC_ENTER,       
                                                    KC_BSPC,        TO(0),                                          KC_ENTER,       KC_0
  ),
  [5] = LAYOUT_voyager(
    TO(0),          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_MS_WH_UP,    KC_MS_UP,       KC_MS_WH_DOWN,  KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_ACCEL0,   KC_MS_ACCEL1,   KC_MS_ACCEL2,   KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_RIGHT,    KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_MS_WH_LEFT,  KC_TRANSPARENT, KC_MS_WH_RIGHT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    TO(0),          KC_MS_BTN1,                                     KC_MS_BTN2,     KC_MS_BTN3
  ),
};

const uint16_t PROGMEM combo0[] = { KC_R, KC_T, COMBO_END};
const uint16_t PROGMEM combo1[] = { KC_C, KC_V, COMBO_END};
const uint16_t PROGMEM combo2[] = { KC_COMMA, KC_SLASH, COMBO_END};
const uint16_t PROGMEM combo3[] = { KC_M, KC_COMMA, COMBO_END};
const uint16_t PROGMEM combo4[] = { MT(MOD_LCTL, KC_D), MT(MOD_LSFT, KC_F), COMBO_END};
const uint16_t PROGMEM combo5[] = { MT(MOD_RSFT, KC_J), MT(MOD_RCTL, KC_K), COMBO_END};
const uint16_t PROGMEM combo6[] = { TO(0), KC_ENTER, COMBO_END};
const uint16_t PROGMEM combo7[] = { KC_SLASH, KC_GRAVE, COMBO_END};
const uint16_t PROGMEM combo8[] = { KC_DOT, KC_SLASH, COMBO_END};
const uint16_t PROGMEM combo9[] = { TT(3), LT(2,KC_ENTER), COMBO_END};
const uint16_t PROGMEM combo10[] = { LT(1,KC_BSPC), LT(1,KC_SPACE), COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    COMBO(combo0, LALT(KC_SPACE)),
    COMBO(combo1, LALT(LGUI(KC_V))),
    COMBO(combo2, TG(4)),
    COMBO(combo3, ST_MACRO_0),
    COMBO(combo4, KC_ESCAPE),
    COMBO(combo5, KC_TAB),
    COMBO(combo6, TO(0)),
    COMBO(combo7, KC_F24),
    COMBO(combo8, KC_F23),
    COMBO(combo9, TO(4)),
    COMBO(combo10, TO(5)),
};

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case OSM(MOD_LSFT):
            return TAPPING_TERM -50;
        case MT(MOD_LGUI, KC_Z):
            return TAPPING_TERM + 10;
        case KC_V:
            return TAPPING_TERM + 50;
        case LT(1,KC_BSPC):
            return TAPPING_TERM -20;
        case MT(MOD_RCTL, KC_K):
            return TAPPING_TERM + 50;
        case MT(MOD_RALT, KC_L):
            return TAPPING_TERM + 50;
        case LT(2,KC_ENTER):
            return TAPPING_TERM -20;
        case LT(1,KC_SPACE):
            return TAPPING_TERM -20;
        default:
            return TAPPING_TERM;
    }
}

extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [0] = { {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255} },

    [1] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {41,255,255}, {41,255,255}, {0,0,0}, {0,245,245}, {139,255,255}, {139,255,255}, {219,255,255}, {219,255,255}, {139,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {219,255,255}, {219,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {41,255,255}, {41,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {139,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {74,255,255}, {0,0,0}, {74,255,255}, {74,255,255}, {74,255,255}, {214,218,204}, {74,255,255}, {0,0,255}, {0,0,0} },

    [2] = { {0,0,255}, {145,57,250}, {145,57,250}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {74,255,255}, {169,255,255}, {74,255,255}, {214,218,204}, {0,0,255}, {0,0,0}, {169,255,255}, {169,255,255}, {169,255,255}, {214,218,204}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,0}, {0,245,245}, {0,0,255}, {0,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,245,245}, {169,255,255}, {131,255,255}, {0,0,0}, {41,255,255}, {41,255,255}, {0,0,255}, {169,255,255}, {101,255,255}, {101,255,255}, {101,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {203,218,204}, {74,255,255}, {203,218,204}, {0,255,255}, {0,255,255}, {0,0,0}, {0,0,0} },

    [3] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {0,0,0}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,0}, {0,245,245}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {41,255,255}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,255}, {74,255,255}, {0,0,0}, {74,255,255}, {0,0,255} },

    [4] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,245,245}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {131,255,255}, {131,255,255}, {131,255,255}, {74,255,255}, {74,255,255}, {0,0,0}, {131,255,255}, {131,255,255}, {131,255,255}, {74,255,255}, {74,255,255}, {0,0,0}, {131,255,255}, {131,255,255}, {131,255,255}, {74,255,255}, {0,0,255}, {0,0,255}, {131,255,255} },

    [5] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,157}, {0,0,157}, {0,0,157}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {31,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {253,218,204}, {0,0,0}, {39,218,204}, {43,255,255}, {39,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {43,255,255}, {43,255,255}, {43,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {39,218,204}, {0,0,0}, {39,218,204}, {0,0,0}, {0,0,0}, {31,218,204}, {31,218,204} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb( hsv );
        float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
        rgb_matrix_set_color( i, f * rgb.r, f * rgb.g, f * rgb.b );
    }
  }
}

bool rgb_matrix_indicators_user(void) {
  if (rawhid_state.rgb_control) {
      return false;
  }
  if (keyboard_config.disable_layer_led) { return false; }
  switch (biton32(layer_state)) {
    case 0:
      set_layer_color(0);
      break;
    case 1:
      set_layer_color(1);
      break;
    case 2:
      set_layer_color(2);
      break;
    case 3:
      set_layer_color(3);
      break;
    case 4:
      set_layer_color(4);
      break;
    case 5:
      set_layer_color(5);
      break;
   default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
  return true;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case ST_MACRO_0:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_SPACE))SS_DELAY(100)  SS_TAP(X_COMMA));
    }
    break;
    case ST_MACRO_1:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_1) SS_TAP(X_KP_6) SS_TAP(X_KP_3) ));
    }
    break;
    case ST_MACRO_2:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_1)SS_DELAY(20)  SS_TAP(X_6)SS_DELAY(20)  SS_TAP(X_1)SS_DELAY(20)  SS_TAP(X_9));
    }
    break;
    case ST_MACRO_3:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_DOT)SS_DELAY(20)  SS_TAP(X_DOT)SS_DELAY(20)  SS_TAP(X_DOT)SS_DELAY(20)  SS_TAP(X_DOT)  SS_DELAY(20) SS_TAP(X_ENTER));
    }
    break;

    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
  }
  return true;
}


typedef struct {
    bool is_press_action;
    uint8_t step;
} tap;

enum {
    SINGLE_TAP = 1,
    SINGLE_HOLD,
    DOUBLE_TAP,
    DOUBLE_HOLD,
    DOUBLE_SINGLE_TAP,
    MORE_TAPS
};

static tap dance_state[1];

uint8_t dance_step(tap_dance_state_t *state);

uint8_t dance_step(tap_dance_state_t *state) {
    if (state->count == 1) {
        if (state->interrupted || !state->pressed) return SINGLE_TAP;
        else return SINGLE_HOLD;
    } else if (state->count == 2) {
        if (state->interrupted) return DOUBLE_SINGLE_TAP;
        else if (state->pressed) return DOUBLE_HOLD;
        else return DOUBLE_TAP;
    }
    return MORE_TAPS;
}


void on_dance_0(tap_dance_state_t *state, void *user_data);
void dance_0_finished(tap_dance_state_t *state, void *user_data);
void dance_0_reset(tap_dance_state_t *state, void *user_data);

void on_dance_0(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_F4);
        tap_code16(KC_F4);
        tap_code16(KC_F4);
    }
    if(state->count > 3) {
        tap_code16(KC_F4);
    }
}

void dance_0_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[0].step = dance_step(state);
    switch (dance_state[0].step) {
        case SINGLE_TAP: register_code16(KC_F4); break;
        case DOUBLE_TAP: register_code16(LALT(KC_F4)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_F4); register_code16(KC_F4);
    }
}

void dance_0_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[0].step) {
        case SINGLE_TAP: unregister_code16(KC_F4); break;
        case DOUBLE_TAP: unregister_code16(LALT(KC_F4)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_F4); break;
    }
    dance_state[0].step = 0;
}

tap_dance_action_t tap_dance_actions[] = {
        [DANCE_0] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_0, dance_0_finished, dance_0_reset),
};
