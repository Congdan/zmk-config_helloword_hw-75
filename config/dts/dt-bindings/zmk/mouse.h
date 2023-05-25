/*
 * Copyright (c) 2022-2023 XiNGRZ
 * SPDX-License-Identifier: MIT
 */
#include <dt-bindings/zmk/mouse.h>

#define U_MOUSE_SCROLL_MAX 100
#define U_MOUSE_SCROLL_DELAY 0
#define U_MOUSE_SCROLL_EXPONENT 1
#define U_MOUSE_SCROLL_TIME 0

#undef SCROLL_UP
#undef SCROLL_DOWN
#undef SCROLL_LEFT
#undef SCROLL_RIGHT

#define SCROLL_UP 		SCROLL_VERT(U_MOUSE_SCROLL_MAX)
#define SCROLL_DOWN 	SCROLL_VERT(-U_MOUSE_SCROLL_MAX)
#define SCROLL_LEFT 	SCROLL_HOR(-U_MOUSE_SCROLL_MAX)
#define SCROLL_RIGHT 	SCROLL_HOR(U_MOUSE_SCROLL_MAX)

// #define MW_UP(n) (0xFF - n)
// #define MW_DN(n) (n)
