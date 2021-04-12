/*
* Generated on Monday, March 1, 2021 at 2:36:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/VideoProcessors/UB.bundle/UB
*/


@protocol MTLComputePipelineState;
@interface MotionDetectionShaders : NSObject {

	id<MTLComputePipelineState> _motionDetectGenClippingMapAndDownscale;
	id<MTLComputePipelineState> _motionDetectGenClippingMapAndDownscaleLinear;
	id<MTLComputePipelineState> _motionDetectGradient;
	id<MTLComputePipelineState> _motionDetectWarp;
	id<MTLComputePipelineState> _motionDetectDilate;
	id<MTLComputePipelineState> _motionDetectDiffGradient;
	id<MTLComputePipelineState> _motionDetectMaxTileAvg;
	id<MTLComputePipelineState> _motionDetectLLDownscale;
	id<MTLComputePipelineState> _motionDetectLL;

}
-(id)initWithMetal:(id)arg1 ;
@end

