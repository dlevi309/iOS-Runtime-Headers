/*
* Generated on Monday, March 1, 2021 at 2:36:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/VideoProcessors/UB.bundle/UB
*/


#import <UB/UB-Structs.h>
@class DeepFusionPreEspressoKernels, FigMetalContext;

@interface DeepFusionPreEspressoStage : NSObject {

	DeepFusionPreEspressoKernels* _kernels;
	FigMetalContext* _metalContext;

}
-(id)initWithContext:(id)arg1 ;
-(DeepFusionRawNoiseModelParameters)_createRawNoiseModelParameters:(const exposureParameters*)arg1 ;
-(DFSynthLongHighlightParameters)_createHighlightParameters:(const DeepFusionFrameMeta*)arg1 highlightTuning:(id)arg2 totalGain:(float)arg3 ;
-(void)computeGlobalNoiseFactor:(id)arg1 totalGain:(float)arg2 synthRefFactor:(float*)arg3 synthLongFactor:(float*)arg4 ;
-(int)estimateNoiseSynthRef:(id)arg1 synthRefChroma:(id)arg2 lscGains:(id)arg3 outNoiseSynthRef:(id)arg4 noiseEstimationParams:(NoiseEstimationParameters*)arg5 ;
-(int)estimateNoiseSynthLong:(id)arg1 synthLongChroma:(id)arg2 slFusionMap:(id)arg3 lscGains:(id)arg4 outNoiseSynthLong:(id)arg5 noiseEstimationParams:(NoiseEstimationParameters*)arg6 ;
-(int)estimateNoiseSynthLongPlusLong:(id)arg1 synthLongChroma:(id)arg2 slFusionMap:(id)arg3 longFusionMap:(id)arg4 lscGains:(id)arg5 outNoiseSynthLongPlusLong:(id)arg6 noiseEstimationParams:(NoiseEstimationParameters*)arg7 ;
-(int)applyAllTuningToSynthRefNoise:(id)arg1 outSynthRefNoise:(id)arg2 synthLongNoise:(id)arg3 outSynthLongNoise:(id)arg4 OFMask:(id)arg5 lscGains:(id)arg6 noiseEstimationParams:(NoiseEstimationParameters*)arg7 ;
-(int)quantizeFusionMap:(id)arg1 ;
-(int)downsampleAndQuantizeFusionMap:(id)arg1 srcTex:(id)arg2 ;
-(int)yuvCopyAndBias:(id)arg1 chromaInput:(id)arg2 lumaOutput:(id)arg3 chromaOutput:(id)arg4 ;
@end

