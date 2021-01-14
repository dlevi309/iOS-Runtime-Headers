/*
* Generated on Thursday, January 14, 2021 at 2:23:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNEspressoModelFileBasedDetector.h>

@interface VNDetectionprintGenerator : VNEspressoModelFileBasedDetector
+(void)recordDefaultConfigurationOptionsInDictionary:(id)arg1 ;
+(id)espressoModelInputImageDimensionsBlobNameForConfigurationOptions:(id)arg1 ;
+(id)espressoModelFileNameForConfigurationOptions:(id)arg1 ;
-(id)_analyzePixelBuffer:(CVBufferRef)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)_detectionprintTensorForOutputBuffer:(const SCD_Struct_VN38*)arg1 requestRevision:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)supportedImageSizeSetForProcessingOptions:(id)arg1 ;
-(id)processWithOptions:(id)arg1 regionOfInterest:(CGRect)arg2 warningRecorder:(id)arg3 error:(id*)arg4 ;
@end

