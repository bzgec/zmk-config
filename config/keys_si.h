/*
 * Copyright (c) 2020 The ZMK Contributors
 *
 * SPDX-License-Identifier: MIT
 */
#pragma once

#include <dt-bindings/zmk/hid_usage.h>
#include <dt-bindings/zmk/hid_usage_pages.h>
#include <dt-bindings/zmk/modifiers.h>
#include <dt-bindings/zmk/keys.h>

/*
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │ ¸ │ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │ ' │ + │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │ Q │ W │ E │ R │ T │ Z │ U │ I │ O │ P │ Š │ Đ │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │ A │ S │ D │ F │ G │ H │ J │ K │ L │ Č │ Ć │ Ž │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │ < │ Y │ X │ C │ V │ B │ N │ M │ , │ . │ - │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 1
#define SI_CEDL GRAVE // ¸ (dead)
#define SI_N1 N1      // 1
#define SI_N2 N2      // 2
#define SI_N3 N3      // 3
#define SI_N4 N4      // 4
#define SI_N5 N5      // 5
#define SI_N6 N6      // 6
#define SI_N7 N7      // 7
#define SI_N8 N8      // 8
#define SI_N9 N9      // 9
#define SI_N0 N0      // 0
#define SI_SQT MINUS  // '
#define SI_PLUS EQUAL // +
// Row 2
#define SI_Q Q       // Q
#define SI_W W       // W
#define SI_E E       // E
#define SI_R R       // R
#define SI_T T       // T
#define SI_Z Y       // Z
#define SI_U U       // U
#define SI_I I       // I
#define SI_O O       // O
#define SI_P P       // P
#define SI_SCAR LBKT // Š
#define SI_DSTR RBKT // Đ
// Row 3
#define SI_A A       // A
#define SI_S S       // S
#define SI_D D       // D
#define SI_F F       // F
#define SI_G G       // G
#define SI_H H       // H
#define SI_J J       // J
#define SI_K K       // K
#define SI_L L       // L
#define SI_CCAR SEMI // Č
#define SI_CACU SQT  // Ć
#define SI_ZCAR NUHS // Ž
// Row 4
#define SI_LT NUBS     // <
#define SI_Y Z         // Y
#define SI_X X         // X
#define SI_C C         // C
#define SI_V V         // V
#define SI_B B         // B
#define SI_N N         // N
#define SI_M M         // M
#define SI_COMMA COMMA // ,
#define SI_DOT DOT     // .
#define SI_MINUS FSLH  // -

/* Shifted symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │ ¨ │ ! │ " │ # │ $ │ % │ & │ / │ ( │ ) │ = │ ? │ * │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │   │   │   │   │   │   │   │   │   │   │   │   │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │   │   │   │   │   │   │   │   │   │   │   │   │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │ > │   │   │   │   │   │   │   │ ; │ : │ _ │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 1
#define SI_DIAE S(SI_CEDL)   // ¨ (dead)
#define SI_EXCL LS(SI_N1)    // !
#define SI_DQT LS(SI_N2)     // "
#define SI_HASH LS(SI_N3)    // #
#define SI_DLLR LS(SI_N4)    // $
#define SI_PRCNT LS(SI_N5)   // %
#define SI_AMPS LS(SI_N6)    // &
#define SI_FSLH LS(SI_N7)    // /
#define SI_LPAR LS(SI_N8)    // (
#define SI_RPAR LS(SI_N9)    // )
#define SI_EQUAL LS(SI_N0)   // =
#define SI_QMARK LS(SI_SQT)  // ?
#define SI_ASTRK LS(SI_PLUS) // *
// Row 4
#define SI_GT LS(SI_LT)       // >
#define SI_SEMI LS(SI_COMMA)  // ;
#define SI_COLON LS(SI_DOT)   // :
#define SI_UNDER LS(SI_MINUS) // _

/* AltGr symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │   │ ~ │ ˇ │ ^ │ ˘ │ ° │ ˛ │ ` │ ˙ │ ´ │ ˝ │   │   │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │ \ │ | │ € │   │   │   │   │   │   │   │ ÷ │ × │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │   │   │   │ [ │ ] │   │   │ ł │ Ł │   │ ß │ ¤ │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │   │   │   │   │ @ │ { │ } │ § │   │   │   │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 1 AltGr
#define SI_TILDE RA(SI_N1) // ~
#define SI_CARN RA(SI_N2)  // ˇ (dead)
#define SI_CARET RA(SI_N3) // ^ (dead)
#define SI_BREV RA(SI_N4)  // ˘ (dead)
#define SI_RNGA RA(SI_N5)  // ° (dead)
#define SI_OGON RA(SI_N6)  // ˛ (dead)
#define SI_GRAVE RA(SI_N7) // `
#define SI_DOTA RA(SI_N8)  // ˙ (dead)
#define SI_ACUT RA(SI_N9)  // ´ (dead)
#define SI_DACU RA(SI_N0)  // ˝ (dead)
// Row 2 (only AltGr)
#define SI_BSLH RA(SI_Q)   // (backslash)
#define SI_PIPE RA(SI_W)   // |
#define SI_EURO RA(SI_E)   // €
#define SI_DIV RA(SI_SCAR) // ÷
#define SI_MUL RA(SI_DSTR) // ×
// Row 3 (only AltGr)
#define SI_LBKT RA(SI_F)    // [
#define SI_RBKT RA(SI_G)    // ]
#define SI_LLST RA(SI_K)    // ł
#define SI_CLST RA(SI_L)    // Ł
#define SI_SS RA(SI_CACU)   // ß
#define SI_CURR RA(SI_ZCAR) // ¤
// Row 4 (only AltGr)
#define SI_AT RA(SI_V)   // @
#define SI_LBRC RA(SI_B) // {
#define SI_RBRC RA(SI_N) // }
#define SI_SECT RA(SI_M) // §
