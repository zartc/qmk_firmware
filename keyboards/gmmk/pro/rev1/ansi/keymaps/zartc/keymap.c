/* Copyright 2021 Glorious, LLC <salman@pcgamingrace.com>
   Copyright 2021 Jonavin Eng @Jonavin
   Copyright 2022 gourdo1 <gourdo1@outlook.com>
   Copyright 2022 zartc <zartc@wanadoo.fr>


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

#include "layers.h"


// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    /* Base Layout
     * .-------------------------------------------------------------------------------------------------------------.
     * | Esc  ||  F1  |  F2  |  F3  |  F4  ||  F5  |  F6  |  F7  |  F8  ||  F9  | F10  | F11  | F12  || Del  || Play |
     * |=====================================================================================================++======|
     * | ` ~  | 1 !  | 2 @  | 3 #  | 4 $  | 5 %  | 6 ^  | 7 &  | 8 *  | 9 (  | 0 )  | - _  | = + | Backspace || Home |
     * |------+------+------+------+------+------+------+------+------+------+------+------+------+----------++------|
     * |  Tab    |  Q   |  W   |  E   |  R   |  T   |  Y   |  U   |  I   |  O   |  P   | [ {  | ] }  |  \ |  || PgUp |
     * |---------+------+------+------+------+------+------+------+------+------+------+------+------+-------++------|
     * |  MODE     |  A   |  S   |  D   |  F   |  G   |  H   |  J   |  K   |  L   | ; :  | ' "  |   Enter    || PgDn |
     * |-----------+------+------+------+------+------+------+------+------+------+------+------|----++======++------|
     * |  LShift      |  Z   |  X   |  C   |  V   |  B   |  N   |  M   | , <  | . >  | / ?  | RShift ||  Up  || End  |
     * |--------------+------+------+------+------+------+------+------+------+------+------+-++=====++------++======|
     * | LCtrl |  Win  |  LAlt |                  Space                   | RAlt | RCtrl | Fn || Left | Down | Right |
     * '-------------------------------------------------------------------------------------------------------------'
     */
    [BASE] = LAYOUT(
        KC_ESC  ,  KC_F1 ,  KC_F2 ,  KC_F3 ,  KC_F4 ,  KC_F5 ,  KC_F6 ,  KC_F7 ,  KC_F8 ,  KC_F9 ,  KC_F10,  KC_F11,  KC_F12,   KC_DEL,  KC_MPLY,
    //  ----------------------------------------------------------------------------------------------------------------------------------------
        KC_GRV  ,   KC_1 ,   KC_2 ,   KC_3 ,   KC_4 ,   KC_5 ,   KC_6 ,   KC_7 ,   KC_8 ,   KC_9 ,   KC_0 , KC_MINS, KC_EQL ,  KC_BSPC,  KC_PGUP,
        KC_TAB   ,   KC_Q ,   KC_W ,   KC_E ,   KC_R ,   KC_T ,   KC_Y ,   KC_U ,   KC_I ,   KC_O ,   KC_P , KC_LBRC, KC_RBRC, KC_BSLS,  KC_PGDN,
        MO(MODE)  ,   KC_A ,   KC_S ,   KC_D ,   KC_F ,   KC_G ,   KC_H ,   KC_J ,   KC_K ,   KC_L , KC_SCLN, KC_QUOT,          KC_ENT,  KC_HOME,
        KC_LSFT    ,   KC_Z ,   KC_X ,   KC_C ,   KC_V ,   KC_B ,   KC_N ,   KC_M , KC_COMM, KC_DOT , KC_SLSH,       KC_RSFT ,   KC_UP,  KC_END,
        KC_LCTL , KC_LGUI , KC_LALT ,                     KC_SPC,                      KC_RALT ,  KC_RCTL ,  MO(FN) , KC_LEFT, KC_DOWN, KC_RGHT
    ),

    /* MODE Layout
     * .-------------------------------------------------------------------------------------------------------------.
     * |      ||      |      |      |      ||      |      |      |      ||      |      |      |PrtScr|| Ins  ||      |
     * |=====================================================================================================++======|
     * |      |      |      |      |      |      |      |      |      |      |      |      |      |          ||      |
     * |------+------+------+------+------+------+------+------+------+------+------+------+------+----------++------|
     * |         | Esc  |C+PgUp|C+PgDn|      |      | Ins  | Home |  Up  | End  | Del  |      |      |       ||      |
     * |---------+------+------+------+------+------+------+------+------+------+------+------+------+-------++------|
     * |  MODE     |CapsLk| Shift| Ctrl | Alt  |      | PgUp | Left | Down |Right |      |      |   PrtScr   ||      |
     * |-----------+------+------+------+------+------+------+------+------+------+------+------|----++======++------|
     * |  LShift      |Ctrl+Z|Ctrl+X|Ctrl+C|Ctrl+V|      | PgDn |BkSpc |      |      |      | RShift ||      ||      |
     * |--------------+------+------+------+------+------+------+------+------+------+------+-++=====++------++======|
     * | LCtrl |  Win  |  LAlt |                  Space                   | RAlt | RCtrl | Fn || Left | Down | Right |
     * '-------------------------------------------------------------------------------------------------------------'
     */
    [MODE] = LAYOUT(
        _______,  _______, _______, _______, _______,  _______, _______, _______, _______,  _______, _______, _______, KC_PSCR,   KC_INS,   _______,
    //  --------------------------------------------------------------------------------------------------------------------------------------------
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_PMNS, KC_PPLS,     _______,   _______,
        _______ , KC_ESC,C(KC_PGUP),C(KC_PGDN), XXXXXXX, XXXXXXX,  KC_INS, KC_HOME,  KC_UP , KC_END , KC_DEL , XXXXXXX, XXXXXXX, XXXXXXX,   _______,
        _______  , KC_CAPS,  KC_LSFT ,  KC_LCTL , KC_LALT, XXXXXXX, KC_PGUP, KC_LEFT, KC_DOWN, KC_RGHT, XXXXXXX, XXXXXXX,        KC_PSCR,   _______,
        _______   , C(KC_Z),  C(KC_X) ,  C(KC_C) , C(KC_V), XXXXXXX, KC_PGDN, KC_BSPC, XXXXXXX, XXXXXXX,  XXXXXXX,      _______ ,  _______, _______,
        _______ , _______ , _______ ,                        _______,                      _______ ,  _______ , _______ , _______, _______, _______
    ),


    /* FN Layout
     * .-------------------------------------------------------------------------------------------------------------.
     * |      ||MyCmp | Web  | Mail | Calc ||      |      |      |      ||      |      |      |PrtScr||      ||Sleep |
     * |=====================================================================================================++======|
     * |      |      |      |      |      |      |      |      |      |      |      |RgbSp-|RgbSp+|          ||MedPrv|
     * |------+------+------+------+------+------+------+------+------+------+------+------+------+----------++------|
     * |         |RgbSa-|RgbHu+|RgbSa+|      |      |      |      |      |      |      |      |      |Q_Boot ||MedNxt|
     * |---------+------+------+------+------+------+------+------+------+------+------+------+------+-------++------|
     * |  MODE     |RgbBr-|RgbHu-|RgbBr+|      |      |      |      |      |      |      |      |            ||      |
     * |-----------+------+------+------+------+------+------+------+------+------+------+------|----++======++------|
     * |  LShift      |RgbMo-|RgbTog|RgbMo+|      |Q_Boot|NkTogg|      |      |      |      | RShift ||MedPrv|| Play |
     * |--------------+------+------+------+------+------+------+------+------+------+------+-++=====++------++======|
     * | LCtrl |  Win  |  LAlt |                  Space                   | RAlt | RCtrl | Fn ||MedPrv|MedNxt| MedNxt|
     * '-------------------------------------------------------------------------------------------------------------'
     */
    [FN] = LAYOUT(
        XXXXXXX,  KC_MYCM, KC_WHOM, KC_MAIL, KC_CALC,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,  XXXXXXX, XXXXXXX, XXXXXXX, KC_PSCR,   KC_INS,    KC_SLEP,
    //  ---------------------------------------------------------------------------------------------------------------------------------------------
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, RGB_SPD, RGB_SPI,      XXXXXXX,   XXXXXXX,
        XXXXXXX , RGB_SAD, RGB_HUI, RGB_SAI, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX , XXXXXXX,    QK_BOOT,   KC_MPRV,
        _______  , RGB_VAD, RGB_HUD, RGB_VAI, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX ,            KC_PSCR,   KC_MNXT,
        _______   ,RGB_RMOD, RGB_TOG, RGB_MOD, XXXXXXX, QK_BOOT, NK_TOGG, XXXXXXX, XXXXXXX, XXXXXXX,  XXXXXXX,       _______ ,    KC_MPRV,   KC_MPLY,
        _______, _______, _______,                        _______,                      _______ ,  _______ , _______ ,   KC_MPRV, KC_MNXT, KC_MNXT
    )
};
// clang-format on
