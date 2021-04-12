/*
* Generated on Monday, March 1, 2021 at 2:36:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/VideoProcessors/DisparityV4.bundle/DisparityV4
*/


@protocol MTLCommandQueue, MTLComputePipelineState, MTLTexture;
#import <DisparityV4/DisparityV4-Structs.h>
@class FigMetalContext, TVL1_v4, HBFGPU, NSArray, PyrGPU;

@interface StereoDisparityEstimator : NSObject {

	FigMetalContext* _mtlContext;
	id<MTLCommandQueue> _commandQueue;
	id<MTLComputePipelineState> _computePipelines[2];
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
	TVL1_v4* _tvl1Instance;
	HBFGPU* _hbfgpuInstance;
	BOOL _isValid;
	NSArray* _allLevelParameters;
	PyrGPU* _pyr_ref;
	PyrGPU* _pyr_tgt;
	CGSize _outputDisparityResolution;

}

@property (nonatomic,readonly) BOOL isValid;                                  //@synthesize isValid=_isValid - In the implementation block
@property (nonatomic,readonly) CGSize outputDisparityResolution;              //@synthesize outputDisparityResolution=_outputDisparityResolution - In the implementation block
@property (nonatomic,retain) NSArray * allLevelParameters;                    //@synthesize allLevelParameters=_allLevelParameters - In the implementation block
@property (nonatomic,readonly) PyrGPU * pyr_ref;                              //@synthesize pyr_ref=_pyr_ref - In the implementation block
@property (nonatomic,readonly) PyrGPU * pyr_tgt;                              //@synthesize pyr_tgt=_pyr_tgt - In the implementation block
-(void)dealloc;
-(BOOL)isValid;
-(void)reset;
-(int)_setupBuffer;
-(void)waitUntilCompleted;
-(void)releaseResources;
-(int)_setupPipelines;
-(id)initWithMetalContext:(id)arg1 ;
-(int)_initSubModules;
-(int)_setupPyramidsWithScalingFactor:(float)arg1 nScales:(int)arg2 ;
-(int)_setupTexture;
-(int)_setupTVL1Instance;
-(int)_createPyramidsForReference:(id)arg1 andTarget:(id)arg2 ;
-(CGSize)_integerTargetDimensionsFromReferenceWidth:(int)arg1 height:(int)arg2 ;
-(int)_doChannelMixingWithCommandBuffer:(id)arg1 fromTexture:(id)arg2 toTexture:(id)arg3 level:(int)arg4 a:(SCD_Struct_St15)arg5 ;
-(int)allocateResourcesWithConfiguration:(const SCD_Struct_St16*)arg1 ;
-(int)setOutputDisparity:(CVBufferRef)arg1 ;
-(CGSize)outputDisparityResolution;
-(NSArray *)allLevelParameters;
-(void)setAllLevelParameters:(NSArray *)arg1 ;
-(PyrGPU *)pyr_ref;
-(PyrGPU *)pyr_tgt;
-(int)_computeDisparityFromResolution:(CGSize)arg1 init_disparity_value:(float)arg2 box_cstr_range:(float)arg3 ;
-(int)_doCostWithCommandBuffer:(id)arg1 in_I0_tex:(id)arg2 in_I1_tex:(id)arg3 in_uv_tex:(id)arg4 out_res_tex:(id)arg5 out_hes_tex:(id)arg6 disparity_vector:(int)arg7 ;
-(int)_doPostProcessingWithCommandBuffer:(id)arg1 in_ref_u32_tex:(id)arg2 in_tgt_tex:(id)arg3 in_uv_tex:(id)arg4 out_uv_tex:(id)arg5 disparity_vector:(float)arg6 disparity_scaling_factor:(int)arg7 ;
-(int)estimateDisparityFromReference:(id)arg1 target:(id)arg2 init_disparity_value:(float)arg3 box_cstr_range:(float)arg4 ;
@end

