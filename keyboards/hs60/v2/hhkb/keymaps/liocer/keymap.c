/* Copyright 2018 Yiancar
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include QMK_KEYBOARD_H

//This is the HHKB version of the PCB

// custom keycodes.
enum my_keycodes {
    AF_1 = SAFE_RANGE,
    AF_2,
    AF_3,
    AF_4,
    AF_5,
    AF_6,
    AF_7,
    AF_E,
    AF_R
};

bool RAF_1 = false;
bool RAF_2 = false;
bool RAF_3 = false;
bool RAF_4 = false;
bool RAF_5 = false;
bool RAF_6 = false;
bool RAF_7 = false;
bool RAF_E = false;
bool RAF_R = false;

static uint16_t key_timer;

#define REPEAT_DELAY 200
#define REPEAT_TERM 70

void keyboard_post_init_user(void) {
    debug_enable=false;
    debug_matrix=false;
}


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case AF_1:
            if (record->event.pressed) {
                RAF_1 = true;
                key_timer = timer_read();
                tap_code16(KC_1);
            } else {
                RAF_1 = false;
            }
            break;
        case AF_2:
            if (record->event.pressed) {
                RAF_2 = true;
                key_timer = timer_read();
                tap_code16(KC_2);
            } else {
                RAF_2 = false;
            }
            break;
        case AF_3:
            if (record->event.pressed) {
                RAF_3 = true;
                key_timer = timer_read();
                tap_code16(KC_3);
            } else {
                RAF_3 = false;
            }
            break;
        case AF_4:
            if (record->event.pressed) {
                RAF_4 = true;
                key_timer = timer_read();
                tap_code16(KC_4);
            } else {
                RAF_4 = false;
            }
            break;
        case AF_5:
            if (record->event.pressed) {
                RAF_5 = true;
                key_timer = timer_read();
                tap_code16(KC_5);
            } else {
                RAF_5 = false;
            }
            break;
        case AF_6:
            if (record->event.pressed) {
                RAF_6 = true;
                key_timer = timer_read();
                tap_code16(KC_6);
            } else {
                RAF_6 = false;
            }
            break;
        case AF_7:
            if (record->event.pressed) {
                RAF_7 = true;
                key_timer = timer_read();
                tap_code16(KC_7);
            } else {
                RAF_7 = false;
            }
            break;
        case AF_E:
            if (record->event.pressed) {
                RAF_E = true;
                key_timer = timer_read();
                tap_code16(KC_E);
            } else {
                RAF_E = false;
            }
            break;
        case AF_R:
            if (record->event.pressed) {
                RAF_R = true;
                key_timer = timer_read();
                tap_code16(KC_R);
            } else {
                RAF_R = false;
            }
            break;
    }
    return true;
}


// matrix scan is called on every scan
void matrix_scan_user(void) {
    if (RAF_1) {
        if (timer_elapsed(key_timer) > REPEAT_DELAY) {
            tap_code(KC_1);
            key_timer = timer_read();
        }
    } else if (RAF_2){
        if (timer_elapsed(key_timer) > REPEAT_DELAY) {
            tap_code(KC_2);
            key_timer = timer_read();
        }
    } else if (RAF_3){
        if (timer_elapsed(key_timer) > REPEAT_DELAY) {
            tap_code(KC_3);
            key_timer = timer_read();
        }
    } else if (RAF_4){
        if (timer_elapsed(key_timer) > REPEAT_DELAY) {
            tap_code(KC_4);
            key_timer = timer_read();
        }
    } else if (RAF_5){
        if (timer_elapsed(key_timer) > REPEAT_DELAY) {
            tap_code(KC_5);
            key_timer = timer_read();
        }
    } else if (RAF_6){
        if (timer_elapsed(key_timer) > REPEAT_DELAY) {
            tap_code(KC_6);
            key_timer = timer_read();
        }
    } else if (RAF_7){
        if (timer_elapsed(key_timer) > REPEAT_DELAY) {
            tap_code(KC_7);
            key_timer = timer_read();
        }
    } else if (RAF_E){
        if (timer_elapsed(key_timer) > REPEAT_DELAY) {
            tap_code(KC_E);
            key_timer = timer_read();
        }
    } else if (RAF_R){
        if (timer_elapsed(key_timer) > REPEAT_DELAY) {
            tap_code(KC_R);
            key_timer = timer_read();
        }
    }
}


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_60_hhkb( /* Base */
            KC_ESC,  AF_1,    AF_2,    AF_3,    AF_4,    AF_5,    AF_6,    AF_7,    KC_8,     KC_9,    KC_0,     KC_MINS,  KC_EQL,  KC_GRV,  KC_BSLS,\
     LT(3, KC_TAB),  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,     KC_O,    KC_P,     KC_LBRC,  KC_RBRC,          KC_BSPC,\
            KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,     KC_L,    KC_SCLN,  KC_QUOT,           KC_ENT,          \
            KC_LSFT,          KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,     KC_COMM, KC_DOT,   KC_SLSH,  KC_RSFT,          MO(2),  \
            KC_LALT, KC_NO,   KC_LGUI,                 KC_SPC,                                                              MO(4)  , KC_NO  , MO(4) ),

    [1] = LAYOUT_60_hhkb( /* WINDOWS */
            KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,\
            KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS,  KC_TRNS,  KC_TRNS,            KC_TRNS,\
            KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS, KC_TRNS,  KC_TRNS,            KC_TRNS,          \
            KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS,  KC_TRNS,  KC_TRNS,            KC_TRNS,\
            KC_TRNS, KC_TRNS, KC_TRNS,                 KC_TRNS,                                        KC_TRNS,  KC_TRNS,            KC_TRNS          ),

    [2] = LAYOUT_60_hhkb( /* FN */
            KC_TRNS, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,    KC_F9,   KC_F10,   KC_F11,   KC_F12,   KC_TRNS,  RESET,\
            KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS,  KC_UP,    KC_TRNS,            KC_TRNS,\
            KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_LEFT,  KC_RGHT,            KC_TRNS,          \
            KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS,  KC_DOWN,  KC_TRNS,            KC_TRNS,\
            KC_TRNS, KC_TRNS, KC_TRNS,                 KC_TRNS,                                        KC_TRNS,  KC_TRNS,            KC_TRNS          ),

    [3] = LAYOUT_60_hhkb( /* TABFN */
            KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  RESET,\
            KC_TRNS, KC_MPRV, KC_MPLY, KC_MNXT, KC_TRNS, KC_TRNS, KC_HOME, KC_PGDN, KC_PGUP,  KC_END , KC_TRNS,  KC_TRNS,  KC_TRNS,            KC_TRNS,\
            KC_TRNS, KC_MUTE, KC_VOLD, KC_VOLU, KC_TRNS, KC_TRNS, KC_LEFT, KC_DOWN, KC_UP,    KC_RGHT, KC_TRNS,  KC_TRNS,            KC_TRNS,          \
            KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS,  KC_TRNS,  KC_TRNS,            KC_TRNS,\
            KC_TRNS, KC_TRNS, KC_TRNS,                 KC_TRNS,                                        KC_TRNS,  KC_TRNS,            KC_TRNS          ),

    [4] = LAYOUT_60_hhkb( /* GAMES */
            KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  RESET,\
            KC_TAB,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS,  KC_TRNS,  KC_TRNS,            KC_TRNS,\
            KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_LEFT, KC_DOWN, KC_UP,    KC_RGHT, KC_TRNS,  KC_TRNS,            KC_TRNS,          \
            KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS,  KC_TRNS,  KC_TRNS,            KC_TRNS,\
            KC_TRNS, KC_TRNS, KC_TRNS,                 KC_TRNS,                                        KC_TRNS,  KC_TRNS,            KC_TRNS          ),

    [5] = LAYOUT_60_hhkb( /* LIGHTING */
            KC_TRNS, BR_DEC,  BR_INC,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  RESET,\
            KC_TRNS, EF_DEC,  EF_INC,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS,  KC_TRNS,  KC_TRNS,            KC_TRNS,\
            KC_TRNS, ES_DEC,  ES_INC,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS,  KC_TRNS,            KC_TRNS,          \
            KC_TRNS,          H1_DEC,  H1_INC,  S1_DEC,  S1_INC,  KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS,  KC_TRNS,  KC_TRNS,            KC_TRNS,\
            KC_TRNS, KC_TRNS, KC_TRNS,                 KC_TRNS,                                        KC_TRNS,  KC_TRNS,            KC_TRNS          ),

};


/* enum wt_rgb_backlight_keycodes { */
/* 	BR_INC = 0x5F00,	// backlight brightness increase */
/* 	BR_DEC, 			// backlight brightness decrease */
/* 	EF_INC, 			// backlight effect increase */
/* 	EF_DEC,  			// backlight effect decrease */
/* 	ES_INC, */
/* 	ES_DEC, */
/* 	H1_INC, */
/* 	H1_DEC, */
/* 	S1_INC, */
/* 	S1_DEC, */
/* 	H2_INC, */
/* 	H2_DEC, */
/* 	S2_INC, */
/* 	S2_DEC */
/* }; */
