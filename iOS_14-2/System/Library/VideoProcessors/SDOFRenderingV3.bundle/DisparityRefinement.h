/*
* Generated on Thursday, January 14, 2021 at 2:29:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/VideoProcessors/SDOFRenderingV3.bundle/SDOFRenderingV3
*/


@protocol MTLComputePipelineState;
#import <SDOFRenderingV3/SDOFRenderingV3-Structs.h>
@class FigMetalContext;

@interface DisparityRefinement : NSObject {

	FigMetalContext* _mtlCtx;
	BOOL _shadersLoaded;
	id<MTLComputePipelineState> _calcWeightsX_kernel;
	id<MTLComputePipelineState> _calcWeightsY_kernel;
	id<MTLComputePipelineState> _preprocessing_kernel;
	id<MTLComputePipelineState> _sample_kernel;
	id<MTLComputePipelineState> _antialias_kernel;
	id<MTLComputePipelineState> _passthrough_kernel;
	disparity_refinement_params _config_params;

}
-(id)initWithMetalContext:(id)arg1 ;
-(void)dealloc;
-(int)setOptions:(const disparity_refinement_params*)arg1 isPrewarm:(BOOL)arg2 ;
-(int)enqueueRefinementUsingResources:(id)arg1 threadgroupSizes:(const threadgroup_sizes_config*)arg2 disparityRefinementParams:(const disparity_refinement_params*)arg3 inputDisparity:(id)arg4 inputSegmentation:(id)arg5 inputImageLuma:(id)arg6 inputImageChroma:(id)arg7 inputSlmParams:(id)arg8 outputBlurMap:(id)arg9 ;
-(int)loadShaders;
-(void)constAddFp16asUInt16:(id)arg1 name:(id)arg2 value:(float)arg3 ;
-(void)constAddUint16:(id)arg1 name:(id)arg2 value:(unsigned short)arg3 ;
-(void)constAddFp16:(id)arg1 name:(id)arg2 value:(float)arg3 ;
-(void)constAddFp16x4asUInt16x4:(id)arg1 name:(id)arg2 value:(const float*)arg3 ;
-(int)validateInputsWithResources:(id)arg1 threadgroupSizes:(const threadgroup_sizes_config*)arg2 inputDisparity:(id)arg3 inputSegmentation:(id)arg4 inputImageLuma:(id)arg5 inputImageChroma:(id)arg6 inputSlmParams:(id)arg7 outputBlurMap:(id)arg8 ;
-(int)enqueuePassthroughWithThreadgroupSizes:(const threadgroup_sizes_config*)arg1 inputDisparity:(id)arg2 inputSlmParams:(id)arg3 outputBlurMap:(id)arg4 ;
-(int)enqueueWeightsCalcWithResources:(id)arg1 threadgroupSizes:(const threadgroup_sizes_config*)arg2 inputDisparity:(id)arg3 ;
-(int)enqueuePreprocessingWithResources:(id)arg1 threadgroupSizes:(const threadgroup_sizes_config*)arg2 inputSegmentation:(id)arg3 inputImageLuma:(id)arg4 inputImageChroma:(id)arg5 ;
-(int)enqueueSamplingWithResources:(id)arg1 threadgroupSizes:(const threadgroup_sizes_config*)arg2 ;
-(int)enqueueAntiAliasingWithResources:(id)arg1 threadgroupSizes:(const threadgroup_sizes_config*)arg2 inputSlmParams:(id)arg3 outputBlurMap:(id)arg4 ;
-(void)constAddFp16x4:(id)arg1 name:(id)arg2 value:(const float*)arg3 ;
@end

