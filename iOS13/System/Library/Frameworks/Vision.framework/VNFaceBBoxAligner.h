/*
* Generated on Monday, March 1, 2021 at 2:30:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(BOOL)shouldDumpDebugIntermediates;
-(void)dealloc;
-(BOOL)completeInitializationAndReturnError:(id*)arg1 ;
-(void)dumpDebugIntermediatesWithImageBuffer:(id)arg1 lumaIntermediate:(CVBufferRef)arg2 rawBBoxInLumaIntermediateCoordinates:(Geometry2D_rect2D_)arg3 alignedBBoxInLumaIntermediateCoordinates:(Geometry2D_rect2D_)arg4 meanShapeInLumaIntermediateCoordinates:(const vector<_Geometry2D_point2D_, std::__1::allocator<_Geometry2D_point2D_> >*)arg5 rotationAngle:(float)arg6 ;
-(id)processWithOptions:(id)arg1 warningRecorder:(id)arg2 error:(id*)arg3 ;
@end

