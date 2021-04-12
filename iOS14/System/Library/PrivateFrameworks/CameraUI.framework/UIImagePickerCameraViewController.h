/*
* Generated on Thursday, January 14, 2021 at 2:26:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/


@protocol UIImagePickerCameraViewController <NSObject>
@required
-(void)_stopVideoCapture;
-(long long)_cameraDevice;
-(void)_setCameraDevice:(long long)arg1;
-(BOOL)_showsCameraControls;
-(CGAffineTransform*)_cameraViewTransform;
-(BOOL)_startVideoCapture;
-(long long)_cameraCaptureMode;
-(void)_setCameraFlashMode:(long long)arg1;
-(void)_takePicture;
-(long long)_cameraFlashMode;
-(void)_setCameraOverlayView:(id)arg1;
-(id)_cameraOverlayView;
-(void)_setShowsCameraControls:(BOOL)arg1;
-(void)_setCameraViewTransform:(CGAffineTransform)arg1;
-(void)_setCameraCaptureMode:(long long)arg1;
-(id)initWithInitialImagePickerProperties:(id)arg1;

@end

