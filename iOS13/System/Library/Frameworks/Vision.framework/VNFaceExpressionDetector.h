/*
* Generated on Monday, March 1, 2021 at 2:30:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNDetector.h>

@protocol VNModelFile;
@interface VNFaceExpressionDetector : VNDetector {

	shared_ptr<vision::mod::LandmarkAttributes>* m_FaceAttributesImpl;
	BOOL modelFilesWereMemmapped;
	id<VNModelFile> m_LandmarkRefinerModelFileHandle;

}
+(int)expressionTypeFromString:(id)arg1 ;
+(id)createExpressionAndConfidencesDictionaryFromScores:(id)arg1 ;
+(id)createExpressionDetectionDictionaryFromScores:(id)arg1 ;
-(void)dealloc;
-(id)processWithOptions:(id)arg1 regionOfInterest:(CGRect)arg2 warningRecorder:(id)arg3 error:(id*)arg4 ;
-(BOOL)completeInitializationAndReturnError:(id*)arg1 ;
@end

