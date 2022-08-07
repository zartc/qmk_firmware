/* Copyright 2021 Jonavin Eng @Jonavin
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

#include "encoder_actions.h"
#include "layers.h"


bool encoder_update_user(uint8_t index, bool clockwise) {
    uint8_t mods_state = get_mods();

    /*
    // on BASE layer
    <no-modifier>   =>  volume

    // on FN layer
    <no-modifier>   =>  Hue
    LALT            =>  Saturation
    LCTRL           =>  Brightness
    LSHIFT          =>  Speed
    LSHIFT + LCTRL  =>  Mode (effect)
    */

    if (IS_LAYER_ON(FN)) {
        if((mods_state & (MOD_BIT(KC_LEFT_SHIFT) | MOD_BIT(KC_LEFT_CTRL))) == (MOD_BIT(KC_LEFT_SHIFT) | MOD_BIT(KC_LEFT_CTRL))) {
            encoder_action_rgb_mode(clockwise);
        }
        if((mods_state & MOD_BIT(KC_LEFT_ALT)) == MOD_BIT(KC_LEFT_ALT)) {
            encoder_action_rgb_saturation(clockwise);
        }
        else if((mods_state & MOD_BIT(KC_LEFT_CTRL)) == MOD_BIT(KC_LEFT_CTRL)) {
            encoder_action_rgb_brightness(clockwise);
        }
        else if((mods_state & MOD_BIT(KC_LEFT_SHIFT)) == MOD_BIT(KC_LEFT_SHIFT)) {
            encoder_action_rgb_speed(clockwise);
        }
        else  {
            encoder_action_rgb_hue(clockwise);
        }
    }
    else if (IS_LAYER_ON(BASE)) {
        encoder_action_volume(clockwise);
    }

    return false;  // Skip all further processing of this key
}



void encoder_action_volume(bool clockwise) {
    tap_code(clockwise ? KC_VOLU : KC_VOLD);
}

void encoder_action_rgb_mode(bool clockwise) {
    if (clockwise)
        rgb_matrix_step_noeeprom();
    else
        rgb_matrix_step_reverse_noeeprom();
}

void encoder_action_rgb_speed(bool clockwise) {
    if (clockwise)
        rgb_matrix_increase_speed_noeeprom();
    else
        rgb_matrix_decrease_speed_noeeprom();
}

void encoder_action_rgb_hue(bool clockwise) {
    if (clockwise)
        rgb_matrix_increase_hue_noeeprom();
    else
        rgb_matrix_decrease_hue_noeeprom();
}

void encoder_action_rgb_saturation(bool clockwise) {
    if (clockwise)
        rgb_matrix_increase_sat_noeeprom();
    else
        rgb_matrix_decrease_sat_noeeprom();
}

void encoder_action_rgb_brightness(bool clockwise) {
    if (clockwise)
        rgb_matrix_increase_val_noeeprom();
    else
        rgb_matrix_decrease_val_noeeprom();
}
