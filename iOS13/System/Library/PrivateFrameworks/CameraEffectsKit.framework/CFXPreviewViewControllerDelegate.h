/*
* Generated on Monday, March 1, 2021 at 2:34:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/


@protocol CFXPreviewViewControllerDelegate <NSObject>
@required
-(long long)orientationUsedForCapture;
-(long long)cameraModeUsedForCapture;
-(void)previewViewController:(id)arg1 didStartExportingMediaItem:(id)arg2;
-(id)selectedAppIdentifierForPreviewViewController:(id)arg1;
-(void)previewViewControllerDidStartEditingText:(id)arg1;
-(void)previewViewController:(id)arg1 didProgress:(double)arg2 exportingMediaItem:(id)arg3;
-(void)previewViewControllerDidHideUserInterface:(id)arg1;
-(void)previewViewControllerDidShowUserInterface:(id)arg1;
-(void)previewViewController:(id)arg1 didFinishExportingMediaItem:(id)arg2 withError:(id)arg3;
-(BOOL)mediaCapturedInFunCam;
-(void)previewViewControllerDidStopEditingText:(id)arg1;

@end

