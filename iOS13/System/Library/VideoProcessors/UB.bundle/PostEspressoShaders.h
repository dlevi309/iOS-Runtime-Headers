/*
* Generated on Monday, March 1, 2021 at 2:36:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/VideoProcessors/UB.bundle/UB
*/


@protocol MTLComputePipelineState;
@interface PostEspressoShaders : NSObject {

	id<MTLComputePipelineState> _kernelCollapseWeightsOnTileStage1;
	id<MTLComputePipelineState> _kernelCollapseWeightsOnTileStage2;
	id<MTLComputePipelineState> _kernelCollapseWeightsOnTileStage1And2Combined;
	id<MTLComputePipelineState> _kernelApplyEspressoOutput;
	id<MTLComputePipelineState> _kernelAddPreviousLevel;
	id<MTLComputePipelineState> _kernelDeghostAndDenoise;
	id<MTLComputePipelineState> _kernelConvert444to420;
	id<MTLComputePipelineState> _kernelApplyDesaturationToChroma;
	id<MTLComputePipelineState> _kernelComputeTextureness;
	id<MTLComputePipelineState> _kernelComputeDenoiseBoostMap;

}
-(id)initWithMetal:(id)arg1 ;
@end

