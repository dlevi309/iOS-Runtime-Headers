/*
* Generated on Monday, March 1, 2021 at 2:33:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)shouldLayoutLightingNameBadgeAtBottom;
-(BOOL)shouldHideLightingNameBadgeForOrientation:(long long)arg1;
-(BOOL)shouldHideTopBar;
-(BOOL)shouldHideFlashButton;
-(BOOL)shouldHideHDRButton;
-(BOOL)shouldHideTimerButton;
-(BOOL)shouldHideFlipButton;
-(BOOL)shouldHideElapsedTimeView;
-(BOOL)shouldHideLivePhotoButton;
-(BOOL)shouldHidePortraitModeInstructionLabel;
-(BOOL)shouldHideQRCodeInstructionLabel;
-(BOOL)shouldHideFilterNameBadge;
-(BOOL)shouldHideLightingControl;
-(BOOL)shouldShiftPreviewForUtilityBar;

@end

