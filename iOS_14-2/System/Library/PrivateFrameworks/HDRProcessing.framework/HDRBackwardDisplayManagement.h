/*
* Generated on Thursday, January 14, 2021 at 2:29:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HDRProcessing.framework/HDRProcessing
*/


@protocol MTLDeviceSPI, MTLLibrary, MTLRenderPipelineState, MTLSamplerState, MTLTexture, MTLBuffer;
#import <HDRProcessing/HDRProcessing-Structs.h>
@class NSMutableData;

@interface HDRBackwardDisplayManagement : NSObject {

	unsigned long long _frameIndex;
	id<MTLDeviceSPI> _device;
	id<MTLLibrary> _defaultLibrary;
	id<MTLRenderPipelineState> _BKDM_ARGB_Linear;
	id<MTLRenderPipelineState> _BKDM_3Plane_2Pixel_PTV[12];
	id<MTLRenderPipelineState> _BKDM_3Plane_1Pixel_PTV[12];
	id<MTLRenderPipelineState> _BKDM_3Plane_2Pixel_UIBlending_PTV[12];
	id<MTLRenderPipelineState> _BKDM_3Plane_1Pixel_UIBlending_PTV[12];
	id<MTLRenderPipelineState> _BKDM_3Plane_2Pixel_Linear[12];
	id<MTLRenderPipelineState> _BKDM_3Plane_1Pixel_Linear[12];
	id<MTLRenderPipelineState> _BKDM_3Plane_1Pixel_Gamma[12];
	id<MTLRenderPipelineState> _BKDM_3Plane_1Pixel_Gamma_Scaled[12];
	id<MTLRenderPipelineState> _BKDM_3Plane_1Pixel_Video_Scaled[12];
	id<MTLRenderPipelineState> _BKDM_3Plane_2Pixel_Gamma_Scaled[12];
	id<MTLRenderPipelineState> _BKDM_3Plane_2Pixel_Video_Scaled[12];
	id<MTLRenderPipelineState> _BKDM_SDRUIOnly_ShaderDegamma[12];
	id<MTLRenderPipelineState> _BKDM_SDRUIOnly[12];
	id<MTLRenderPipelineState> _BKDM_SDRVideoOnly[12];
	id<MTLRenderPipelineState> _BKDM_SDRVideoUIBlending[12];
	id<MTLRenderPipelineState> _BKDM_SDRUIBlending[12];
	id<MTLRenderPipelineState> _colorfill1[12];
	id<MTLRenderPipelineState> _colorfill2[12];
	id<MTLRenderPipelineState> _fillUI1ForHDR[12];
	id<MTLRenderPipelineState> _fillUI1SDR24[12];
	id<MTLRenderPipelineState> _fillUI2ForHDR[12];
	id<MTLRenderPipelineState> _metadataKernel;
	id<MTLRenderPipelineState> _metadataKernel2Pixel;
	id<MTLSamplerState> _inputSampler;
	id<MTLTexture> _pq2LTable;
	id<MTLTexture> _l2PQTable;
	id<MTLTexture> _inverseScalingFactorTableTexture;
	id<MTLTexture> _inverseScalingFactorTableTextures[3];
	NSMutableData* _inverseScalingTable;
	id<MTLTexture> _sdrScalingFactorTableTexture;
	id<MTLTexture> _yuvScalingFactorTableTexture;
	id<MTLTexture> _yuvScalingFactorTableTextures[3];
	unsigned _indexOfyuvScalingFactorTableTexture;
	NSMutableData* _sdrScalingTable;
	NSMutableData* _yuvScalingTable;
	float _cached_target_white;
	float _cached_target_black;
	float _cached_source_white;
	float _cached_source_black;
	float _prev_SlopeScaled;
	float _prev_c1;
	float _prev_c2;
	float _prev_c3;
	id<MTLBuffer> _uniformBuffer;
	id<MTLBuffer> _uniformBuffers[3];
	id<MTLBuffer> _vertsBuffer;
	id<MTLBuffer> _vertsBuf;
	id<MTLBuffer> _vertsBufs[3];
	int _num_Blend_Rects[3];
	int _num_Video_Rects[3];
	int _num_UI_Rects[3];
	int _num_ColorFill_Rects[3];
	SCD_Struct_HD49 _cachedFullRegion;
	SCD_Struct_HD49 _cachedVideoDstRegion[3];
	SCD_Struct_HD49 _cachedVideoSrcRegion[3];
	SCD_Struct_HD49 _cachedUIDstRegion[3];
	SCD_Struct_HD49 _cachedUISrcRegion[3];
	unsigned _cached_videoInputFormat;
	unsigned _cached_uiInputFormat;
	id<MTLBuffer> _metadataVertexBuffer;
	int _metadataSpanCount[5];
	int _width;
	int _height;
	int _targetWidth;
	int _targetHeight;
	id<MTLTexture> _metadataTexture[5];
	id<MTLTexture> _metadataTextures[3][5];
	id<MTLTexture> _inputTexture[3];
	id<MTLTexture> _outputTexture;
	id<MTLTexture> _outputTextureMetadata;
	id<MTLTexture> _intermediateTexture;
	id<MTLTexture> _uiTexture;
	float _uiEDRFactor;
	float _inputScaleFactor;
	unsigned _displayMaxBrightnessInNits;
	unsigned _displayMaxBrightnessInNitsForSDR;
	float _displayMinBrightnessInNits;
	BOOL _hasDisplayBrightnessFromEDID;
	unsigned _displayType;
	unsigned _outputPackingColorFormat;
	unsigned _inverseScalingTableIndex;
	BOOL _useAccessibilityMatrix;
	SCD_Struct_HD50 _cachedHDRMatrix;
	float _709toPanelPrimaryMatrix[9];

}
-(void)initWithDevice:(id)arg1 ;
-(long long)encodeToCommandBuffer:(id)arg1 video:(IOSurfaceRef)arg2 videoSrcRegion:(SCD_Struct_HD49)arg3 videoDstRegion:(SCD_Struct_HD49)arg4 ui:(IOSurfaceRef)arg5 uiSrcRegion:(SCD_Struct_HD49)arg6 uiDstRegion:(SCD_Struct_HD49)arg7 backgroundColor:(SCD_Struct_HD51*)arg8 output:(IOSurfaceRef)arg9 frameProperties:(id)arg10 ;
-(id)initWithDevice:(id)arg1 displayProperties:(id)arg2 ;
-(long long)setAccessibilityMatrix:(SCD_Struct_HD50*)arg1 ;
-(void)createKernels;
-(void)initDisplayAttributes:(id)arg1 ;
-(void)setupMetal;
-(void)createSamplers;
-(void)createPQ2LTable;
-(void)createL2PQTable;
-(void)createInverseScalingFactorTable;
-(void)createSDRScalingFactorTable;
-(void)createYUVScalingFactorTable;
-(void)createBuffers;
-(void)createMetadataTexture;
-(unsigned)getPackagingColorFormatFromDictionary:(id)arg1 withDefaultValue:(unsigned)arg2 ;
-(id)createRenderPipeLineWithVertexName:(id)arg1 fragmentName:(id)arg2 colorFormat:(unsigned long long)arg3 useCustomMatrix:(BOOL)arg4 p3CSC:(BOOL)arg5 applyYGamma:(BOOL)arg6 ;
-(BOOL)inputIsSDRVideoFormat:(IOSurfaceRef)arg1 ;
-(void)attatchInfoFrame:(SCD_Struct_HD52*)arg1 toOutputSurface:(IOSurfaceRef)arg2 ;
-(void)drawMetaWithEncoder:(id)arg1 widthScale:(int)arg2 dmPayLoadLength:(int)arg3 ;
-(long long)encodeToCommandBuffer:(id)arg1 video:(IOSurfaceRef)arg2 ui:(IOSurfaceRef)arg3 output:(IOSurfaceRef)arg4 frameProperties:(id)arg5 ;
-(void)createMetadataVertexBuffer;
-(void)generateMetaAndConfig:(id)arg1 inputSurface:(IOSurfaceRef)arg2 outputSurface:(IOSurfaceRef)arg3 payLoad:(/*function pointer*/void**)arg4 dmCfg:(/*function pointer*/void**)arg5 ;
-(void)fillScalingTable_SDR2HDR:(SCD_Struct_HD52*)arg1 target_White:(float)arg2 target_Black:(float)arg3 ;
-(BOOL)updateConfigFromMetadata:(SCD_Struct_HD52*)arg1 uiScaleFactor:(float)arg2 width:(int)arg3 background:(SCD_Struct_HD51*)arg4 hdrVideoOnly:(BOOL)arg5 hdr10TV:(BOOL)arg6 sdrOnly:(BOOL)arg7 ;
-(void)fillScalingTable_YUVTM:(SCD_Struct_HD52*)arg1 targetwhite:(float)arg2 targetblack:(float)arg3 satBoost:(float)arg4 scalingFactor:(BOOL)arg5 sdrOnly:(BOOL)arg6 ;
-(void)fillInverseScalingFactorTableFromDMConfig:(SCD_Struct_HD52*)arg1 ;
-(int)adjustMetaData:(SCD_Struct_HD54*)arg1 HDRUIBlending:(BOOL)arg2 hasLetterbox:(BOOL)arg3 ;
-(void)packetizeMetadata:(SCD_Struct_HD54*)arg1 length:(int)arg2 into:(int)arg3 onSurface:(IOSurfaceRef)arg4 ;
-(int)pixelNumPerThreadFullScreen:(BOOL)arg1 videoInput:(IOSurfaceRef)arg2 UI:(IOSurfaceRef)arg3 Output:(IOSurfaceRef)arg4 widthScaling:(BOOL)arg5 ;
-(void)setupTexturesWithInput:(IOSurfaceRef)arg1 VideoSRGB:(BOOL)arg2 UI:(IOSurfaceRef)arg3 UISRGB:(BOOL)arg4 Output:(IOSurfaceRef)arg5 PixelPerThread:(int)arg6 ptvMode:(BOOL)arg7 ;
-(id)createRenderCommandEncoderWithCommandBuffer:(id)arg1 texture:(id)arg2 widthScale:(unsigned)arg3 loadAction:(unsigned long long)arg4 ;
-(int)getTVIndex:(BOOL)arg1 ;
-(void)updateUniformUIScaleForVideo:(BOOL)arg1 forTV:(BOOL)arg2 videoPeakBrightnessInNits:(int)arg3 uiHWDegamma:(BOOL)arg4 ;
-(void)handleMetaInsertion:(BOOL)arg1 encoder:(id)arg2 widthScale:(int)arg3 payloadLength:(unsigned)arg4 ;
-(long long)EncodeToCommandBuffer:(id)arg1 inputSurface:(IOSurfaceRef)arg2 uiSurface:(IOSurfaceRef)arg3 outputSurface:(IOSurfaceRef)arg4 frameProperties:(id)arg5 ;
-(void)updateVertices:(SCD_Struct_HD49)arg1 videoInput:(IOSurfaceRef)arg2 videoDstRegion:(SCD_Struct_HD49)arg3 videoSrcRegion:(SCD_Struct_HD49)arg4 uiInput:(IOSurfaceRef)arg5 uiDstRegion:(SCD_Struct_HD49)arg6 uiSrcRegion:(SCD_Struct_HD49)arg7 dstWidth:(int)arg8 dstHeight:(int)arg9 videoSrcWidth:(int)arg10 videoSrcHeight:(int)arg11 index:(int)arg12 scale:(int)arg13 ;
-(unsigned long long)getPixelFormatFromSurface:(IOSurfaceRef)arg1 DeGamma:(BOOL)arg2 forceUseOnePlane:(BOOL)arg3 default:(unsigned long long)arg4 ;
-(BOOL)inputIsVideoOnly:(IOSurfaceRef)arg1 inputUI:(IOSurfaceRef)arg2 ;
-(long long)encodeToCommandBuffer:(id)arg1 inputSurface:(IOSurfaceRef)arg2 outputSurface:(IOSurfaceRef)arg3 frameProperties:(id)arg4 ;
-(long long)encodeToCommandBuffer:(id)arg1 video:(IOSurfaceRef)arg2 videoSrcRegion:(SCD_Struct_HD49)arg3 videoDstRegion:(SCD_Struct_HD49)arg4 ui:(IOSurfaceRef)arg5 output:(IOSurfaceRef)arg6 frameProperties:(id)arg7 ;
-(void)setupMetadataTextureWithOutput:(IOSurfaceRef)arg1 ;
@end

