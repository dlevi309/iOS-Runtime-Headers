/*
* Generated on Thursday, January 14, 2021 at 2:23:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNEspressoModelFileBasedDetector.h>

@interface VNGenerateObjectnessBasedSaliencyDetector : VNEspressoModelFileBasedDetector
+(id)espressoModelInputImageDimensionsBlobNameForConfigurationOptions:(id)arg1 ;
+(id)configurationOptionKeysForDetectorKey;
+(id)espressoModelFileNameForConfigurationOptions:(id)arg1 ;
-(BOOL)warmUpSession:(id)arg1 withOptions:(id)arg2 error:(id*)arg3 ;
-(BOOL)supportsProcessingDevice:(id)arg1 ;
-(id)processWithOptions:(id)arg1 regionOfInterest:(CGRect)arg2 warningRecorder:(id)arg3 error:(id*)arg4 ;
-(BOOL)_runAnalysisOnImage:(CVBufferRef)arg1 espressoResources:(id)arg2 inputBlobName:(id)arg3 error:(id*)arg4 ;
-(id)_observationsForImageIn32BGRAPixelBuffer:(CVBufferRef)arg1 withOptions:(id)arg2 originalImageSize:(CGSize)arg3 regionOfInterest:(CGRect)arg4 warningRecorder:(id)arg5 error:(id*)arg6 ;
@end

