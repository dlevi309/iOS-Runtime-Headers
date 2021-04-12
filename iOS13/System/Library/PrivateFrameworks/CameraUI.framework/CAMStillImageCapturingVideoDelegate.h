/*
* Generated on Monday, March 1, 2021 at 2:33:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/


@protocol CAMStillImageCapturingVideoDelegate <NSObject>
@optional
-(void)stillImageRequestsWillStartCapturingLivePhotoVideo;
-(void)stillImageRequestsDidCompleteCapturingLivePhotoVideo;
-(void)stillImageRequestsWillRequestCTMVideoCaptureStart;
-(void)stillImageRequestsWillRequestCTMVideoCaptureEnd;
-(void)stillImageRequestWillStartCapturingCTMVideoWithCaptureInFlight:(BOOL)arg1;
-(void)stillImageRequestsDidStopCapturingCTMVideo;

@end

