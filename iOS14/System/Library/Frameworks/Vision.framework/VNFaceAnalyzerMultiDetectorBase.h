/*
* Generated on Thursday, January 14, 2021 at 2:23:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNEspressoModelFileBasedDetector.h>

@interface VNFaceAnalyzerMultiDetectorBase : VNEspressoModelFileBasedDetector {

	shared_ptr<vision::mod::FaceprintAndAttributes>* _mMultiHeadedFaceClassifier;

}
+(id)keyForDetectorWithConfigurationOptions:(id)arg1 ;
+(unsigned long long)numberOfImageChannels;
+(const basic_string_view<char, std::__1::char_traits<char> >*)getModelVersionForOptions:(id)arg1 ;
+(id)configurationOptionKeysForDetectorKey;
+(Class)detectorClassForConfigurationOptions:(id)arg1 error:(id*)arg2 ;
-(BOOL)_isFaceprintJunk:(shared_ptr<vision::mod::ImageDescriptorBufferAbstract>*)arg1 ;
-(void)_addFaceAnalysisResultsFromMap:(map<std::__1::basic_string<char>, float, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, float> > >*)arg1 toFaceAttributeObject:(id)arg2 withRequestRevision:(unsigned long long)arg3 ;
-(BOOL)_saveFaceprint:(shared_ptr<vision::mod::ImageDescriptorBufferAbstract>*)arg1 toFaceObservation:(id)arg2 options:(id)arg3 error:(id*)arg4 ;
-(BOOL)_saveFaceAttributes:(map<std::__1::basic_string<char>, float, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, float> > >*)arg1 toFaceObservation:(id)arg2 options:(id)arg3 error:(id*)arg4 ;
-(BOOL)supportsProcessingDevice:(id)arg1 ;
-(BOOL)completeInitializationForSession:(id)arg1 error:(id*)arg2 ;
@end

