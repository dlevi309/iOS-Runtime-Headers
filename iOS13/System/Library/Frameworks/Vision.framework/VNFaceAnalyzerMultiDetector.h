/*
* Generated on Monday, March 1, 2021 at 2:30:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNEspressoModelFileBasedDetector.h>

@class NSMutableData;

@interface VNFaceAnalyzerMultiDetector : VNEspressoModelFileBasedDetector {

	shared_ptr<vision::mod::FaceprintAndAttributes>* _mMultiHeadedFaceClassifier;
	shared_ptr<vision::mod::FaceFrontalizer>* _mFaceFrontalizerImpl;
	vImage_Buffer* _faceVImageBuffer;
	NSMutableData* _mFaceFrontalizerWorkingBuffer;

}
+(id)configurationOptionKeysForDetectorKey;
-(id)espressoModelFileNameForConfigurationOptions:(id)arg1 ;
-(id)espressoModelInputImageDimensionsBlobNameForConfigurationOptions:(id)arg1 ;
-(BOOL)supportsProcessingDevice:(id)arg1 ;
-(id)processWithOptions:(id)arg1 regionOfInterest:(CGRect)arg2 warningRecorder:(id)arg3 error:(id*)arg4 ;
-(BOOL)completeInitializationAndReturnError:(id*)arg1 ;
-(void)_addFaceAnalysisResultsFromMap:(map<std::__1::basic_string<char>, float, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, float> > >*)arg1 toFaceAttributeObject:(id)arg2 withRequestRevision:(unsigned long long)arg3 ;
@end

