// Copyright 2022 Manna Harbour
// https://github.com/manna-harbour/miryoku

#if !defined (MIRYOKU_LAYOUTMAPPING_HALLIE)

#define XXX &none
#define HYPR LG(LA(LS(LCTRL)))

/ {
    macros {
        // Unicode macro for tilde ~ (U+007E) using macOS Unicode Hex Input
        uc_tilde: uc_tilde {
            compatible = "zmk,behavior-macro";
            label = "UC_TILDE";
            #binding-cells = <0>;
            wait-ms = <10>;
            tap-ms = <10>;
            bindings
                = <&macro_press &kp LALT>
                , <&macro_tap &kp N0 &kp N0 &kp N7 &kp E>
                , <&macro_release &kp LALT>
                ;
        };

        // Unicode macro for backtick ` (U+0060) using macOS Unicode Hex Input
        uc_backtick: uc_backtick {
            compatible = "zmk,behavior-macro";
            label = "UC_BACKTICK";
            #binding-cells = <0>;
            wait-ms = <10>;
            tap-ms = <10>;
            bindings
                = <&macro_press &kp LALT>
                , <&macro_tap &kp N0 &kp N0 &kp N6 &kp N0>
                , <&macro_release &kp LALT>
                ;
        };
    };

    behaviors {
        // Mod-morph: tap = tilde, shift+tap = backtick
        mm_tilde_backtick: mm_tilde_backtick {
            compatible = "zmk,behavior-mod-morph";
            label = "MM_TILDE_BACKTICK";
            #binding-cells = <0>;
            bindings = <&uc_tilde>, <&uc_backtick>;
            mods = <(MOD_LSFT|MOD_RSFT)>;
        };
    };
};

// Default mapping for BASE, EXTRA, and TAP layers
#define MIRYOKU_LAYOUTMAPPING_HALLIE( \
     K00, K01, K02, K03, K04,      K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,      K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,      K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,      K35, K36, K37, N38, N39 \
) \
&td_bslh_globe_base  K00  K01  K02  K03  K04    K05  K06  K07  K08  K09  U_MT(GLOBE, LBKT) \
U_MT(HYPR, RBKT)     K10  K11  K12  K13  K14    K15  K16  K17  K18  K19  U_MT(HYPR, SQT) \
U_MT(LSHFT, ESC)     K20  K21  K22  K23  K24    K25  K26  K27  K28  K29  U_MT(RSHFT, ESC) \
                               K32  K33  K34    K35  K36  K37

// BUTTON layer mapping with custom outer column keys
#define MIRYOKU_LAYOUTMAPPING_BUTTON( \
     K00, K01, K02, K03, K04,      K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,      K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,      K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,      K35, K36, K37, N38, N39 \
) \
&kp ESC   K00  K01  K02  K03  K04    K05  K06  K07  K08  K09  &kp GLOBE \
&kp HYPR  K10  K11  K12  K13  K14    K15  K16  K17  K18  K19  &kp ENTER \
&kp GLOBE K20  K21  K22  K23  K24    K25  K26  K27  K28  K29  &kp RSHFT \
                     K32  K33  K34    K35  K36  K37

// NAV layer mapping with custom outer column keys
#define MIRYOKU_LAYOUTMAPPING_NAV( \
     K00, K01, K02, K03, K04,      K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,      K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,      K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,      K35, K36, K37, N38, N39 \
) \
&kp ESC   K00  K01  K02  K03  K04    K05  K06  K07  K08  K09  &kp GLOBE \
&kp HYPR  K10  K11  K12  K13  K14    K15  K16  K17  K18  K19  &kp ENTER \
&kp GLOBE K20  K21  K22  K23  K24    K25  K26  K27  K28  K29  &kp RSHFT \
                     K32  K33  K34    K35  K36  K37

// MOUSE layer mapping with custom outer column keys
#define MIRYOKU_LAYOUTMAPPING_MOUSE( \
     K00, K01, K02, K03, K04,      K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,      K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,      K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,      K35, K36, K37, N38, N39 \
) \
&kp ESC   K00  K01  K02  K03  K04    K05  K06  K07  K08  K09  &kp GLOBE \
&kp HYPR  K10  K11  K12  K13  K14    K15  K16  K17  K18  K19  &kp ENTER \
&kp GLOBE K20  K21  K22  K23  K24    K25  K26  K27  K28  K29  &kp RSHFT \
                     K32  K33  K34    K35  K36  K37

// MEDIA layer mapping with custom outer column keys
#define MIRYOKU_LAYOUTMAPPING_MEDIA( \
     K00, K01, K02, K03, K04,      K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,      K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,      K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,      K35, K36, K37, N38, N39 \
) \
&kp ESC   K00  K01  K02  K03  K04    K05  K06  K07  K08  K09  &kp GLOBE \
&kp HYPR  K10  K11  K12  K13  K14    K15  K16  K17  K18  K19  &kp ENTER \
&kp GLOBE K20  K21  K22  K23  K24    K25  K26  K27  K28  K29  &kp RSHFT \
                     K32  K33  K34    K35  K36  K37

// NUM layer mapping with custom outer column keys
#define MIRYOKU_LAYOUTMAPPING_NUM( \
     K00, K01, K02, K03, K04,      K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,      K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,      K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,      K35, K36, K37, N38, N39 \
) \
&kp ESC   K00  K01  K02  K03  K04    K05  K06  K07  K08  K09  &kp GLOBE \
&kp HYPR  K10  K11  K12  K13  K14    K15  K16  K17  K18  K19  &kp ENTER \
&kp GLOBE K20  K21  K22  K23  K24    K25  K26  K27  K28  K29  &kp RSHFT \
                     K32  K33  K34    K35  K36  K37

// SYM layer mapping with custom outer column keys and unicode tilde/backtick
#define MIRYOKU_LAYOUTMAPPING_SYM( \
     K00, K01, K02, K03, K04,      K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,      K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,      K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,      K35, K36, K37, N38, N39 \
) \
&kp N1  &mm_tilde_backtick  K01  K02  K03  K04    K05  K06  K07  K08  K09  &kp N4 \
&kp N2  K10                 K11  K12  K13  K14    K15  K16  K17  K18  K19  &kp N5 \
&kp N3  K20                 K21  K22  K23  K24    K25  K26  K27  K28  K29  &kp N6 \
                     K32  K33  K34    K35  K36  K37

// FUN layer mapping with numbers 1-6 on outer columns
#define MIRYOKU_LAYOUTMAPPING_FUN( \
     K00, K01, K02, K03, K04,      K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,      K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,      K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,      K35, K36, K37, N38, N39 \
) \
&kp N1  K00  K01  K02  K03  K04    K05  K06  K07  K08  K09  &kp N4 \
&kp N2  K10  K11  K12  K13  K14    K15  K16  K17  K18  K19  &kp N5 \
&kp N3  K20  K21  K22  K23  K24    K25  K26  K27  K28  K29  &kp N6 \
                     K32  K33  K34    K35  K36  K37

#endif

#define MIRYOKU_MAPPING MIRYOKU_LAYOUTMAPPING_HALLIE
