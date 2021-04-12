/*
* Generated on Monday, March 1, 2021 at 2:36:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/VideoProcessors/SDOFRenderingV3.bundle/SDOFRenderingV3
*/


@protocol MTLComputePipelineState;
#import <SDOFRenderingV3/SDOFRenderingV3-Structs.h>
@class FigMetalContext;

@interface SegmentationFusion : NSObject {

	FigMetalContext* _mtlCtx;
	id<MTLComputePipelineState> _apply_kernel;

}
-(void)dealloc;
-(id)initWithMetalContent:(id)arg1 ;
-(int)enqueueFusionWithThreadgroupSizes:(const threadgroup_sizes_config*)arg1 segmentationFusionParams:(const segmentation_fusion_params*)arg2 inputBlurMap:(id)arg3 inputSegmentationMask:(id)arg4 outputBlurMap:(id)arg5 ;
-(int)validateInputsWithThreadgroupSizes:(const threadgroup_sizes_config*)arg1 inputBlurMap:(id)arg2 inputSegmentationMask:(id)arg3 outputBlurMap:(id)arg4 ;
-(int)enqueuePassthroughWithInputBlurMap:(id)arg1 outputBlurMap:(id)arg2 ;
-(segmentation_fusion_shader_params)calcShaderParamsFromConfigParams:(const segmentation_fusion_params*)arg1 ;
-(int)enqueueApplyWithThreadgroupSizes:(const threadgroup_sizes_config*)arg1 inputParams:(segmentation_fusion_shader_params*)arg2 inputBlurMap:(id)arg3 inputSegmentationMask:(id)arg4 outputBlurMap:(id)arg5 ;
@end

