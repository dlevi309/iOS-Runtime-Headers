/*
* Generated on Monday, March 1, 2021 at 2:35:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView, SBFLockScreenDateView, _UILegibilityLabel, UIStatusBar, _UILegibilitySettings, SBWallpaperController, SBUILegibilityView, UILabel, CSPageControl, SBUICallToActionLabel, SBUIProudLockIconView, CSQuickActionsView, SBHomeGrabberView;

@interface SBLockScreenPreviewView : UIView {

	UIView* _wallpaperView;
	SBFLockScreenDateView* _dateView;
	_UILegibilityLabel* _slideToUnlockLegibilityLabel;
	UIStatusBar* _statusBar;
	_UILegibilitySettings* _legibilitySettings;
	SBWallpaperController* _wallpaperController;
	SBUILegibilityView* _cameraView;
	UILabel* _slideToUnlockView;
	CSPageControl* _dashBoardPageControl;
	SBUICallToActionLabel* _callToActionLabel;
	SBUIProudLockIconView* _proudLockIconView;
	CSQuickActionsView* _quickActionsView;
	SBHomeGrabberView* _homeGrabberView;

}
-(void)layoutSubviews;
-(void)_layoutDateView;
-(void)_layoutWallpaperView;
-(void)_layoutQuickActionsView;
-(void)_layoutPageControl;
-(void)_layoutCallToActionLabel;
-(void)_setupWallpaperViewWithImage:(id)arg1 ;
-(void)_setupDateViewWithOptions:(unsigned long long)arg1 ;
-(void)_setupStatusBar;
-(void)_setupPageControl;
-(void)_setupCallToActionLabel;
-(void)_setupProudLockIconView;
-(void)_setupQuickActionView;
-(void)_setupHomeGrabberView;
-(void)_layoutStatusBar;
-(void)_layoutProudLockIconView;
-(void)_layoutHomeGrabberView;
-(id)initWithFrame:(CGRect)arg1 wallpaperController:(id)arg2 options:(unsigned long long)arg3 wallpaperImage:(id)arg4 ;
@end

