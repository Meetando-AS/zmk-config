// Copyright 2025 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

/*******************************************************************************
	88888888888 888      d8b                .d888 d8b 888               d8b
			888     888      Y8P               d88P"  Y8P 888               Y8P
			888     888                        888        888
			888     88888b.  888 .d8888b       888888 888 888  .d88b.       888 .d8888b
			888     888 "88b 888 88K           888    888 888 d8P  Y8b      888 88K
			888     888  888 888 "Y8888b.      888    888 888 88888888      888 "Y8888b.
			888     888  888 888      X88      888    888 888 Y8b.          888      X88
			888     888  888 888  88888P'      888    888 888  "Y8888       888  88888P'
																												888                 888
																												888                 888
																												888                 888
		 .d88b.   .d88b.  88888b.   .d88b.  888d888 8888b.  888888 .d88b.   .d88888
		d88P"88b d8P  Y8b 888 "88b d8P  Y8b 888P"      "88b 888   d8P  Y8b d88" 888
		888  888 88888888 888  888 88888888 888    .d888888 888   88888888 888  888
		Y88b 888 Y8b.     888  888 Y8b.     888    888  888 Y88b. Y8b.     Y88b 888
		 "Y88888  "Y8888  888  888  "Y8888  888    "Y888888  "Y888 "Y8888   "Y88888
				 888
		Y8b d88P
		 "Y88P"
*******************************************************************************/

#pragma once
// clang-format off

// Aliases
#define NO_PIPE KC_GRV  // |
#define NO_1    N1   // 1
#define NO_2    N2    // 2
#define NO_3    N3    // 3
#define NO_4    N4    // 4
#define NO_5    N5    // 5
#define NO_6    N6    // 6
#define NO_7    N7    // 7
#define NO_8    N8    // 8
#define NO_9    N9    // 9
#define NO_0    N0    // 0
#define NO_PLUS PLUS // +
#define NO_BSLS LS(SI_N7)  // (backslash)
#define NO_Q    Q   // Q
#define NO_W    W    // W
#define NO_E    E    // E
#define NO_R    R    // R
#define NO_T    T    // T
#define NO_Y    Y    // Y
#define NO_U    U    // U
#define NO_I    I    // I
#define NO_O    O    // O
#define NO_P    P    // P
#define NO_ARNG LBRC // Å
#define NO_DIAE RBRC // ¨ (dead)
#define NO_A    A    // A
#define NO_S    S    // S
#define NO_D    D    // D
#define NO_F    F    // F
#define NO_G    G    // G
#define NO_H    H    // H
#define NO_J    J    // J
#define NO_K    K    // K
#define NO_L    L    // L
#define NO_OSTR SCLN // Ø
#define NO_AE   QUOT // Æ
#define NO_QUOT NUHS // '
#define NO_LABK NUBS // <
#define NO_Z    Z    // Z
#define NO_X    X    // X
#define NO_C    C    // C
#define NO_V    V    // V
#define NO_B    B    // B
#define NO_N    N    // N
#define NO_M    M    // M
#define NO_COMM COMM // ,
#define NO_DOT  DOT  // .
#define NO_MINS MINUS // -
#define NO_SECT S(NO_PIPE) // §
#define NO_EXLM S(NO_1)    // !
#define NO_DQUO S(NO_2)    // "
#define NO_HASH S(NO_3)    // #
#define NO_CURR S(NO_4)    // ¤
#define NO_PERC S(NO_5)    // %
#define NO_AMPR S(NO_6)    // &
#define NO_SLSH S(NO_7)    // /
#define NO_LPRN S(NO_8)    // (
#define NO_RPRN S(NO_9)    // )
#define NO_EQL  S(NO_0)    // =
#define NO_QUES S(NO_PLUS) // ?
#define NO_GRV  S(NO_BSLS) // ` (dead)
#define NO_CIRC S(DIAE) // ^ (dead)
#define NO_ASTR S(QUOT) // *
#define NO_RABK S(LABK) // >
#define NO_SCLN S(COMM) // ;
#define NO_COLN S(DOT)  // :
#define NO_UNDS S(MINS) // _
#define NO_AT   ALGR(N2)    // @
#define NO_PND  ALGR(N3)    // £
#define NO_DLR  ALGR(N4)    // $
#define NO_EURO ALGR(N5)    // €
#define NO_LCBR ALGR(N7)    // {
#define NO_LBRC ALGR(N8)    // [
#define NO_RBRC ALGR(N9)    // ]
#define NO_RCBR ALGR(N0)    // }
#define NO_ACUT ALGR(BSLS) // ´ (dead)
#define NO_TILD ALGR(DIAE) // ~ (dead)
#define NO_MICR ALGR(M)    // µ
