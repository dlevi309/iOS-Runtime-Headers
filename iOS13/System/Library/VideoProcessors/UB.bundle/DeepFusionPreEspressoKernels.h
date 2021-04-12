/*
* Generated on Monday, March 1, 2021 at 2:36:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/VideoProcessors/UB.bundle/UB
*/


@protocol MTLComputePipelineState;
@interface DeepFusionPreEspressoKernels : NSObject {

	id<MTLComputePipelineState> _estimateNoiseSynthRef;
	id<MTLComputePipelineState> _estimateNoiseSynthLongPlusLong;
	id<MTLComputePipelineState> _estimateNoiseSynthLong;
	id<MTLComputePipelineState> _applyAllTuningToNoise;
	id<MTLComputePipelineState> _kernelQuantizeMap;
	id<MTLComputePipelineState> _kernelDownsampleAndQuantizeMap;
	id<MTLComputePipelineState> _yuvCopyAndBias;

}
-(id)initWithMetal:(id)arg1 ;
@end

