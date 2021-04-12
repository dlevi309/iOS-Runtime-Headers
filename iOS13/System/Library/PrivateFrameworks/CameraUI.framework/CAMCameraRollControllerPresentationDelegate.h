/*
* Generated on Monday, March 1, 2021 at 2:33:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/


@protocol CAMCameraRollControllerPresentationDelegate <NSObject>
@optional
-(void)cameraRollControllerWillPresentCameraRoll:(id)arg1;
-(CGRect*)cameraRollControllerSourceAssetRect:(id)arg1;
-(void)cameraRollController:(id)arg1 shouldHideSourceAsset:(BOOL)arg2;
-(void)cameraRollControllerPrefersPresentingStatusbarHiddenDidChange:(id)arg1;
-(void)cameraRollControllerPreviewGestureDidBecomeAvailable:(id)arg1;
-(CGRect*)cameraRollControllerPreviewSourceRect:(id)arg1;
-(id)cameraRollControllerImageForReveal:(id)arg1;
-(void)cameraRollControllerRevealWillBegin:(id)arg1;
-(void)cameraRollControllerRevealDidEnd:(id)arg1;
-(long long)cameraRollControllerPreferredPresentationOrientation:(id)arg1;

@required
-(id)cameraRollControllerPresentingViewController:(id)arg1;
-(void)cameraRollControllerDidFullyPresentCameraRoll:(id)arg1;
-(void)cameraRollControllerDidDismissFullyPresentedCameraRoll:(id)arg1;
-(void)cameraRollControllerRequestsCaptureSessionStopped:(id)arg1;
-(void)cameraRollController:(id)arg1 willShowPresentingViewControllerShouldStartCaptureSession:(BOOL)arg2;
-(void)cameraRollControllerWillPresentPreviewController:(id)arg1;
-(void)cameraRollController:(id)arg1 didDismissPreviewControllerShouldStartCaptureSession:(BOOL)arg2;

@end

