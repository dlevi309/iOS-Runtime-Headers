/*
* Generated on Monday, March 1, 2021 at 2:33:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/


@protocol UIImagePickerCameraViewController <NSObject>
@required
-(BOOL)_showsCameraControls;
-(void)_setShowsCameraControls:(BOOL)arg1;
-(id)_cameraOverlayView;
-(void)_setCameraOverlayView:(id)arg1;
-(CGAffineTransform*)_cameraViewTransform;
-(void)_setCameraViewTransform:(CGAffineTransform)arg1;
-(void)_takePicture;
-(BOOL)_startVideoCapture;
-(void)_stopVideoCapture;
-(long long)_cameraDevice;
-(void)_setCameraDevice:(long long)arg1;
-(long long)_cameraCaptureMode;
-(void)_setCameraCaptureMode:(long long)arg1;
-(long long)_cameraFlashMode;
-(void)_setCameraFlashMode:(long long)arg1;
-(id)initWithInitialImagePickerProperties:(id)arg1;

@end

