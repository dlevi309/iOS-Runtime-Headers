/*
* Generated on Monday, March 1, 2021 at 2:36:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/SBApplicationHosting.h>
#import <libobjc.A.dylib/SBAutoUnlockRule.h>
#import <libobjc.A.dylib/SBBiometricUnlockBehavior.h>
#import <libobjc.A.dylib/SBButtonEventsHandler.h>
#import <libobjc.A.dylib/SBCoverSheetSlidingViewControllerContentViewController.h>
#import <libobjc.A.dylib/SBIdleTimerProviding.h>
#import <libobjc.A.dylib/SBLockScreenBacklightControlling.h>
#import <libobjc.A.dylib/SBLockScreenBehaviorSuppressing.h>
#import <libobjc.A.dylib/SBLockScreenBlockedStateObserving.h>
#import <libobjc.A.dylib/SBLockScreenButtonObserving.h>
#import <libobjc.A.dylib/SBLockScreenCallHandling.h>
#import <libobjc.A.dylib/SBLockScreenContentStateProviding.h>
#import <libobjc.A.dylib/SBLockScreenCustomActionStoring.h>
#import <libobjc.A.dylib/SBLockScreenIdleTimerControlling.h>
#import <libobjc.A.dylib/SBLockScreenLockingAndUnlocking.h>
#import <libobjc.A.dylib/SBLockScreenMediaControlsPresenting.h>
#import <libobjc.A.dylib/SBLockScreenPasscodeViewPresenting.h>
#import <libobjc.A.dylib/SBLockScreenPluginPresenting.h>
#import <libobjc.A.dylib/SBLockScreenProximityBehaviorProviding.h>
#import <libobjc.A.dylib/SBLockScreenStatusBarTransitioning.h>

@protocol SBIdleTimerCoordinating, SBBiometricUnlockBehaviorDelegate;
@class SBFLockScreenActionContext, UIVisualEffectView, SBFLockScreenWakeAnimator, NSString;

@interface SBLockScreenViewControllerBase : UIViewController <SBApplicationHosting, SBAutoUnlockRule, SBBiometricUnlockBehavior, SBButtonEventsHandler, SBCoverSheetSlidingViewControllerContentViewController, SBIdleTimerProviding, SBLockScreenBacklightControlling, SBLockScreenBehaviorSuppressing, SBLockScreenBlockedStateObserving, SBLockScreenButtonObserving, SBLockScreenCallHandling, SBLockScreenContentStateProviding, SBLockScreenCustomActionStoring, SBLockScreenIdleTimerControlling, SBLockScreenLockingAndUnlocking, SBLockScreenMediaControlsPresenting, SBLockScreenPasscodeViewPresenting, SBLockScreenPluginPresenting, SBLockScreenProximityBehaviorProviding, SBLockScreenStatusBarTransitioning> {

	SBFLockScreenActionContext* _customLockScreenActionContext;
	BOOL _authenticated;
	BOOL _expectsFaceContact;
	id<SBIdleTimerCoordinating> _idleTimerCoordinator;
	double _backlightLevel;
	id<SBBiometricUnlockBehaviorDelegate> _biometricUnlockBehaviorDelegate;
	UIVisualEffectView* _wakeEffectView;
	SBFLockScreenWakeAnimator* _lockScreenWakeAnimator;

}

@property (assign,nonatomic,__weak) UIVisualEffectView * wakeEffectView;                                                                    //@synthesize wakeEffectView=_wakeEffectView - In the implementation block
@property (nonatomic,readonly) SBFLockScreenWakeAnimator * lockScreenWakeAnimator;                                                          //@synthesize lockScreenWakeAnimator=_lockScreenWakeAnimator - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<SBBiometricUnlockBehaviorDelegate> biometricUnlockBehaviorDelegate;                                  //@synthesize biometricUnlockBehaviorDelegate=_biometricUnlockBehaviorDelegate - In the implementation block
@property (nonatomic,readonly) BOOL contentOccludesBackground; 
@property (assign,nonatomic) double backlightLevel;                                                                                         //@synthesize backlightLevel=_backlightLevel - In the implementation block
@property (getter=_customLockScreenActionContext,nonatomic,retain) SBFLockScreenActionContext * customLockScreenActionContext; 
@property (assign,nonatomic,__weak) id<SBIdleTimerCoordinating> idleTimerCoordinator;                                                       //@synthesize idleTimerCoordinator=_idleTimerCoordinator - In the implementation block
@property (assign,getter=isAuthenticated,nonatomic) BOOL authenticated;                                                                     //@synthesize authenticated=_authenticated - In the implementation block
@property (assign,getter=isShowingMediaControls,nonatomic) BOOL showingMediaControls; 
@property (nonatomic,readonly) BOOL expectsFaceContact;                                                                                     //@synthesize expectsFaceContact=_expectsFaceContact - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowLockStatusBarTime; 
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(BOOL)isAuthenticated;
-(void)setAuthenticated:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)setBacklightLevel:(double)arg1 ;
-(double)backlightLevel;
-(void)jiggleLockIcon;
-(BOOL)isPasscodeLockVisible;
-(BOOL)isMakingEmergencyCall;
-(void)setWakeEffectView:(UIVisualEffectView *)arg1 ;
-(UIVisualEffectView *)wakeEffectView;
-(void)handleBiometricEvent:(unsigned long long)arg1 ;
-(BOOL)shouldShowLockStatusBarTime;
-(BOOL)isShowingMediaControls;
-(void)setPasscodeLockVisible:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)noteDeviceBlockedStatusUpdated;
-(BOOL)isHostingAnApp;
-(id)hostedAppSceneHandle;
-(void)setPasscodeLockVisible:(BOOL)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)isUnlockDisabled;
-(id)_customLockScreenActionContext;
-(void)setInScreenOffMode:(BOOL)arg1 forAutoUnlock:(BOOL)arg2 fromUnlockSource:(int)arg3 ;
-(BOOL)isMainPageVisible;
-(void)setCustomLockScreenActionContext:(SBFLockScreenActionContext *)arg1 ;
-(void)launchEmergencyDialer;
-(BOOL)canHostAnApp;
-(id)hostedAppSceneHandles;
-(void)hostedAppWillRotateToInterfaceOrientation:(long long)arg1 ;
-(BOOL)isInScreenOffMode;
-(SBFLockScreenWakeAnimator *)lockScreenWakeAnimator;
-(BOOL)suppressesBanners;
-(BOOL)suppressesControlCenter;
-(BOOL)suppressesScreenshots;
-(BOOL)handleHomeButtonPress;
-(BOOL)handleHomeButtonDoublePress;
-(BOOL)handleHomeButtonLongPress;
-(BOOL)handleLockButtonPress;
-(BOOL)handleVolumeUpButtonPress;
-(BOOL)handleVolumeDownButtonPress;
-(BOOL)handleHeadsetButtonPress:(BOOL)arg1 ;
-(BOOL)willUIUnlockFromSource:(int)arg1 ;
-(void)prepareForUIUnlock;
-(void)prepareForUILock;
-(void)finishUIUnlockFromSource:(int)arg1 ;
-(BOOL)canBeDeactivatedForUIUnlockFromSource:(int)arg1 ;
-(BOOL)contentOccludesBackground;
-(void)setInScreenOffMode:(BOOL)arg1 ;
-(BOOL)shouldDisableALS;
-(void)noteResetRestoreStateUpdated;
-(BOOL)shouldUnlockUIOnKeyDownEvent;
-(void)setShowingMediaControls:(BOOL)arg1 ;
-(id)createHomeButtonShowPasscodeRecognizerForHomeButtonPress;
-(id)createHomeButtonSuppressAfterUnlockRecognizerForUnlockSource:(int)arg1 ;
-(BOOL)shouldAutoUnlockForSource:(int)arg1 ;
-(void)updateStatusBarForLockScreenTeardown;
-(void)updateStatusBarForLockScreenComeback;
-(void)startLockScreenFadeInAnimationForSource:(int)arg1 ;
-(void)setIdleTimerCoordinator:(id<SBIdleTimerCoordinating>)arg1 ;
-(id)coordinatorRequestedIdleTimerBehavior:(id)arg1 ;
-(BOOL)expectsFaceContact;
-(id<SBIdleTimerCoordinating>)idleTimerCoordinator;
-(void)enableLockScreenPluginWithContext:(id)arg1 ;
-(void)disableLockScreenPluginWithContext:(id)arg1 ;
-(void)launchEmergencyDialerAnimated:(BOOL)arg1 ;
-(void)exitEmergencyDialerAnimated:(BOOL)arg1 ;
-(void)launchInCallAlert;
-(void)emergencyDialerExitedWithError:(id)arg1 ;
-(id<SBBiometricUnlockBehaviorDelegate>)biometricUnlockBehaviorDelegate;
-(void)setBiometricUnlockBehaviorDelegate:(id<SBBiometricUnlockBehaviorDelegate>)arg1 ;
-(void)noteMenuButtonDown;
-(void)noteMenuButtonUp;
@end

