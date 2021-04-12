/*
* Generated on Thursday, January 14, 2021 at 2:26:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/


@protocol CAMControlDrawerDelegate <NSObject>
@required
-(void)controlDrawerDidCreateLowLightSlider:(id)arg1;
-(void)controlDrawer:(id)arg1 didSelectMenuItemForControlType:(long long)arg2;
-(void)controlDrawerDidCreateExposureSlider:(id)arg1;
-(void)controlDrawerDidCreateFilterScrubber:(id)arg1;
-(void)controlDrawer:(id)arg1 wantsFilterScrubberVisible:(BOOL)arg2;
-(void)controlDrawer:(id)arg1 didChangeLivePhotoMode:(long long)arg2;
-(void)controlDrawerFlashButtonUnavailable:(id)arg1;
-(void)controlDrawer:(id)arg1 didChangeHDRMode:(long long)arg2;
-(void)controlDrawer:(id)arg1 didChangeTimerDuration:(long long)arg2;
-(void)controlDrawer:(id)arg1 didChangeAspectRatio:(long long)arg2;
-(void)controlDrawerDidCreateApertureSlider:(id)arg1;
-(void)controlDrawer:(id)arg1 didChangeFlashMode:(long long)arg2;
-(void)controlDrawerDidCreateIntensitySlider:(id)arg1;
-(void)controlDrawer:(id)arg1 didCreateControlForType:(long long)arg2;

@end

