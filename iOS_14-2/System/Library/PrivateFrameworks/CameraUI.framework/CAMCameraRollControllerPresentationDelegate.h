/*
* Generated on Thursday, January 14, 2021 at 2:26:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/


@protocol CAMCameraRollControllerPresentationDelegate <NSObject>
@optional
-(id)cameraRollControllerImageForReveal:(id)arg1;
-(void)cameraRollController:(id)arg1 shouldHideSourceAsset:(BOOL)arg2;
-(void)cameraRollControllerPrefersPresentingStatusbarHiddenDidChange:(id)arg1;
-(long long)cameraRollControllerPreferredPresentationOrientation:(id)arg1;
-(CGRect*)cameraRollControllerSourceAssetRect:(id)arg1;
-(CGRect*)cameraRollControllerPreviewSourceRect:(id)arg1;
-(void)cameraRollControllerRevealDidEnd:(id)arg1;
-(void)cameraRollControllerRevealWillBegin:(id)arg1;
-(void)cameraRollControllerWillPresentCameraRoll:(id)arg1;
-(void)cameraRollControllerPreviewGestureDidBecomeAvailable:(id)arg1;

@required
-(id)cameraRollControllerPresentingViewController:(id)arg1;
-(void)cameraRollControllerDidDismissFullyPresentedCameraRoll:(id)arg1;
-(void)cameraRollControllerDidFullyPresentCameraRoll:(id)arg1;
-(void)cameraRollControllerRequestsCaptureSessionStopped:(id)arg1;
-(void)cameraRollController:(id)arg1 willShowPresentingViewControllerShouldStartCaptureSession:(BOOL)arg2;
-(void)cameraRollController:(id)arg1 didDismissPreviewControllerShouldStartCaptureSession:(BOOL)arg2;
-(void)cameraRollControllerWillPresentPreviewController:(id)arg1;

@end

