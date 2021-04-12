/*
* Generated on Monday, March 1, 2021 at 2:30:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNEspressoModelFileBasedDetector.h>

@interface VNSmartCamCombinedAestheticsAndSaliencyDetector : VNEspressoModelFileBasedDetector
-(id)espressoModelFileNameForConfigurationOptions:(id)arg1 ;
-(id)espressoModelInputImageDimensionsBlobNameForConfigurationOptions:(id)arg1 ;
-(id)processWithOptions:(id)arg1 regionOfInterest:(CGRect)arg2 warningRecorder:(id)arg3 error:(id*)arg4 ;
-(int)espressoModelNetworkLayersStorageTypeForConfigurationOptions:(id)arg1 ;
-(id)_classifyAesthetics:(BOOL)arg1 generateSaliencyHeatMap:(BOOL)arg2 for32BGRAImageInPixelBuffer:(CVBufferRef)arg3 withOptions:(id)arg4 modelInputImageSize:(CGSize)arg5 originalImageSize:(CGSize)arg6 regionOfInterest:(CGRect)arg7 warningRecorder:(id)arg8 error:(id*)arg9 ;
@end

