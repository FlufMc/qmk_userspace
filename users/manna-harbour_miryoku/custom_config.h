// Copyright 2019 Manna Harbour
// https://github.com/manna-harbour/miryoku

// This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 2 of the License, or (at your option) any later version. This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with this program. If not, see <http://www.gnu.org/licenses/>.

#pragma once

// Compatibility with current QMK mouse keycodes
// Compatibility aliases for current QMK

// Mouse movement
#define KC_MS_U  MS_UP
#define KC_MS_D  MS_DOWN
#define KC_MS_L  MS_LEFT
#define KC_MS_R  MS_RGHT

// Mouse wheel
#define KC_WH_U  MS_WHLU
#define KC_WH_D  MS_WHLD
#define KC_WH_L  MS_WHLL
#define KC_WH_R  MS_WHLR

// Mouse buttons
#define KC_BTN1  MS_BTN1
#define KC_BTN2  MS_BTN2
#define KC_BTN3  MS_BTN3

// RGB Matrix
#define RGB_TOG  RM_TOGG
#define RGB_MOD  RM_NEXT
#define RGB_HUI  RM_HUEU
#define RGB_SAI  RM_SATU
#define RGB_VAI  RM_VALU