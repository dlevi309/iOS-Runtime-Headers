/*
* Generated on Monday, March 1, 2021 at 2:35:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKitCore/UIViewController.h>

@protocol BSInvalidatable;
@class NSMutableSet, SBFloatingDockBehaviorAssertion, SBAppStatusBarSettingsAssertion, UIView, NSMapTable, SBIconController, SBUIController, SBHIconManager, _UILegibilitySettings;

@interface SBHomeScreenViewController : UIViewController {

	NSMutableSet* _iconRotationPreventionReasons;
	BOOL _disableAnimationForNextIconRotation;
	SBFloatingDockBehaviorAssertion* _homeScreenFloatingDockAssertion;
	SBAppStatusBarSettingsAssertion* _childOrPresentedStatusBarAssertion;
	UIView* _contentView;
	NSMapTable* _appIconForceTouchControllerOrientationUpdateDeferralAssertions;
	NSMapTable* _appIconForceTouchControllerWindowLevelAssertions;
	BOOL _iconControllerHidden;
	BOOL _homeScreenAutorotatesEvenWhenIconIsDragging;
	SBIconController* _iconController;
	SBUIController* _UIController;
	SBFloatingDockBehaviorAssertion* _widgetEditFloatingDockAssertion;
	id<BSInvalidatable> _widgetEditViewControllerOrientationUpdateDeferralAssertion;

}

@property (nonatomic,retain) SBFloatingDockBehaviorAssertion * widgetEditFloatingDockAssertion;                           //@synthesize widgetEditFloatingDockAssertion=_widgetEditFloatingDockAssertion - In the implementation block
@property (nonatomic,retain) id<BSInvalidatable> widgetEditViewControllerOrientationUpdateDeferralAssertion;              //@synthesize widgetEditViewControllerOrientationUpdateDeferralAssertion=_widgetEditViewControllerOrientationUpdateDeferralAssertion - In the implementation block
@property (assign,getter=isIconControllerHidden,nonatomic) BOOL iconControllerHidden;                                     //@synthesize iconControllerHidden=_iconControllerHidden - In the implementation block
@property (nonatomic,__weak,readonly) SBIconController * iconController;                                                  //@synthesize iconController=_iconController - In the implementation block
@property (nonatomic,__weak,readonly) SBHIconManager * iconManager; 
@property (nonatomic,__weak,readonly) SBUIController * UIController;                                                      //@synthesize UIController=_UIController - In the implementation block
@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings; 
@property (assign,nonatomic) BOOL homeScreenAutorotatesEvenWhenIconIsDragging;                                            //@synthesize homeScreenAutorotatesEvenWhenIconIsDragging=_homeScreenAutorotatesEvenWhenIconIsDragging - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewDidLayoutSubviews;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)shouldAutorotate;
-(void)setNeedsStatusBarAppearanceUpdate;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(_UILegibilitySettings *)legibilitySettings;
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(SBHIconManager *)iconManager;
-(void)_widgetEditViewWillAppear:(id)arg1 ;
-(void)_widgetEditViewDidDisappear:(id)arg1 ;
-(void)_widgetEditViewDidDisappearImplementation;
-(SBIconController *)iconController;
-(void)setAllowIconRotation:(BOOL)arg1 forReason:(id)arg2 ;
-(id)initWithIconController:(id)arg1 UIController:(id)arg2 ;
-(void)setIconControllerHidden:(BOOL)arg1 ;
-(void)nudgeIconInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(BOOL)homeScreenAutorotatesEvenWhenIconIsDragging;
-(void)setHomeScreenAutorotatesEvenWhenIconIsDragging:(BOOL)arg1 ;
-(void)disableAnimationForNextIconRotation;
-(id)_autorotationPreventionReasons;
-(SBUIController *)UIController;
-(void)_appIconForceTouchControllerWillPresentNotification:(id)arg1 ;
-(void)_appIconForceTouchControllerDidDismissNotification:(id)arg1 ;
-(id)homeScreenView;
-(void)_prepareForTransitionToSize:(CGSize)arg1 andInterfaceOrientation:(long long)arg2 withTransitionCoordinator:(id)arg3 ;
-(void)_animateTransitionToSize:(CGSize)arg1 andInterfaceOrientation:(long long)arg2 withTransitionContext:(id)arg3 ;
-(void)_cleanupAfterTransitionToSize:(CGSize)arg1 fromInterfaceOrientation:(long long)arg2 withTransitionContext:(id)arg3 ;
-(SBFloatingDockBehaviorAssertion *)widgetEditFloatingDockAssertion;
-(void)setWidgetEditFloatingDockAssertion:(SBFloatingDockBehaviorAssertion *)arg1 ;
-(id<BSInvalidatable>)widgetEditViewControllerOrientationUpdateDeferralAssertion;
-(void)setWidgetEditViewControllerOrientationUpdateDeferralAssertion:(id<BSInvalidatable>)arg1 ;
-(void)_acquireForceTouchOrientationUpdateDeferralAssertionForIconView:(id)arg1 ;
-(void)_acquireForceTouchWindowLevelAssertionForIconView:(id)arg1 ;
-(void)_relinquishForceTouchOrientationUpdateDeferralAssertionForIconView:(id)arg1 ;
-(void)_relinquishForceTouchWindowLevelAssertionForIconView:(id)arg1 ;
-(BOOL)isIconControllerHidden;
@end

