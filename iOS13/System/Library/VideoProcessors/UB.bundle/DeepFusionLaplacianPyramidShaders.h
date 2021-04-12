/*
* Generated on Monday, March 1, 2021 at 2:36:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/VideoProcessors/UB.bundle/UB
*/


@protocol MTLComputePipelineState;
@interface DeepFusionLaplacianPyramidShaders : NSObject {

	id<MTLComputePipelineState> _krnGaussianPyramid5x5;
	id<MTLComputePipelineState> _krnLaplacianPyramidSubtractionPass;

}
-(id)initWithMetal:(id)arg1 ;
@end

