/*
* Generated on Monday, March 1, 2021 at 2:33:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/


@protocol CAMVideoCaptureRequestDelegate <NSObject>
@optional
-(void)videoRequestDidStartCapturing:(id)arg1;
-(void)videoRequestDidStopCapturing:(id)arg1;
-(void)videoRequestDidCompleteCapture:(id)arg1 withResponse:(id)arg2 error:(id)arg3;
-(void)videoRequestDidCompleteLocalPersistence:(id)arg1 withResponse:(id)arg2 error:(id)arg3;
-(void)videoRequestDidCompleteRemotePersistence:(id)arg1 withResponse:(id)arg2 error:(id)arg3;

@end

