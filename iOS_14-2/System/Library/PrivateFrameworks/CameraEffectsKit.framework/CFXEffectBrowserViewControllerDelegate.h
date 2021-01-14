/*
* Generated on Thursday, January 14, 2021 at 2:27:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/


@protocol CFXEffectBrowserViewControllerDelegate <CFXEffectBrowserContentPresenterDelegate>
@optional
-(void)effectBrowserViewController:(id)arg1 didSelectAppWithIdentifier:(id)arg2;
-(void)effectBrowserViewController:(id)arg1 didDismissPickerForEffectType:(id)arg2;
-(void)effectBrowserViewController:(id)arg1 didPresentPickerForEffectType:(id)arg2;
-(void)effectBrowserViewControllerDidStartCaptureSession:(id)arg1;
-(void)effectBrowserViewControllerDidStopCaptureSession:(id)arg1;
-(id)mediaItemForEffectBrowserViewController:(id)arg1;
-(BOOL)shouldRotateCellsForDeviceOrientation;

@required
-(BOOL)shouldAlwaysPresentExpandedAppsForEffectBrowserViewController:(id)arg1;
-(void)effectBrowserViewController:(id)arg1 didDropOverlayEffect:(id)arg2 atScreenLocation:(CGPoint)arg3 atScreenSize:(CGSize)arg4 rotationAngle:(double)arg5;
-(void)effectBrowserViewController:(id)arg1 didRemoveAllEffectsOfType:(id)arg2;
-(void)effectBrowserViewController:(id)arg1 didSelectEffect:(id)arg2;
-(void)effectBrowserViewController:(id)arg1 filterPickerPreviewBackgroundImageAtSizeInPixels:(CGSize)arg2 completion:(/*^block*/id)arg3;
-(id)selectedFilterIdentifierForEffectBrowserViewController:(id)arg1;
-(id)selectedAnimojiIdentifierForEffectBrowserViewController:(id)arg1;
-(id)localizedPromptForHidingAnimojiForEffectBrowserViewController:(id)arg1;
-(BOOL)allowLandscapeForEffectBrowserViewController:(id)arg1;

@end

