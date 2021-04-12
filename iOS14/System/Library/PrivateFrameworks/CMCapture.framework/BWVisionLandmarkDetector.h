/*
* Generated on Thursday, January 14, 2021 at 2:23:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/


#import <CMCapture/CMCapture-Structs.h>
@class BWPixelBufferPool, FigM2MController;

@interface BWVisionLandmarkDetector : NSObject {

	BWPixelBufferPool* _faceDetectionBufferPool;
	FigM2MController* _m2mController;

}
+(void)initialize;
-(id)init;
-(id)_detectLandmarksUsingInputPixelBuffer:(CVBufferRef)arg1 metadata:(id)arg2 outputFaceDetectionOrientation:(int*)arg3 includePoseAndQuality:(BOOL)arg4 ;
-(int)prepareForDetectionWithInputVideoFormat:(id)arg1 ;
-(void)prewarmForDetection;
-(int)detectFaceLandmarksUsingSampleBuffer:(opaqueCMSampleBufferRef)arg1 attachingToSampleBuffer:(opaqueCMSampleBufferRef)arg2 includePoseAndQuality:(BOOL)arg3 ;
-(void)dealloc;
@end

