/*
* Generated on Monday, March 1, 2021 at 2:36:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/VideoProcessors/UB.bundle/UB
*/


@protocol MTLComputePipelineState;
@interface ToneMappingShaders : NSObject {

	id<MTLComputePipelineState> _blackSubtractAndAddingContrast;
	id<MTLComputePipelineState> _calculateBlackWhiteStrengthCenter;
	id<MTLComputePipelineState> _ltmApply;
	id<MTLComputePipelineState> _ltmApplyBG;
	id<MTLComputePipelineState> _srlGlobalHistogram;
	id<MTLComputePipelineState> _srlFaceHistogram;
	id<MTLComputePipelineState> _srlCalcCoefficients;
	id<MTLComputePipelineState> _srlApply;
	id<MTLComputePipelineState> _mstmDownsampleInitial;
	id<MTLComputePipelineState> _mstmDownsampleSubsequent;
	id<MTLComputePipelineState> _mstmPyramidRemixIntermediate;
	id<MTLComputePipelineState> _mstmPyramidRemixFinal;
	id<MTLComputePipelineState> _mstmDiffusionOdd;
	id<MTLComputePipelineState> _mstmDiffusionEven;
	id<MTLComputePipelineState> _mstmsApply;

}
-(id)initWithMetal:(id)arg1 ;
@end

