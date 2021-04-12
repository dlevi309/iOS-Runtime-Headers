/*
* Generated on Thursday, January 14, 2021 at 2:23:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNFaceLandmarkDetectorDNN.h>

@interface VNFaceLandmarkDetectorRevision3 : VNFaceLandmarkDetectorDNN
+(void)recordDefaultConfigurationOptionsInDictionary:(id)arg1 ;
+(id)espressoModelInputImageDimensionsBlobNameForConfigurationOptions:(id)arg1 ;
+(unsigned char)landmarkDetectorDNNVersion;
+(id)espressoModelFileNameForConfigurationOptions:(id)arg1 ;
-(CGRect)normalizedFaceBBoxForLandmarks:(id)arg1 ;
-(id)processWithOptions:(id)arg1 regionOfInterest:(CGRect)arg2 warningRecorder:(id)arg3 error:(id*)arg4 ;
@end

