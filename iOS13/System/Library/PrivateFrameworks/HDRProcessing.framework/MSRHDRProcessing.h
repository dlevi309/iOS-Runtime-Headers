/*
* Generated on Monday, March 1, 2021 at 2:34:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HDRProcessing.framework/HDRProcessing
*/


#import <HDRProcessing/HDRProcessing-Structs.h>
@interface MSRHDRProcessing : NSObject {

	unsigned _frameNumber;
	BOOL _dump;
	MSRHDRContext _msrHC;
	SCD_Struct_MS65 _msrCC;
	SCD_Struct_MS66 _dm_config;
	SCD_Struct_MS68 _payload;
	SCD_Struct_MS71 _doviHDMIMetaData;
	unsigned _payLoadLength;
	unsigned _numOfPackets;
	float _max_fp16;
	float _prev_max_fp16;
	float _prev_slope;
	float _prev_c1;
	float _prev_c2;
	float _prev_c3;
	float _prev_trim_slope;
	float _prev_trim_offset;
	float _prev_trim_power;
	float _prev_trim_sat;
	float _prev_sat2_p1;
	float _prev_sat2_p2;
	float _prev_sat2_p3;
	float _prev_sat2_p4;
	float _prev_sat2_p5;
	float _prev_s2t_ratio;
	float _prev_gamma;
	float _prev_maxpq;
	float _prev_ambientnits;
	float _prev_maxedr;
	float _prev_degamma_lut_additional_scaler;
	int _prev_processingType;
	HDR10TMParam _prev_tmParam;
	HDR10AmbAdaptationParam _prev_ambAdaptationParam;
	HDR10DpcParam _prev_dpcParam;
	float _scalingFactorTableBuffer[513];
	float _sat2FactorTableBuffer[1026];
	float _lumaMixFactorTableBuffer[513];
	float _ambientHeadroomAdaptationLut[2000];
	BOOL _reshapeLUTCreated;
	unsigned long long _reshapeLUTSize;
	unsigned short _reshapeLUT[3][1024];
	float _hScaleCoefficents[15][32];
	float _vScaleCoefficents[9][32];
	SCD_Struct_MS72 _degamma;
	unsigned _tmMode;
	unsigned long long _tonemappingTableSize;
	SCD_Union_MS74 _tonemapLUT;
	SCD_Struct_MS75 _regamma;

}
+(void)dolbyIOMFBMetadata:(SCD_Struct_MS76*)arg1 withMinBrightness:(float)arg2 maxBrightness:(float)arg3 ;
-(id)init;
-(void)dealloc;
-(BOOL)processFrameByMSRWithComposerData:(SCD_Struct_HD41*)arg1 DMData:(SCD_Struct_HD42*)arg2 tcControl:(ToneCurve_Control*)arg3 hdrControl:(SCD_Struct_HD40*)arg4 colorConfig:(SCD_Struct_HD36*)arg5 hdr10InfoFrame:(SCD_Struct_HD22*)arg6 layer0:(IOSurfaceRef)arg7 layer1:(IOSurfaceRef)arg8 output:(IOSurfaceRef)arg9 operation:(unsigned)arg10 frameNumebr:(unsigned long long)arg11 ;
-(void)hdr10_tm_createLUTFromDMConfig:(HDR10TMParam*)arg1 AmbAdaptationParam:(HDR10AmbAdaptationParam*)arg2 ;
-(void)hdr10_tm_reserveConfig:(HDR10TMParam*)arg1 AmbAdaptationParam:(HDR10AmbAdaptationParam*)arg2 ;
-(BOOL)hlg_tm_configChanged:(SCD_Struct_Do45*)arg1 EdrAdaptationParam:(HDR10EdrAdaptationParam*)arg2 AmbAdaptationParam:(HDR10AmbAdaptationParam*)arg3 ;
-(void)hlg_tm_createLUTFromDMConfig:(SCD_Struct_Do45*)arg1 TMParam:(HDR10TMParam*)arg2 EdrAdaptationParam:(HDR10EdrAdaptationParam*)arg3 AmbAdaptationParam:(HDR10AmbAdaptationParam*)arg4 TMMode:(int)arg5 ;
-(void)hlg_tm_reserveConfig:(SCD_Struct_Do45*)arg1 EdrAdaptationParam:(HDR10EdrAdaptationParam*)arg2 AmbAdaptationParam:(HDR10AmbAdaptationParam*)arg3 ;
-(void)hlg_createLUTFromDMConfig:(SCD_Struct_Do45*)arg1 TMParam:(HDR10TMParam*)arg2 EdrAdaptationParam:(HDR10EdrAdaptationParam*)arg3 AmbAdaptationParam:(HDR10AmbAdaptationParam*)arg4 TMMode:(int)arg5 ;
-(void)createCustomScalingTables;
-(void)createAdaptationLut;
-(void)setDegammaBuffer:(long long)arg1 Buffer:(float*)arg2 TableSize:(unsigned long long)arg3 Type:(int)arg4 ;
-(void)updateDegammaTable:(long long)arg1 Table:(float*)arg2 TableSize:(unsigned long long)arg3 Type:(int)arg4 Scaler:(float)arg5 ;
-(void)setRegammaBuffer:(long long)arg1 Buffer:(float*)arg2 TableSize:(unsigned long long)arg3 Type:(int)arg4 DPCParam:(HDR10DpcParam*)arg5 ;
-(void)updateRegammaTable:(long long)arg1 Table:(float*)arg2 TableSize:(unsigned long long)arg3 ;
-(void)setupMSRToneMappingWithContent:(BOOL)arg1 DMData:(SCD_Struct_HD42*)arg2 tcControl:(ToneCurve_Control*)arg3 hdrControl:(SCD_Struct_HD40*)arg4 dmConfig:(SCD_Struct_Do45*)arg5 hdr10InfoFrame:(SCD_Struct_HD22*)arg6 ;
-(void)setupMSRColorConfig;
-(void)setupMSRHDRContext:(SCD_Struct_HD40*)arg1 TCControl:(ToneCurve_Control*)arg2 input:(IOSurfaceRef)arg3 inputColorSpace:(unsigned)arg4 output:(IOSurfaceRef)arg5 operation:(unsigned)arg6 ;
-(void)setupMSRPolynomialTableForHDR10;
-(void)setupMSRPolynomialTableWithMetadata:(SCD_Struct_HD41*)arg1 ;
-(void)populateMSRColorConfig:(SCD_Struct_HD36*)arg1 DMConfig:(SCD_Struct_Do45*)arg2 DMData:(SCD_Struct_HD42*)arg3 tcControl:(ToneCurve_Control*)arg4 hdrControl:(SCD_Struct_HD40*)arg5 MSRHDRContext:(MSRHDRContext*)arg6 ;
-(void)attachHDRMetaDataToOutputSurface:(IOSurfaceRef)arg1 withDMData:(SCD_Struct_HD42*)arg2 withDMConfig:(SCD_Struct_Do45*)arg3 withHdrControl:(SCD_Struct_HD40*)arg4 withMSRHDRContext:(MSRHDRContext*)arg5 withInfoFrame:(SCD_Struct_HD22*)arg6 ;
-(void)setupMSRPolynomialTableForHDR10:(unsigned short*)arg1 TableLength:(unsigned)arg2 ;
-(void)updatePolynomialTables:(unsigned short*)arg1 TableSize:(unsigned long long)arg2 ;
-(BOOL)dovi_tm_configChanged:(SCD_Struct_Do45*)arg1 LLDoVi:(BOOL)arg2 ;
-(void)createLUTFromDMConfig:(SCD_Struct_Do45*)arg1 TCControl:(ToneCurve_Control*)arg2 HDRControl:(SCD_Struct_HD40*)arg3 LLDoVi:(BOOL)arg4 ApplyExtraAdaptation:(BOOL)arg5 AdaptationLut:(float*)arg6 NumOfEntryOfAdaptationLut:(int)arg7 ;
-(BOOL)hdr10_tm_configChanged:(HDR10TMParam*)arg1 AmbAdaptationParam:(HDR10AmbAdaptationParam*)arg2 ;
-(void)hdr10_tm_updateLUT:(long long)arg1 ScalingFactorBuffer:(float*)arg2 ScalingFactorBufferSize:(unsigned long long)arg3 LumaMixFactorBuffer:(float*)arg4 LumaMixFactorBufferSize:(unsigned long long)arg5 dmConfig:(SCD_Struct_Do45*)arg6 TCControl:(ToneCurve_Control*)arg7 HDRControl:(SCD_Struct_HD40*)arg8 ;
-(void)hlg_tm_updateLUT:(long long)arg1 ScalingFactorBuffer:(float*)arg2 ScalingFactorBufferSize:(unsigned long long)arg3 dmConfig:(SCD_Struct_Do45*)arg4 ;
-(void)dovi_tm_createLUTFromDMConfig:(SCD_Struct_Do45*)arg1 LLDoVi:(BOOL)arg2 ApplyExtraAdaptation:(BOOL)arg3 AdaptationLut:(float*)arg4 NumOfEntryOfAdaptationLut:(int)arg5 ;
-(void)dovi_tm_updateLUT:(long long)arg1 ScalingFactorBuffer:(float*)arg2 ScalingFactorBufferSize:(unsigned long long)arg3 Sat2FactorBuffer:(float*)arg4 Sat2FactorBufferSize:(unsigned long long)arg5 dmConfig:(SCD_Struct_Do45*)arg6 ;
-(void)dovi_tm_reserveConfig:(SCD_Struct_Do45*)arg1 LLDoVi:(BOOL)arg2 ;
-(void)hdr10_createLUTFromDMConfig:(SCD_Struct_Do45*)arg1 TCControl:(ToneCurve_Control*)arg2 HDRControl:(SCD_Struct_HD40*)arg3 TMParam:(HDR10TMParam*)arg4 AmbAdaptationParam:(HDR10AmbAdaptationParam*)arg5 ;
-(void)dovi_createLUTFromDMConfig:(SCD_Struct_Do45*)arg1 LLDoVi:(BOOL)arg2 ApplyExtraAdaptation:(BOOL)arg3 AdaptationLut:(float*)arg4 NumOfEntryOfAdaptationLut:(int)arg5 ;
-(void)printArray:(_sFILE*)arg1 Prefix:(char*)arg2 Array:(void*)arg3 Size:(unsigned long long)arg4 NumberPerLine:(unsigned long long)arg5 Format:(int)arg6 ;
-(void)updateDegammaLUT:(MSRHDRContext*)arg1 AdditionalScaler:(float)arg2 ;
-(unsigned)setLms2RgbScale2P:(const float*)arg1 OutputScale:(float)arg2 ;
-(void)updateRegammaLUT:(MSRHDRContext*)arg1 ;
-(void)decideStageStatus:(BOOL*)arg1 MSRHDRContext:(MSRHDRContext*)arg2 DMData:(SCD_Struct_HD42*)arg3 ;
-(void)checkNewFrameForDump;
-(void)runPreFrameDumpActions;
-(void)populateMSRColorConfigHeader:(SCD_Struct_HD36*)arg1 Enabled:(BOOL)arg2 Prefix:(char*)arg3 DMConfig:(SCD_Struct_Do45*)arg4 DMData:(SCD_Struct_HD42*)arg5 tcControl:(ToneCurve_Control*)arg6 hdrControl:(SCD_Struct_HD40*)arg7 MSRHDRContext:(MSRHDRContext*)arg8 ;
-(void)populateMSRColorConfigStageB01_01:(SCD_Struct_HD36*)arg1 Enabled:(BOOL)arg2 Prefix:(char*)arg3 DMConfig:(SCD_Struct_Do45*)arg4 DMData:(SCD_Struct_HD42*)arg5 tcControl:(ToneCurve_Control*)arg6 hdrControl:(SCD_Struct_HD40*)arg7 MSRHDRContext:(MSRHDRContext*)arg8 ;
-(void)populateMSRColorConfigStageB01_02:(SCD_Struct_HD36*)arg1 Enabled:(BOOL)arg2 Prefix:(char*)arg3 DMConfig:(SCD_Struct_Do45*)arg4 DMData:(SCD_Struct_HD42*)arg5 tcControl:(ToneCurve_Control*)arg6 hdrControl:(SCD_Struct_HD40*)arg7 MSRHDRContext:(MSRHDRContext*)arg8 ;
-(void)populateMSRColorConfigStageB01_03:(SCD_Struct_HD36*)arg1 Enabled:(BOOL)arg2 Prefix:(char*)arg3 DMConfig:(SCD_Struct_Do45*)arg4 DMData:(SCD_Struct_HD42*)arg5 tcControl:(ToneCurve_Control*)arg6 hdrControl:(SCD_Struct_HD40*)arg7 MSRHDRContext:(MSRHDRContext*)arg8 ;
-(void)populateMSRColorConfigStageB01_04:(SCD_Struct_HD36*)arg1 Enabled:(BOOL)arg2 Prefix:(char*)arg3 DMConfig:(SCD_Struct_Do45*)arg4 DMData:(SCD_Struct_HD42*)arg5 tcControl:(ToneCurve_Control*)arg6 hdrControl:(SCD_Struct_HD40*)arg7 MSRHDRContext:(MSRHDRContext*)arg8 ;
-(void)populateMSRColorConfigStageB01_05:(SCD_Struct_HD36*)arg1 Enabled:(BOOL)arg2 Prefix:(char*)arg3 DMConfig:(SCD_Struct_Do45*)arg4 DMData:(SCD_Struct_HD42*)arg5 tcControl:(ToneCurve_Control*)arg6 hdrControl:(SCD_Struct_HD40*)arg7 MSRHDRContext:(MSRHDRContext*)arg8 ;
-(void)populateMSRColorConfigStageB01_06:(SCD_Struct_HD36*)arg1 Enabled:(BOOL)arg2 Prefix:(char*)arg3 DMConfig:(SCD_Struct_Do45*)arg4 DMData:(SCD_Struct_HD42*)arg5 tcControl:(ToneCurve_Control*)arg6 hdrControl:(SCD_Struct_HD40*)arg7 MSRHDRContext:(MSRHDRContext*)arg8 ;
-(void)populateMSRColorConfigStageB04_01:(SCD_Struct_HD36*)arg1 Enabled:(BOOL)arg2 Prefix:(char*)arg3 DMConfig:(SCD_Struct_Do45*)arg4 DMData:(SCD_Struct_HD42*)arg5 tcControl:(ToneCurve_Control*)arg6 hdrControl:(SCD_Struct_HD40*)arg7 MSRHDRContext:(MSRHDRContext*)arg8 ;
-(void)populateMSRColorConfigStageB04_02:(SCD_Struct_HD36*)arg1 Enabled:(BOOL)arg2 Prefix:(char*)arg3 DMConfig:(SCD_Struct_Do45*)arg4 DMData:(SCD_Struct_HD42*)arg5 tcControl:(ToneCurve_Control*)arg6 hdrControl:(SCD_Struct_HD40*)arg7 MSRHDRContext:(MSRHDRContext*)arg8 ;
-(void)populateMSRColorConfigStageB04_03:(SCD_Struct_HD36*)arg1 Enabled:(BOOL)arg2 Prefix:(char*)arg3 DMConfig:(SCD_Struct_Do45*)arg4 DMData:(SCD_Struct_HD42*)arg5 tcControl:(ToneCurve_Control*)arg6 hdrControl:(SCD_Struct_HD40*)arg7 MSRHDRContext:(MSRHDRContext*)arg8 ;
-(void)populateMSRColorConfigStageB04_04:(SCD_Struct_HD36*)arg1 Enabled:(BOOL)arg2 Prefix:(char*)arg3 DMConfig:(SCD_Struct_Do45*)arg4 DMData:(SCD_Struct_HD42*)arg5 tcControl:(ToneCurve_Control*)arg6 hdrControl:(SCD_Struct_HD40*)arg7 MSRHDRContext:(MSRHDRContext*)arg8 ;
-(void)populateMSRColorConfigStageB04_05:(SCD_Struct_HD36*)arg1 Enabled:(BOOL)arg2 Prefix:(char*)arg3 DMConfig:(SCD_Struct_Do45*)arg4 DMData:(SCD_Struct_HD42*)arg5 tcControl:(ToneCurve_Control*)arg6 hdrControl:(SCD_Struct_HD40*)arg7 MSRHDRContext:(MSRHDRContext*)arg8 ;
-(void)populateMSRColorConfigStageB02:(SCD_Struct_HD36*)arg1 Enabled:(BOOL)arg2 Prefix:(char*)arg3 DMConfig:(SCD_Struct_Do45*)arg4 DMData:(SCD_Struct_HD42*)arg5 tcControl:(ToneCurve_Control*)arg6 hdrControl:(SCD_Struct_HD40*)arg7 MSRHDRContext:(MSRHDRContext*)arg8 ;
-(void)populateMSRColorConfigStageB03:(SCD_Struct_HD36*)arg1 Enabled:(BOOL)arg2 Prefix:(char*)arg3 DMConfig:(SCD_Struct_Do45*)arg4 DMData:(SCD_Struct_HD42*)arg5 tcControl:(ToneCurve_Control*)arg6 hdrControl:(SCD_Struct_HD40*)arg7 MSRHDRContext:(MSRHDRContext*)arg8 ;
-(void)runPostFrameDumpActions:(SCD_Struct_HD36*)arg1 ;
-(void)attachDoViMetadataPacketTo:(IOSurfaceRef)arg1 withDMData:(SCD_Struct_HD42*)arg2 withDMConfig:(SCD_Struct_Do45*)arg3 withHdrControl:(SCD_Struct_HD40*)arg4 withMSRHDRContext:(MSRHDRContext*)arg5 ;
-(void)attachInfoFrameTo:(IOSurfaceRef)arg1 withDMData:(SCD_Struct_HD42*)arg2 withInfoFrame:(SCD_Struct_HD22*)arg3 ;
-(void)setSat2FactorTable:(float*)arg1 TableSize:(unsigned long long)arg2 DMConfig:(SCD_Struct_Do45*)arg3 LLDoVi:(BOOL)arg4 ;
@end

