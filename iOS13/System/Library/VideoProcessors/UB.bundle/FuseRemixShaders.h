/*
* Generated on Monday, March 1, 2021 at 2:36:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/VideoProcessors/UB.bundle/UB
*/


@protocol MTLComputePipelineState;
@class FuseRemixFragmentShader;

@interface FuseRemixShaders : NSObject {

	FuseRemixFragmentShader* shaders[64];
	id<MTLComputePipelineState> accWeightDownsample;
	id<MTLComputePipelineState> stationaryFusionInitial;
	id<MTLComputePipelineState> stationaryFusionSubsequent;
	id<MTLComputePipelineState> stationaryAccWeightDownsampleInitial;
	id<MTLComputePipelineState> stationaryAccWeightDownsampleSubsequent;
	id<MTLComputePipelineState> stationaryAccWeightCalcAB;
	id<MTLComputePipelineState> stationaryAccWeightFilterAB;

}
+(unsigned)getIdxForOptionsWithIsLuma:(BOOL)arg1 isTopBand:(BOOL)arg2 isBand0:(BOOL)arg3 isFirstBatch:(BOOL)arg4 isLastBatch:(BOOL)arg5 usePatchBasedFusion:(BOOL)arg6 ;
+(id)getShaderNameWithIsLuma:(BOOL)arg1 isTopBand:(BOOL)arg2 ;
-(id)getFragmentShaderWithIsLuma:(BOOL)arg1 isTopBand:(BOOL)arg2 isBand0:(BOOL)arg3 isFirstBatch:(BOOL)arg4 isLastBatch:(BOOL)arg5 usePatchBasedFusion:(BOOL)arg6 ;
-(id)initWithMetal:(id)arg1 pixelFormatLuma:(unsigned long long)arg2 pixelFormatChroma:(unsigned long long)arg3 ;
@end

