/*
* Generated on Monday, March 1, 2021 at 2:34:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HDRProcessing.framework/HDRProcessing
*/

typedef struct {
	unsigned x;
	unsigned y;
} SCD_Struct_HD0;

typedef struct {
	SCD_Struct_HD0 origin;
	SCD_Struct_HD0 size;
} SCD_Struct_HD1;

typedef struct {
	float parameter[3][3];
} SCD_Struct_HD2;

typedef struct __IOSurface* IOSurfaceRef;

typedef struct {
	double field1;
	double field2;
	double field3;
	double field4;
} SCD_Struct_HD4;

typedef struct {
	unsigned short field1;
	unsigned short field2;
	unsigned short field3;
	unsigned short field4;
	unsigned short field5;
	unsigned short field6;
	unsigned short field7;
	unsigned short field8;
	unsigned field9;
	unsigned field10;
} SCD_Struct_HD5;

typedef struct {
	unsigned short field1;
	unsigned short field2;
} SCD_Struct_HD6;

typedef struct {
	float field1;
	float field2;
	float field3;
	float field4;
	float field5[9];
	float field6[9];
	float field7[9];
	float field8[9];
	float field9[9];
	float field10[3];
	float field11[3];
	float field12;
	unsigned field13;
	unsigned field14;
	float field15;
	unsigned field16;
	float field17;
	SCD_Struct_HD5 field18;
	SCD_Struct_HD6 field19;
	unsigned field20 : 1;
	int field21;
} SCD_Struct_HD7;

typedef struct {
	unsigned char field1;
	unsigned char field2;
	unsigned char field3;
	unsigned char field4;
	unsigned char field5;
	unsigned char field6;
	unsigned char field7;
	unsigned char field8;
	unsigned char field9;
	unsigned char field10;
	unsigned char field11;
} SCD_Struct_HD8;

typedef struct {
	unsigned char field1;
	unsigned char field2;
	unsigned char field3;
	unsigned char field4;
	unsigned char field5;
	unsigned char field6;
	unsigned char field7;
	unsigned char field8;
	unsigned char field9;
	unsigned char field10;
	unsigned char field11;
	unsigned char field12;
	unsigned char field13;
	unsigned char field14;
	unsigned char field15;
	unsigned char field16;
	unsigned char field17;
	unsigned char field18;
	unsigned char field19;
	unsigned char field20;
	unsigned char field21;
	unsigned char field22;
	unsigned char field23;
	unsigned char field24;
	unsigned char field25;
	unsigned char field26;
	unsigned char field27;
	unsigned char field28;
	unsigned char field29;
	unsigned char field30;
	unsigned char field31;
	unsigned char field32;
	unsigned char field33;
	unsigned char field34;
	unsigned char field35;
	unsigned char field36;
	unsigned char field37;
	unsigned char field38;
	unsigned char field39;
	unsigned char field40;
	unsigned char field41;
	unsigned char field42;
	unsigned char field43;
	unsigned char field44;
	unsigned char field45;
	unsigned char field46;
	unsigned char field47;
	unsigned char field48;
	unsigned char field49;
	unsigned char field50;
	unsigned char field51;
	unsigned char field52;
	unsigned char field53;
	unsigned char field54;
	unsigned char field55;
	unsigned char field56;
	unsigned char field57;
	unsigned char field58;
	unsigned char field59;
	unsigned char field60;
	unsigned char field61;
	unsigned char field62;
	unsigned char field63;
	unsigned char field64;
	unsigned char field65;
	unsigned char field66;
	unsigned char field67;
	unsigned char field68;
	unsigned char field69;
	unsigned char field70;
	unsigned char field71;
	SCD_Struct_HD8 field72;
	unsigned char field73[339];
} SCD_Struct_HD9;

typedef struct {
	unsigned BL_bit_depth_minus8;
	unsigned EL_bit_depth_minus8;
	unsigned vdr_bit_depth;
	unsigned EL_chroma_format_idc;
	unsigned BL_chroma_format_idc;
	unsigned mapping_chroma_format_idc;
	unsigned num_x_partitions;
	unsigned num_y_partitions;
	unsigned overlapped_prediction_method;
	unsigned el_spatial_resampling_filter_flag;
	unsigned coefficient_data_type;
	unsigned coefficient_log2_denom;
	3I num_pivots;
	318I pivot_value;
	1139I mapping_idc;
	1139I poly_order;
	1139I linear_interp_flag;
	1139I pred_linear_interp_value_int;
	1139I pred_linear_interp_value;
	11393i poly_coef_int;
	11393I poly_coef;
	11396q fp_poly_coef;
	11396f fp_poly_coef_float;
	1139I mmr_order;
	1139i mmr_constant_int;
	1139I mmr_constant;
	113947i mmr_coef_int;
	113947I mmr_coef;
	113947q fp_mmr_coef;
	113947f fp_mmr_coef_float;
	11396i pow_coef_int;
	11396I pow_coef;
	unsigned disable_residual_flag;
	unsigned nlq_method_idc;
	unsigned nlq_num_pivots;
	9I nlq_pivot_value;
	1193I nlq_offset;
	1193I vdr_in_max_int;
	1193I vdr_in_max;
	1193q fp_vdr_in_max;
	1193I linear_deadzone_slope_int;
	1193I linear_deadzone_slope;
	1193q linear_dz_slope;
	1193I linear_deadzone_threshold_int;
	1193I linear_deadzone_threshold;
	1193q linear_dz_th;
	1193I mu_law_levels;
	1193I mu_law_mu;
	11316384I pred_LUT_value_int;
	11316384I pred_LUT_value;
	unsigned el_frame_crop_bottom_offset;
} SCD_Struct_HD10;

typedef struct {
	unsigned short valid;
	unsigned short min_PQ;
	unsigned short max_PQ;
	unsigned short avg_PQ;
} SCD_Struct_HD11;

typedef struct {
	unsigned short valid;
	unsigned short target_max_PQ;
	unsigned short trim_slope;
	unsigned short trim_offset;
	unsigned short trim_power;
	unsigned short trim_chroma_weight;
	unsigned short trim_saturation_gain;
	short ms_weight;
} SCD_Struct_HD12;

typedef struct {
	unsigned short valid;
	unsigned short anchor_PQ;
	unsigned short anchor_power;
} SCD_Struct_HD13;

typedef struct {
	unsigned short valid;
	unsigned short active_area_left_offset;
	unsigned short active_area_right_offset;
	unsigned short active_area_top_offset;
	unsigned short active_area_bottom_offset;
} SCD_Struct_HD14;

typedef struct HDR10AuxData {
	unsigned processingType;
	unsigned tm_preset;
	int tm_mode;
	int tm_curve_type;
	int edr_adaptation_mode;
	float edr_adaptation_gain;
	float EDRFactor;
	float maxEDRValue;
	int amb_adaptation_mode;
	float amb_adaptation_lux2nits_ratio;
	float ambientNits;
	float target_display_contrast_ratio;
	float target_display_reflection_ratio;
	unsigned dpc_mode;
	float dpc_gain;
	float Smin_nits;
	float Smax_nits;
	float Tmin_nits;
	float targetMaxLinear;
	float Send_nits;
	float tm_Send_nits;
} HDR10AuxData;

typedef struct HDR10TMParam {
	float tm_Smin_nits;
	float tm_Smax_nits;
	float tm_Send_nits;
	float tm_Tmin_nits;
	float tm_Tmax_nits;
	float tm_Tend_nits;
	float tm_Smin_C;
	float tm_Smax_C;
	float tm_Send_C;
	float tm_Tmin_C;
	float tm_Tmax_C;
	float tm_Tend_C;
	int tm_curve_type;
	unsigned short n;
	4f XsC;
	4f YsC;
	4f MsC;
	3S ms;
	314f arrPsC;
} HDR10TMParam;

typedef struct HDR10EdrAdaptationParam {
	unsigned short n;
	3f Xs;
	3f Ys;
	3f Ms;
} HDR10EdrAdaptationParam;

typedef struct HDR10AmbAdaptationParam {
	unsigned short n;
	3f XsC;
	3f YsC;
	3f MsC;
	float aL;
	float bL;
} HDR10AmbAdaptationParam;

typedef struct {
	unsigned hdrContent;
	unsigned hwType;
	unsigned bitDepth;
	unsigned displayType;
	unsigned displayDiagonalSize;
	unsigned maxDisplayBrightnessNits;
	float minDisplayBrightnessNits;
	unsigned videoFullRangeFlag;
	unsigned colourPrimaries;
	unsigned transferFunction;
	9f YCCtoRGB_coef;
	9f RGBtoLMS_coef;
	unsigned maxMasteringNits;
	float minMasteringNits;
	unsigned displayPipelineCompensationType;
	float displayPipelineGammaValue;
} SCD_Struct_HD19;

typedef struct {
	unsigned short display_primaries_xg;
	unsigned short display_primaries_yg;
	unsigned short display_primaries_xb;
	unsigned short display_primaries_yb;
	unsigned short display_primaries_xr;
	unsigned short display_primaries_yr;
	unsigned short white_point_x;
	unsigned short white_point_y;
	unsigned max_display_mastering_luminance;
	unsigned min_display_mastering_luminance;
} SCD_Struct_HD20;

typedef struct {
	unsigned short max_content_light_level;
	unsigned short max_frame_average_light_level;
} SCD_Struct_HD21;

typedef struct {
	SCD_Struct_HD20 sei;
	SCD_Struct_HD21 ll;
} SCD_Struct_HD22;

typedef struct ToneCurve_Control {
	double targetMaxLinear;
	double targetMinLinear;
	float diffuseInNits;
	float maxEDRValue;
	float EDRFactor;
	float AmbientLight;
	float contrastRatio;
	float sdrMaxBrightnessInNits;
	BOOL HDRProcessingFullAmbientAdaptation;
	int HDRProcessingDisplayAdjustsBlackLevel;
	__CFString targetColorPrimaries;
	unsigned outputPixelFormat;
	int hdr10_tm_mode;
	unsigned operationFromDict;
	float forwardDM_tMaxPq;
	float forwardDM_tMinPq;
	float mid;
	float crush;
	float clip;
	unsigned ptvMode : 1;
	unsigned passThroughTM : 1;
	HDR10AuxData auxData;
	HDR10TMParam tmParam;
	HDR10EdrAdaptationParam edrAdaptationParam;
	HDR10AmbAdaptationParam ambAdaptationParam;
	int hlg_tmMode;
} ToneCurve_Control;

typedef struct {
	unsigned vdr_dm_metadata_present_flag;
	unsigned affected_dm_metadata_id;
	unsigned current_dm_metadata_id;
	unsigned scene_refresh_flag;
	9i YCCtoRGB_coef;
	3I YCCtoRGB_offset;
	9i RGBtoLMS_coef;
	unsigned signal_eotf;
	unsigned signal_eotf_param0;
	unsigned signal_eotf_param1;
	unsigned signal_eotf_param2;
	unsigned signal_bit_depth;
	unsigned signal_color_space;
	unsigned signal_chroma_format;
	unsigned signal_full_range_flag;
	unsigned source_min_PQ;
	unsigned source_max_PQ;
	unsigned source_diagonal;
	unsigned num_ext_blocks;
	SCD_Struct_HD11 L1;
	16SCD_Struct_HD12 L2;
	SCD_Struct_HD13 L4;
	SCD_Struct_HD14 L5;
	SCD_Struct_HD14 L6;
} SCD_Struct_HD24;

typedef struct {
	SCD_Struct_HD10 composerData;
	SCD_Struct_HD24 dmData;
	ToneCurve_Control tcControl;
	SCD_Struct_HD19 hdrControl;
	SCD_Struct_HD22 infoFrameData;
} SCD_Struct_HD25;

typedef struct {
	unsigned width;
	unsigned height;
	unsigned usage;
	unsigned targetNits;
	unsigned outputPixelFormat;
	__CFString targetColorPrimaries;
	unsigned outputMetaDataFormat;
	unsigned hardwareType;
} SCD_Struct_HD26;

typedef struct __CVPixelBufferPool* CVPixelBufferPoolRef;

typedef struct __CFError* CFErrorRef;

typedef struct __CFString* CFStringRef;

typedef struct {
	unsigned char field1[128];
	unsigned field2;
	unsigned field3;
} SCD_Struct_HD30;

typedef struct {
	SCD_Struct_HD30 field1;
} SCD_Struct_HD31;

typedef struct {
	unsigned( field1;
	/*function pointer*/void* field2;
	= field3;
	SCD_Struct_HD31) field4;
} SCD_Struct_HD32;

typedef struct {
	unsigned field1;
} SCD_Struct_HD33;

typedef struct {
	unsigned char field1;
	unsigned char field2;
	unsigned char field3;
	unsigned char field4;
	unsigned char field5;
	int field6[3];
	int field7;
	int field8[3];
	unsigned field9[8];
} SCD_Struct_HD34;

typedef struct {
	unsigned char field1;
	unsigned char field2;
	unsigned char field3;
	unsigned char field4;
	unsigned char field5;
	unsigned char field6;
} SCD_Struct_HD35;

typedef struct {
	int field1;
	unsigned field2;
	HDRFrameProcessingControl_t field3;
} SCD_Struct_HD36;

typedef struct {
	unsigned field1;
	unsigned field2;
	unsigned field3;
	unsigned field4;
	unsigned field5;
	_ field6;
	_ field7;
	CFString field8;
	unsigned field9;
	unsigned field10;
} SCD_Struct_HD37;

typedef struct __CVBuffer* CVBufferRef;

typedef struct __CFDictionary* CFDictionaryRef;

typedef struct {
	unsigned field1;
	unsigned field2;
	unsigned field3;
	unsigned field4;
	unsigned field5;
	unsigned field6;
	float field7;
	unsigned field8;
	unsigned field9;
	unsigned field10;
	float field11[9];
	float field12[9];
	unsigned field13;
	float field14;
	unsigned field15;
	float field16;
} SCD_Struct_HD40;

typedef struct {
	unsigned field1;
	unsigned field2;
	unsigned field3;
	unsigned field4;
	unsigned field5;
	unsigned field6;
	unsigned field7;
	unsigned field8;
	unsigned field9;
	unsigned field10;
	unsigned field11;
	unsigned field12;
	unsigned field13[3];
	unsigned field14[18];
	unsigned field15[3][9];
	unsigned field16[3][1][1][9];
	unsigned field17[3][1][1][9];
	unsigned field18[3][1][1][9];
	unsigned field19[3][1][1][9];
	int field20[3][1][1][3];
	unsigned field21[9][3][1][1][3];
	long long field22[9][3][1][1][6];
	float field23[9][3][1][1][6];
	unsigned field24[9][3][1][1][9];
	int field25[3][1][1][9];
	unsigned field26[3][1][1][9];
	int field27[3][1][1][7];
	unsigned field28[4][9][3][1][1][7];
	long long field29[4][9][3][1][1][7];
	float field30[4][9][3][1][1][7];
	int field31[4][9][3][1][1][6];
	unsigned field32[9][3][1][1][6];
	unsigned field33;
	unsigned field34;
	unsigned field35;
	unsigned field36[9][3][1][1][9];
	unsigned field37[3];
	unsigned field38[9][1][1][3];
	unsigned field39[9][1][1][3];
	long long field40[9][1][1][3];
	unsigned field41[9][1][1][3];
	unsigned field42[9][1][1][3];
	long long field43[9][1][1][3];
	unsigned field44[9][1][1][3];
	unsigned field45[9][1][1][3];
	long long field46[9][1][1][3];
	unsigned field47[9][1][1][3];
	unsigned field48[9][1][1][3];
	unsigned field49[9][1][1][16384];
	unsigned field50[3][1][1][16384];
	unsigned field51;
} SCD_Struct_HD41;

typedef struct {
	unsigned field1;
	unsigned field2;
	unsigned field3;
	unsigned field4;
	int field5[9];
	unsigned field6[3];
	int field7[9];
	unsigned field8;
	unsigned field9;
	unsigned field10;
	unsigned field11;
	unsigned field12;
	unsigned field13;
	unsigned field14;
	unsigned field15;
	unsigned field16;
	unsigned field17;
	unsigned field18;
	unsigned field19;
	SCD_Struct_HD1 field20;
	1 field21;
	SCD_Struct_HD12 field22[16];
	SCD_Struct_HD1 field23;
	3 field24;
	SCD_Struct_HD1 field25;
	4 field26;
	SCD_Struct_HD1 field27;
	4 field28;
} SCD_Struct_HD42;

typedef struct {
	SCD_Struct_HD2 field1;
	1 field2;
	SCD_Struct_HD4 field3;
	2 field4;
	SCD_Struct_HD4 field5;
	SCD_Struct_HD4 field6;
	0 field7;
	ToneCurve_Control field8;
	2 field9;
} SCD_Struct_HD43;

typedef struct HDR10DpcParam {
	float alpha;
	float alpha_prime;
	float gain;
} HDR10DpcParam;

typedef struct {
	float field1;
	float field2;
	unsigned field3;
	float field4;
	float field5;
	float field6;
	float field7;
	float field8;
	float field9;
	float field10;
	float field11;
	unsigned field12;
	float field13;
	float field14;
	float field15;
	float field16;
	float field17;
	float field18;
	float field19;
	float field20;
	float field21;
	float field22;
	float field23;
	float field24;
	float field25;
	unsigned field26;
	float field27;
	float field28;
	float field29;
	float field30;
	float field31;
	float field32;
	float field33;
	float field34;
	float field35;
	float field36;
	float field37;
	float field38;
	float field39;
	float field40;
	float field41;
	float field42;
	BOOL field43;
	float field44;
	float field45;
	BOOL field46;
	float field47;
	int field48;
	BOOL field49;
	BOOL field50;
	int field51;
	BOOL field52;
	BOOL field53;
	int field54;
	BOOL field55;
	float field56;
	_ field57;
	HDR10DpcParam field58;
	BOOL field59;
	BOOL field60;
	BOOL field61;
	float field62;
} SCD_Struct_Do45;

typedef struct {
	float field1;
	float field2;
	float field3;
	float field4;
} SCD_Struct_Do46;

typedef struct {
	unsigned field1;
	BOOL field2;
	unsigned field3;
	int field4;
	int field5;
	unsigned field6;
	unsigned field7;
	BOOL field8;
	BOOL field9;
	unsigned field10;
	float field11;
	float field12[22];
	float field13[22];
	float field14;
	SCD_Struct_Do46 field15[3];
	BOOL field16;
} SCD_Struct_Do47;

typedef struct MSRHDRContext {
	unsigned contentType;
	unsigned displayType;
	int processingType;
	unsigned operation;
	unsigned inputFormat;
	unsigned outputFormat;
	unsigned inputColorSpace;
	unsigned outputColorSpace;
	long long inputTransferFunctionType;
	long long outputTransferFunctionType;
	BOOL enableReshaping;
	BOOL enableToneMapping;
	HDR10DpcParam dpcParam;
} MSRHDRContext;

typedef struct DMAConfig_t {
	unsigned char inputBitDepth;
	int inputColorSpace;
	int inputChromaFmt;
	BOOL fp16RangeadjustEnable;
	float fp16Mult;
	float fp16Offset;
	unsigned char outputBitDepth;
	int outputColorSpace;
} DMAConfig_t;

typedef struct Reshaping_t {
	unsigned short mode;
	unsigned short reshapeData[3][1024];
} Reshaping_t;

typedef struct ChromaScaling_t {
	unsigned short hscaleMode;
	unsigned char hscaleNumTaps;
	float hscaleCoefficents[15][32];
	unsigned short vscaleMode;
	unsigned char vscaleNumTaps;
	float vscaleCoefficents[9][32];
} ChromaScaling_t;

typedef struct MSRCSC_t {
	unsigned precision;
	float inputMinClip[3];
	float inputMaxClip[3];
	float offsetIn[3];
	int coeff[3][3];
	float offsetOut[3];
	float outputMinClip[3];
	float outputMaxClip[3];
} MSRCSC_t;

typedef struct Linearization_t {
	unsigned mode;
	unsigned deGammaLUT[3][514];
} Linearization_t;

typedef struct {
	unsigned precision;
} SCD_Struct_MS54;

typedef struct {
	unsigned char type;
	unsigned char scaleShiftBits;
	unsigned char lumaShiftBits;
	unsigned char mixLookupBasis;
	unsigned char lumaOutputSel;
	int lumaAvgCoeff[3];
	int lumaAvgOffset;
	int lumaMaxCoeff[3];
	unsigned histBinLimit[8];
} SCD_Struct_MS55;

typedef struct {
	unsigned char msbPos0;
	unsigned char msbPos1;
	unsigned char msbPos2;
	unsigned char spacingComp0;
	unsigned char spacingComp1;
	unsigned char spacingComp2;
} SCD_Struct_MS56;

typedef struct GammaEncoding_t {
	unsigned mode;
	float gamma_LUT[3][706];
} GammaEncoding_t;

typedef struct SourceToRGB_t {
	unsigned mode;
	MSRCSC_t src2rgb;
} SourceToRGB_t;

typedef struct ColorspaceAToCommonColorspace_t {
	unsigned mode;
	MSRCSC_t a2c;
} ColorspaceAToCommonColorspace_t;

typedef struct CommonColorspaceToColorspaceB_t {
	unsigned mode;
	MSRCSC_t c2b;
} CommonColorspaceToColorspaceB_t;

typedef struct RGBtoYCC_t {
	unsigned mode;
	MSRCSC_t rgb2ycc;
} RGBtoYCC_t;

typedef struct ChromaticAdaptation_t {
	BOOL fixedPQRegamma_Enable;
	unsigned mode1;
	MSRCSC_t cacsc1;
	int toneMapMode_Enable;
	/*function pointer*/void* ;
	SCD_Struct_MS54 toneMapMode0;
	SCD_Struct_MS55 toneMapMode1;
	SCD_Struct_MS56) toneMapMode2;
	unsigned toneMapLUT[4][513];
	unsigned detailPres_Mode;
	float detailPrsvHCoeff[11];
	float detailPrsvVCoeff[5];
	float detailPrsvHV0Coeff[5];
	float detailPrsvHV1Coeff[5];
	float detailPrsvVHCoeff[11];
	float detailPrsvWeight;
	float detailPrsvEdgeWeight;
	unsigned mode2;
	MSRCSC_t cacsc2;
	BOOL fixedPQDegamma_Enable;
} ChromaticAdaptation_t;

typedef struct ProcessingControlV0_t {
	DMAConfig_t dmaConfig;
	Reshaping_t reshaping;
	ChromaScaling_t chormaScaling;
	SourceToRGB_t sourceToRGB;
	Linearization_t linearization;
	ColorspaceAToCommonColorspace_t colorAtoCommonSpace;
	ChromaticAdaptation_t chromaticAdaption;
	CommonColorspaceToColorspaceB_t commonSpaceToColorB;
	GammaEncoding_t gammaEncoding;
	RGBtoYCC_t rgb2ycc;
} ProcessingControlV0_t;

typedef struct HDRFrameProcessingControl_t {
	/*function pointer*/void* ;
	unsigned all[9216];
	ProcessingControlV0_t) processingControl;
} HDRFrameProcessingControl_t;

typedef struct {
	int version;
	unsigned size;
	HDRFrameProcessingControl_t hdrFrameControl;
} SCD_Struct_MS65;

typedef struct {
	 ycc_to_rgb_offset;
	 r_scale;
	 g_scale;
	 b_scale;
	 LMStoRGB_coef0;
	 LMStoRGB_coef1;
	 LMStoRGB_coef2;
	 RGBtoLMS_coef0;
	 RGBtoLMS_coef1;
	 RGBtoLMS_coef2;
	float rangeInv;
	float rangeMinTimesInvRange;
	unsigned signal_eotf;
	float signal_eotf_gamma;
	float signal_eotf_a;
	float signal_eotf_b;
	float signal_eotf_cbt;
	float sl;
	float c_1;
	float c_2;
	float c_3;
	unsigned signal_oetf;
	float signal_oetf_gamma;
	float signal_oetf_a;
	float signal_oetf_b;
	float signal_oetf_cbt;
	float l2pq_mid_point;
	float l2pq_max_point;
	float l2pq_normalize_low;
	float l2pq_normalize_high;
	float OutputScale;
	float narrow_range_scale;
	float narrow_range_offset;
	float Saturation;
	float maxEDRValue;
	unsigned maxMasteringNits;
	float targetMaxNits;
	float targetMaxPq;
	float trim_slope;
	float trim_offset;
	float trim_power;
	float trim_sat;
	float s2t_ratio;
	float sat2_p1;
	float sat2_p2;
	float sat2_p3;
	float sat2_p4;
	float sat2_p5;
	float brightAdjBySat2;
	float tonemap_target_brightness;
	float gamma;
	float ambientNits;
	BOOL apply_macos_gamma;
	float macos_gamma;
	float edrFactor;
	BOOL target_p3_d65;
	float sourceContentSDRMaxBrightnessInNits;
	int transfer_function_input;
	BOOL force_passthrough;
	BOOL apply_lldovi;
	int src_content_type;
	BOOL disable_hlg_headroom;
	BOOL force_srgb_engamma;
	int input_texture_format;
	BOOL hdr10_applyDPCompensationS;
	float extraScaling;
	 preRGBtoRGB_coef0;
	 preRGBtoRGB_coef1;
	 preRGBtoRGB_coef2;
	 RGBtoY_coefs;
	 postRGBtoRGB_coef0;
	 postRGBtoRGB_coef1;
	 postRGBtoRGB_coef2;
	HDR10DpcParam dpcParam;
	BOOL llUseDM31;
	BOOL forceReCreateLUT;
	BOOL blackLevelCompensation;
	float blackLevelCompensationGain;
} SCD_Struct_MS66;

typedef struct {
	unsigned char ext_block1_length_byte3;
	unsigned char ext_block1_length_byte2;
	unsigned char ext_block1_length_byte1;
	unsigned char ext_block1_length_byte0;
	unsigned char ext_block1_level;
	unsigned char min_PQ_hi;
	unsigned char min_PQ_lo;
	unsigned char max_PQ_hi;
	unsigned char max_PQ_lo;
	unsigned char avg_PQ_hi;
	unsigned char avg_PQ_lo;
} SCD_Struct_MS67;

typedef struct {
	unsigned char dm_metadata_id;
	unsigned char scene_refresh_flag;
	unsigned char YCCtoRGB_coef0_hi;
	unsigned char YCCtoRGB_coef0_lo;
	unsigned char YCCtoRGB_coef1_hi;
	unsigned char YCCtoRGB_coef1_lo;
	unsigned char YCCtoRGB_coef2_hi;
	unsigned char YCCtoRGB_coef2_lo;
	unsigned char YCCtoRGB_coef3_hi;
	unsigned char YCCtoRGB_coef3_lo;
	unsigned char YCCtoRGB_coef4_hi;
	unsigned char YCCtoRGB_coef4_lo;
	unsigned char YCCtoRGB_coef5_hi;
	unsigned char YCCtoRGB_coef5_lo;
	unsigned char YCCtoRGB_coef6_hi;
	unsigned char YCCtoRGB_coef6_lo;
	unsigned char YCCtoRGB_coef7_hi;
	unsigned char YCCtoRGB_coef7_lo;
	unsigned char YCCtoRGB_coef8_hi;
	unsigned char YCCtoRGB_coef8_lo;
	unsigned char YCCtoRGB_offset0_byte3;
	unsigned char YCCtoRGB_offset0_byte2;
	unsigned char YCCtoRGB_offset0_byte1;
	unsigned char YCCtoRGB_offset0_byte0;
	unsigned char YCCtoRGB_offset1_byte3;
	unsigned char YCCtoRGB_offset1_byte2;
	unsigned char YCCtoRGB_offset1_byte1;
	unsigned char YCCtoRGB_offset1_byte0;
	unsigned char YCCtoRGB_offset2_byte3;
	unsigned char YCCtoRGB_offset2_byte2;
	unsigned char YCCtoRGB_offset2_byte1;
	unsigned char YCCtoRGB_offset2_byte0;
	unsigned char RGBtoLMS_coef0_hi;
	unsigned char RGBtoLMS_coef0_lo;
	unsigned char RGBtoLMS_coef1_hi;
	unsigned char RGBtoLMS_coef1_lo;
	unsigned char RGBtoLMS_coef2_hi;
	unsigned char RGBtoLMS_coef2_lo;
	unsigned char RGBtoLMS_coef3_hi;
	unsigned char RGBtoLMS_coef3_lo;
	unsigned char RGBtoLMS_coef4_hi;
	unsigned char RGBtoLMS_coef4_lo;
	unsigned char RGBtoLMS_coef5_hi;
	unsigned char RGBtoLMS_coef5_lo;
	unsigned char RGBtoLMS_coef6_hi;
	unsigned char RGBtoLMS_coef6_lo;
	unsigned char RGBtoLMS_coef7_hi;
	unsigned char RGBtoLMS_coef7_lo;
	unsigned char RGBtoLMS_coef8_hi;
	unsigned char RGBtoLMS_coef8_lo;
	unsigned char signal_eotf_hi;
	unsigned char signal_eotf_lo;
	unsigned char signal_eotf_param0_hi;
	unsigned char signal_eotf_param0_lo;
	unsigned char signal_eotf_param1_hi;
	unsigned char signal_eotf_param1_lo;
	unsigned char signal_eotf_param2_byte3;
	unsigned char signal_eotf_param2_byte2;
	unsigned char signal_eotf_param2_byte1;
	unsigned char signal_eotf_param2_byte0;
	unsigned char signal_bit_depth;
	unsigned char signal_color_space;
	unsigned char signal_chroma_format;
	unsigned char signal_full_range_flag;
	unsigned char source_min_PQ_hi;
	unsigned char source_min_PQ_lo;
	unsigned char source_max_PQ_hi;
	unsigned char source_max_PQ_lo;
	unsigned char source_diagonal_hi;
	unsigned char source_diagonal_lo;
	unsigned char num_ext_blocks;
	SCD_Struct_MS67 L1;
	unsigned char extendedBlock[339];
} SCD_Struct_MS68;

typedef struct {
	unsigned char metadata[4][128];
	unsigned metadata_copies;
	unsigned metadata_valid_packet;
} SCD_Struct_MS69;

typedef struct {
	SCD_Struct_MS69 output_conversion;
} SCD_Struct_MS70;

typedef struct {
	unsigned version;
	/*function pointer*/void* ;
	SCD_Struct_MS70) v1;
} SCD_Struct_MS71;

typedef struct {
	int type;
	float lutForCModel[514];
	int lut[3][514];
} SCD_Struct_MS72;

typedef struct {
	unsigned tmLutI[513];
	unsigned tmLutS[513];
	unsigned smLutI[513];
	unsigned smLutS[513];
} SCD_Struct_MS73;

typedef union {
	unsigned lut[4][513];
	SCD_Struct_MS73 cmodel;
} SCD_Union_MS74;

typedef struct {
	int type;
	float lutForCModel[706];
	float lut[3][706];
	HDR10DpcParam dpcParam;
} SCD_Struct_MS75;

typedef struct {
	unsigned( field1;
	/*function pointer*/void* field2;
	= field3;
	SCD_Struct_MS70) field4;
} SCD_Struct_MS76;

