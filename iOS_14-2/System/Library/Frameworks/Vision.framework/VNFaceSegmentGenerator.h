/*
* Generated on Thursday, January 14, 2021 at 2:23:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNEspressoModelFileBasedDetector.h>

@interface VNFaceSegmentGenerator : VNEspressoModelFileBasedDetector {

	shared_ptr<vision::mod::FaceSegmenterDNN>* _faceSegmenterDNN;

}
+(float)_faceSegmenterMaximumInputImageAspectRatio;
+(id)espressoModelInputImageDimensionsBlobNameForConfigurationOptions:(id)arg1 ;
+(id)espressoModelFileNameForConfigurationOptions:(id)arg1 ;
-(BOOL)_getFaceSegmenterInputImageSize:(CGSize*)arg1 forRequestRevision:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)_getNumberOfSupportedFaceSegments:(unsigned long long*)arg1 forRequestRevision:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)_fillFaceSegmentLabelToProbabilityMap:(id)arg1 error:(id*)arg2 ;
-(BOOL)supportsProcessingDevice:(id)arg1 ;
-(id)processWithOptions:(id)arg1 regionOfInterest:(CGRect)arg2 warningRecorder:(id)arg3 error:(id*)arg4 ;
-(BOOL)completeInitializationForSession:(id)arg1 error:(id*)arg2 ;
@end

