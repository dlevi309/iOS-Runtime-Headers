/*
* Generated on Thursday, January 14, 2021 at 2:23:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNFaceLandmarkDetector.h>

@interface VNFaceLandmarkDetectorRevision1 : VNFaceLandmarkDetector {

	shared_ptr<vision::mod::LandmarkDetectorERT>* mFaceLandmarkAlgorithmImpl;
	shared_ptr<vision::mod::LandmarkDetectorERT>* mFaceLandmarkMouthRefinerImpl;
	shared_ptr<vision::mod::LandmarkDetectorERT>* mFaceLandmarkRightEyeRefinerImpl;
	shared_ptr<vision::mod::LandmarkDetectorERT>* mFaceLandmarkLeftEyeRefinerImpl;
	BOOL _modelFilesWereMemmapped;

}
+(id)espressoModelInputImageDimensionsBlobNameForConfigurationOptions:(id)arg1 ;
+(void)dumpDebugIntermediatesWithImageBuffer:(id)arg1 lumaIntermediate:(CVBufferRef)arg2 alignedBBoxInLumaIntermediateCoordinates:(Geometry2D_rect2D_)arg3 meanShapeInLumaIntermediate:(const vector<_Geometry2D_point2D_, std::__1::allocator<_Geometry2D_point2D_> >*)arg4 landmarkPointsInLumaIntermediate:(const vector<_Geometry2D_point2D_, std::__1::allocator<_Geometry2D_point2D_> >*)arg5 ;
+(id)configurationOptionKeysForDetectorKey;
+(id)espressoModelFileNameForConfigurationOptions:(id)arg1 ;
-(BOOL)loadRefinersAndReturnError:(id*)arg1 ;
-(unsigned long long)cascadeStepCountLoaded;
-(BOOL)_loadEspressoModelWithConfigurationOptions:(id)arg1 error:(id*)arg2 ;
-(unsigned long long)cascadeStepCountInOriginalModel;
-(id)processWithOptions:(id)arg1 regionOfInterest:(CGRect)arg2 warningRecorder:(id)arg3 error:(id*)arg4 ;
-(BOOL)completeInitializationForSession:(id)arg1 error:(id*)arg2 ;
-(void)dealloc;
@end

