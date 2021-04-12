/*
* Generated on Thursday, January 14, 2021 at 2:29:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/VideoProcessors/DisparityV3.bundle/DisparityV3
*/


@protocol MTLCommandQueue, MTLComputePipelineState, MTLTexture;
#import <DisparityV3/DisparityV3-Structs.h>
@class FigMetalContext, TVL1_v3, HBFGPU, NSArray, PyrGPU;

@interface StereoDisparityEstimator : NSObject {

	FigMetalContext* _mtlContext;
	id<MTLCommandQueue> _commandQueue;
	id<MTLComputePipelineState> _computePipelines[3];
	CGSize _ref_input_res;
	CGSize _tgt_input_res;
	CGSize _ref_max_input_res;
	CGSize _tgt_max_input_res;
	CVBufferRef _ref_mixed_pxbuf;
	id<MTLTexture> _ref_mixed_tex[32];
	id<MTLTexture> _ref_mixed_u32_tex[32];
	CVBufferRef _tgt_mixed_pxbuf;
	CVBufferRef _res_pxbuf;
	id<MTLTexture> _res_tex[32];
	CVBufferRef _Hes_pxbuf;
	id<MTLTexture> _Hes_tex[32];
	id<MTLTexture> _uv_tex_user_ref;
	TVL1_v3* _tvl1Instance;
	HBFGPU* _hbfgpuInstance;
	BOOL _isValid;
	long long _outputFlowOrientation;
	NSArray* _allLevelParameters;
	PyrGPU* _pyr_ref;
	PyrGPU* _pyr_tgt;
	CGSize _outputDisparityResolution;

}

@property (nonatomic,readonly) BOOL isValid;                                  //@synthesize isValid=_isValid - In the implementation block
@property (nonatomic,readonly) CGSize outputDisparityResolution;              //@synthesize outputDisparityResolution=_outputDisparityResolution - In the implementation block
@property (assign,nonatomic) long long outputFlowOrientation;                 //@synthesize outputFlowOrientation=_outputFlowOrientation - In the implementation block
@property (nonatomic,retain) NSArray * allLevelParameters;                    //@synthesize allLevelParameters=_allLevelParameters - In the implementation block
@property (nonatomic,readonly) PyrGPU * pyr_ref;                              //@synthesize pyr_ref=_pyr_ref - In the implementation block
@property (nonatomic,readonly) PyrGPU * pyr_tgt;                              //@synthesize pyr_tgt=_pyr_tgt - In the implementation block
-(void)waitUntilCompleted;
-(int)_setupPipelines;
-(BOOL)isValid;
-(id)initWithMetalContext:(id)arg1 ;
-(int)_setupBuffer;
-(void)reset;
-(void)releaseResources;
-(void)dealloc;
-(int)_initSubModules;
-(int)_setupPyramidsWithScalingFactor:(float)arg1 nScales:(int)arg2 ;
-(int)_setupTexture;
-(int)_setupTVL1Instance;
-(int)_createPyramidsForReference:(id)arg1 andTarget:(id)arg2 ;
-(int)_computeDisparityFromResolution:(CGSize)arg1 init_disparity_value:(float)arg2 box_cstr_range:(float)arg3 ;
-(CGSize)_integerTargetDimensionsFromReferenceWidth:(int)arg1 height:(int)arg2 ;
-(int)_doChannelMixingWithCommandBuffer:(id)arg1 fromTexture:(id)arg2 toTexture:(id)arg3 level:(int)arg4 a:(SCD_Struct_St0)arg5 ;
-(int)_doCostWithCommandBuffer:(id)arg1 in_I0_u32_tex:(id)arg2 in_I1_tex:(id)arg3 in_uv_tex:(id)arg4 out_res_tex:(id)arg5 out_hes_tex:(id)arg6 level:(int)arg7 ;
-(int)_doPostProcessingWithCommandBuffer:(id)arg1 in_ref_u32_tex:(id)arg2 in_tgt_tex:(id)arg3 in_uv_tex:(id)arg4 out_uv_tex:(id)arg5 level:(int)arg6 disparity_scaling_factor:(float)arg7 ;
-(int)allocateResourcesWithConfiguration:(const SCD_Struct_St3*)arg1 ;
-(int)setOutputDisparity:(CVBufferRef)arg1 ;
-(int)estimateDisparityFromReference:(id)arg1 target:(id)arg2 init_disparity_value:(float)arg3 box_cstr_range:(float)arg4 ;
-(CGSize)outputDisparityResolution;
-(long long)outputFlowOrientation;
-(void)setOutputFlowOrientation:(long long)arg1 ;
-(NSArray *)allLevelParameters;
-(void)setAllLevelParameters:(NSArray *)arg1 ;
-(PyrGPU *)pyr_ref;
-(PyrGPU *)pyr_tgt;
@end

