/*
* Generated on Monday, March 1, 2021 at 2:30:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNFaceDetector.h>

@class VNFaceBBoxAligner;

@interface VNFaceDetectorRevision1 : VNFaceDetector {

	shared_ptr<vision::mod::ObjectDetector_DCNFaceDetector>* _faceDetector;
	VNFaceBBoxAligner* _faceBBoxAligner;

}
+(id)configurationOptionKeysForDetectorKey;
-(id)processWithOptions:(id)arg1 regionOfInterest:(CGRect)arg2 warningRecorder:(id)arg3 error:(id*)arg4 ;
-(BOOL)completeInitializationAndReturnError:(id*)arg1 ;
-(void)purgeIntermediates;
@end

