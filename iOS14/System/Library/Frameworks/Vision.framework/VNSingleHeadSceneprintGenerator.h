/*
* Generated on Thursday, January 14, 2021 at 2:23:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNEspressoModelFileBasedDetector.h>

@interface VNSingleHeadSceneprintGenerator : VNEspressoModelFileBasedDetector
+(void)recordDefaultConfigurationOptionsInDictionary:(id)arg1 ;
+(void)fullyPopulateConfigurationOptions:(id)arg1 ;
+(id)espressoModelInputImageDimensionsBlobNameForConfigurationOptions:(id)arg1 ;
+(id)configurationOptionKeysForDetectorKey;
+(id)espressoModelFileNameForConfigurationOptions:(id)arg1 ;
-(BOOL)_analyzePixelBuffer:(CVBufferRef)arg1 sceneprintOutputBuffer:(SCD_Struct_VN38*)arg2 options:(id)arg3 error:(id*)arg4 ;
-(id)_observationsForSceneprintOutput:(const SCD_Struct_VN38*)arg1 requestRevision:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)_analyzeRegionOfInterest:(CGRect)arg1 sceneprintOutputBuffer:(SCD_Struct_VN38*)arg2 options:(id)arg3 warningRecorder:(id)arg4 error:(id*)arg5 ;
-(BOOL)supportsProcessingDevice:(id)arg1 ;
-(id)processWithOptions:(id)arg1 regionOfInterest:(CGRect)arg2 warningRecorder:(id)arg3 error:(id*)arg4 ;
-(BOOL)completeInitializationForSession:(id)arg1 error:(id*)arg2 ;
@end

