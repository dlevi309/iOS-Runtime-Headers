/*
* Generated on Thursday, January 14, 2021 at 2:29:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/VideoProcessors/SDOFRenderingV3.bundle/SDOFRenderingV3
*/


@protocol MTLComputePipelineState, MTLBuffer;
#import <SDOFRenderingV3/SDOFRenderingV3-Structs.h>
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
-(void)deallocateResources;
-(id)initWithMetalContext:(id)arg1 ;
-(void)dealloc;
-(int)enqueueMinMaxWithThreadgroupSizes:(const threadgroup_sizes_config*)arg1 inputShiftMapTex:(id)arg2 ;
-(int)enqueueSlmCalcWithInputShiftMap:(id)arg1 slmParams:(id)arg2 simpleLensParams:(const simple_lens_model_params*)arg3 ;
-(int)allocateResourcesForShiftMapWidth:(unsigned long long)arg1 shiftMapHeight:(unsigned long long)arg2 ;
-(int)enqueueCalcWithThreadgroupSizes:(const threadgroup_sizes_config*)arg1 simpleLensParams:(const simple_lens_model_params*)arg2 inputShiftMap:(id)arg3 outputSlmParams:(id)arg4 ;
@end

