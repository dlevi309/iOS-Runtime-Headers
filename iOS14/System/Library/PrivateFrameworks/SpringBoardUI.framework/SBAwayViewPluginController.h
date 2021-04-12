/*
* Generated on Thursday, January 14, 2021 at 2:25:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/SBLockScreenPluginViewController.h>
#import <libobjc.A.dylib/SBLockScreenPluginController.h>

@protocol SBLockScreenPluginAgent;
@class SBLockScreenPluginAction, SBLockScreenPluginMutableAppearanceContext, NSString, _UILegibilitySettings;

@interface SBAwayViewPluginController : UIViewController <SBLockScreenPluginViewController, SBLockScreenPluginController> {

	id<SBLockScreenPluginAgent> _agent;
	SBLockScreenPluginMutableAppearanceContext* _appearance;
	BOOL _viewCanBeDisplayed;

}

@property (assign,nonatomic) long long orientation; 
@property (assign,nonatomic) BOOL viewCanBeDisplayed;                                                                 //@synthesize viewCanBeDisplayed=_viewCanBeDisplayed - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<SBLockScreenPluginAgent> pluginAgent;                                          //@synthesize agent=_agent - In the implementation block
@property (nonatomic,readonly) long long pluginPriority; 
@property (nonatomic,readonly) UIViewController*<SBLockScreenPluginViewController> pluginViewController; 
@property (nonatomic,readonly) id<SBLockScreenPluginAppearance> pluginAppearance; 
@property (nonatomic,retain,readonly) SBLockScreenPluginAction * pluginUnlockAction; 
@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings; 
+(void)enableBundleNamed:(id)arg1 activationContext:(id)arg2 ;
+(void)disableBundleNamed:(id)arg1 deactivationContext:(id)arg2 ;
+(void)enableBundleNamed:(id)arg1 ;
+(void)disableBundleNamed:(id)arg1 ;
-(void)disable;
-(long long)presentationStyle;
-(id)_legibilitySettings;
-(id)init;
-(long long)notificationBehavior;
-(void)setFullscreen:(BOOL)arg1 animated:(BOOL)arg2 ;
-(_UILegibilitySettings *)legibilitySettings;
-(BOOL)handleMenuButtonTap;
-(long long)orientation;
-(BOOL)handleLockButtonPressed;
-(BOOL)handleVolumeUpButtonPressed;
-(BOOL)handleVolumeDownButtonPressed;
-(BOOL)handleHeadsetButtonPressed:(BOOL)arg1 ;
-(BOOL)showStatusBar;
-(UIViewController*<SBLockScreenPluginViewController>)pluginViewController;
-(id)customHeaderView;
-(BOOL)shouldShowLockStatusBarTime;
-(void)setOrientation:(long long)arg1 ;
-(long long)overlayStyle;
-(id)pluginAnimateAppearanceTransition:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(BOOL)pluginAnimatesAppearanceTransition:(BOOL)arg1 ;
-(id<SBLockScreenPluginAgent>)pluginAgent;
-(void)setPluginAgent:(id<SBLockScreenPluginAgent>)arg1 ;
-(long long)pluginPriority;
-(id<SBLockScreenPluginAppearance>)pluginAppearance;
-(void)pluginWillActivateWithContext:(id)arg1 ;
-(void)pluginDidDeactivateWithContext:(id)arg1 ;
-(BOOL)pluginHandleEvent:(long long)arg1 ;
-(SBLockScreenPluginAction *)pluginUnlockAction;
-(id)slideToUnlockText;
-(BOOL)viewCanBeDisplayed;
-(BOOL)showDateView;
-(BOOL)hasCustomSubtitle;
-(id)customSubtitleText;
-(BOOL)showDate;
-(BOOL)allowsSiri;
-(BOOL)allowsLockScreenCamera;
-(BOOL)allowsUnlocking;
-(BOOL)allowsLogout;
-(BOOL)wantsMesaAutoUnlock;
-(BOOL)allowsLockScreenMediaControls;
-(BOOL)allowsControlCenter;
-(BOOL)allowsScreenshots;
-(BOOL)legibilitySettingsOverridesVibrancy;
-(BOOL)isContentViewWhiteUnderSlideToUnlockText;
-(void)_updateAppearanceAndNotify:(BOOL)arg1 ;
-(void)setActivationContext:(id)arg1 ;
-(void)setDeactivationContext:(id)arg1 ;
-(void)purgeView;
-(id)bundleIDForUnlock;
-(unsigned long long)unlockAnimationStyleForDestinationApp:(id)arg1 ;
-(BOOL)shouldDisableOnUnlock;
-(BOOL)shouldDisableOnRelock;
-(/*^block*/id)enableTransitionBlock;
-(BOOL)viewWantsOverlayLayout;
-(BOOL)disablesAwayItemsCompletely;
-(BOOL)shouldAutoHideNotifications;
-(void)setViewCanBeDisplayed:(BOOL)arg1 ;
-(void)setFullscreen:(BOOL)arg1 duration:(double)arg2 ;
-(BOOL)allowsTimer;
-(BOOL)allowsLockScreenHint;
-(BOOL)animateResumingToApplicationWithIdentifier:(id)arg1 ;
-(BOOL)showBatteryChargingText;
-(id)customSubtitleColor;
-(BOOL)allowsPhotoSlideshow;
-(BOOL)handleMenuButtonDoubleTap;
-(BOOL)wantsMenuButtonHeldEvent;
-(BOOL)handleMenuButtonHeld;
-(void)setNeedsLegibilityAppearanceUpdate;
@end

