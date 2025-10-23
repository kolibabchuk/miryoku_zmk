// Copyright 2022 Manna Harbour
// https://github.com/manna-harbour/miryoku

#if !defined (MIRYOKU_LAYOUTMAPPING_HALLIE)

#define XXX &none
#define HYPR LG(LA(LS(LCTRL)))

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


#endif

#define MIRYOKU_MAPPING MIRYOKU_LAYOUTMAPPING_HALLIE
