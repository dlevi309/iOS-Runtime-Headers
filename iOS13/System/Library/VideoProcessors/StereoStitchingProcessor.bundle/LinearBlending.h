/*
* Generated on Monday, March 1, 2021 at 2:36:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/VideoProcessors/StereoStitchingProcessor.bundle/StereoStitchingProcessor
*/


@protocol MTLComputePipelineState;
#import <StereoStitchingProcessor/StereoStitchingProcessor-Structs.h>
@class FigMetalContext, StereoStitchingGpuUtilities;

@interface LinearBlending : NSObject {

	FigMetalContext* _metalContext;
	StereoStitchingGpuUtilities* _gpuUtilities;
	id<MTLComputePipelineState> _kernel_adaptiveLinearBlending_luma;
	id<MTLComputePipelineState> _kernel_adaptiveLinearBlending_chroma;

}
-(void)dealloc;
-(void)releaseResources;
-(int)compileShaders;
-(id)initWithMetalContext:(id)arg1 gpuUtilities:(id)arg2 ;
-(int)blendImages:(SCD_Struct_Fi44)arg1 inputImageNarrowLuma:(id)arg2 inputImageNarrowChroma:(id)arg3 inputImageWideLuma:(id)arg4 inputImageWideChroma:(id)arg5 outputImageLuma:(id)arg6 outputImageChroma:(id)arg7 ;
-(float)computeTransitionPx:(SCD_Struct_Fi44)arg1 inputDistance:(float)arg2 ;
@end

