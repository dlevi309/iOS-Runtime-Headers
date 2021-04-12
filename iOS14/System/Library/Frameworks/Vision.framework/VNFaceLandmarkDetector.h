/*
* Generated on Thursday, January 14, 2021 at 2:23:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNEspressoModelFileBasedDetector.h>
#import <libobjc.A.dylib/VNDetectorKeyProviding.h>

@class NSString;

@interface VNFaceLandmarkDetector : VNEspressoModelFileBasedDetector <VNDetectorKeyProviding> {

	shared_ptr<vision::mod::LandmarkAttributes>* _faceAttributesPupilRefiner;
	BOOL _modelFilesWereMemmapped;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(const LandmarkDetector_faceMeshParts_*)landmarksMeshPartsForConstellation:(unsigned long long)arg1 ;
+(Geometry2D_point2D_)computeCentroidUsingPoints:(const Geometry2D_point2D_*)arg1 indicies:(const int*)arg2 numberOfIndicies:(int)arg3 ;
+(const vector<int, std::__1::allocator<int> >*)allLandmarksPointsIndexesForConstellation:(unsigned long long)arg1 ;
+(Class)detectorClassForConfigurationOptions:(id)arg1 error:(id*)arg2 ;
-(BOOL)loadRefinersAndReturnError:(id*)arg1 ;
-(CVBufferRef)createLumaPixelBufferFrom:(id)arg1 forFaceBBox:(Geometry2D_rect2D_)arg2 initializeVImage:(vImage_Buffer*)arg3 initializeRect2D:(Geometry2D_rect2D_*)arg4 initializeIgnoreCropAndScaleFlag:(BOOL*)arg5 initializeLumaScaleFromOriginal:(float*)arg6 options:(id)arg7 error:(id*)arg8 ;
-(CGRect)normalizedFaceBBoxForLandmarks:(id)arg1 ;
-(void)calculatePupilLocationAndUpdateLandmarkPoints:(vector<_Geometry2D_point2D_, std::__1::allocator<_Geometry2D_point2D_> >*)arg1 ;
-(id)computeLandmarksScoreOnImage:(const vImage_Buffer*)arg1 withFaceBoundingBox:(const Geometry2D_rect2D_*)arg2 andLandmarks:(const void*)arg3 error:(id*)arg4 ;
-(BOOL)postprocessLandmarkResultsForLandmarks:(const vector<_Geometry2D_point2D_, std::__1::allocator<_Geometry2D_point2D_> >*)arg1 imageBuffer:(id)arg2 outputFace:(id)arg3 options:(id)arg4 warningRecorder:(id)arg5 error:(id*)arg6 ;
-(BOOL)detectBlinkOnFaceImage:(const vImage_Buffer*)arg1 faceObservation:(id)arg2 lumaRec2DInImageCoordinates:(Geometry2D_rect2D_*)arg3 landmarks:(const void*)arg4 warningRecorder:(id)arg5 error:(id*)arg6 ;
-(BOOL)completeInitializationForSession:(id)arg1 error:(id*)arg2 ;
-(void)dealloc;
@end

