/*
* Generated on Monday, March 1, 2021 at 2:36:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/VideoProcessors/DisparityV4.bundle/DisparityV4
*/


@protocol MTLCommandQueue, MTLComputePipelineState, MTLBuffer;
@class FigMetalContext, HBFGPUParameters;

@interface HBFGPU : NSObject {

	FigMetalContext* _mtlContext;
	id<MTLCommandQueue> _commandQueue;
	id<MTLComputePipelineState> _computePipelines[5];
	unsigned long long _maxThreadExecutionWidth;
	id<MTLBuffer> _res_off_buf;
	HBFGPUParameters* _params;

}

@property (assign,nonatomic) HBFGPUParameters * params;              //@synthesize params=_params - In the implementation block
-(void)dealloc;
-(void)waitUntilCompleted;
-(HBFGPUParameters *)params;
-(void)setParams:(HBFGPUParameters *)arg1 ;
-(void)_setupPipelines;
-(id)initWithMetalContext:(id)arg1 ;
-(void)releaseResouces;
-(int)_doComputeResidualErrorOffsetWithCommandBuffer:(id)arg1 in_res_tex:(id)arg2 ;
-(int)_doBuildErrorMapWithCommandBuffer:(id)arg1 in_res_tex:(id)arg2 out_tex:(id)arg3 ;
-(int)doFilterWithCommandBuffer:(id)arg1 in_I_tex:(id)arg2 in_J_u32_tex:(id)arg3 in_W_tex:(id)arg4 out_tex:(id)arg5 disparity_scaling_factor:(float)arg6 ;
-(int)_doComputeResidualErrorWithCommandBuffer:(id)arg1 in_I0_u32_tex:(id)arg2 in_I1_tex:(id)arg3 in_uv_tex:(id)arg4 out_tex:(id)arg5 ;
-(int)_doOcclusionHandlingWithCommandBuffer:(id)arg1 in_uv_old_tex:(id)arg2 in_uv_new_tex:(id)arg3 in_I0_u32_tex:(id)arg4 in_I1_tex:(id)arg5 out_tex:(id)arg6 disparity_vector:(float)arg7 ;
-(int)doFilterWithCommandBuffer:(id)arg1 in_I0_u32_tex:(id)arg2 in_I1_tex:(id)arg3 in_uv_tex:(id)arg4 out_uv_tex:(id)arg5 tmp_res_tex:(id)arg6 tmp_err_tex:(id)arg7 tmp_uv0_tex:(id)arg8 tmp_uv1_tex:(id)arg9 needToComputeResidualOffset:(BOOL)arg10 disparity_vector:(float)arg11 ;
@end

