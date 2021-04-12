/*
* Generated on Monday, March 1, 2021 at 2:36:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/VideoProcessors/SDOFRenderingV4.bundle/SDOFRenderingV4
*/


@protocol MTLComputePipelineState, MTLBuffer;
#import <SDOFRenderingV4/SDOFRenderingV4-Structs.h>
@class FigMetalContext;

@interface SimpleLensModel : NSObject {

	FigMetalContext* _mtlCtx;
	id<MTLComputePipelineState> _minMax0_kernel;
	id<MTLComputePipelineState> _minMax1_kernel;
	id<MTLComputePipelineState> _minMax2_kernel;
	id<MTLComputePipelineState> _calc_kernel;
	id<MTLBuffer> _minMaxAtomic_buf;
	id<MTLBuffer> _minMaxResult_buf;

}
-(void)dealloc;
-(void)deallocateResources;
-(id)initWithMetalContext:(id)arg1 ;
-(int)enqueueMinMaxWithThreadgroupSizes:(const threadgroup_sizes_config*)arg1 inputShiftMapTex:(id)arg2 ;
-(int)enqueueSlmCalcWithInputShiftMap:(id)arg1 slmParams:(id)arg2 simpleLensParams:(const simple_lens_model_params*)arg3 ;
-(int)allocateResourcesForShiftMapWidth:(unsigned long long)arg1 shiftMapHeight:(unsigned long long)arg2 ;
-(int)enqueueCalcWithThreadgroupSizes:(const threadgroup_sizes_config*)arg1 simpleLensParams:(const simple_lens_model_params*)arg2 inputShiftMap:(id)arg3 outputSlmParams:(id)arg4 ;
@end

