/*
Copyright 2018 Jumail Mundekkat / MxBlue

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include QMK_KEYBOARD_H
#include "keyboards/liocer/liocer.c"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
      KC_GRV,           KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,    KC_F10,     KC_F11,     KC_F12,                  KC_PSCR, KC_SLCK, KC_PAUS,
      KC_ESC,  AF_1,    AF_2,    AF_3,    AF_4,    AF_5,    AF_6,    AF_7,    AF_8,    AF_9,    KC_0,     KC_MINS,    KC_EQL,     KC_BSLS,                 KC_INS,  KC_HOME, KC_PGUP,
 LT(1,KC_TAB), KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,     KC_LBRC,    KC_RBRC,    KC_BSPC,                 KC_DEL,  KC_END,  KC_PGDN,
      KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN,  KC_QUOT,            KC_ENT,
      KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,              KC_RSFT,    KC_TRNS,                          KC_UP,
      KC_LCTL, KC_LGUI, KC_LALT,                   KC_SPC,                                      KC_TRNS,  MO(2),      KC_RGUI,    KC_RCTL,                 KC_LEFT, KC_DOWN, KC_RGHT
    ),

    [1] = LAYOUT(
      KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,    KC_TRNS,    KC_TRNS,                 KC_TRNS, KC_TRNS, RESET,
      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,    KC_TRNS,    KC_TRNS,                 KC_TRNS, KC_TRNS, KC_TRNS,
      KC_TRNS, KC_MPRV, KC_MPLY, KC_MNXT, KC_TRNS, KC_TRNS, KC_TRNS, KC_PGDN, KC_PGUP, KC_TRNS, KC_TRNS,  KC_TRNS,    KC_TRNS,    KC_TRNS,                 KC_TRNS, KC_TRNS, KC_TRNS,
      KC_TRNS, KC_MUTE, KC_VOLD, KC_VOLU, KC_TRNS, KC_TRNS, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_TRNS,  KC_TRNS,            KC_TRNS,
      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,              KC_TRNS,    KC_TRNS,                          KC_TRNS,
      KC_TRNS, KC_TRNS, KC_TRNS,                   KC_TRNS,                                     KC_TRNS,  KC_TRNS,    KC_TRNS,    KC_TRNS,                 KC_TRNS, KC_TRNS, KC_TRNS
    ),

    [2] = LAYOUT(
      KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,    KC_TRNS,    KC_TRNS,                 KC_TRNS, KC_TRNS, RESET,
      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,    KC_TRNS,    KC_TRNS,                 KC_TRNS, KC_TRNS, KC_TRNS,
      KC_TRNS, RGB_TOG, RGB_MOD, RGB_RMOD,KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,    KC_TRNS,    KC_TRNS,                 KC_TRNS, KC_TRNS, KC_TRNS,
      KC_TRNS, RGB_HUI, RGB_SAI, RGB_VAI, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,            KC_TRNS,
      KC_TRNS, RGB_HUD, RGB_SAD, RGB_VAD, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,              KC_TRNS,    KC_TRNS,                          KC_TRNS,
      KC_TRNS, KC_TRNS, KC_TRNS,                   KC_TRNS,                                     KC_TRNS,  KC_TRNS,    KC_TRNS,    KC_TRNS,                 KC_TRNS, KC_TRNS, KC_TRNS
    )
};
