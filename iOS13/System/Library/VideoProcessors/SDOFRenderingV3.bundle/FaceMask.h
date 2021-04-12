/*
* Generated on Monday, March 1, 2021 at 2:36:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/VideoProcessors/SDOFRenderingV3.bundle/SDOFRenderingV3
*/


@protocol MTLComputePipelineState, MTLBuffer;
#import <SDOFRenderingV3/SDOFRenderingV3-Structs.h>
@class FigMetalContext;

@interface FaceMask : NSObject {

	FigMetalContext* _mtlCtx;
	id<MTLComputePipelineState> _calc_kernel;
	id<MTLComputePipelineState> _apply_kernel;
	id<MTLBuffer> _mappingParams_buf;

}
-(void)dealloc;
-(void)deallocateResources;
-(id)initWithMetalContent:(id)arg1 ;
-(int)allocateResourcesForBlurMapWidth:(unsigned long long)arg1 blurMapHeight:(unsigned long long)arg2 ;
-(int)enqueueWithThreadgroupSizes:(const threadgroup_sizes_config*)arg1 maskParams:(const face_mask_params*)arg2 inputBlurMap:(id)arg3 outputBlurMap:(id)arg4 ;
-(int)enqueueFMCalcWithInputBlurMap:(id)arg1 maskParams:(const face_mask_params*)arg2 ;
-(int)enqueueFMApplyWithThreadgroupSizes:(const threadgroup_sizes_config*)arg1 inputBlurMap:(id)arg2 outputBlurMap:(id)arg3 ;
@end

