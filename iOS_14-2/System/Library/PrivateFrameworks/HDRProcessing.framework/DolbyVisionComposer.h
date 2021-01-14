/*
* Generated on Thursday, January 14, 2021 at 2:29:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HDRProcessing.framework/HDRProcessing
*/


@protocol MTLDeviceSPI, MTLLibrary, MTLTexture, MTLBuffer;
#import <HDRProcessing/HDRProcessing-Structs.h>
@class ComposerShader;

@interface DolbyVisionComposer : NSObject {

	unsigned long long _frameIndex;
	id<MTLDeviceSPI> _device;
	id<MTLLibrary> _defaultLibrary;
	ComposerShader* _horizontalHalfLumaKernel;
	ComposerShader* _verticalHalfLumaKernel;
	ComposerShader* _verticalResampleKernel;
	ComposerShader* _horizontalResampleKernel;
	ComposerShader* _composeLumaKernel;
	ComposerShader* _composeChromaKernel;
	ComposerShader* _composeYUVKernel;
	ComposerShader* _sdr2cif10;
	ComposerShader* _packedDolbyIPT_ptv;
	ComposerShader* _packed422DolbyIPT_ptv;
	ComposerShader* _unpackedHDR10_ptv;
	ComposerShader* _packedHDR10_ptv;
	ComposerShader* _packed422HDR10_ptv;
	ComposerShader* _unpackedHLG_ptv;
	ComposerShader* _packedHLG_ptv;
	ComposerShader* _packed422HLG_ptv;
	ComposerShader* _packedHDR10toRGB;
	ComposerShader* _packed422HDR10toRGB;
	ComposerShader* _unpackedHDR10toRGB;
	ComposerShader* _packedHDR10toRGB_YUVTM;
	ComposerShader* _packed422HDR10toRGB_YUVTM;
	ComposerShader* _unpackedHDR10toRGB_YUVTM;
	ComposerShader* _packedHLGtoRGB_YUVTM;
	ComposerShader* _packedHLGtoRGB_YUVTM_flip;
	ComposerShader* _packedHLGtoRGB_YUVTM_rotate;
	ComposerShader* _packed422HLGtoRGB_YUVTM;
	ComposerShader* _packed422HLGtoRGB_YUVTM_flip;
	ComposerShader* _packed422HLGtoRGB_YUVTM_rotate;
	ComposerShader* _unpackedHLGtoRGB_YUVTM;
	ComposerShader* _packedDolbyYUVtoRGB_YUVTM[4];
	ComposerShader* _packed422DolbyYUVtoRGB_YUVTM[4];
	ComposerShader* _packedDolbyIPTtoRGB_YUVTM[4];
	ComposerShader* _packed422DolbyIPTtoRGB_YUVTM[4];
	ComposerShader* _singleLayerIntegratedKernel[4];
	ComposerShader* _singleLayerIntegratedIPTKernel[4];
	ComposerShader* _singleLayerIntegratedKernelPlanar[4];
	ComposerShader* _singleLayerIntegratedIPTKernelPlanar[4];
	ComposerShader* _singleLayerIntegratedKernelPackedPlanar[4];
	ComposerShader* _singleLayerIntegratedKernelPackedPlanar_flip[4];
	ComposerShader* _singleLayerIntegratedKernelPackedPlanar_rotate[4];
	ComposerShader* _singleLayerIntegratedIPTKernelPackedPlanar[4];
	ComposerShader* _yuvP422PackedPlanar[4];
	ComposerShader* _yuvP422PackedPlanar_flip[4];
	ComposerShader* _yuvP422PackedPlanar_rotate[4];
	ComposerShader* _iptP422PackedPlanar[4];
	ComposerShader* _packedHDR10Cif10[4];
	ComposerShader* _packed422HDR10Cif10[4];
	ComposerShader* _packedHLGCif10[4];
	ComposerShader* _packed422HLGCif10[4];
	ComposerShader* _singleLayer16bit444Kernel;
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
	id<MTLTexture> _pq2LTableForPassThrough;
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
	unsigned _srcFormat;
	unsigned _dstFormat;
	unsigned _inputPixelFormat;
	unsigned _outputPixelFormat;
	unsigned long long _inputProtectionOptions;
	unsigned long long _outputProtectionOptions;
	BOOL _isPackedInputBuffer;
	float _cached_target_white;
	float _cached_target_black;
	float _cached_source_white;
	float _cached_source_black;
	float _prev_gamma;
	HDR10TMParam _prev_tmParam;
	EdrAdaptationParam _prev_edrAdaptationParam;
	AmbAdaptationParam _prev_ambAdaptationParam;
	DpcParam _prev_dpcParam;
	unsigned long long _iosurface_ReadOnlyTextureAlignmentBytes;
	BOOL _yuvCombinedCompose;
	BOOL _preSubsampleLumaForMMR;
	BOOL _bypassDisplayManagement;

}

@property (assign) BOOL yuvCombinedCompose;                   //@synthesize yuvCombinedCompose=_yuvCombinedCompose - In the implementation block
@property (assign) BOOL preSubsampleLumaForMMR;               //@synthesize preSubsampleLumaForMMR=_preSubsampleLumaForMMR - In the implementation block
@property (assign) BOOL bypassDisplayManagement;              //@synthesize bypassDisplayManagement=_bypassDisplayManagement - In the implementation block
-(id)initWithDevice:(id)arg1 ;
-(long long)encodeToCommandBuffer:(id)arg1 BL:(IOSurfaceRef)arg2 EL:(IOSurfaceRef)arg3 Output:(IOSurfaceRef)arg4 ComposerData:(SCD_Struct_HD46*)arg5 DMData:(SCD_Struct_HD45*)arg6 tcControl:(ToneCurve_Control*)arg7 hdrControl:(SCD_Struct_HD43*)arg8 hdr10InfoFrame:(SCD_Struct_HD23*)arg9 ;
-(void)setupMetal;
-(void)createPQ2LTable;
-(void)createL2PQTable;
-(id)createShaderWithName:(id)arg1 dolby84:(BOOL)arg2 forLLDovi:(BOOL)arg3 ;
-(void)initBuffers;
-(void)createHLG2LTable;
-(void)createScalingTable_YUVTM;
-(void)embeddedCreateKernels;
-(id)createNullShader;
-(long long)setupInputTexturesWithBL:(IOSurfaceRef)arg1 EL:(IOSurfaceRef)arg2 Output:(IOSurfaceRef)arg3 MetaData:(SCD_Struct_HD46*)arg4 ;
-(long long)setupOutputTexturesWithBuffer:(IOSurfaceRef)arg1 orientation:(int)arg2 ptvMode:(BOOL)arg3 ;
-(void)setupInputBuffersWithMetadata:(SCD_Struct_HD46*)arg1 ;
-(void)encodeDualLayerToCommandBuffer:(id)arg1 BL:(IOSurfaceRef)arg2 EL:(IOSurfaceRef)arg3 Output:(IOSurfaceRef)arg4 MetaData:(SCD_Struct_HD46*)arg5 tcControl:(ToneCurve_Control*)arg6 ;
-(void)encodeSingleLayerToCommandBuffer:(id)arg1 BL:(IOSurfaceRef)arg2 Output:(IOSurfaceRef)arg3 ComposerData:(SCD_Struct_HD46*)arg4 DMData:(SCD_Struct_HD45*)arg5 tcControl:(ToneCurve_Control*)arg6 hdrControl:(SCD_Struct_HD43*)arg7 hdr10InfoFrame:(SCD_Struct_HD23*)arg8 ;
-(void)checkInputFormats:(unsigned)arg1 returnInput1:(BOOL*)arg2 returnInput2:(BOOL*)arg3 returnInput3:(BOOL*)arg4 outputFormat:(unsigned)arg5 returnOutput1:(BOOL*)arg6 returnOutput2:(BOOL*)arg7 returnOutput3:(BOOL*)arg8 returnOutput4:(BOOL*)arg9 ;
-(void)checkForContent:(unsigned)arg1 contentReturn1:(BOOL*)arg2 contentReturn2:(BOOL*)arg3 contentReturn3:(BOOL*)arg4 forDisplay:(unsigned)arg5 displayReturn1:(BOOL*)arg6 displayReturn2:(BOOL*)arg7 displayReturn3:(BOOL*)arg8 displayReturn4:(BOOL*)arg9 displayReturn5:(BOOL*)arg10 ;
-(void)embeddedSetupToneMappingWithContent:(BOOL)arg1 Output:(IOSurfaceRef)arg2 DMData:(SCD_Struct_HD45*)arg3 tcControl:(ToneCurve_Control*)arg4 hdrControl:(SCD_Struct_HD43*)arg5 hdr10InfoFrame:(SCD_Struct_HD23*)arg6 dmConfig:(SCD_Struct_Do56*)arg7 hdr10OnPad:(BOOL)arg8 useYUVScalingTable:(BOOL)arg9 ;
-(void)embeddedSetupEncoderForCommandBuffer:(id)arg1 DMData:(SCD_Struct_HD45*)arg2 dmConfig:(id)arg3 isInput422:(BOOL)arg4 hasThreeOutputPlane:(BOOL)arg5 isSdrOnDolbyOrHDR10:(BOOL)arg6 isHDR10OnHDR10TV:(BOOL)arg7 isDolbyOnHDR10TV:(BOOL)arg8 isHDR10OnDolby:(BOOL)arg9 isHDR10OnPad:(BOOL)arg10 isHLGOnPad:(BOOL)arg11 isDoviOnPad:(BOOL)arg12 isDoviOnLLDovi:(BOOL)arg13 isHDR10OnLLDovi:(BOOL)arg14 isHLGOnHDR10TV:(BOOL)arg15 isHLGOnDolbyTV:(BOOL)arg16 isHLGOnLLDovi:(BOOL)arg17 isPtvMode:(BOOL)arg18 orientation:(int)arg19 isDolby84:(BOOL)arg20 ;
-(void)fillInScalingTable_YUVTM:(SCD_Struct_Do56*)arg1 target_White:(float)arg2 target_Black:(float)arg3 source_White:(float)arg4 source_Black:(float)arg5 satBoost:(float)arg6 scalingFactor:(BOOL)arg7 ;
-(void)createLUTFromDMConfig:(SCD_Struct_Do56*)arg1 TCControl:(ToneCurve_Control*)arg2 HDRControl:(SCD_Struct_HD43*)arg3 ;
-(id)getComputePipeLineStateForShader:(id)arg1 ;
-(void)encodeSubsampleLumaHorizontalToCommandBuffer:(id)arg1 ;
-(void)encodeSubsampleLumaVerticalToCommandBuffer:(id)arg1 ;
-(void)encodeComposeCombinedToCommandBuffer:(id)arg1 ;
-(void)encodeComposeLumaToCommandBuffer:(id)arg1 ;
-(void)encodeComposeChromaToCommandBuffer:(id)arg1 withMetaData:(SCD_Struct_HD46*)arg2 ;
-(void)setupComposerKernelConfiguration:(SCD_Struct_Do58*)arg1 fromMetaData:(SCD_Struct_HD46*)arg2 ;
-(BOOL)hdr10_tm_configChanged:(SCD_Struct_Do56*)arg1 TMParam:(HDR10TMParam*)arg2 EdrAdaptationParam:(EdrAdaptationParam*)arg3 AmbAdaptationParam:(AmbAdaptationParam*)arg4 ;
-(void)hdr10_tm_createLUTFromDMConfig:(HDR10TMParam*)arg1 EdrAdaptationParam:(EdrAdaptationParam*)arg2 AmbAdaptationParam:(AmbAdaptationParam*)arg3 ;
-(void)hdr10_tm_updateLUT;
-(void)hdr10_tm_reserveConfig:(HDR10TMParam*)arg1 EdrAdaptationParam:(EdrAdaptationParam*)arg2 AmbAdaptationParam:(AmbAdaptationParam*)arg3 ;
-(BOOL)hlg_tm_configChanged:(SCD_Struct_Do56*)arg1 ;
-(void)hlg_tm_createLUTFromDMConfig:(SCD_Struct_Do56*)arg1 TMParam:(HLGTMParam*)arg2 EdrAdaptationParam:(EdrAdaptationParam*)arg3 AmbAdaptationParam:(AmbAdaptationParam*)arg4 TMMode:(int)arg5 ;
-(void)hlg_tm_updateLUT;
-(void)hlg_tm_reserveConfig:(SCD_Struct_Do56*)arg1 ;
-(BOOL)dovi_tm_configChanged:(SCD_Struct_Do56*)arg1 EdrAdaptationParam:(EdrAdaptationParam*)arg2 AmbAdaptationParam:(AmbAdaptationParam*)arg3 ;
-(void)dovi_tm_createLUTFromDMConfig:(SCD_Struct_Do56*)arg1 TMParam:(DoViTMParam*)arg2 EdrAdaptationParam:(EdrAdaptationParam*)arg3 AmbAdaptationParam:(AmbAdaptationParam*)arg4 HlgOOTFCombined:(BOOL)arg5 IsDoVi84:(BOOL)arg6 ;
-(void)dovi_tm_updateLUT;
-(void)dovi_tm_reserveConfig:(SCD_Struct_Do56*)arg1 EdrAdaptationParam:(EdrAdaptationParam*)arg2 AmbAdaptationParam:(AmbAdaptationParam*)arg3 ;
-(void)hdr10_createLUTFromDMConfig:(SCD_Struct_Do56*)arg1 TMParam:(HDR10TMParam*)arg2 EdrAdaptationParam:(EdrAdaptationParam*)arg3 AmbAdaptationParam:(AmbAdaptationParam*)arg4 ;
-(void)hlg_createLUTFromDMConfig:(SCD_Struct_Do56*)arg1 TMParam:(HLGTMParam*)arg2 EdrAdaptationParam:(EdrAdaptationParam*)arg3 AmbAdaptationParam:(AmbAdaptationParam*)arg4 TMMode:(int)arg5 ;
-(void)dovi_createLUTFromDMConfig:(SCD_Struct_Do56*)arg1 TMParam:(DoViTMParam*)arg2 EdrAdaptationParam:(EdrAdaptationParam*)arg3 AmbAdaptationParam:(AmbAdaptationParam*)arg4 HlgOOTFCombined:(BOOL)arg5 IsDoVi84:(BOOL)arg6 ;
-(void)addTextureToCachedPool:(id)arg1 input:(BOOL)arg2 ;
-(id)getTextureFromCachedPool:(IOSurfaceRef)arg1 format:(unsigned long long)arg2 input:(BOOL)arg3 ;
-(BOOL)yuvCombinedCompose;
-(void)setYuvCombinedCompose:(BOOL)arg1 ;
-(BOOL)preSubsampleLumaForMMR;
-(void)setPreSubsampleLumaForMMR:(BOOL)arg1 ;
-(BOOL)bypassDisplayManagement;
-(void)setBypassDisplayManagement:(BOOL)arg1 ;
@end

