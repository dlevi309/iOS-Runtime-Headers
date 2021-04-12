/*
* Generated on Monday, March 1, 2021 at 2:36:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/VideoProcessors/StereoStitchingProcessor.bundle/StereoStitchingProcessor
*/


@protocol MTLTexture, MTLComputePipelineState;
#import <StereoStitchingProcessor/StereoStitchingProcessor-Structs.h>
@class FigMetalContext, StereoStitchingGpuUtilities;

@interface ColorMatching : NSObject {

	FigMetalContext* _metal;
	id<MTLTexture> _wideY_qres;
	id<MTLTexture> _wideY_qres_uint;
	id<MTLTexture> _wideUV_qres_uint;
	id<MTLTexture> _wideUV_qres;
	id<MTLTexture> _narrowY_qres;
	id<MTLTexture> _narrowY_qres_uint;
	id<MTLTexture> _narrowUV_qres_uint;
	id<MTLTexture> _narrowUV_qres;
	id<MTLTexture> _meanYTex;
	id<MTLTexture> _meanUVTex;
	id<MTLTexture> _stdYTex;
	id<MTLTexture> _stdUVTex;
	id<MTLTexture> _gainYTex;
	id<MTLTexture> _gainUVTex;
	id<MTLTexture> _gainYInterpTex;
	id<MTLTexture> _gainUVInterpTex;
	id<MTLTexture> _gainYExtendedTex;
	id<MTLTexture> _gainUVExtendedTex;
	id<MTLTexture> _offsetYTex;
	id<MTLTexture> _offsetUVTex;
	id<MTLTexture> _offsetYInterpTex;
	id<MTLTexture> _offsetUVInterpTex;
	id<MTLTexture> _offsetYExtendedTex;
	id<MTLTexture> _offsetUVExtendedTex;
	unsigned _gridWindowWidth;
	unsigned _gridWindowHeight;
	unsigned _strideRow;
	unsigned _strideCol;
	unsigned _numGridCol;
	unsigned _numGridRow;
	id<MTLComputePipelineState> _attenuateGain;
	id<MTLComputePipelineState> _attenuate_gainUV;
	id<MTLComputePipelineState> _applyGainOffset;
	id<MTLComputePipelineState> _gridMeanAndVarianceY_step1;
	id<MTLComputePipelineState> _gridMeanAndVarianceY_step2;
	id<MTLComputePipelineState> _gridMeanAndVarianceUV_step1;
	id<MTLComputePipelineState> _gridMeanAndVarianceUV_step2;
	StereoStitchingGpuUtilities* _ssGpuUtilities;

}
-(void)dealloc;
-(void)releaseResources;
-(int)compileShaders;
-(id)initWithMetalContext:(id)arg1 gpuUtilities:(id)arg2 ;
-(int)allocateResourcesWithDescriptor:(ColorMatchingDescriptor*)arg1 buffer:(id)arg2 offset:(unsigned*)arg3 ;
-(int)processInPlaceWithWideY:(id)arg1 wideUV:(id)arg2 wideROI:(SCD_Struct_Fi4*)arg3 narrowY:(id)arg4 narrowUV:(id)arg5 narrowROI:(SCD_Struct_Fi4*)arg6 params:(ColorMatchingUniforms*)arg7 ;
-(int)computeThreadgroupConfig:(id)arg1 tileDim:(2*)arg2 threadGroups:(3*)arg3 ;
@end

