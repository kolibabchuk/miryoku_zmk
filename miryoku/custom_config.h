// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

// Custom Extra layer (QWERTY) with Russian support - includes missing [];
#define MIRYOKU_LAYER_EXTRA \
&kp LBKT, &kp Q,             &kp W,         &kp E,              &kp R,              &kp T,              &kp Y,             &kp U,             &kp I,            &kp O,             &kp P,                 &kp RBKT, \
&none,    U_MT(LGUI, A),     U_MT(LALT, S), U_MT(LCTRL, D),     U_MT(LSHFT, F),     &kp G,              &kp H,             U_MT(LSHFT, J),    U_MT(LCTRL, K),   U_MT(LALT, L),     U_MT(LGUI, SEMI),      &kp SQT, \
&none,    U_LT(U_BUTTON, Z), U_MT(RALT, X), &kp C,              &kp V,              &kp B,              &kp N,             &kp M,             &kp COMMA,        U_MT(RALT, DOT),   U_LT(U_BUTTON, SLASH), &kp LBKT, \
U_NP      U_NP,              U_NP,          U_LT(U_MEDIA, ESC), U_LT(U_NAV, SPACE), U_LT(U_MOUSE, TAB), U_LT(U_SYM, RET),  U_LT(U_NUM, BSPC), U_LT(U_FUN, DEL), U_NP,              U_NP,                  U_NP
