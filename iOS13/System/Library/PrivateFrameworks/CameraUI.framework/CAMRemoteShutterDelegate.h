/*
* Generated on Monday, March 1, 2021 at 2:33:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/


@protocol CAMRemoteShutterDelegate <NSObject>
@required
-(void)remoteShutter:(id)arg1 takePhotoWithCountdown:(unsigned long long)arg2;
-(void)remoteShutterCancelCountdown:(id)arg1;
-(BOOL)remoteShutterBeginBurstCapture:(id)arg1;
-(BOOL)remoteShutterEndBurstCapture:(id)arg1;
-(void)remoteShutter:(id)arg1 setMode:(long long)arg2;
-(void)remoteShutter:(id)arg1 focusOn:(CGPoint)arg2;
-(BOOL)remoteShutterStartCapture:(id)arg1;
-(BOOL)remoteShutterStopCapture:(id)arg1;
-(void)remoteShutter:(id)arg1 setFlashMode:(long long)arg2;
-(void)remoteShutter:(id)arg1 setHDRMode:(long long)arg2;
-(void)remoteShutter:(id)arg1 setIrisMode:(long long)arg2;
-(void)remoteShutter:(id)arg1 setZoomAmount:(double)arg2;
-(void)remoteShutter:(id)arg1 setCaptureDevice:(long long)arg2;

@end

