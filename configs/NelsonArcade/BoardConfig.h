/*
 * Custom GP2040-CE configuration
 * NelsonArcade - Raspberry Pi Pico RP2040
 */

#ifndef NELSON_ARCADE_BOARD_CONFIG_H_
#define NELSON_ARCADE_BOARD_CONFIG_H_

#include "enums.pb.h"
#include "class/hid/hid.h"

#define BOARD_CONFIG_LABEL "NelsonArcade"

// =====================================================
// DIRECCIONES
// Cableado físico real
// =====================================================
#define GPIO_PIN_02 GpioAction::BUTTON_PRESS_UP
#define GPIO_PIN_03 GpioAction::BUTTON_PRESS_DOWN
#define GPIO_PIN_04 GpioAction::BUTTON_PRESS_LEFT
#define GPIO_PIN_05 GpioAction::BUTTON_PRESS_RIGHT

// =====================================================
// BOTONES PRINCIPALES
// =====================================================
#define GPIO_PIN_06 GpioAction::BUTTON_PRESS_B4   // Triangle
#define GPIO_PIN_07 GpioAction::BUTTON_PRESS_B2   // Circle
#define GPIO_PIN_08 GpioAction::BUTTON_PRESS_L1
#define GPIO_PIN_09 GpioAction::BUTTON_PRESS_B3   // Square
#define GPIO_PIN_10 GpioAction::BUTTON_PRESS_B1   // Cross
#define GPIO_PIN_11 GpioAction::BUTTON_PRESS_R1

// =====================================================
// BOTONES AUXILIARES
// =====================================================
#define GPIO_PIN_12 GpioAction::BUTTON_PRESS_A1   // PS / Home / Guide
#define GPIO_PIN_13 GpioAction::BUTTON_PRESS_S1   // Select / Back
#define GPIO_PIN_14 GpioAction::BUTTON_PRESS_L2
#define GPIO_PIN_15 GpioAction::BUTTON_PRESS_R2
#define GPIO_PIN_16 GpioAction::BUTTON_PRESS_S2   // Start

// =====================================================
// KEYBOARD MAPPING
// =====================================================
#define KEY_DPAD_UP       HID_KEY_ARROW_UP
#define KEY_DPAD_DOWN     HID_KEY_ARROW_DOWN
#define KEY_DPAD_LEFT     HID_KEY_ARROW_LEFT
#define KEY_DPAD_RIGHT    HID_KEY_ARROW_RIGHT

#define KEY_BUTTON_B1     HID_KEY_SHIFT_LEFT
#define KEY_BUTTON_B2     HID_KEY_Z
#define KEY_BUTTON_B3     HID_KEY_CONTROL_LEFT
#define KEY_BUTTON_B4     HID_KEY_ALT_LEFT

#define KEY_BUTTON_R1     HID_KEY_SPACE
#define KEY_BUTTON_L1     HID_KEY_C
#define KEY_BUTTON_R2     HID_KEY_X
#define KEY_BUTTON_L2     HID_KEY_V

#define KEY_BUTTON_S1     HID_KEY_5
#define KEY_BUTTON_S2     HID_KEY_1
#define KEY_BUTTON_A1     HID_KEY_9

#define KEY_BUTTON_FN     -1

#endif
