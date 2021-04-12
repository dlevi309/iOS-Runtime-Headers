/*
* Generated on Monday, March 1, 2021 at 2:33:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/


@protocol CAMControlDrawerDelegate <NSObject>
@required
-(void)controlDrawer:(id)arg1 didChangeFlashMode:(long long)arg2;
-(void)controlDrawer:(id)arg1 didChangeLivePhotoMode:(long long)arg2;
-(void)controlDrawer:(id)arg1 didChangeAspectRatio:(long long)arg2;
-(void)controlDrawer:(id)arg1 didChangeTimerDuration:(long long)arg2;
-(void)controlDrawer:(id)arg1 didChangeHDRMode:(long long)arg2;
-(void)controlDrawerFlashButtonUnavailable:(id)arg1;
-(void)controlDrawer:(id)arg1 wantsFilterScrubberVisible:(BOOL)arg2;
-(void)controlDrawerDidCreateFilterScrubber:(id)arg1;
-(void)controlDrawerDidCreateApertureSlider:(id)arg1;
-(void)controlDrawerDidCreateIntensitySlider:(id)arg1;
-(void)controlDrawerDidCreateLowLightSlider:(id)arg1;
-(void)controlDrawer:(id)arg1 didCreateControlForType:(long long)arg2;
-(void)controlDrawer:(id)arg1 didSelectMenuItemForControlType:(long long)arg2;

@end

