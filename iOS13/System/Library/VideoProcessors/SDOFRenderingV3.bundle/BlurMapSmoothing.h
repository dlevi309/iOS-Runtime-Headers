/*
* Generated on Monday, March 1, 2021 at 2:36:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/VideoProcessors/SDOFRenderingV3.bundle/SDOFRenderingV3
*/


@protocol MTLComputePipelineState;
#import <SDOFRenderingV3/SDOFRenderingV3-Structs.h>
@class FigMetalContext;

@interface BlurMapSmoothing : NSObject {

	FigMetalContext* _mtlCtx;
	id<MTLComputePipelineState> _smoothing_x_kernel;
	id<MTLComputePipelineState> _smoothing_y_kernel;

}
-(void)dealloc;
-(id)initWithMetalContext:(id)arg1 ;
-(int)enqueueSmoothingUsingResources:(id)arg1 threadgroupSizes:(const threadgroup_sizes_config*)arg2 smoothingParams:(const blurmap_smoothing_params*)arg3 inputBlurMap:(id)arg4 outputBlurMap:(id)arg5 ;
-(int)validateInputsWithResources:(id)arg1 threadgroupSizes:(const threadgroup_sizes_config*)arg2 smoothingParams:(const blurmap_smoothing_params*)arg3 InputBlurMap:(id)arg4 outputBlurMap:(id)arg5 ;
-(int)enqueueSmoothingPassWithThreadgroupSizes:(const threadgroup_sizes_config*)arg1 smoothingParams:(const blurmap_smoothing_params*)arg2 inputBlurMap:(id)arg3 referenceBlurMap:(id)arg4 intermediateTex:(id)arg5 outputBlurMap:(id)arg6 iterationIndex:(int)arg7 ;
@end

