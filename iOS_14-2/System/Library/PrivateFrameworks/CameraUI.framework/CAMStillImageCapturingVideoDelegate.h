/*
* Generated on Thursday, January 14, 2021 at 2:26:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/


@protocol CAMStillImageCapturingVideoDelegate <NSObject>
@optional
-(void)stillImageRequestsWillRequestCTMVideoCaptureStart;
-(void)stillImageRequestWillStartCapturingCTMVideoWithCaptureInFlight:(BOOL)arg1;
-(void)stillImageRequestsWillRequestCTMVideoCaptureEnd;
-(void)stillImageRequestsDidStopCapturingCTMVideo;
-(void)stillImageRequestsWillStartCapturingLivePhotoVideo;
-(void)stillImageRequestsDidCompleteCapturingLivePhotoVideo;

@end

