/*
* Generated on Thursday, January 14, 2021 at 2:26:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/


@protocol CAMControlVisibilityDelegate <NSObject>
@property (nonatomic,readonly) BOOL shouldHideTopBar; 
@property (nonatomic,readonly) BOOL shouldHideFlashButton; 
@property (nonatomic,readonly) BOOL shouldHideHDRButton; 
@property (nonatomic,readonly) BOOL shouldHideTimerButton; 
@property (nonatomic,readonly) BOOL shouldHideFlipButton; 
@property (nonatomic,readonly) BOOL shouldHideElapsedTimeView; 
@property (nonatomic,readonly) BOOL shouldHideLivePhotoButton; 
@property (nonatomic,readonly) BOOL shouldHidePortraitModeInstructionLabel; 
@property (nonatomic,readonly) BOOL shouldHideQRCodeInstructionLabel; 
@property (nonatomic,readonly) BOOL shouldHideFilterNameBadge; 
@property (nonatomic,readonly) BOOL shouldHideLightingControl; 
@property (nonatomic,readonly) BOOL shouldLayoutLightingNameBadgeAtBottom; 
@property (nonatomic,readonly) BOOL shouldShiftPreviewForUtilityBar; 
@required
-(BOOL)shouldHideLightingControl;
-(BOOL)shouldHideTimerButton;
-(BOOL)shouldShiftPreviewForUtilityBar;
-(BOOL)shouldHideTopBar;
-(BOOL)shouldHideHDRButton;
-(BOOL)shouldHideQRCodeInstructionLabel;
-(BOOL)shouldHidePortraitModeInstructionLabel;
-(BOOL)shouldHideFilterNameBadge;
-(BOOL)shouldHideLightingNameBadgeForOrientation:(long long)arg1;
-(BOOL)shouldHideLivePhotoButton;
-(BOOL)shouldHideFlipButton;
-(BOOL)shouldHideElapsedTimeView;
-(BOOL)shouldHideFlashButton;
-(BOOL)shouldLayoutLightingNameBadgeAtBottom;

@end

