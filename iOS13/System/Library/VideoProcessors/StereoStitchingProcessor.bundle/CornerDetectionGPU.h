/*
* Generated on Monday, March 1, 2021 at 2:36:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/VideoProcessors/StereoStitchingProcessor.bundle/StereoStitchingProcessor
*/


@protocol MTLTexture, MTLComputePipelineState;
@class FigMetalContext, MPSImageConvolution, StereoStitchingGpuUtilities;

@interface CornerDetectionGPU : NSObject {

	FigMetalContext* _metal;
	id<MTLTexture> _derivTex;
	id<MTLTexture> _derivTexSmoothed;
	MPSImageConvolution* _mpsConvolution5x5;
	id<MTLComputePipelineState> _derivatives_2x2;
	id<MTLComputePipelineState> _detect_corners;
	StereoStitchingGpuUtilities* _ssGpuUtilities;

}
-(void)dealloc;
-(void)releaseResources;
-(id)initWithMetalContext:(id)arg1 gpuUtilities:(id)arg2 ;
-(int)compileShaders:(BOOL)arg1 ;
-(int)allocateResourcesForWidth:(unsigned)arg1 height:(unsigned)arg2 buffer:(id)arg3 offset:(unsigned*)arg4 ;
-(int)detectCornersWithInput:(id)arg1 output:(id)arg2 ;
@end

