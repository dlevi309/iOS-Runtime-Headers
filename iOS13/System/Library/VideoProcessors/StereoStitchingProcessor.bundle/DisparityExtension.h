/*
* Generated on Monday, March 1, 2021 at 2:36:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/VideoProcessors/StereoStitchingProcessor.bundle/StereoStitchingProcessor
*/


@protocol MTLTexture, MTLBuffer, MTLComputePipelineState;
#import <StereoStitchingProcessor/StereoStitchingProcessor-Structs.h>
@class FigMetalContext, CornerDetectionGPU, MPSImageConvolution, StereoStitchingGpuUtilities, ConfidenceTuning;

@interface DisparityExtension : NSObject {

	FigMetalContext* _metal;
	DisparityDescriptor _dispDesc;
	id<MTLTexture> _narrowBlurredY;
	id<MTLTexture> _narrowBlurredUV;
	id<MTLTexture> _wideBlurredY;
	id<MTLTexture> _wideBlurredUV;
	id<MTLTexture> _wideBlurredDownsizedY;
	id<MTLTexture> _wideBlurredDownsizedUV;
	id<MTLTexture> _wideBlurredDownsizedWarpedY;
	id<MTLTexture> _wideBlurredDownsizedWarpedUV;
	id<MTLTexture> _confidenceByWarpingTex;
	id<MTLTexture> _confidenceByCornerTex;
	id<MTLTexture> _confidenceByEpipolarTex;
	id<MTLTexture> _confidenceSimilarityUV;
	id<MTLTexture> _confidenceCombinedTex;
	id<MTLTexture> _confidenceTex;
	id<MTLTexture> _disparitySmoothedTex;
	id<MTLTexture> _disparityWeightedSmoothedTex;
	id<MTLTexture> _disparityBandOneTex;
	id<MTLTexture> _disparityBandOneExtraTex;
	id<MTLTexture> _narrowDownsizedY;
	id<MTLTexture> _narrowDownsizedYBandOne;
	id<MTLTexture> _narrowDownsizedUV;
	id<MTLTexture> _confidenceBandOneTex;
	id<MTLTexture> _confidenceBandOneExtraTex;
	id<MTLTexture> _weightedDisparityBandOneTex;
	id<MTLTexture> _confidenceSmoothedTex;
	id<MTLBuffer> _edgeMeanBuffer;
	CornerDetectionGPU* _cornerDetection;
	MPSImageConvolution* _mpsConvolution9x9;
	MPSImageConvolution* _mpsConvolution5x5;
	id<MTLComputePipelineState> _computeConfidenceByWarpingY;
	id<MTLComputePipelineState> _computeConfidenceByWarpingUV;
	id<MTLComputePipelineState> _computeConfidenceByEpipolar;
	id<MTLComputePipelineState> _computeEdgeMean;
	id<MTLComputePipelineState> _extendDisparity;
	id<MTLComputePipelineState> _weightedSmoothingFirst;
	id<MTLComputePipelineState> _weightedSmoothingMiddle;
	id<MTLComputePipelineState> _weightedSmoothingLast;
	id<MTLComputePipelineState> _confidenceScaler;
	id<MTLComputePipelineState> _combinedFixedPointDisparityFromXandY;
	id<MTLComputePipelineState> _dilateAndLocalMaxima5x5;
	id<MTLComputePipelineState> _combineConfidence;
	StereoStitchingGpuUtilities* _ssGpuUtilities;
	ConfidenceTuning* _confidenceTuning;

}

@property (nonatomic,retain) ConfidenceTuning * confidenceTuning;              //@synthesize confidenceTuning=_confidenceTuning - In the implementation block
-(void)releaseResources;
-(ConfidenceTuning *)confidenceTuning;
-(void)setConfidenceTuning:(ConfidenceTuning *)arg1 ;
-(id)initWithMetalContext:(id)arg1 gpuUtilities:(id)arg2 ;
-(int)compileShaders:(BOOL)arg1 ;
-(int)allocateResourcesWithDescriptor:(DisparityDescriptor*)arg1 buffer:(id)arg2 offset:(unsigned*)arg3 ;
-(int)scaleConfidence:(id)arg1 ;
-(int)convolution9x9WithCommandBuffer:(id)arg1 inROI:(SCD_Struct_Fi4*)arg2 outROI:(SCD_Struct_Fi4*)arg3 inTex:(id)arg4 outTex:(id)arg5 ;
-(int)convolution5x5WithCommandBuffer:(id)arg1 inROI:(SCD_Struct_Fi4*)arg2 outROI:(SCD_Struct_Fi4*)arg3 inTex:(id)arg4 outTex:(id)arg5 ;
-(int)computeConfidenceByEpipolarWithDisparity:(id)arg1 ;
-(int)computeConfidenceByWarpingWithNarrrowY:(id)arg1 narrowUV:(id)arg2 wideY:(id)arg3 wideUV:(id)arg4 wideROI:(SCD_Struct_Fi4*)arg5 inDisparity:(id)arg6 warpParams:(SCD_Struct_Di33*)arg7 ;
-(int)computeConfidenceByCorner:(id)arg1 ;
-(int)combinedAllConfidenceMetrics;
-(int)computeEdgeMean:(id)arg1 ;
-(int)weightedSmoothing:(id)arg1 confidence:(id)arg2 output:(id)arg3 ;
-(int)extendDisparity:(id)arg1 output:(id)arg2 ;
-(int)combinedFixedPointDisparityFromXandY:(id)arg1 desc:(DisparityDescriptor*)arg2 andY:(id)arg3 output:(id)arg4 ;
-(int)processWithInDisparityTex:(id)arg1 warpParams:(SCD_Struct_Di33*)arg2 narrowY:(id)arg3 narrowUV:(id)arg4 wideY:(id)arg5 wideUV:(id)arg6 wideROI:(SCD_Struct_Fi4*)arg7 outExtendedDispTex:(id)arg8 ;
@end

