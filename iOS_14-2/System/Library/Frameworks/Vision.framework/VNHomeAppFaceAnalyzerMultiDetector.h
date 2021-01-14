/*
* Generated on Thursday, January 14, 2021 at 2:23:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNFaceAnalyzerMultiDetectorBase.h>

@interface VNHomeAppFaceAnalyzerMultiDetector : VNFaceAnalyzerMultiDetectorBase
+(id)espressoModelInputImageDimensionsBlobNameForConfigurationOptions:(id)arg1 ;
+(const basic_string_view<char, std::__1::char_traits<char> >*)getModelVersionForOptions:(id)arg1 ;
+(id)espressoModelFileNameForConfigurationOptions:(id)arg1 ;
-(BOOL)_isFaceprintJunk:(shared_ptr<vision::mod::ImageDescriptorBufferAbstract>*)arg1 ;
-(id)processWithOptions:(id)arg1 regionOfInterest:(CGRect)arg2 warningRecorder:(id)arg3 error:(id*)arg4 ;
@end

