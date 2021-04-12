/*
* Generated on Monday, March 1, 2021 at 2:34:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/


@protocol CFXCaptureViewControllerDelegate <NSObject>
@optional
-(void)captureViewControllerDidStartVideoRecording:(id)arg1;
-(void)captureViewControllerDidStopVideoRecording:(id)arg1;

@required
-(void)captureViewController:(id)arg1 didCaptureMediaItem:(id)arg2;
-(void)captureViewController:(id)arg1 didChangeEffectComposition:(id)arg2;
-(void)captureViewController:(id)arg1 didRenderFrame:(id)arg2;
-(void)captureViewControllerDoneButtonWasTapped:(id)arg1;
-(void)captureViewControllerEffectsButtonWasTapped:(id)arg1;
-(void)captureViewControllerPresentationRectWasDoubleTapped:(id)arg1;
-(void)captureViewController:(id)arg1 presentationRectWasPinchedWithState:(long long)arg2 scale:(double)arg3 velocity:(double)arg4;
-(void)captureViewControllerStartCaptureSession:(id)arg1;
-(void)captureViewControllerStopCaptureSession:(id)arg1;
-(void)captureViewControllerCameraFlipButtonWasTapped:(id)arg1;
-(id)cameraControlsViewControllerForCaptureViewController:(id)arg1;

@end

