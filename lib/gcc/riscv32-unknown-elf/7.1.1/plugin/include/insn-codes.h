/* Generated automatically by the program `gencodes'
   from the machine description file `md'.  */

#ifndef GCC_INSN_CODES_H
#define GCC_INSN_CODES_H

enum insn_code {
  CODE_FOR_nothing = 0,
  CODE_FOR_addsf3 = 1,
  CODE_FOR_adddf3 = 2,
  CODE_FOR_addhf3 = 3,
  CODE_FOR_addohf3 = 4,
  CODE_FOR_addsi3 = 5,
  CODE_FOR_adddi3 = 6,
  CODE_FOR_subsf3 = 9,
  CODE_FOR_subdf3 = 10,
  CODE_FOR_subhf3 = 11,
  CODE_FOR_subohf3 = 12,
  CODE_FOR_subdi3 = 13,
  CODE_FOR_subsi3 = 14,
  CODE_FOR_mulsf3 = 17,
  CODE_FOR_muldf3 = 18,
  CODE_FOR_mulhf3 = 19,
  CODE_FOR_mulohf3 = 20,
  CODE_FOR_mulsi3 = 21,
  CODE_FOR_muldi3 = 22,
  CODE_FOR_muldi3_highpart = 25,
  CODE_FOR_umuldi3_highpart = 26,
  CODE_FOR_usmuldi3_highpart = 27,
  CODE_FOR_mulsi3_highpart = 28,
  CODE_FOR_umulsi3_highpart = 29,
  CODE_FOR_usmulsi3_highpart = 30,
  CODE_FOR_divsi3 = 31,
  CODE_FOR_udivsi3 = 32,
  CODE_FOR_modsi3 = 33,
  CODE_FOR_umodsi3 = 34,
  CODE_FOR_divdi3 = 35,
  CODE_FOR_udivdi3 = 36,
  CODE_FOR_moddi3 = 37,
  CODE_FOR_umoddi3 = 38,
  CODE_FOR_divsf3 = 43,
  CODE_FOR_divdf3 = 44,
  CODE_FOR_divhf3 = 45,
  CODE_FOR_divohf3 = 46,
  CODE_FOR_sqrtsf2 = 47,
  CODE_FOR_sqrtdf2 = 48,
  CODE_FOR_sqrthf2 = 49,
  CODE_FOR_sqrtohf2 = 50,
  CODE_FOR_fmasf4 = 51,
  CODE_FOR_fmadf4 = 52,
  CODE_FOR_fmahf4 = 53,
  CODE_FOR_fmaohf4 = 54,
  CODE_FOR_fmssf4 = 55,
  CODE_FOR_fmsdf4 = 56,
  CODE_FOR_fmshf4 = 57,
  CODE_FOR_fmsohf4 = 58,
  CODE_FOR_fnmssf4 = 59,
  CODE_FOR_fnmsdf4 = 60,
  CODE_FOR_fnmshf4 = 61,
  CODE_FOR_fnmsohf4 = 62,
  CODE_FOR_fnmasf4 = 63,
  CODE_FOR_fnmadf4 = 64,
  CODE_FOR_fnmahf4 = 65,
  CODE_FOR_fnmaohf4 = 66,
   CODE_FOR_mulv1sfsf3 = CODE_FOR_nothing,
   CODE_FOR_mulhfsf3 = CODE_FOR_nothing,
  CODE_FOR_mulohfsf3 = 83,
   CODE_FOR_maddv1sfsf3_internal = CODE_FOR_nothing,
   CODE_FOR_maddhfsf3_internal = CODE_FOR_nothing,
  CODE_FOR_maddohfsf3_internal = 84,
  CODE_FOR_abssf2 = 85,
  CODE_FOR_absdf2 = 86,
  CODE_FOR_abshf2 = 87,
  CODE_FOR_absohf2 = 88,
  CODE_FOR_abssi2 = 89,
  CODE_FOR_copysignsf3 = 90,
  CODE_FOR_copysigndf3 = 91,
  CODE_FOR_copysignhf3 = 92,
  CODE_FOR_copysignohf3 = 93,
  CODE_FOR_negsf2 = 94,
  CODE_FOR_negdf2 = 95,
  CODE_FOR_neghf2 = 96,
  CODE_FOR_negohf2 = 97,
  CODE_FOR_sminsf3 = 98,
  CODE_FOR_smindf3 = 99,
  CODE_FOR_sminhf3 = 100,
  CODE_FOR_sminohf3 = 101,
  CODE_FOR_smaxsf3 = 102,
  CODE_FOR_smaxdf3 = 103,
  CODE_FOR_smaxhf3 = 104,
  CODE_FOR_smaxohf3 = 105,
  CODE_FOR_sminsi3 = 106,
  CODE_FOR_smaxsi3 = 107,
  CODE_FOR_uminsi3 = 108,
  CODE_FOR_umaxsi3 = 109,
  CODE_FOR_avgsi3 = 110,
  CODE_FOR_avgusi3 = 111,
  CODE_FOR_popcountsi2 = 112,
  CODE_FOR_clrsbsi2 = 113,
  CODE_FOR_fl1si2 = 114,
  CODE_FOR_ctzsi2 = 115,
  CODE_FOR_rotrsi3 = 116,
  CODE_FOR_truncsihi2 = 117,
  CODE_FOR_truncsiqi2 = 118,
  CODE_FOR_mulqisi3 = 119,
  CODE_FOR_umulqisi3 = 120,
  CODE_FOR_mulhisi3 = 121,
  CODE_FOR_umulhisi3 = 122,
  CODE_FOR_mulsForced_si3 = 123,
  CODE_FOR_muluForced_si3 = 124,
  CODE_FOR_smulhi3_highpart = 125,
  CODE_FOR_umulhi3_highpart = 126,
  CODE_FOR_mulhhs_si3 = 127,
  CODE_FOR_mulhhu_si3 = 128,
  CODE_FOR_mulsNr_si3 = 129,
  CODE_FOR_mulsRNr_si3 = 130,
  CODE_FOR_mulsRNr_hi3 = 131,
  CODE_FOR_muluNr_si3 = 132,
  CODE_FOR_muluRNr_si3 = 133,
  CODE_FOR_mulsForcedNr_si3 = 134,
  CODE_FOR_mulsForcedRNr_si3 = 135,
  CODE_FOR_muluForcedNr_si3 = 136,
  CODE_FOR_muluForcedRNr_si3 = 137,
  CODE_FOR_mulhhsNr_si3 = 138,
  CODE_FOR_mulhhuNr_si3 = 139,
  CODE_FOR_mulhhsRNr_si3 = 140,
  CODE_FOR_mulhhuRNr_si3 = 141,
  CODE_FOR_macsqi_si4 = 142,
  CODE_FOR_macshi_si4 = 143,
  CODE_FOR_macuqi_si4 = 144,
  CODE_FOR_macuhi_si4 = 145,
  CODE_FOR_macsForced_si3 = 146,
  CODE_FOR_macuForced_si3 = 147,
  CODE_FOR_machlsu_si4 = 148,
  CODE_FOR_machlu_si4 = 149,
  CODE_FOR_machhs_si4 = 150,
  CODE_FOR_machhu_si4 = 151,
  CODE_FOR_machls_si4 = 152,
  CODE_FOR_macsNr_si3 = 153,
  CODE_FOR_macuNr_si3 = 154,
  CODE_FOR_macsForcedNr_si3 = 155,
  CODE_FOR_macsForcedRNr_si3 = 156,
  CODE_FOR_macuForcedNr_si3 = 157,
  CODE_FOR_macuForcedRNr_si3 = 158,
  CODE_FOR_macsRNr_si3 = 159,
  CODE_FOR_macuRNr_si3 = 160,
  CODE_FOR_machhsNr_si3 = 161,
  CODE_FOR_machhuNr_si3 = 162,
  CODE_FOR_machhsRNr_si3 = 163,
  CODE_FOR_machhuRNr_si3 = 164,
  CODE_FOR_maddsisi4 = 165,
  CODE_FOR_msubsisi4 = 166,
  CODE_FOR_addN_si3 = 167,
  CODE_FOR_addNu_si3 = 168,
  CODE_FOR_addN_reg_si3 = 169,
  CODE_FOR_addNu_reg_si3 = 170,
  CODE_FOR_subN_si3 = 171,
  CODE_FOR_subNu_si3 = 172,
  CODE_FOR_subN_reg_si3 = 173,
  CODE_FOR_subNu_reg_si3 = 174,
  CODE_FOR_addRN_si3 = 175,
  CODE_FOR_addRNu_si3 = 176,
  CODE_FOR_addRN_reg_si3 = 177,
  CODE_FOR_addRNu_reg_si3 = 178,
  CODE_FOR_subRN_si3 = 179,
  CODE_FOR_subRNu_si3 = 180,
  CODE_FOR_subRN_reg_si3 = 181,
  CODE_FOR_subRNu_reg_si3 = 182,
  CODE_FOR_clip_maxmin = 183,
  CODE_FOR_clip_minmax = 184,
  CODE_FOR_clip_minmax_reg = 185,
  CODE_FOR_clip_maxmin_reg = 186,
  CODE_FOR_clipu_maxmin = 187,
  CODE_FOR_clipu_minmax = 188,
  CODE_FOR_clipu_maxmin_reg = 189,
  CODE_FOR_clipu_minmax_reg = 190,
  CODE_FOR_bclrsi3 = 191,
  CODE_FOR_bclrsi3_reg = 192,
  CODE_FOR_bsetsi3 = 193,
  CODE_FOR_bsetsi3_reg = 194,
  CODE_FOR_extvsi = 195,
  CODE_FOR_bextracts_reg_si3 = 196,
  CODE_FOR_bextracts_reg_alt_si3 = 197,
  CODE_FOR_bextractu_reg_alt_si3 = 198,
  CODE_FOR_extzvsi = 199,
  CODE_FOR_bextractu_reg_si3 = 200,
  CODE_FOR_insvsi = 201,
  CODE_FOR_invsipat1 = 204,
  CODE_FOR_binsert_reg_si3 = 205,
  CODE_FOR_andsi3 = 209,
  CODE_FOR_iorsi3 = 210,
  CODE_FOR_xorsi3 = 211,
  CODE_FOR_anddi3 = 212,
  CODE_FOR_iordi3 = 213,
  CODE_FOR_xordi3 = 214,
  CODE_FOR_one_cmplsi2 = 218,
  CODE_FOR_one_cmpldi2 = 219,
  CODE_FOR_truncdfsf2 = 221,
  CODE_FOR_truncdfhf2 = 222,
  CODE_FOR_truncdfohf2 = 223,
  CODE_FOR_truncsfhf2 = 224,
  CODE_FOR_truncsfohf2 = 225,
  CODE_FOR_zero_extendsidi2 = 226,
  CODE_FOR_zero_extendhisi2 = 227,
  CODE_FOR_zero_extendhidi2 = 228,
  CODE_FOR_zero_extendqihi2 = 229,
  CODE_FOR_zero_extendqisi2 = 230,
  CODE_FOR_zero_extendqidi2 = 231,
  CODE_FOR_extendsidi2 = 232,
  CODE_FOR_extendqihi2 = 233,
  CODE_FOR_extendqisi2 = 234,
  CODE_FOR_extendqidi2 = 235,
  CODE_FOR_extendhihi2 = 236,
  CODE_FOR_extendhisi2 = 237,
  CODE_FOR_extendhidi2 = 238,
  CODE_FOR_extendsfdf2 = 239,
  CODE_FOR_extendhfsf2 = 240,
  CODE_FOR_extendohfsf2 = 241,
  CODE_FOR_extendhfohf2 = 242,
  CODE_FOR_extendohfhf2 = 243,
  CODE_FOR_fix_truncsfsi2 = 244,
  CODE_FOR_fix_truncsfdi2 = 245,
  CODE_FOR_fix_truncdfsi2 = 246,
  CODE_FOR_fix_truncdfdi2 = 247,
  CODE_FOR_fixuns_truncsfsi2 = 248,
  CODE_FOR_fixuns_truncsfdi2 = 249,
  CODE_FOR_fixuns_truncdfsi2 = 250,
  CODE_FOR_fixuns_truncdfdi2 = 251,
  CODE_FOR_floatsisf2 = 252,
  CODE_FOR_floatdisf2 = 253,
  CODE_FOR_floatsidf2 = 254,
  CODE_FOR_floatdidf2 = 255,
  CODE_FOR_floatunssisf2 = 256,
  CODE_FOR_floatunsdisf2 = 257,
  CODE_FOR_floatunssidf2 = 258,
  CODE_FOR_floatunsdidf2 = 259,
  CODE_FOR_lrintsfsi2 = 260,
  CODE_FOR_lroundsfsi2 = 261,
  CODE_FOR_lrintsfdi2 = 262,
  CODE_FOR_lroundsfdi2 = 263,
  CODE_FOR_lrintdfsi2 = 264,
  CODE_FOR_lrounddfsi2 = 265,
  CODE_FOR_lrintdfdi2 = 266,
  CODE_FOR_lrounddfdi2 = 267,
  CODE_FOR_lrinthfsi2 = 268,
  CODE_FOR_lroundhfsi2 = 269,
  CODE_FOR_lrinthfdi2 = 270,
  CODE_FOR_lroundhfdi2 = 271,
  CODE_FOR_lrintohfsi2 = 272,
  CODE_FOR_lroundohfsi2 = 273,
  CODE_FOR_lrintohfdi2 = 274,
  CODE_FOR_lroundohfdi2 = 275,
  CODE_FOR_fix_truncohfsi2 = 276,
  CODE_FOR_fix_truncohfdi2 = 277,
  CODE_FOR_fix_trunchfsi2 = 278,
  CODE_FOR_fix_trunchfdi2 = 279,
  CODE_FOR_fixuns_truncohfsi2 = 280,
  CODE_FOR_fixuns_truncohfdi2 = 281,
  CODE_FOR_fixuns_trunchfsi2 = 282,
  CODE_FOR_fixuns_trunchfdi2 = 283,
   CODE_FOR_floatsiv1sf2 = CODE_FOR_nothing,
   CODE_FOR_floatdiv1sf2 = CODE_FOR_nothing,
  CODE_FOR_floatsihf2 = 284,
  CODE_FOR_floatdihf2 = 285,
  CODE_FOR_floatsiohf2 = 286,
  CODE_FOR_floatdiohf2 = 287,
   CODE_FOR_floatunssiv1sf2 = CODE_FOR_nothing,
   CODE_FOR_floatunsdiv1sf2 = CODE_FOR_nothing,
  CODE_FOR_floatunssihf2 = 288,
  CODE_FOR_floatunsdihf2 = 289,
  CODE_FOR_floatunssiohf2 = 290,
  CODE_FOR_floatunsdiohf2 = 291,
  CODE_FOR_got_loadsi = 292,
  CODE_FOR_got_loaddi = 293,
  CODE_FOR_tls_add_tp_lesi = 294,
  CODE_FOR_tls_add_tp_ledi = 295,
  CODE_FOR_got_load_tls_gdsi = 296,
  CODE_FOR_got_load_tls_gddi = 297,
  CODE_FOR_got_load_tls_iesi = 298,
  CODE_FOR_got_load_tls_iedi = 299,
  CODE_FOR_auipcsi = 300,
  CODE_FOR_auipcdi = 301,
  CODE_FOR_loadqi_ind_reg_reg = 306,
  CODE_FOR_loadhi_ind_reg_reg = 307,
  CODE_FOR_loadhf_ind_reg_reg = 308,
  CODE_FOR_loadohf_ind_reg_reg = 309,
  CODE_FOR_loadsi_ind_reg_reg = 310,
  CODE_FOR_loadsf_ind_reg_reg = 311,
  CODE_FOR_loadv2hi_ind_reg_reg = 312,
  CODE_FOR_loadv2hf_ind_reg_reg = 313,
  CODE_FOR_loadv2ohf_ind_reg_reg = 314,
  CODE_FOR_loadv4qi_ind_reg_reg = 315,
  CODE_FOR_loadqi_ext_ind_reg_reg = 316,
  CODE_FOR_loadqi_uext_ind_reg_reg = 317,
  CODE_FOR_loadhi_ext_ind_reg_reg = 318,
  CODE_FOR_loadhi_uext_ind_reg_reg = 319,
  CODE_FOR_loadhf_ext_ind_reg_reg = 320,
  CODE_FOR_loadhf_uext_ind_reg_reg = 321,
  CODE_FOR_loadohf_ext_ind_reg_reg = 322,
  CODE_FOR_loadohf_uext_ind_reg_reg = 323,
  CODE_FOR_loadsi_ext_ind_reg_reg = 324,
  CODE_FOR_loadsi_uext_ind_reg_reg = 325,
  CODE_FOR_loadsf_ext_ind_reg_reg = 326,
  CODE_FOR_loadsf_uext_ind_reg_reg = 327,
  CODE_FOR_loadv2hi_ext_ind_reg_reg = 328,
  CODE_FOR_loadv2hi_uext_ind_reg_reg = 329,
  CODE_FOR_loadv2hf_ext_ind_reg_reg = 330,
  CODE_FOR_loadv2hf_uext_ind_reg_reg = 331,
  CODE_FOR_loadv2ohf_ext_ind_reg_reg = 332,
  CODE_FOR_loadv2ohf_uext_ind_reg_reg = 333,
  CODE_FOR_loadv4qi_ext_ind_reg_reg = 334,
  CODE_FOR_loadv4qi_uext_ind_reg_reg = 335,
  CODE_FOR_storeqi_ind_reg_reg = 336,
  CODE_FOR_storehi_ind_reg_reg = 337,
  CODE_FOR_storehf_ind_reg_reg = 338,
  CODE_FOR_storeohf_ind_reg_reg = 339,
  CODE_FOR_storesi_ind_reg_reg = 340,
  CODE_FOR_storesf_ind_reg_reg = 341,
  CODE_FOR_storev2hi_ind_reg_reg = 342,
  CODE_FOR_storev2hf_ind_reg_reg = 343,
  CODE_FOR_storev2ohf_ind_reg_reg = 344,
  CODE_FOR_storev4qi_ind_reg_reg = 345,
  CODE_FOR_load_evt_unit = 346,
  CODE_FOR_read_spr = 347,
  CODE_FOR_read_spr_vol = 348,
  CODE_FOR_write_spr = 349,
  CODE_FOR_read_then_write_spr = 350,
  CODE_FOR_spr_bit_set = 351,
  CODE_FOR_read_then_spr_bit_set = 352,
  CODE_FOR_spr_bit_clr = 353,
  CODE_FOR_read_then_spr_bit_clr = 354,
  CODE_FOR_read_fcsr = 355,
  CODE_FOR_write_fcsr = 356,
  CODE_FOR_writesivol = 357,
  CODE_FOR_writesi = 358,
  CODE_FOR_readsivol = 359,
  CODE_FOR_OffsetedRead = 360,
  CODE_FOR_OffsetedReadHalf = 361,
  CODE_FOR_OffsetedReadByte = 362,
  CODE_FOR_OffsetedWrite = 363,
  CODE_FOR_OffsetedWriteHalf = 364,
  CODE_FOR_OffsetedWriteByte = 365,
  CODE_FOR_OffsetedReadOMP = 366,
  CODE_FOR_OffsetedReadNonVol = 367,
  CODE_FOR_loadqi_ind_postinc = 368,
  CODE_FOR_loadhi_ind_postinc = 369,
  CODE_FOR_loadhf_ind_postinc = 370,
  CODE_FOR_loadohf_ind_postinc = 371,
  CODE_FOR_loadsi_ind_postinc = 372,
  CODE_FOR_loadsf_ind_postinc = 373,
  CODE_FOR_loadv2hi_ind_postinc = 374,
  CODE_FOR_loadv2hf_ind_postinc = 375,
  CODE_FOR_loadv2ohf_ind_postinc = 376,
  CODE_FOR_loadv4qi_ind_postinc = 377,
  CODE_FOR_loadqi_ext_ind_postinc = 378,
  CODE_FOR_loadqi_uext_ind_postinc = 379,
  CODE_FOR_loadhi_ext_ind_postinc = 380,
  CODE_FOR_loadhi_uext_ind_postinc = 381,
  CODE_FOR_loadhf_ext_ind_postinc = 382,
  CODE_FOR_loadhf_uext_ind_postinc = 383,
  CODE_FOR_loadohf_ext_ind_postinc = 384,
  CODE_FOR_loadohf_uext_ind_postinc = 385,
  CODE_FOR_loadsi_ext_ind_postinc = 386,
  CODE_FOR_loadsi_uext_ind_postinc = 387,
  CODE_FOR_loadsf_ext_ind_postinc = 388,
  CODE_FOR_loadsf_uext_ind_postinc = 389,
  CODE_FOR_loadv2hi_ext_ind_postinc = 390,
  CODE_FOR_loadv2hi_uext_ind_postinc = 391,
  CODE_FOR_loadv2hf_ext_ind_postinc = 392,
  CODE_FOR_loadv2hf_uext_ind_postinc = 393,
  CODE_FOR_loadv2ohf_ext_ind_postinc = 394,
  CODE_FOR_loadv2ohf_uext_ind_postinc = 395,
  CODE_FOR_loadv4qi_ext_ind_postinc = 396,
  CODE_FOR_loadv4qi_uext_ind_postinc = 397,
  CODE_FOR_loadqi_ind_postdec = 398,
  CODE_FOR_loadhi_ind_postdec = 399,
  CODE_FOR_loadhf_ind_postdec = 400,
  CODE_FOR_loadohf_ind_postdec = 401,
  CODE_FOR_loadsi_ind_postdec = 402,
  CODE_FOR_loadsf_ind_postdec = 403,
  CODE_FOR_loadv2hi_ind_postdec = 404,
  CODE_FOR_loadv2hf_ind_postdec = 405,
  CODE_FOR_loadv2ohf_ind_postdec = 406,
  CODE_FOR_loadv4qi_ind_postdec = 407,
  CODE_FOR_loadqi_ext_ind_postdec = 408,
  CODE_FOR_loadqi_uext_ind_postdec = 409,
  CODE_FOR_loadhi_ext_ind_postdec = 410,
  CODE_FOR_loadhi_uext_ind_postdec = 411,
  CODE_FOR_loadhf_ext_ind_postdec = 412,
  CODE_FOR_loadhf_uext_ind_postdec = 413,
  CODE_FOR_loadohf_ext_ind_postdec = 414,
  CODE_FOR_loadohf_uext_ind_postdec = 415,
  CODE_FOR_loadsi_ext_ind_postdec = 416,
  CODE_FOR_loadsi_uext_ind_postdec = 417,
  CODE_FOR_loadsf_ext_ind_postdec = 418,
  CODE_FOR_loadsf_uext_ind_postdec = 419,
  CODE_FOR_loadv2hi_ext_ind_postdec = 420,
  CODE_FOR_loadv2hi_uext_ind_postdec = 421,
  CODE_FOR_loadv2hf_ext_ind_postdec = 422,
  CODE_FOR_loadv2hf_uext_ind_postdec = 423,
  CODE_FOR_loadv2ohf_ext_ind_postdec = 424,
  CODE_FOR_loadv2ohf_uext_ind_postdec = 425,
  CODE_FOR_loadv4qi_ext_ind_postdec = 426,
  CODE_FOR_loadv4qi_uext_ind_postdec = 427,
  CODE_FOR_loadqi_ind_post_mod = 428,
  CODE_FOR_loadhi_ind_post_mod = 429,
  CODE_FOR_loadhf_ind_post_mod = 430,
  CODE_FOR_loadohf_ind_post_mod = 431,
  CODE_FOR_loadsi_ind_post_mod = 432,
  CODE_FOR_loadsf_ind_post_mod = 433,
  CODE_FOR_loadv2hi_ind_post_mod = 434,
  CODE_FOR_loadv2hf_ind_post_mod = 435,
  CODE_FOR_loadv2ohf_ind_post_mod = 436,
  CODE_FOR_loadv4qi_ind_post_mod = 437,
  CODE_FOR_loadqi_ext_ind_post_mod = 438,
  CODE_FOR_loadqi_uext_ind_post_mod = 439,
  CODE_FOR_loadhi_ext_ind_post_mod = 440,
  CODE_FOR_loadhi_uext_ind_post_mod = 441,
  CODE_FOR_loadhf_ext_ind_post_mod = 442,
  CODE_FOR_loadhf_uext_ind_post_mod = 443,
  CODE_FOR_loadohf_ext_ind_post_mod = 444,
  CODE_FOR_loadohf_uext_ind_post_mod = 445,
  CODE_FOR_loadsi_ext_ind_post_mod = 446,
  CODE_FOR_loadsi_uext_ind_post_mod = 447,
  CODE_FOR_loadsf_ext_ind_post_mod = 448,
  CODE_FOR_loadsf_uext_ind_post_mod = 449,
  CODE_FOR_loadv2hi_ext_ind_post_mod = 450,
  CODE_FOR_loadv2hi_uext_ind_post_mod = 451,
  CODE_FOR_loadv2hf_ext_ind_post_mod = 452,
  CODE_FOR_loadv2hf_uext_ind_post_mod = 453,
  CODE_FOR_loadv2ohf_ext_ind_post_mod = 454,
  CODE_FOR_loadv2ohf_uext_ind_post_mod = 455,
  CODE_FOR_loadv4qi_ext_ind_post_mod = 456,
  CODE_FOR_loadv4qi_uext_ind_post_mod = 457,
  CODE_FOR_storeqi_ind_postinc = 458,
  CODE_FOR_storehi_ind_postinc = 459,
  CODE_FOR_storehf_ind_postinc = 460,
  CODE_FOR_storeohf_ind_postinc = 461,
  CODE_FOR_storesi_ind_postinc = 462,
  CODE_FOR_storesf_ind_postinc = 463,
  CODE_FOR_storev2hi_ind_postinc = 464,
  CODE_FOR_storev2hf_ind_postinc = 465,
  CODE_FOR_storev2ohf_ind_postinc = 466,
  CODE_FOR_storev4qi_ind_postinc = 467,
  CODE_FOR_storeqi_ind_postdec = 468,
  CODE_FOR_storehi_ind_postdec = 469,
  CODE_FOR_storehf_ind_postdec = 470,
  CODE_FOR_storeohf_ind_postdec = 471,
  CODE_FOR_storesi_ind_postdec = 472,
  CODE_FOR_storesf_ind_postdec = 473,
  CODE_FOR_storev2hi_ind_postdec = 474,
  CODE_FOR_storev2hf_ind_postdec = 475,
  CODE_FOR_storev2ohf_ind_postdec = 476,
  CODE_FOR_storev4qi_ind_postdec = 477,
  CODE_FOR_storeqi_ind_postmod = 478,
  CODE_FOR_storehi_ind_postmod = 479,
  CODE_FOR_storehf_ind_postmod = 480,
  CODE_FOR_storeohf_ind_postmod = 481,
  CODE_FOR_storesi_ind_postmod = 482,
  CODE_FOR_storesf_ind_postmod = 483,
  CODE_FOR_storev2hi_ind_postmod = 484,
  CODE_FOR_storev2hf_ind_postmod = 485,
  CODE_FOR_storev2ohf_ind_postmod = 486,
  CODE_FOR_storev4qi_ind_postmod = 487,
  CODE_FOR_movv2hi_internal = 489,
  CODE_FOR_movv4qi_internal = 490,
  CODE_FOR_fence = 504,
  CODE_FOR_fence_i = 505,
  CODE_FOR_ashlsi3 = 506,
  CODE_FOR_ashrsi3 = 507,
  CODE_FOR_lshrsi3 = 508,
  CODE_FOR_ashldi3 = 509,
  CODE_FOR_ashrdi3 = 510,
  CODE_FOR_lshrdi3 = 511,
  CODE_FOR_vec_initv2hi_internal = 515,
  CODE_FOR_vec_initv4qi_internal = 516,
  CODE_FOR_vec_initv2hf_internal_x = 517,
  CODE_FOR_vec_initv2ohf_internal_x = 518,
  CODE_FOR_movv2hf_internal = 519,
  CODE_FOR_movv2ohf_internal = 520,
  CODE_FOR_movv1sf_internal = 521,
  CODE_FOR_extendv2hfv2ohf2 = 522,
  CODE_FOR_extendv2ohfv2hf2 = 523,
  CODE_FOR_floatv2hiv2hf2_internal = 524,
  CODE_FOR_floatv2hiv2ohf2_internal = 525,
  CODE_FOR_floatunsv2hiv2hf2_internal = 526,
  CODE_FOR_floatunsv2hiv2ohf2_internal = 527,
  CODE_FOR_fix_truncv2hfv2hi2_internal = 528,
  CODE_FOR_fix_truncv2ohfv2hi2_internal = 529,
  CODE_FOR_fixuns_truncv2hfv2hi2_internal = 530,
  CODE_FOR_fixuns_truncv2ohfv2hi2_internal = 531,
  CODE_FOR_lshrimmv2hf = 532,
  CODE_FOR_lshrimmv2ohf = 533,
  CODE_FOR_lshrimmv2hi = 534,
  CODE_FOR_lshrimmv4qi = 535,
  CODE_FOR_orv2hf = 536,
  CODE_FOR_orv2ohf = 537,
  CODE_FOR_orv2hi = 538,
  CODE_FOR_orv4qi = 539,
  CODE_FOR_vec_pack_trunc_v1sf = 540,
  CODE_FOR_vec_pack_trunc_v1sf_to_v2hf_builtin = 541,
  CODE_FOR_vec_pack_trunc_v1sf_alt = 542,
  CODE_FOR_vec_pack_trunc_v1sf_to_v2ohf_builtin = 543,
  CODE_FOR_vec_unpacks_lo_v2hf = 544,
  CODE_FOR_vec_unpacks_lo_v2ohf = 545,
  CODE_FOR_vec_pack_v2hf = 546,
  CODE_FOR_vec_pack_v2ohf = 547,
  CODE_FOR_vec_pack_v2hi = 548,
  CODE_FOR_vec_pack_v4qi_lo = 549,
  CODE_FOR_vec_pack_v4qi_lo_first = 550,
  CODE_FOR_vec_pack_v4qi_hi = 551,
  CODE_FOR_vec_pack_v4qi_hi_first = 552,
  CODE_FOR_vec_permv2hf_internal2_1 = 553,
  CODE_FOR_vec_permv2ohf_internal2_1 = 554,
  CODE_FOR_vec_permv2hi_internal2_1 = 555,
  CODE_FOR_vec_permv2hf_internal2 = 556,
  CODE_FOR_vec_permv2ohf_internal2 = 557,
  CODE_FOR_vec_permv2hi_internal2 = 558,
  CODE_FOR_vec_permv2hf_int1 = 559,
  CODE_FOR_vec_permv2ohf_int1 = 560,
  CODE_FOR_vec_permv2hi_int1 = 561,
  CODE_FOR_vec_permv2hf_low = 562,
  CODE_FOR_vec_permv2ohf_low = 563,
  CODE_FOR_vec_permv2hi_low = 564,
  CODE_FOR_vec_permv2hf_high = 565,
  CODE_FOR_vec_permv2ohf_high = 566,
  CODE_FOR_vec_permv2hi_high = 567,
  CODE_FOR_vec_permv4qi_internal2_1 = 568,
  CODE_FOR_vec_permv4qi_internal2 = 569,
  CODE_FOR_vec_permv4qi_int1 = 570,
  CODE_FOR_vec_setv2hf_internal = 571,
  CODE_FOR_vec_setv2ohf_internal = 572,
  CODE_FOR_vec_setv2hi_internal = 573,
  CODE_FOR_vec_setv4qi_internal = 574,
  CODE_FOR_vec_set_firstv2hf_internal = 575,
  CODE_FOR_vec_set_firstv2ohf_internal = 576,
  CODE_FOR_vec_set_firstv2hi_internal = 577,
  CODE_FOR_vec_set_firstv4qi_internal = 578,
  CODE_FOR_vec_extract_sext_qi_v2hf = 579,
  CODE_FOR_vec_extract_sext_hi_v2hf = 580,
  CODE_FOR_vec_extract_sext_si_v2hf = 581,
  CODE_FOR_vec_extract_sext_qi_v2ohf = 582,
  CODE_FOR_vec_extract_sext_hi_v2ohf = 583,
  CODE_FOR_vec_extract_sext_si_v2ohf = 584,
  CODE_FOR_vec_extract_sext_qi_v2hi = 585,
  CODE_FOR_vec_extract_sext_hi_v2hi = 586,
  CODE_FOR_vec_extract_sext_si_v2hi = 587,
  CODE_FOR_vec_extract_sext_qi_v4qi = 588,
  CODE_FOR_vec_extract_sext_hi_v4qi = 589,
  CODE_FOR_vec_extract_sext_si_v4qi = 590,
  CODE_FOR_vec_extract_zext_qi_v2hf = 591,
  CODE_FOR_vec_extract_zext_hi_v2hf = 592,
  CODE_FOR_vec_extract_zext_si_v2hf = 593,
  CODE_FOR_vec_extract_zext_qi_v2ohf = 594,
  CODE_FOR_vec_extract_zext_hi_v2ohf = 595,
  CODE_FOR_vec_extract_zext_si_v2ohf = 596,
  CODE_FOR_vec_extract_zext_qi_v2hi = 597,
  CODE_FOR_vec_extract_zext_hi_v2hi = 598,
  CODE_FOR_vec_extract_zext_si_v2hi = 599,
  CODE_FOR_vec_extract_zext_qi_v4qi = 600,
  CODE_FOR_vec_extract_zext_hi_v4qi = 601,
  CODE_FOR_vec_extract_zext_si_v4qi = 602,
  CODE_FOR_vec_extractv2hf = 603,
  CODE_FOR_vec_extractv2ohf = 604,
  CODE_FOR_vec_extractv2hi = 605,
  CODE_FOR_vec_extractv4qi = 606,
  CODE_FOR_cplx_conjhi2 = 607,
  CODE_FOR_cplx_conjsi3 = 608,
  CODE_FOR_add_div2_v2hi3 = 609,
  CODE_FOR_add_div2_v4qi3 = 610,
  CODE_FOR_add_div4_v2hi3 = 611,
  CODE_FOR_add_div8_v2hi3 = 612,
  CODE_FOR_add_div4_v4qi3 = 613,
  CODE_FOR_sub_div2_v2hi3 = 614,
  CODE_FOR_sub_div2_v4qi3 = 615,
  CODE_FOR_sub_div4_v2hi3 = 616,
  CODE_FOR_sub_div8_v2hi3 = 617,
  CODE_FOR_sub_div4_v4qi3 = 618,
  CODE_FOR_subrotmj_v2hi3 = 619,
  CODE_FOR_addv2hf3 = 620,
  CODE_FOR_subv2hf3 = 621,
  CODE_FOR_sminv2hf3 = 622,
  CODE_FOR_smaxv2hf3 = 623,
  CODE_FOR_mulv2hf3 = 624,
  CODE_FOR_addv2ohf3 = 625,
  CODE_FOR_subv2ohf3 = 626,
  CODE_FOR_sminv2ohf3 = 627,
  CODE_FOR_smaxv2ohf3 = 628,
  CODE_FOR_mulv2ohf3 = 629,
  CODE_FOR_addscv2hf3 = 630,
  CODE_FOR_subscv2hf3 = 631,
  CODE_FOR_sminscv2hf3 = 632,
  CODE_FOR_smaxscv2hf3 = 633,
  CODE_FOR_mulscv2hf3 = 634,
  CODE_FOR_addscv2ohf3 = 635,
  CODE_FOR_subscv2ohf3 = 636,
  CODE_FOR_sminscv2ohf3 = 637,
  CODE_FOR_smaxscv2ohf3 = 638,
  CODE_FOR_mulscv2ohf3 = 639,
  CODE_FOR_addv2hi3 = 640,
  CODE_FOR_subv2hi3 = 641,
  CODE_FOR_sminv2hi3 = 642,
  CODE_FOR_smaxv2hi3 = 643,
  CODE_FOR_addv4qi3 = 644,
  CODE_FOR_subv4qi3 = 645,
  CODE_FOR_sminv4qi3 = 646,
  CODE_FOR_smaxv4qi3 = 647,
  CODE_FOR_addscv2hi3 = 648,
  CODE_FOR_subscv2hi3 = 649,
  CODE_FOR_sminscv2hi3 = 650,
  CODE_FOR_smaxscv2hi3 = 651,
  CODE_FOR_addscv4qi3 = 652,
  CODE_FOR_subscv4qi3 = 653,
  CODE_FOR_sminscv4qi3 = 654,
  CODE_FOR_smaxscv4qi3 = 655,
  CODE_FOR_add_swap_scv2hi3 = 656,
  CODE_FOR_sub_swap_scv2hi3 = 657,
  CODE_FOR_smin_swap_scv2hi3 = 658,
  CODE_FOR_smax_swap_scv2hi3 = 659,
  CODE_FOR_add_swap_scv4qi3 = 660,
  CODE_FOR_sub_swap_scv4qi3 = 661,
  CODE_FOR_smin_swap_scv4qi3 = 662,
  CODE_FOR_smax_swap_scv4qi3 = 663,
  CODE_FOR_fmav2hf3_internal = 664,
  CODE_FOR_fmav2ohf3_internal = 665,
  CODE_FOR_fmsv2hf4 = 666,
  CODE_FOR_fmsv2ohf4 = 667,
  CODE_FOR_copysignv2hf3 = 668,
  CODE_FOR_copysignv2ohf3 = 669,
  CODE_FOR_uminv2hi3 = 670,
  CODE_FOR_umaxv2hi3 = 671,
  CODE_FOR_uminv4qi3 = 672,
  CODE_FOR_umaxv4qi3 = 673,
  CODE_FOR_uminscv2hi3 = 674,
  CODE_FOR_umaxscv2hi3 = 675,
  CODE_FOR_uminscv4qi3 = 676,
  CODE_FOR_umaxscv4qi3 = 677,
  CODE_FOR_umin_swap_scv2hi3 = 678,
  CODE_FOR_umax_swap_scv2hi3 = 679,
  CODE_FOR_umin_swap_scv4qi3 = 680,
  CODE_FOR_umax_swap_scv4qi3 = 681,
  CODE_FOR_vlshrv2hi3 = 682,
  CODE_FOR_vashrv2hi3 = 683,
  CODE_FOR_vashlv2hi3 = 684,
  CODE_FOR_vlshrv4qi3 = 685,
  CODE_FOR_vashrv4qi3 = 686,
  CODE_FOR_vashlv4qi3 = 687,
  CODE_FOR_vlshrscv2hi3 = 688,
  CODE_FOR_vashrscv2hi3 = 689,
  CODE_FOR_vashlscv2hi3 = 690,
  CODE_FOR_vlshrscv4qi3 = 691,
  CODE_FOR_vashrscv4qi3 = 692,
  CODE_FOR_vashlscv4qi3 = 693,
  CODE_FOR_avgv2hi3 = 694,
  CODE_FOR_avgv4qi3 = 695,
  CODE_FOR_avgscv2hi3 = 696,
  CODE_FOR_avgscv4qi3 = 697,
  CODE_FOR_avgsc_swap_v2hi3 = 698,
  CODE_FOR_avgsc_swap_v4qi3 = 699,
  CODE_FOR_avgv2uhi3 = 700,
  CODE_FOR_avgv4uqi3 = 701,
  CODE_FOR_avgscv2uhi3 = 702,
  CODE_FOR_avgscv4uqi3 = 703,
  CODE_FOR_avgsc_swap_v2uhi3 = 704,
  CODE_FOR_avgsc_swap_v4uqi3 = 705,
  CODE_FOR_andv2hf3 = 706,
  CODE_FOR_iorv2hf3 = 707,
  CODE_FOR_exorv2hf3 = 708,
  CODE_FOR_andv2ohf3 = 709,
  CODE_FOR_iorv2ohf3 = 710,
  CODE_FOR_exorv2ohf3 = 711,
  CODE_FOR_andv2hi3 = 712,
  CODE_FOR_iorv2hi3 = 713,
  CODE_FOR_exorv2hi3 = 714,
  CODE_FOR_andv4qi3 = 715,
  CODE_FOR_iorv4qi3 = 716,
  CODE_FOR_exorv4qi3 = 717,
  CODE_FOR_andscv2hf3 = 718,
  CODE_FOR_iorscv2hf3 = 719,
  CODE_FOR_exorscv2hf3 = 720,
  CODE_FOR_andscv2ohf3 = 721,
  CODE_FOR_iorscv2ohf3 = 722,
  CODE_FOR_exorscv2ohf3 = 723,
  CODE_FOR_andscv2hi3 = 724,
  CODE_FOR_iorscv2hi3 = 725,
  CODE_FOR_exorscv2hi3 = 726,
  CODE_FOR_andscv4qi3 = 727,
  CODE_FOR_iorscv4qi3 = 728,
  CODE_FOR_exorscv4qi3 = 729,
  CODE_FOR_and_swap_scv2hf3 = 730,
  CODE_FOR_ior_swap_scv2hf3 = 731,
  CODE_FOR_exor_swap_scv2hf3 = 732,
  CODE_FOR_and_swap_scv2ohf3 = 733,
  CODE_FOR_ior_swap_scv2ohf3 = 734,
  CODE_FOR_exor_swap_scv2ohf3 = 735,
  CODE_FOR_and_swap_scv2hi3 = 736,
  CODE_FOR_ior_swap_scv2hi3 = 737,
  CODE_FOR_exor_swap_scv2hi3 = 738,
  CODE_FOR_and_swap_scv4qi3 = 739,
  CODE_FOR_ior_swap_scv4qi3 = 740,
  CODE_FOR_exor_swap_scv4qi3 = 741,
  CODE_FOR_absv2hf2 = 742,
  CODE_FOR_absv2ohf2 = 743,
  CODE_FOR_absv2hi2 = 744,
  CODE_FOR_absv4qi2 = 745,
  CODE_FOR_negv2hf2 = 746,
  CODE_FOR_negv2ohf2 = 747,
  CODE_FOR_negv2hi2 = 748,
  CODE_FOR_negv4qi2 = 749,
  CODE_FOR_bitrevsi = 750,
  CODE_FOR_cplxmulsv2hi_low_first = 751,
  CODE_FOR_cplxmulsv2hi_div2_low_first = 752,
  CODE_FOR_cplxmulsv2hi_div4_low_first = 753,
  CODE_FOR_cplxmulsv2hi_div8_low_first = 754,
  CODE_FOR_cplxmulsv2hi_hi = 755,
  CODE_FOR_cplxmulsv2hi_div2_hi = 756,
  CODE_FOR_cplxmulsv2hi_div4_hi = 757,
  CODE_FOR_cplxmulsv2hi_div8_hi = 758,
  CODE_FOR_cplxmulsv2hi = 759,
  CODE_FOR_cplxmulsv2hi_div2 = 760,
  CODE_FOR_cplxmulsv2hi_div4 = 761,
  CODE_FOR_vec_vit_max_v2hi = 762,
  CODE_FOR_vec_vit_sel_v2hi = 763,
  CODE_FOR_dotpv2hi = 764,
  CODE_FOR_dotspscv2hi_le = 765,
  CODE_FOR_reduc_plus_scal_v2hi = 766,
  CODE_FOR_dotupv2hi = 767,
  CODE_FOR_dotupscv2hi_le = 768,
  CODE_FOR_dotuspv2hi = 769,
  CODE_FOR_dotuspscv2hi_le = 770,
  CODE_FOR_dotpv4qi = 771,
  CODE_FOR_reduc_plus_scal_v4qi = 772,
  CODE_FOR_dotspscv4qi_le = 773,
  CODE_FOR_dotupv4qi = 774,
  CODE_FOR_dotupscv4qi_le = 775,
  CODE_FOR_dotuspv4qi = 776,
  CODE_FOR_dotuspscv4qi_le = 777,
  CODE_FOR_sdot_prodv2hi = 778,
  CODE_FOR_sdotspscv2hi_le = 779,
  CODE_FOR_udot_prodv2hi = 780,
  CODE_FOR_sdotupscv2hi_le = 781,
  CODE_FOR_sdotuspv2hi = 782,
  CODE_FOR_sdotuspscv2hi_le = 783,
  CODE_FOR_sdot_prodv4qi = 784,
  CODE_FOR_sdotspscv4qi_le = 785,
  CODE_FOR_udot_prodv4qi = 786,
  CODE_FOR_sdotupscv4qi_le = 787,
  CODE_FOR_sdotuspv4qi = 788,
  CODE_FOR_sdotuspscv4qi_le = 789,
  CODE_FOR_cmpv2hf_eq = 790,
  CODE_FOR_cmpv2hf_ne = 791,
  CODE_FOR_cmpv2hf_le = 792,
  CODE_FOR_cmpv2hf_lt = 793,
  CODE_FOR_cmpv2hf_ge = 794,
  CODE_FOR_cmpv2hf_gt = 795,
  CODE_FOR_cmpv2ohf_eq = 796,
  CODE_FOR_cmpv2ohf_ne = 797,
  CODE_FOR_cmpv2ohf_le = 798,
  CODE_FOR_cmpv2ohf_lt = 799,
  CODE_FOR_cmpv2ohf_ge = 800,
  CODE_FOR_cmpv2ohf_gt = 801,
  CODE_FOR_vec_cmpeqv2hfv2hi = 802,
  CODE_FOR_vec_cmpeqv2ohfv2hi = 803,
  CODE_FOR_cmpv2hf_sceq = 804,
  CODE_FOR_cmpv2hf_scne = 805,
  CODE_FOR_cmpv2hf_scle = 806,
  CODE_FOR_cmpv2hf_sclt = 807,
  CODE_FOR_cmpv2hf_scge = 808,
  CODE_FOR_cmpv2hf_scgt = 809,
  CODE_FOR_cmpv2hf_scgtu = 810,
  CODE_FOR_cmpv2hf_scltu = 811,
  CODE_FOR_cmpv2hf_scgeu = 812,
  CODE_FOR_cmpv2hf_scleu = 813,
  CODE_FOR_cmpv2ohf_sceq = 814,
  CODE_FOR_cmpv2ohf_scne = 815,
  CODE_FOR_cmpv2ohf_scle = 816,
  CODE_FOR_cmpv2ohf_sclt = 817,
  CODE_FOR_cmpv2ohf_scge = 818,
  CODE_FOR_cmpv2ohf_scgt = 819,
  CODE_FOR_cmpv2ohf_scgtu = 820,
  CODE_FOR_cmpv2ohf_scltu = 821,
  CODE_FOR_cmpv2ohf_scgeu = 822,
  CODE_FOR_cmpv2ohf_scleu = 823,
  CODE_FOR_cmp_swap_v2hf_sceq = 824,
  CODE_FOR_cmp_swap_v2hf_scne = 825,
  CODE_FOR_cmp_swap_v2hf_scle = 826,
  CODE_FOR_cmp_swap_v2hf_sclt = 827,
  CODE_FOR_cmp_swap_v2hf_scge = 828,
  CODE_FOR_cmp_swap_v2hf_scgt = 829,
  CODE_FOR_cmp_swap_v2hf_scgtu = 830,
  CODE_FOR_cmp_swap_v2hf_scltu = 831,
  CODE_FOR_cmp_swap_v2hf_scgeu = 832,
  CODE_FOR_cmp_swap_v2hf_scleu = 833,
  CODE_FOR_cmp_swap_v2ohf_sceq = 834,
  CODE_FOR_cmp_swap_v2ohf_scne = 835,
  CODE_FOR_cmp_swap_v2ohf_scle = 836,
  CODE_FOR_cmp_swap_v2ohf_sclt = 837,
  CODE_FOR_cmp_swap_v2ohf_scge = 838,
  CODE_FOR_cmp_swap_v2ohf_scgt = 839,
  CODE_FOR_cmp_swap_v2ohf_scgtu = 840,
  CODE_FOR_cmp_swap_v2ohf_scltu = 841,
  CODE_FOR_cmp_swap_v2ohf_scgeu = 842,
  CODE_FOR_cmp_swap_v2ohf_scleu = 843,
  CODE_FOR_cmpv2hi_eq = 844,
  CODE_FOR_cmpv2hi_ne = 845,
  CODE_FOR_cmpv2hi_le = 846,
  CODE_FOR_cmpv2hi_lt = 847,
  CODE_FOR_cmpv2hi_ge = 848,
  CODE_FOR_cmpv2hi_gt = 849,
  CODE_FOR_cmpv4qi_eq = 850,
  CODE_FOR_cmpv4qi_ne = 851,
  CODE_FOR_cmpv4qi_le = 852,
  CODE_FOR_cmpv4qi_lt = 853,
  CODE_FOR_cmpv4qi_ge = 854,
  CODE_FOR_cmpv4qi_gt = 855,
  CODE_FOR_cmpv2hi_gtu = 856,
  CODE_FOR_cmpv2hi_ltu = 857,
  CODE_FOR_cmpv2hi_geu = 858,
  CODE_FOR_cmpv2hi_leu = 859,
  CODE_FOR_cmpv4qi_gtu = 860,
  CODE_FOR_cmpv4qi_ltu = 861,
  CODE_FOR_cmpv4qi_geu = 862,
  CODE_FOR_cmpv4qi_leu = 863,
  CODE_FOR_cmpv2hi_sceq = 864,
  CODE_FOR_cmpv2hi_scne = 865,
  CODE_FOR_cmpv2hi_scle = 866,
  CODE_FOR_cmpv2hi_sclt = 867,
  CODE_FOR_cmpv2hi_scge = 868,
  CODE_FOR_cmpv2hi_scgt = 869,
  CODE_FOR_cmpv2hi_scgtu = 870,
  CODE_FOR_cmpv2hi_scltu = 871,
  CODE_FOR_cmpv2hi_scgeu = 872,
  CODE_FOR_cmpv2hi_scleu = 873,
  CODE_FOR_cmpv4qi_sceq = 874,
  CODE_FOR_cmpv4qi_scne = 875,
  CODE_FOR_cmpv4qi_scle = 876,
  CODE_FOR_cmpv4qi_sclt = 877,
  CODE_FOR_cmpv4qi_scge = 878,
  CODE_FOR_cmpv4qi_scgt = 879,
  CODE_FOR_cmpv4qi_scgtu = 880,
  CODE_FOR_cmpv4qi_scltu = 881,
  CODE_FOR_cmpv4qi_scgeu = 882,
  CODE_FOR_cmpv4qi_scleu = 883,
  CODE_FOR_cmp_swap_v2hi_sceq = 884,
  CODE_FOR_cmp_swap_v2hi_scne = 885,
  CODE_FOR_cmp_swap_v2hi_scle = 886,
  CODE_FOR_cmp_swap_v2hi_sclt = 887,
  CODE_FOR_cmp_swap_v2hi_scge = 888,
  CODE_FOR_cmp_swap_v2hi_scgt = 889,
  CODE_FOR_cmp_swap_v2hi_scgtu = 890,
  CODE_FOR_cmp_swap_v2hi_scltu = 891,
  CODE_FOR_cmp_swap_v2hi_scgeu = 892,
  CODE_FOR_cmp_swap_v2hi_scleu = 893,
  CODE_FOR_cmp_swap_v4qi_sceq = 894,
  CODE_FOR_cmp_swap_v4qi_scne = 895,
  CODE_FOR_cmp_swap_v4qi_scle = 896,
  CODE_FOR_cmp_swap_v4qi_sclt = 897,
  CODE_FOR_cmp_swap_v4qi_scge = 898,
  CODE_FOR_cmp_swap_v4qi_scgt = 899,
  CODE_FOR_cmp_swap_v4qi_scgtu = 900,
  CODE_FOR_cmp_swap_v4qi_scltu = 901,
  CODE_FOR_cmp_swap_v4qi_scgeu = 902,
  CODE_FOR_cmp_swap_v4qi_scleu = 903,
  CODE_FOR_flt_quietsfsi4 = 922,
  CODE_FOR_fle_quietsfsi4 = 923,
  CODE_FOR_flt_quietsfdi4 = 924,
  CODE_FOR_fle_quietsfdi4 = 925,
  CODE_FOR_flt_quietdfsi4 = 926,
  CODE_FOR_fle_quietdfsi4 = 927,
  CODE_FOR_flt_quietdfdi4 = 928,
  CODE_FOR_fle_quietdfdi4 = 929,
  CODE_FOR_flt_quiethfsi4 = 930,
  CODE_FOR_fle_quiethfsi4 = 931,
  CODE_FOR_flt_quiethfdi4 = 932,
  CODE_FOR_fle_quiethfdi4 = 933,
  CODE_FOR_flt_quietohfsi4 = 934,
  CODE_FOR_fle_quietohfsi4 = 935,
  CODE_FOR_flt_quietohfdi4 = 936,
  CODE_FOR_fle_quietohfdi4 = 937,
  CODE_FOR_jump = 972,
  CODE_FOR_indirect_jumpsi = 973,
  CODE_FOR_indirect_jumpdi = 974,
  CODE_FOR_tablejumpsi = 975,
  CODE_FOR_tablejumpdi = 976,
  CODE_FOR_blockage = 977,
  CODE_FOR_simple_return = 978,
  CODE_FOR_simple_return_internal = 979,
  CODE_FOR_simple_it_return = 980,
  CODE_FOR_simple_itu_return = 981,
  CODE_FOR_simple_its_return = 982,
  CODE_FOR_simple_ith_return = 983,
  CODE_FOR_simple_itm_return = 984,
  CODE_FOR_eh_set_lr_si = 985,
  CODE_FOR_eh_set_lr_di = 986,
  CODE_FOR_set_hwloop_lpstart = 987,
  CODE_FOR_set_hwloop_lpend = 988,
  CODE_FOR_set_hwloop_lc = 989,
  CODE_FOR_set_hwloop_lc_le = 990,
  CODE_FOR_hw_loop_prolog = 991,
  CODE_FOR_zero_cost_loop_end = 992,
  CODE_FOR_loop_end = 993,
  CODE_FOR_sibcall_internal = 994,
  CODE_FOR_sibcall_value_internal = 995,
  CODE_FOR_call_internal = 996,
  CODE_FOR_call_value_internal = 997,
  CODE_FOR_nop = 998,
  CODE_FOR_forced_nop = 999,
  CODE_FOR_trap = 1000,
  CODE_FOR_gpr_save = 1001,
  CODE_FOR_gpr_restore = 1002,
  CODE_FOR_gpr_restore_return = 1003,
  CODE_FOR_riscv_frflags = 1004,
  CODE_FOR_riscv_fsflags = 1005,
  CODE_FOR_stack_tiesi = 1006,
  CODE_FOR_stack_tiedi = 1007,
  CODE_FOR_mem_thread_fence_1 = 1008,
  CODE_FOR_atomic_storesi = 1009,
  CODE_FOR_atomic_storedi = 1010,
  CODE_FOR_atomic_addsi = 1011,
  CODE_FOR_atomic_orsi = 1012,
  CODE_FOR_atomic_xorsi = 1013,
  CODE_FOR_atomic_andsi = 1014,
  CODE_FOR_atomic_adddi = 1015,
  CODE_FOR_atomic_ordi = 1016,
  CODE_FOR_atomic_xordi = 1017,
  CODE_FOR_atomic_anddi = 1018,
  CODE_FOR_atomic_fetch_addsi = 1019,
  CODE_FOR_atomic_fetch_orsi = 1020,
  CODE_FOR_atomic_fetch_xorsi = 1021,
  CODE_FOR_atomic_fetch_andsi = 1022,
  CODE_FOR_atomic_fetch_adddi = 1023,
  CODE_FOR_atomic_fetch_ordi = 1024,
  CODE_FOR_atomic_fetch_xordi = 1025,
  CODE_FOR_atomic_fetch_anddi = 1026,
  CODE_FOR_atomic_exchangesi = 1027,
  CODE_FOR_atomic_exchangedi = 1028,
  CODE_FOR_atomic_cas_value_strongsi = 1029,
  CODE_FOR_atomic_cas_value_strongdi = 1030,
  CODE_FOR_mulditi3 = 1071,
  CODE_FOR_umulditi3 = 1072,
  CODE_FOR_usmulditi3 = 1073,
  CODE_FOR_mulsidi3 = 1074,
  CODE_FOR_umulsidi3 = 1075,
  CODE_FOR_usmulsidi3 = 1076,
   CODE_FOR_maddv1sfsf4 = CODE_FOR_nothing,
   CODE_FOR_maddhfsf4 = CODE_FOR_nothing,
  CODE_FOR_maddohfsf4 = 1077,
  CODE_FOR_clzsi2 = 1078,
  CODE_FOR_paritysi2 = 1079,
  CODE_FOR_movdi = 1080,
  CODE_FOR_pulp_omp_barrier = 1081,
  CODE_FOR_pulp_omp_critical_start = 1082,
  CODE_FOR_pulp_omp_critical_end = 1083,
  CODE_FOR_OffsetedReadNonVol_m1 = 1084,
  CODE_FOR_movsi = 1085,
  CODE_FOR_movv2hi = 1086,
  CODE_FOR_movv4qi = 1087,
  CODE_FOR_movmisalignv4qi = 1088,
  CODE_FOR_movmisalignv2hi = 1089,
  CODE_FOR_movmisalignv2hf = 1090,
  CODE_FOR_movmisalignv2ohf = 1091,
  CODE_FOR_movmisalignohf = 1092,
  CODE_FOR_movmisalignsf = 1093,
  CODE_FOR_movmisalignsi = 1094,
  CODE_FOR_movhi = 1095,
  CODE_FOR_movqi = 1096,
  CODE_FOR_movhf = 1097,
  CODE_FOR_movohf = 1098,
  CODE_FOR_movsf = 1099,
  CODE_FOR_movdf = 1100,
  CODE_FOR_clear_cache = 1101,
  CODE_FOR_movmemsi = 1102,
  CODE_FOR_vec_initv2hf_internal_f = 1103,
  CODE_FOR_vec_initv2ohf_internal_f = 1104,
  CODE_FOR_vec_initv2hf = 1105,
  CODE_FOR_vec_initv2ohf = 1106,
  CODE_FOR_vec_initv2hi = 1107,
  CODE_FOR_vec_initv4qi = 1108,
  CODE_FOR_movv2hf = 1109,
  CODE_FOR_movv2ohf = 1110,
  CODE_FOR_movv1sf = 1111,
  CODE_FOR_floatv2hiv2hf2 = 1112,
  CODE_FOR_floatv2hiv2ohf2 = 1113,
  CODE_FOR_floatunsv2hiv2hf2 = 1114,
  CODE_FOR_floatunsv2hiv2ohf2 = 1115,
  CODE_FOR_fix_truncv2hfv2hi2 = 1116,
  CODE_FOR_fix_truncv2ohfv2hi2 = 1117,
  CODE_FOR_fixuns_truncv2hfv2hi2 = 1118,
  CODE_FOR_fixuns_truncv2ohfv2hi2 = 1119,
  CODE_FOR_vec_unpacks_hi_v2hf = 1120,
  CODE_FOR_vec_unpacks_hi_v2ohf = 1121,
  CODE_FOR_vec_pack_v4qi = 1122,
  CODE_FOR_vec_permv2hf = 1123,
  CODE_FOR_vec_permv2ohf = 1124,
  CODE_FOR_vec_permv2hi = 1125,
  CODE_FOR_vec_permv4qi = 1126,
  CODE_FOR_vec_set_firstv2hf = 1127,
  CODE_FOR_vec_set_firstv2ohf = 1128,
  CODE_FOR_vec_set_firstv2hi = 1129,
  CODE_FOR_vec_set_firstv4qi = 1130,
  CODE_FOR_vec_setv2hf = 1131,
  CODE_FOR_vec_setv2ohf = 1132,
  CODE_FOR_vec_setv2hi = 1133,
  CODE_FOR_vec_setv4qi = 1134,
  CODE_FOR_fmav2hf4 = 1135,
  CODE_FOR_fmav2ohf4 = 1136,
  CODE_FOR_cplxmulsv2hi2 = 1137,
  CODE_FOR_cplxmulsv2hi2_div2 = 1138,
  CODE_FOR_cplxmulsv2hi2_div4 = 1139,
  CODE_FOR_cplxmulsv2hi2_div8 = 1140,
  CODE_FOR_vcondv2hiv2hf = 1141,
  CODE_FOR_vcondv2hiv2ohf = 1142,
  CODE_FOR_vcondv2hiv2hi = 1143,
  CODE_FOR_vcondv4qiv4qi = 1144,
  CODE_FOR_vconduv2hiv2hi = 1145,
  CODE_FOR_vconduv4qiv4qi = 1146,
  CODE_FOR_condjump = 1147,
  CODE_FOR_cbranchqi4 = 1148,
  CODE_FOR_cbranchsi4 = 1149,
  CODE_FOR_cbranchdi4 = 1150,
  CODE_FOR_cbranchsf4 = 1151,
  CODE_FOR_cbranchdf4 = 1152,
  CODE_FOR_cbranchhf4 = 1153,
  CODE_FOR_cbranchohf4 = 1154,
  CODE_FOR_cstoresi4 = 1155,
  CODE_FOR_cstoredi4 = 1156,
  CODE_FOR_cstoresf4 = 1157,
  CODE_FOR_cstoredf4 = 1158,
  CODE_FOR_cstorehf4 = 1159,
  CODE_FOR_cstoreohf4 = 1160,
  CODE_FOR_indirect_jump = 1161,
  CODE_FOR_tablejump = 1162,
  CODE_FOR_prologue = 1163,
  CODE_FOR_epilogue = 1164,
  CODE_FOR_sibcall_epilogue = 1165,
  CODE_FOR_return = 1166,
  CODE_FOR_eh_return = 1167,
  CODE_FOR_doloop_end = 1168,
  CODE_FOR_sibcall = 1169,
  CODE_FOR_sibcall_value = 1170,
  CODE_FOR_call = 1171,
  CODE_FOR_call_value = 1172,
  CODE_FOR_untyped_call = 1173,
  CODE_FOR_mem_thread_fence = 1174,
  CODE_FOR_atomic_compare_and_swapsi = 1175,
  CODE_FOR_atomic_compare_and_swapdi = 1176,
  CODE_FOR_atomic_test_and_set = 1177
};

const unsigned int NUM_INSN_CODES = 1178;
#endif /* GCC_INSN_CODES_H */
