/*
* Generated on Monday, March 1, 2021 at 2:33:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/


@protocol CAMStillImageCaptureRequestDelegate <NSObject>
@optional
-(void)stillImageRequestDidStartCapturing:(id)arg1 resolvedSettings:(id)arg2;
-(void)stillImageRequestDidStopCapturingStillImage:(id)arg1;
-(void)stillImageRequestDidCompleteStillImageCapture:(id)arg1 withResponse:(id)arg2 error:(id)arg3;
-(void)stillImageRequestDidCompleteVideoCapture:(id)arg1 withResponse:(id)arg2 error:(id)arg3;
-(void)stillImageRequestDidCompleteCapture:(id)arg1 error:(id)arg2;
-(void)stillImageRequestDidCompleteStillImageLocalPersistence:(id)arg1 withResponse:(id)arg2 error:(id)arg3;
-(void)stillImageRequestDidCompleteVideoLocalPersistence:(id)arg1 withResponse:(id)arg2 error:(id)arg3;
-(void)stillImageRequestDidCompleteStillImageRemotePersistence:(id)arg1 withResponse:(id)arg2 error:(id)arg3;
-(void)stillImageRequestDidCompleteVideoRemotePersistence:(id)arg1 withResponse:(id)arg2 error:(id)arg3;

@end

