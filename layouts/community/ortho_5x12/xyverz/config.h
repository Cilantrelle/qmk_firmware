#pragma once

// Number of backlight levels
#undef  BACKLIGHT_LEVELS
#define BACKLIGHT_LEVELS 8

/* ws2812 RGB LED */
#undef RGB_DI_PIN
#define RGB_DI_PIN B3
#undef RGBLED_NUM
#define RGBLIGHT_ANIMATIONS
#define RGBLED_NUM 11     // Number of LEDs
#undef RGBLIGHT_HUE_STEP
#define RGBLIGHT_HUE_STEP 8
#undef RGBLIGHT_SAT_STEP
#define RGBLIGHT_SAT_STEP 8
#undef RGBLIGHT_VAL_STEP
#define RGBLIGHT_VAL_STEP 8

// for the split boards //
#define USE_SERIAL
#define EE_HANDS


