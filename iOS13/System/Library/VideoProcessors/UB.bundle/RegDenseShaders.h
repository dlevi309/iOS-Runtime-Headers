/*
* Generated on Monday, March 1, 2021 at 2:36:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/VideoProcessors/UB.bundle/UB
*/


@protocol MTLRenderPipelineState, MTLComputePipelineState;
@interface RegDenseShaders : NSObject {

	id<MTLRenderPipelineState> _confPipeline;
	id<MTLComputePipelineState> _warpPipeline;
	id<MTLComputePipelineState> _warpWithConfidencePipeline;
	id<MTLComputePipelineState> _warpWithBlendingWeightPipeline;
	id<MTLComputePipelineState> _warpAdditionalFrameWithBlendingWeightPipeline;
	id<MTLComputePipelineState> _getBlendingWeightPipeline;
	id<MTLComputePipelineState> _getBlendingWeightLowLightPipeline;

}
-(id)initWithMetal:(id)arg1 ;
@end

