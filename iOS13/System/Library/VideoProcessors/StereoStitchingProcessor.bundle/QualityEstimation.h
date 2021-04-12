/*
* Generated on Monday, March 1, 2021 at 2:36:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/VideoProcessors/StereoStitchingProcessor.bundle/StereoStitchingProcessor
*/


@protocol MTLBuffer, MTLComputePipelineState;
#import <StereoStitchingProcessor/StereoStitchingProcessor-Structs.h>
@class FigMetalContext, StereoStitchingGpuUtilities;

@interface QualityEstimation : NSObject {

	FigMetalContext* _metalContext;
	StereoStitchingGpuUtilities* _gpuUtilities;
	id<MTLBuffer> _sharedMetalBuffer;
	unsigned long long _sharedMetalBufferOffset;
	id<MTLComputePipelineState> _kernel_initPerPixelScore;
	id<MTLComputePipelineState> _kernel_computeFlowBasedGatingInfo;
	id<MTLComputePipelineState> _kernel_computeValidScorePercent;
	id<MTLComputePipelineState> _kernelHistogramBounds;
	id<MTLComputePipelineState> _kernel_finalizeData;
	id<MTLComputePipelineState> _kernel_downscalePerPixelScore;

}
-(void)dealloc;
-(void)releaseResources;
-(int)compileShaders;
-(id)initWithMetalContext:(id)arg1 gpuUtilities:(id)arg2 ;
-(int)computeFocusDistanceGatingFlag:(SCD_Struct_Qu40)arg1 metadataDict:(id)arg2 resultingGatingFlag:(BOOL*)arg3 ;
-(int)computeFlashGatingFlag:(id)arg1 resultingGatingFlag:(BOOL*)arg2 ;
-(int)computeEffectiveIntegrationTime:(id)arg1 effectiveIntegrationTime:(float*)arg2 ;
-(int)setSharedMetalBuffer:(id)arg1 bufferOffset:(unsigned long long)arg2 ;
-(int)setMaximumsAndComputeSizeOfSharedMetalBuffer:(unsigned)arg1 shiftMapHeight:(unsigned)arg2 tuningParameters:(SCD_Struct_Qu41)arg3 sharedMetalBufferSize:(unsigned long long*)arg4 ;
-(int)computeFlowBasedMapAndGatingFlag:(SCD_Struct_Qu42)arg1 tuningParameters:(SCD_Struct_Qu41)arg2 shiftmapTexture:(id)arg3 jbfConfidenceMap:(id)arg4 regpyrConfidenceMap:(id)arg5 narrowLuma:(id)arg6 stitchingConfidenceMapOffset:(unsigned long long)arg7 flowGatingCodeAndScoreOffset:(unsigned long long)arg8 ;
@end

