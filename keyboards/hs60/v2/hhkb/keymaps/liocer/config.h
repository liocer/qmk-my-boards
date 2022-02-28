#pragma once

#undef RGB_BACKLIGHT_CAPS_LOCK_INDICATOR
#define RGB_BACKLIGHT_CAPS_LOCK_INDICATOR { .color = { .h = 100, .s= 255}, .index = 2}

#undef RGB_BACKLIGHT_LAYER_1_INDICATOR
#define RGB_BACKLIGHT_LAYER_1_INDICATOR { .color = { .h = 150, .s = 255 }, .index = 47 } //blue

#undef RGB_BACKLIGHT_LAYER_2_INDICATOR
#define RGB_BACKLIGHT_LAYER_2_INDICATOR { .color = { .h = 95, .s = 255 }, .index = 47 } //cyan

#undef RGB_BACKLIGHT_LAYER_3_INDICATOR
#define RGB_BACKLIGHT_LAYER_3_INDICATOR { .color = { .h = 21, .s = 255 }, .index = 47 } //orange

#undef RGB_BACKLIGHT_LAYER_4_INDICATOR
#define RGB_BACKLIGHT_LAYER_4_INDICATOR { .color = { .h = 250, .s = 255 }, .index = 47 } //lime green
