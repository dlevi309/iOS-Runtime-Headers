/*
* Generated on Monday, March 1, 2021 at 2:34:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HDRProcessing.framework/HDRProcessing
*/


@protocol MTLDeviceSPI, MTLLibrary, MTLComputePipelineState, MTLTexture, MTLBuffer;
#import <HDRProcessing/HDRProcessing-Structs.h>
@interface DolbyVisionComposer : NSObject {

	unsigned long long _frameIndex;
	id<MTLDeviceSPI> _device;
	id<MTLLibrary> _defaultLibrary;
	id<MTLComputePipelineState> _horizontalHalfLumaKernel;
	id<MTLComputePipelineState> _verticalHalfLumaKernel;
	id<MTLComputePipelineState> _verticalResampleKernel;
	id<MTLComputePipelineState> _horizontalResampleKernel;
	id<MTLComputePipelineState> _composeLumaKernel;
	id<MTLComputePipelineState> _composeChromaKernel;
	id<MTLComputePipelineState> _composeYUVKernel;
	id<MTLComputePipelineState> _sdr2cif10;
	id<MTLComputePipelineState> _packedDolbyIPT_ptv;
	id<MTLComputePipelineState> _packed422DolbyIPT_ptv;
	id<MTLComputePipelineState> _unpackedHDR10_ptv;
	id<MTLComputePipelineState> _packedHDR10_ptv;
	id<MTLComputePipelineState> _packed422HDR10_ptv;
	id<MTLComputePipelineState> _unpackedHLG_ptv;
	id<MTLComputePipelineState> _packedHLG_ptv;
	id<MTLComputePipelineState> _packed422HLG_ptv;
	id<MTLComputePipelineState> _packedHDR10toRGB;
	id<MTLComputePipelineState> _packed422HDR10toRGB;
	id<MTLComputePipelineState> _unpackedHDR10toRGB;
	id<MTLComputePipelineState> _packedHDR10toRGB_YUVTM;
	id<MTLComputePipelineState> _packed422HDR10toRGB_YUVTM;
	id<MTLComputePipelineState> _unpackedHDR10toRGB_YUVTM;
	id<MTLComputePipelineState> _packedHLGtoRGB_YUVTM;
	id<MTLComputePipelineState> _packed422HLGtoRGB_YUVTM;
	id<MTLComputePipelineState> _unpackedHLGtoRGB_YUVTM;
	id<MTLComputePipelineState> _packedDolbyYUVtoRGB_YUVTM[2];
	id<MTLComputePipelineState> _packed422DolbyYUVtoRGB_YUVTM[2];
	id<MTLComputePipelineState> _packedDolbyIPTtoRGB_YUVTM[2];
	id<MTLComputePipelineState> _packed422DolbyIPTtoRGB_YUVTM[2];
	id<MTLComputePipelineState> _singleLayerIntegratedKernel[3];
	id<MTLComputePipelineState> _singleLayerIntegratedIPTKernel[3];
	id<MTLComputePipelineState> _singleLayerIntegratedKernelPlanar[3];
	id<MTLComputePipelineState> _singleLayerIntegratedIPTKernelPlanar[3];
	id<MTLComputePipelineState> _singleLayerIntegratedKernelPackedPlanar[3];
	id<MTLComputePipelineState> _singleLayerIntegratedIPTKernelPackedPlanar[3];
	id<MTLComputePipelineState> _yuvP422PackedPlanar[3];
	id<MTLComputePipelineState> _iptP422PackedPlanar[3];
	id<MTLComputePipelineState> _packedHDR10Cif10[3];
	id<MTLComputePipelineState> _packed422HDR10Cif10[3];
	id<MTLComputePipelineState> _packedHLGCif10[3];
	id<MTLComputePipelineState> _packed422HLGCif10[3];
	id<MTLComputePipelineState> _unpackeX420HDR10FP16;
	id<MTLComputePipelineState> _unpackeX420HDR10FP16IPT;
	id<MTLComputePipelineState> _unpackeX420HLGL10r;
	id<MTLComputePipelineState> _inRGhA_outL10r_DM;
	id<MTLComputePipelineState> _inRGhA_outL10r_RGBL;
	id<MTLComputePipelineState> _inRGhA_HLG_outL10r_DM;
	id<MTLComputePipelineState> _inY416PQ_outL10r_DM;
	id<MTLComputePipelineState> _inY416HLG_outL10r_DM;
	id<MTLComputePipelineState> _in422_HLG_outL10r_DM;
	id<MTLComputePipelineState> _in422_PQ_outL10r_DM;
	id<MTLComputePipelineState> _singleLayer16bit444Kernel;
	float _ambientHeadroomAdaptationLut[2000];
	id<MTLTexture> _polynomialTables[3];
	id<MTLTexture> _currentPolynomialTable;
	id<MTLBuffer> _dequantizelTable;
	id<MTLBuffer> _configBuffers[3];
	id<MTLBuffer> _config;
	id<MTLTexture> _blTexture;
	id<MTLTexture> _blTextureUV;
	id<MTLTexture> _blSubsampledTempTexture;
	id<MTLTexture> _blSubsampledTexture;
	id<MTLTexture> _elTexture;
	id<MTLTexture> _elTextureUV;
	id<MTLTexture> _outputTexture[3];
	id<MTLTexture> _outputTextureUV;
	id<MTLTexture> _inputTexturePool[32];
	int _inputTexturePoolIdx;
	id<MTLTexture> _outputTexturePool[4];
	int _outputTexturePoolIdx;
	id<MTLTexture> _pq2LTable;
	unsigned _pq2LTableSize;
	id<MTLTexture> _hlg2LTable;
	unsigned _hlg2LTableSize;
	id<MTLTexture> _yuvScalingFactorTable;
	float _yuvScalingFactorTableBuffer[2048];
	id<MTLTexture> _scalingFactorTable;
	float _scalingFactorTableBuffer[1024];
	id<MTLTexture> _sat2FactorTable;
	float _sat2FactorTableBuffer[1024];
	id<MTLTexture> _lumaMixFactorTable;
	float _lumaMixFactorTableBuffer[512];
	unsigned _prev_hdrContent;
	float _prev_slope;
	float _prev_c1;
	float _prev_c2;
	float _prev_c3;
	float _prev_trim_slope;
	float _prev_trim_offset;
	float _prev_trim_power;
	float _prev_trim_sat;
	float _prev_maxpq;
	float _prev_ambientnits;
	float _prev_maxedr;
	id<MTLTexture> _xferToLinear;
	unsigned _l2PQTableSize;
	float _l2PQMidPoint;
	float _l2PQMaxPoint;
	BOOL _dumpPolynomialResult;
	unsigned _inputPixelFormat;
	unsigned long long _inputProtectionOptions;
	BOOL _isPackedInputBuffer;
	float _cached_target_white;
	float _cached_target_black;
	float _cached_source_white;
	float _cached_source_black;
	float _prev_gamma;
	HDR10TMParam _prev_tmParam;
	HDR10AmbAdaptationParam _prev_ambAdaptationParam;
	HDR10DpcParam _prev_dpcParam;
	unsigned long long _iosurface_ReadOnlyTextureAlignmentBytes;
	BOOL _yuvCombinedCompose;
	BOOL _preSubsampleLumaForMMR;
	BOOL _bypassDisplayManagement;

}

@property (assign) BOOL yuvCombinedCompose;                   //@synthesize yuvCombinedCompose=_yuvCombinedCompose - In the implementation block
@property (assign) BOOL preSubsampleLumaForMMR;               //@synthesize preSubsampleLumaForMMR=_preSubsampleLumaForMMR - In the implementation block
@property (assign) BOOL bypassDisplayManagement;              //@synthesize bypassDisplayManagement=_bypassDisplayManagement - In the implementation block
-(id)initWithDevice:(id)arg1 ;
-(void)initBuffers;
-(void)setupMetal;
-(void)createKernels;
-(void)createPQ2LTable;
-(void)createL2PQTable;
-(long long)encodeToCommandBuffer:(id)arg1 BL:(IOSurfaceRef)arg2 EL:(IOSurfaceRef)arg3 Output:(IOSurfaceRef)arg4 ComposerData:(SCD_Struct_HD41*)arg5 DMData:(SCD_Struct_HD42*)arg6 tcControl:(ToneCurve_Control*)arg7 hdrControl:(SCD_Struct_HD40*)arg8 hdr10InfoFrame:(SCD_Struct_HD22*)arg9 ;
-(void)createHLG2LTable;
-(void)createScalingTable_YUVTM;
-(id)createComputePipeLineWithName:(id)arg1 useTrim:(BOOL)arg2 forLLDovi:(BOOL)arg3 ;
-(long long)setupInputTexturesWithBL:(IOSurfaceRef)arg1 EL:(IOSurfaceRef)arg2 Output:(IOSurfaceRef)arg3 MetaData:(SCD_Struct_HD41*)arg4 ;
-(long long)setupOutputTexturesWithBuffer:(IOSurfaceRef)arg1 ptvMode:(BOOL)arg2 ;
-(void)setupInputBuffersWithMetadata:(SCD_Struct_HD41*)arg1 ;
-(void)encodeDualLayerToCommandBuffer:(id)arg1 BL:(IOSurfaceRef)arg2 EL:(IOSurfaceRef)arg3 Output:(IOSurfaceRef)arg4 MetaData:(SCD_Struct_HD41*)arg5 tcControl:(ToneCurve_Control*)arg6 ;
-(void)encodeSingleLayerToCommandBuffer:(id)arg1 BL:(IOSurfaceRef)arg2 Output:(IOSurfaceRef)arg3 ComposerData:(SCD_Struct_HD41*)arg4 DMData:(SCD_Struct_HD42*)arg5 tcControl:(ToneCurve_Control*)arg6 hdrControl:(SCD_Struct_HD40*)arg7 hdr10InfoFrame:(SCD_Struct_HD22*)arg8 ;
-(void)checkInputFormats:(unsigned)arg1 returnInput1:(BOOL*)arg2 returnInput2:(BOOL*)arg3 returnInput3:(BOOL*)arg4 outputFormat:(unsigned)arg5 returnOutput1:(BOOL*)arg6 returnOutput2:(BOOL*)arg7 returnOutput3:(BOOL*)arg8 returnOutput4:(BOOL*)arg9 ;
-(void)checkForContent:(unsigned)arg1 contentReturn1:(BOOL*)arg2 contentReturn2:(BOOL*)arg3 contentReturn3:(BOOL*)arg4 forDisplay:(unsigned)arg5 displayReturn1:(BOOL*)arg6 displayReturn2:(BOOL*)arg7 displayReturn3:(BOOL*)arg8 displayReturn4:(BOOL*)arg9 displayReturn5:(BOOL*)arg10 ;
-(void)embeddedSetupToneMappingWithContent:(BOOL)arg1 Output:(IOSurfaceRef)arg2 DMData:(SCD_Struct_HD42*)arg3 tcControl:(ToneCurve_Control*)arg4 hdrControl:(SCD_Struct_HD40*)arg5 hdr10InfoFrame:(SCD_Struct_HD22*)arg6 dmConfig:(SCD_Struct_Do45*)arg7 hdr10OnPad:(BOOL)arg8 useYUVScalingTable:(BOOL)arg9 ;
-(void)embeddedSetupEncoderForCommandBuffer:(id)arg1 DMData:(SCD_Struct_HD42*)arg2 dmConfig:(id)arg3 isInput422:(BOOL)arg4 hasThreeOutputPlane:(BOOL)arg5 isSdrOnDolbyOrHDR10:(BOOL)arg6 isHDR10OnHDR10TV:(BOOL)arg7 isDolbyOnHDR10TV:(BOOL)arg8 isHDR10OnDolby:(BOOL)arg9 isHDR10OnPad:(BOOL)arg10 isHLGOnPad:(BOOL)arg11 isDoviOnPad:(BOOL)arg12 isDoviOnLLDovi:(BOOL)arg13 isHDR10OnLLDovi:(BOOL)arg14 isHLGOnHDR10TV:(BOOL)arg15 isHLGOnDolbyTV:(BOOL)arg16 isHLGOnLLDovi:(BOOL)arg17 isPtvMode:(BOOL)arg18 ;
-(void)fillInScalingTable_YUVTM:(SCD_Struct_Do45*)arg1 target_White:(float)arg2 target_Black:(float)arg3 source_White:(float)arg4 source_Black:(float)arg5 satBoost:(float)arg6 scalingFactor:(BOOL)arg7 ;
-(BOOL)dovi_tm_configChanged:(SCD_Struct_Do45*)arg1 ;
-(void)createLUTFromDMConfig:(SCD_Struct_Do45*)arg1 TCControl:(ToneCurve_Control*)arg2 HDRControl:(SCD_Struct_HD40*)arg3 ApplyExtraAdaptation:(BOOL)arg4 AdaptationLut:(float*)arg5 NumOfEntryOfAdaptationLut:(int)arg6 ;
-(void)encodeSubsampleLumaHorizontalToCommandBuffer:(id)arg1 ;
-(void)encodeSubsampleLumaVerticalToCommandBuffer:(id)arg1 ;
-(void)encodeComposeCombinedToCommandBuffer:(id)arg1 ;
-(void)encodeComposeLumaToCommandBuffer:(id)arg1 ;
-(void)encodeComposeChromaToCommandBuffer:(id)arg1 withMetaData:(SCD_Struct_HD41*)arg2 ;
-(void)setupComposerKernelConfiguration:(SCD_Struct_Do47*)arg1 fromMetaData:(SCD_Struct_HD41*)arg2 ;
-(BOOL)hdr10_tm_configChanged:(SCD_Struct_Do45*)arg1 TMParam:(HDR10TMParam*)arg2 AmbAdaptationParam:(HDR10AmbAdaptationParam*)arg3 ;
-(void)hdr10_tm_createLUTFromDMConfig:(HDR10TMParam*)arg1 AmbAdaptationParam:(HDR10AmbAdaptationParam*)arg2 ;
-(void)hdr10_tm_updateLUT;
-(void)hdr10_tm_reserveConfig:(HDR10TMParam*)arg1 AmbAdaptationParam:(HDR10AmbAdaptationParam*)arg2 ;
-(BOOL)hlg_tm_configChanged:(SCD_Struct_Do45*)arg1 EdrAdaptationParam:(HDR10EdrAdaptationParam*)arg2 AmbAdaptationParam:(HDR10AmbAdaptationParam*)arg3 ;
-(void)hlg_tm_createLUTFromDMConfig:(SCD_Struct_Do45*)arg1 TMParam:(HDR10TMParam*)arg2 EdrAdaptationParam:(HDR10EdrAdaptationParam*)arg3 AmbAdaptationParam:(HDR10AmbAdaptationParam*)arg4 TMMode:(int)arg5 ;
-(void)hlg_tm_updateLUT;
-(void)hlg_tm_reserveConfig:(SCD_Struct_Do45*)arg1 EdrAdaptationParam:(HDR10EdrAdaptationParam*)arg2 AmbAdaptationParam:(HDR10AmbAdaptationParam*)arg3 ;
-(void)dovi_tm_createLUTFromDMConfig:(SCD_Struct_Do45*)arg1 ApplyExtraAdaptation:(BOOL)arg2 AdaptationLu:(float*)arg3 NumOfEntryOfAdaptationLut:(int)arg4 ;
-(void)dovi_tm_updateLUT;
-(void)dovi_tm_reserveConfig:(SCD_Struct_Do45*)arg1 ;
-(void)hdr10_createLUTFromDMConfig:(SCD_Struct_Do45*)arg1 TMParam:(HDR10TMParam*)arg2 AmbAdaptationParam:(HDR10AmbAdaptationParam*)arg3 ;
-(void)hlg_createLUTFromDMConfig:(SCD_Struct_Do45*)arg1 TMParam:(HDR10TMParam*)arg2 EdrAdaptationParam:(HDR10EdrAdaptationParam*)arg3 AmbAdaptationParam:(HDR10AmbAdaptationParam*)arg4 TMMode:(int)arg5 ;
-(void)dovi_createLUTFromDMConfig:(SCD_Struct_Do45*)arg1 ApplyExtraAdaptation:(BOOL)arg2 AdaptationLut:(float*)arg3 NumOfEntryOfAdaptationLut:(int)arg4 ;
-(void)addTextureToCachedPool:(id)arg1 input:(BOOL)arg2 ;
-(id)getTextureFromCachedPool:(IOSurfaceRef)arg1 format:(unsigned long long)arg2 input:(BOOL)arg3 ;
-(BOOL)yuvCombinedCompose;
-(void)setYuvCombinedCompose:(BOOL)arg1 ;
-(BOOL)preSubsampleLumaForMMR;
-(void)setPreSubsampleLumaForMMR:(BOOL)arg1 ;
-(BOOL)bypassDisplayManagement;
-(void)setBypassDisplayManagement:(BOOL)arg1 ;
@end

