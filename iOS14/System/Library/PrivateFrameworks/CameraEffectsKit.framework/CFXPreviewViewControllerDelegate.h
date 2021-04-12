/*
* Generated on Thursday, January 14, 2021 at 2:27:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/


@protocol CFXPreviewViewControllerDelegate <NSObject>
@required
-(BOOL)mediaCapturedInFunCam;
-(void)previewViewController:(id)arg1 didFinishExportingMediaItem:(id)arg2 withError:(id)arg3;
-(void)previewViewController:(id)arg1 didProgress:(double)arg2 exportingMediaItem:(id)arg3;
-(void)previewViewController:(id)arg1 didStartExportingMediaItem:(id)arg2;
-(void)previewViewControllerDidHideUserInterface:(id)arg1;
-(void)previewViewControllerDidShowUserInterface:(id)arg1;
-(void)previewViewControllerDidStartEditingText:(id)arg1;
-(void)previewViewControllerDidStopEditingText:(id)arg1;
-(id)selectedAppIdentifierForPreviewViewController:(id)arg1;
-(long long)cameraModeUsedForCapture;
-(long long)calculateMediaInterfaceOrientationForDisplay;
-(id)animojiMetadata;

@end

