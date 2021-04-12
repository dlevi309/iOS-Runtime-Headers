/*
* Generated on Monday, March 1, 2021 at 2:36:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/VideoProcessors/SDOFRenderingV4.bundle/SDOFRenderingV4
*/


@protocol MTLComputePipelineState, MTLBuffer;
#import <SDOFRenderingV4/SDOFRenderingV4-Structs.h>
@class FigMetalContext;

@interface SparseRenderer : NSObject {

	FigMetalContext* _mtlCtx;
	id<MTLComputePipelineState> _precalcLUTs_kernel;
	id<MTLComputePipelineState> _preprocess_kernel;
	id<MTLComputePipelineState> _xhlrbScan_kernel;
	id<MTLComputePipelineState> _xhlrbDiffuse_kernel;
	id<MTLComputePipelineState> _xhlrbCopyBack_kernel;
	id<MTLComputePipelineState> _sparsePreFilteringX_kernel;
	id<MTLComputePipelineState> _sparsePreFilteringY_kernel;
	id<MTLComputePipelineState> _sparseSampling_kernel_withAlpha;
	id<MTLComputePipelineState> _sparseSampling_kernel_noAlpha;
	id<MTLComputePipelineState> _sparseSampling_opt2x_kernel_withAlpha;
	id<MTLComputePipelineState> _sparseSampling_opt2x_kernel_noAlpha;
	id<MTLComputePipelineState> _sparseAntiAliasingX_kernel;
	id<MTLComputePipelineState> _sparseAntiAliasingY_kernel;
	id<MTLComputePipelineState> _sparseYUVOutput1_kernel;
	id<MTLComputePipelineState> _sparseYUVOutput2_kernel;
	id<MTLBuffer> _sparseSampling_stepsLUT;
	id<MTLBuffer> _sparseSampling_baseVecsLUT;
	BOOL _shadersLoaded;
	BOOL _segmentsLUTValid;
	rendering_config_params _config_params;

}
-(void)dealloc;
-(id)initWithMetalContext:(id)arg1 ;
-(int)setOptions:(const rendering_config_params*)arg1 isPrewarm:(BOOL)arg2 ;
-(int)enqueueRenderingUsingResources:(id)arg1 threadgroupSizes:(const threadgroup_sizes_config*)arg2 renderingConfig:(const rendering_config_params*)arg3 inputBlurMap:(id)arg4 inputAlpha:(id)arg5 inputLuma:(id)arg6 inputChroma:(id)arg7 outputLuma:(id)arg8 outputChroma:(id)arg9 ;
-(int)loadShaders;
-(void)constAddFp16asUInt16:(id)arg1 name:(id)arg2 value:(float)arg3 ;
-(void)constAddInt16:(id)arg1 name:(id)arg2 value:(int)arg3 ;
-(void)constAddFp32asUInt32:(id)arg1 name:(id)arg2 value:(float)arg3 ;
-(void)constAddUint16:(id)arg1 name:(id)arg2 value:(unsigned)arg3 ;
-(int)validateInputsWithResources:(id)arg1 threadgroupSizes:(const threadgroup_sizes_config*)arg2 inputBlurMap:(id)arg3 inputAlpha:(id)arg4 inputLuma:(id)arg5 inputChroma:(id)arg6 outputLuma:(id)arg7 outputChroma:(id)arg8 ;
-(rendering_dynamic_params)computeDynamicParams;
-(int)enqueuePreProcessingUsingResources:(id)arg1 threadgroupSizes:(const threadgroup_sizes_config*)arg2 blurMap:(id)arg3 luma:(id)arg4 chroma:(id)arg5 ;
-(int)enqueueHighlightRecoveryUsingResources:(id)arg1 dynamicParams:(const rendering_dynamic_params*)arg2 ;
-(int)enqueuePreFilteringUsingResources:(id)arg1 dynamicParams:(const rendering_dynamic_params*)arg2 threadgroupSizes:(const threadgroup_sizes_config*)arg3 ;
-(int)enqueueRenderingUsingResources:(id)arg1 dynamicParams:(const rendering_dynamic_params*)arg2 threadgroupSizes:(const threadgroup_sizes_config*)arg3 inputAlpha:(id)arg4 ;
-(int)enqueueAntiAliasingUsingResources:(id)arg1 dynamicParams:(const rendering_dynamic_params*)arg2 threadgroupSizes:(const threadgroup_sizes_config*)arg3 ;
-(int)enqueueOutputGenerationUsingResources:(id)arg1 threadgroupSizes:(const threadgroup_sizes_config*)arg2 inputAlpha:(id)arg3 inputLuma:(id)arg4 inputChroma:(id)arg5 outputLuma:(id)arg6 outputChroma:(id)arg7 ;
-(void)constAddFp16:(id)arg1 name:(id)arg2 value:(float)arg3 ;
-(void)constAddFp32:(id)arg1 name:(id)arg2 value:(float)arg3 ;
-(void)constAddInt32:(id)arg1 name:(id)arg2 value:(int)arg3 ;
@end

