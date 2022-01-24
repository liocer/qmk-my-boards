#pragma once

/* enable/disable LEDs based on layout */
#undef RGB_BACKLIGHT_USE_SPLIT_BACKSPACE
#define RGB_BACKLIGHT_USE_SPLIT_BACKSPACE 1

#undef RGB_BACKLIGHT_CAPS_LOCK_INDICATOR
#define RGB_BACKLIGHT_CAPS_LOCK_INDICATOR { .color = { .h = 0, .s= 255}, .index = 11}

#undef RGB_BACKLIGHT_LAYER_1_INDICATOR
#define RGB_BACKLIGHT_LAYER_1_INDICATOR { .color = { .h = 150, .s = 255 }, .index = 24 } //blue

#undef RGB_BACKLIGHT_LAYER_2_INDICATOR
#define RGB_BACKLIGHT_LAYER_2_INDICATOR { .color = { .h = 95, .s = 255 }, .index = 24 } //cyan

#undef RGB_BACKLIGHT_LAYER_3_INDICATOR
#define RGB_BACKLIGHT_LAYER_3_INDICATOR { .color = { .h = 21, .s = 255 }, .index = 24 } //orange

#undef RGB_BACKLIGHT_LAYER_4_INDICATOR
#define RGB_BACKLIGHT_LAYER_4_INDICATOR { .color = { .h = 250, .s = 255 }, .index = 24 } //lime green
