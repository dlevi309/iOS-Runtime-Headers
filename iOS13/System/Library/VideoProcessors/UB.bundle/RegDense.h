/*
* Generated on Monday, March 1, 2021 at 2:36:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/VideoProcessors/UB.bundle/UB
*/


@protocol MTLBuffer, MTLTexture, MTLSamplerState;
#import <UB/UB-Structs.h>
@class PyramidStorage, FigMetalContext, RegDenseShaders, RegPyrFusion, RegPyrFusionResources;

@interface RegDense : NSObject {

	PyramidStorage* _pyrConfidence;
	FigMetalContext* _metal;
	RegDenseShaders* _shaders;
	RegPyrFusion* _sfRegPyr;
	PyramidStorage* _refPyramid;
	PyramidStorage* _nonRefPyramid;
	RegPyrFusionResources* _sfRegPyrBuffers;
	id<MTLBuffer> _homographyMatrixBuffer;
	id<MTLTexture> _blendingWeight;
	id<MTLTexture> _blendingWeightLowLight;
	id<MTLSamplerState> _warpingSampler;

}
+(int)prewarmShaders:(id)arg1 ;
+(unsigned long long)computeScratchBufferSizeWithMetalContext:(id)arg1 ;
+(unsigned long long)nonAliasableBytesForWarpedOutputWithMetalContext:(id)arg1 ;
+(unsigned long long)computePyrConfidenceSizeForWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 pyrConfidenceLevels:(int)arg3 ;
+(unsigned long long)computeBufferOffset:(unsigned long long*)arg1 width:(int)arg2 height:(int)arg3 format:(unsigned long long)arg4 metal:(id)arg5 ;
+(unsigned long long)computeScratchBufferOffsets:(SCD_Struct_Re32*)arg1 metal:(id)arg2 ;
-(void)dealloc;
-(void)reset;
-(void)releaseResources;
-(id)initWithMetalContext:(id)arg1 ;
-(id)initWithMetalContext:(id)arg1 bicubicWarping:(BOOL)arg2 ;
-(int)allocateResourcesWithScratchBuffer:(id)arg1 width:(int)arg2 height:(int)arg3 pyrConfidenceLevels:(int)arg4 allocPyrConfidence:(BOOL)arg5 pyrConfidenceOffset:(unsigned long long)arg6 ;
-(int)runWithReferenceImage:(id)arg1 nonReferenceImage:(id)arg2 warpedImage:(id)arg3 relativeBrightness:(float)arg4 homography:(const SCD_Struct_Wa0*)arg5 lowLightMode:(BOOL)arg6 shadowDenseBlendStrength:(float)arg7 nonShadowDenseBlendStrength:(float)arg8 lensShadingFactor:(float)arg9 noiseModel:(NoiseModel*)arg10 alwaysDense:(BOOL)arg11 refWeightsLevel:(id)arg12 nonRefWeightsLevel:(id)arg13 ;
-(int)warpAdditionalImage:(id)arg1 warpedImage:(id)arg2 homography:(const SCD_Struct_Wa0*)arg3 hybridReg:(BOOL)arg4 alwaysDense:(BOOL)arg5 ;
-(int)runWithReferenceImage:(id)arg1 nonReferenceImage:(id)arg2 warpedImage:(id)arg3 relativeBrightness:(float)arg4 homography:(const SCD_Struct_Wa0*)arg5 ;
-(int)runLowLightWithReferenceImage:(id)arg1 nonReferenceImage:(id)arg2 warpedImage:(id)arg3 refWeightsLuma:(id)arg4 nonRefWeightsLuma:(id)arg5 relativeBrightness:(float)arg6 homography:(const SCD_Struct_Wa0*)arg7 shadowDenseBlendStrength:(float)arg8 nonShadowDenseBlendStrength:(float)arg9 lensShadingFactor:(float)arg10 noiseModel:(NoiseModel*)arg11 alwaysDense:(BOOL)arg12 ;
-(int)blendingWeightLowLightUsing:(id)arg1 and:(id)arg2 shadowDenseBlendStrength:(float)arg3 nonShadowDenseBlendStrength:(float)arg4 relativeBrightness:(float)arg5 lensShadingFactor:(float)arg6 noiseModel:(const NoiseModel*)arg7 homography:(const SCD_Struct_Wa0*)arg8 ;
-(int)blendingWeightUsing:(id)arg1 and:(id)arg2 homography:(const SCD_Struct_Wa0*)arg3 relativeBrightness:(float)arg4 ;
-(int)warpFrameWithInputY:(id)arg1 inputUV:(id)arg2 outputY:(id)arg3 outputUV:(id)arg4 homography:(const SCD_Struct_Wa0*)arg5 hybridReg:(BOOL)arg6 alwaysDense:(BOOL)arg7 ;
-(int)pyramidConfidence:(id)arg1 input:(id)arg2 ;
@end

