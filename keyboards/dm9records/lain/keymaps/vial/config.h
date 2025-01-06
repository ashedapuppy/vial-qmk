#pragma once

#define VIAL_KEYBOARD_UID {0x56, 0xB3, 0x71, 0x98, 0xF1, 0xE1, 0x7C, 0x5A}

// Activate Command with Left Ctrl + Right Ctrl.
#define IS_COMMAND() (get_mods() == MOD_MASK_CTRL)

#define BOTH_SHIFTS_TURNS_ON_CAPS_WORD
#define DYNAMIC_KEYMAP_MACRO_COUNT 6
#define VIAL_KEY_OVERRIDE_ENTRIES 3
#define VIAL_COMBO_ENTRIES 3
#define VIAL_TAP_DANCE_ENTRIES 3
