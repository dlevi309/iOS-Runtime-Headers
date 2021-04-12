/*
* Generated on Monday, March 1, 2021 at 2:31:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/


#import <Celestial/Celestial-Structs.h>
@class BWPixelBufferPool, FigM2MController;

@interface BWVisionLandmarkDetector : NSObject {

	BWPixelBufferPool* _faceDetectionBufferPool;
	FigM2MController* _m2mController;

}
+(void)initialize;
-(id)init;
-(void)dealloc;
-(id)_detectLandmarksUsingInputPixelBuffer:(CVBufferRef)arg1 metadata:(id)arg2 outputFaceDetectionOrientation:(int*)arg3 includePoseAndQuality:(BOOL)arg4 ;
-(int)prepareForDetectionWithInputVideoFormat:(id)arg1 ;
-(int)detectFaceLandmarksUsingSampleBuffer:(opaqueCMSampleBufferRef)arg1 attachingToSampleBuffer:(opaqueCMSampleBufferRef)arg2 includePoseAndQuality:(BOOL)arg3 ;
-(void)prewarmForDetection;
@end

