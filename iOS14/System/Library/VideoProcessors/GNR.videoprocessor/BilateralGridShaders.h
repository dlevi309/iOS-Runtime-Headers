/*
* Generated on Thursday, January 14, 2021 at 2:29:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/VideoProcessors/GNR.videoprocessor
*/


@protocol MTLComputePipelineState, MTLRenderPipelineState;
@interface BilateralGridShaders : NSObject {

	id<MTLComputePipelineState> _bgSplat[2];
	id<MTLComputePipelineState> _bgBlur[3];
	id<MTLComputePipelineState> _bgNormalize;
	id<MTLRenderPipelineState> _bgUpsample8;
	id<MTLRenderPipelineState> _bgUpsample16;
	id<MTLRenderPipelineState> _bgUpsample16ToneMapped;
	id<MTLComputePipelineState> _bgBistochastizeInit;
	id<MTLComputePipelineState> _bgBistochastizeIter;
	id<MTLComputePipelineState> _bgBistochastizeFinal;
	id<MTLComputePipelineState> _bgSolverInit1;
	id<MTLComputePipelineState> _bgSolverInit2;
	id<MTLComputePipelineState> _bgSolverPcgIter0;
	id<MTLComputePipelineState> _bgSolverPcgIter1;
	id<MTLComputePipelineState> _bgSolverPcgIter2;
	id<MTLComputePipelineState> _bgSolverPcgIter3;

}
-(id)createBasicComputeShader:(const char*)arg1 metal:(id)arg2 ;
-(id)initWithMetal:(id)arg1 normalizeGridConfidence:(BOOL)arg2 ;
@end

