/*
* Generated on Thursday, January 14, 2021 at 2:23:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNDetector.h>

@protocol VNModelFile;
@interface VNFaceBBoxAligner : VNDetector {

	shared_ptr<vision::mod::FaceBoxPoseAligner<signed char> >* mFaceBoxPoseAlignerImpl;
	BOOL _modelFilesWereMemmapped;
	id<VNModelFile> mFaceBoxAlignerModelFileHandle;

}
-(BOOL)completeInitializationForSession:(id)arg1 error:(id*)arg2 ;
-(id)processWithOptions:(id)arg1 warningRecorder:(id)arg2 error:(id*)arg3 ;
-(void)dealloc;
@end

