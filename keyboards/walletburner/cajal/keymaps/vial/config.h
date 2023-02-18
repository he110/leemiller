#define VIAL_KEYBOARD_UID {0x5D, 0x4C, 0x59, 0xD5, 0xE8, 0x37, 0xB5, 0xEF}

#define VIAL_UNLOCK_COMBO_ROWS { 0, 3  }
#define VIAL_UNLOCK_COMBO_COLS { 0, 13 }

#define DYNAMIC_KEYMAP_LAYER_COUNT 4
#define LAYER_STATE_8BIT
// #define VIAL_COMBO_ENTRIES 8
// #define VIAL_TAP_DANCE_ENTRIES 8

#undef RGBLIGHT_ANIMATIONS
// #define RGBLIGHT_EFFECT_ALTERNATING
#define RGBLIGHT_EFFECT_BREATHING
#define RGBLIGHT_EFFECT_CHRISTMAS
#define RGBLIGHT_EFFECT_KNIGHT
#define RGBLIGHT_EFFECT_RAINBOW_MOOD
#define RGBLIGHT_EFFECT_RAINBOW_SWIRL
// #define RGBLIGHT_EFFECT_RGB_TEST
#define RGBLIGHT_EFFECT_SNAKE
#define RGBLIGHT_EFFECT_STATIC_GRADIENT
// #define RGBLIGHT_EFFECT_TWINKLE

/*==== (DEFAULT) use fixed table instead of exp() and sin() ====*/
#define RGBLIGHT_BREATHE_TABLE_SIZE 128 // 256(default) or 128 or 64