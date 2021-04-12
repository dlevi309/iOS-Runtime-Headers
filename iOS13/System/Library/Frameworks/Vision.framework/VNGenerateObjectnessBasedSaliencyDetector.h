/*
* Generated on Monday, March 1, 2021 at 2:30:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNEspressoModelFileBasedDetector.h>

@interface VNGenerateObjectnessBasedSaliencyDetector : VNEspressoModelFileBasedDetector
+(id)configurationOptionKeysForDetectorKey;
-(id)espressoModelFileNameForConfigurationOptions:(id)arg1 ;
-(id)espressoModelInputImageDimensionsBlobNameForConfigurationOptions:(id)arg1 ;
-(BOOL)supportsProcessingDevice:(id)arg1 ;
-(id)processWithOptions:(id)arg1 regionOfInterest:(CGRect)arg2 warningRecorder:(id)arg3 error:(id*)arg4 ;
-(id)_observationsForImageIn32BGRAPixelBuffer:(CVBufferRef)arg1 withOptions:(id)arg2 originalImageSize:(CGSize)arg3 regionOfInterest:(CGRect)arg4 warningRecorder:(id)arg5 error:(id*)arg6 ;
@end

