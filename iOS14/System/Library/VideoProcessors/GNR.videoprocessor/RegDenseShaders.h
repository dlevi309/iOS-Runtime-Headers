/*
* Generated on Thursday, January 14, 2021 at 2:29:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/VideoProcessors/GNR.videoprocessor
*/


@protocol MTLRenderPipelineState, MTLComputePipelineState;
@interface RegDenseShaders : NSObject {

	id<MTLRenderPipelineState> _confPipeline;
	id<MTLComputePipelineState> _warpPipeline;
	id<MTLComputePipelineState> _warpWithConfidencePipeline;
	id<MTLComputePipelineState> _warpWithBlendingWeightPipeline;
	id<MTLComputePipelineState> _getBlendingWeightPipeline;

}
-(id)initWithMetal:(id)arg1 ;
@end

