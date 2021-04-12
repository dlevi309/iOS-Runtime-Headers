/*
* Generated on Monday, March 1, 2021 at 2:30:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNFaceLandmarkDetector.h>

@protocol VNModelFile;
@interface VNFaceLandmarkDetectorRevision1 : VNFaceLandmarkDetector {

	shared_ptr<vision::mod::LandmarkDetectorERT>* mFaceLandmarkAlgorithmImpl;
	shared_ptr<vision::mod::LandmarkDetectorERT>* mFaceLandmarkMouthRefinerImpl;
	shared_ptr<vision::mod::LandmarkDetectorERT>* mFaceLandmarkRightEyeRefinerImpl;
	shared_ptr<vision::mod::LandmarkDetectorERT>* mFaceLandmarkLeftEyeRefinerImpl;
	BOOL modelFilesWereMemmapped;
	id<VNModelFile> mCoreLandmarkModelFileHandle;
	id<VNModelFile> mLandmarkRefinerModelFileHandle;

}
+(id)configurationOptionKeysForDetectorKey;
+(BOOL)shouldDumpDebugIntermediates;
+(void)dumpDebugIntermediatesWithImageBuffer:(id)arg1 lumaIntermediate:(CVBufferRef)arg2 alignedBBoxInLumaIntermediateCoordinates:(Geometry2D_rect2D_)arg3 meanShapeInLumaIntermediate:(const vector<_Geometry2D_point2D_, std::__1::allocator<_Geometry2D_point2D_> >*)arg4 landmarkPointsInLumaIntermediate:(const vector<_Geometry2D_point2D_, std::__1::allocator<_Geometry2D_point2D_> >*)arg5 ;
-(void)dealloc;
-(id)processWithOptions:(id)arg1 regionOfInterest:(CGRect)arg2 warningRecorder:(id)arg3 error:(id*)arg4 ;
-(BOOL)completeInitializationAndReturnError:(id*)arg1 ;
-(BOOL)loadRefinersAndReturnError:(id*)arg1 ;
-(BOOL)_loadEspressoModelWithConfigurationOptions:(id)arg1 error:(id*)arg2 ;
-(unsigned long long)cascadeStepCountInOriginalModel;
-(unsigned long long)cascadeStepCountLoaded;
@end

