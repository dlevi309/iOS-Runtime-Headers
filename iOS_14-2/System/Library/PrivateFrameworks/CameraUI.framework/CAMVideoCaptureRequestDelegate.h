/*
* Generated on Thursday, January 14, 2021 at 2:26:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

