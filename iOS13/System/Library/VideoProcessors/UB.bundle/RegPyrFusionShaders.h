/*
* Generated on Monday, March 1, 2021 at 2:36:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/VideoProcessors/UB.bundle/UB
*/


@protocol MTLRenderPipelineState, MTLComputePipelineState;
@interface RegPyrFusionShaders : NSObject {

	id<MTLRenderPipelineState> _initialDownScalePipelineState;
	id<MTLRenderPipelineState> _bilinearScalePipelineState;
	id<MTLComputePipelineState> _derivPipelineState;
	id<MTLRenderPipelineState> _derivSobelPipelineState;
	id<MTLRenderPipelineState> _basicSearchLumaPipelineState;
	id<MTLRenderPipelineState> _fusionXLumaPipelineState;
	id<MTLRenderPipelineState> _fusionYLumaPipelineState;
	id<MTLRenderPipelineState> _smoothPipelineState;
	id<MTLRenderPipelineState> _selectionLumaPipelineState;
	id<MTLRenderPipelineState> _confidenceStageOne;
	id<MTLRenderPipelineState> _confidenceErode;
	id<MTLRenderPipelineState> _confidenceDilate;

}
-(id)initWithMetal:(id)arg1 ;
-(id)createPipelineStateWithMetal:(id)arg1 vFunction:(id)arg2 fShaderName:(id)arg3 outputColorMetalFormat:(id)arg4 ;
@end

