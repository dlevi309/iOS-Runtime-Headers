/*
* Generated on Monday, March 1, 2021 at 2:33:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/


@protocol CCCameraConnectionDelegate <NSObject>
@optional
-(BOOL)cameraConnectionEndBurstCapture:(id)arg1;
-(long long)cameraConnectionOrientation:(id)arg1;
-(BOOL)cameraConnection:(id)arg1 setCaptureMode:(long long)arg2;
-(BOOL)cameraConnectionBeginBurstCapture:(id)arg1;
-(BOOL)cameraConnectionStartCapture:(id)arg1;
-(BOOL)cameraConnectionStopCapture:(id)arg1;
-(void)cameraConnection:(id)arg1 setFocusPoint:(CGPoint)arg2;
-(id)cameraConnectionSupportedCaptureModes:(id)arg1;
-(long long)cameraConnectionCaptureMode:(id)arg1;
-(BOOL)cameraConnectionToggleCameraDeviceSupport:(id)arg1;
-(BOOL)cameraConnectionZoomSupport:(id)arg1;
-(double)cameraConnectionZoomAmount:(id)arg1;
-(long long)cameraConnectionFlashSupport:(id)arg1;
-(long long)cameraConnectionFlashMode:(id)arg1;
-(long long)cameraConnectionHDRSupport:(id)arg1;
-(long long)cameraConnectionHDRMode:(id)arg1;
-(long long)cameraConnectionIrisSupport:(id)arg1;
-(long long)cameraConnectionIrisMode:(id)arg1;
-(BOOL)cameraConnectionSupportsMomentCapture:(id)arg1;
-(BOOL)cameraConnectionBurstSupport:(id)arg1;
-(BOOL)cameraConnectionIsShowingLivePreview:(id)arg1;
-(void)cameraConnectionCancelCountdown:(id)arg1;
-(void)cameraConnection:(id)arg1 setZoomAmount:(double)arg2;
-(void)cameraConnection:(id)arg1 setFlashMode:(long long)arg2;
-(void)cameraConnection:(id)arg1 setHDRMode:(long long)arg2;
-(void)cameraConnection:(id)arg1 setIrisMode:(long long)arg2;
-(void)cameraConnectionToggleCameraDevice:(id)arg1;

@required
-(void)cameraConnection:(id)arg1 takePhotoWithCountdown:(unsigned long long)arg2;

@end

