/*
* Generated on Monday, March 1, 2021 at 2:36:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/VideoProcessors/SDOFRenderingV4.bundle/SDOFRenderingV4
*/


@protocol MTLComputePipelineState, MTLBuffer;
#import <SDOFRenderingV4/SDOFRenderingV4-Structs.h>
@class FigMetalContext, MPSImageGaussianBlur;

@interface BlurMapRefinement : NSObject {

	FigMetalContext* _mtlCtx;
	id<MTLComputePipelineState> _calc_kernel;
	id<MTLComputePipelineState> _eye_protection_face_kernel;
	id<MTLComputePipelineState> _modify_blurmap_kernel;
	id<MTLComputePipelineState> _threshold_hard_kernel;
	id<MTLComputePipelineState> _map_linear_kernel;
	id<MTLComputePipelineState> _map_linear_no_secondary_tex_kernel;
	MPSImageGaussianBlur* _hairMaskBlur;
	MPSImageGaussianBlur* _personMaskBlur;
	id<MTLBuffer> _mappingParams_buf;
	id<MTLBuffer> _eye_protection_faces_buf;
	BOOL _isShaderHarvesting;

}

@property (assign,nonatomic) BOOL isShaderHarvesting;              //@synthesize isShaderHarvesting=_isShaderHarvesting - In the implementation block
-(void)dealloc;
-(void)deallocateResources;
-(id)initWithMetalContext:(id)arg1 ;
-(int)setOptions:(const blurmap_refinement_params*)arg1 isPrewarm:(BOOL)arg2 ;
-(int)allocateResourcesForBlurMapWidth:(unsigned long long)arg1 blurMapHeight:(unsigned long long)arg2 ;
-(int)enqueueFMCalcWithInputBlurMap:(id)arg1 maskParams:(const face_mask_params*)arg2 ;
-(int)validateInputsWithResources:(id)arg1 threadgroupSizes:(const threadgroup_sizes_config*)arg2 refinementParams:(const blurmap_refinement_params*)arg3 inputBlurMap:(id)arg4 inputAlpha:(id)arg5 inputHair:(id)arg6 outputBlurMap:(id)arg7 ;
-(int)enqueueBoundaryMaskPassWithThreadgroupSizes:(const threadgroup_sizes_config*)arg1 inputTex:(id)arg2 inputSecondaryTex:(id)arg3 intermediateTex:(id)arg4 thresholdValue:(float)arg5 boundaryScalingFactor:(float)arg6 outputTex:(id)arg7 gaussianBlur:(id)arg8 passName:(id)arg9 ;
-(int)enqueueEyeProtectionMaskCalcWithInputBlurMap:(id)arg1 faceParams:(const face_mask_params*)arg2 tuningParams:(const blurmap_refinement_params*)arg3 ;
-(int)enqueueFinalRefinementPassWithThreadgroupSizes:(const threadgroup_sizes_config*)arg1 refinementParams:(const blurmap_refinement_params*)arg2 inputBlurmapTex:(id)arg3 inputPersonTex:(id)arg4 inputHairTex:(id)arg5 inputPersonDeltaTex:(id)arg6 inputHairDeltaTex:(id)arg7 outputTex:(id)arg8 ;
-(int)enqueueRefinementUsingResources:(id)arg1 threadgroupSizes:(const threadgroup_sizes_config*)arg2 refinementParams:(const blurmap_refinement_params*)arg3 maskParams:(const face_mask_params*)arg4 inputBlurMap:(id)arg5 inputAlpha:(id)arg6 inputHair:(id)arg7 outputBlurMap:(id)arg8 ;
-(BOOL)isShaderHarvesting;
-(void)setIsShaderHarvesting:(BOOL)arg1 ;
@end

