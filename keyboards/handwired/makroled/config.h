// Copyright 2023 Vít Pawlik (@paprikodlak)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT

#define OLED_DISPLAY_128x64

#define WS2812_DI_PIN GP25
#define RGBLED_NUM 2
#define RGBLIGHT_DEFAULT_HUE 169
#define RGBLIGHT_DEFAULT_VAL 16 // RGBLIGHT_LIMIT_VAL 255  //default

#define ENCODERS_PAD_A { GP0 }
#define ENCODERS_PAD_B { GP1 }