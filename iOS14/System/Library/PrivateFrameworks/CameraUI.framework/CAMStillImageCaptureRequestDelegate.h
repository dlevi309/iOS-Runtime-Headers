/*
* Generated on Thursday, January 14, 2021 at 2:26:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/


@protocol CAMStillImageCaptureRequestDelegate <NSObject>
@optional
-(void)stillImageRequestDidStopCapturingStillImage:(id)arg1;
-(void)stillImageRequestDidCompleteCapture:(id)arg1 error:(id)arg2;
-(void)stillImageRequestDidBeginCaptureBeforeResolvingSettings:(id)arg1;
-(void)stillImageRequestDidCompleteVideoCapture:(id)arg1 withResponse:(id)arg2 error:(id)arg3;
-(void)stillImageRequestDidStartCapturing:(id)arg1 resolvedSettings:(id)arg2;
-(void)stillImageRequestDidCompleteStillImageLocalPersistence:(id)arg1 withResponse:(id)arg2 error:(id)arg3;
-(void)stillImageRequestDidCompleteStillImageRemotePersistence:(id)arg1 withResponse:(id)arg2 error:(id)arg3;
-(void)stillImageRequestDidCompleteStillImageCapture:(id)arg1 withResponse:(id)arg2 error:(id)arg3;
-(void)stillImageRequestDidCompleteVideoLocalPersistence:(id)arg1 withResponse:(id)arg2 error:(id)arg3;
-(void)stillImageRequestDidCompleteVideoRemotePersistence:(id)arg1 withResponse:(id)arg2 error:(id)arg3;

@end

