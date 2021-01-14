/*
* Generated on Thursday, January 14, 2021 at 2:25:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setInScreenOffMode:(BOOL)arg1 ;
-(void)setCustomLockScreenActionContext:(SBFLockScreenActionContext *)arg1 ;
-(BOOL)shouldUnlockUIOnKeyDownEvent;
-(BOOL)handleHomeButtonLongPress;
-(void)setAuthenticated:(BOOL)arg1 ;
-(BOOL)suppressesControlCenter;
-(void)noteResetRestoreStateUpdated;
-(void)finishUIUnlockFromSource:(int)arg1 ;
-(void)startLockScreenFadeInAnimationForSource:(int)arg1 ;
-(void)setPasscodeLockVisible:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)hostedAppSceneHandle;
-(BOOL)handleHeadsetButtonPress:(BOOL)arg1 ;
-(id)_customLockScreenActionContext;
-(BOOL)isMainPageVisible;
-(BOOL)handleLockButtonPress;
-(BOOL)isUnlockDisabled;
-(BOOL)isShowingMediaControls;
-(void)prepareForUILock;
-(id)hostedAppSceneHandles;
-(BOOL)shouldAutoUnlockForSource:(int)arg1 ;
-(void)setPasscodeLockVisible:(BOOL)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)handleVolumeDownButtonPress;
-(BOOL)isAuthenticated;
-(void)hostedAppWillRotateToInterfaceOrientation:(long long)arg1 ;
-(void)setShowingMediaControls:(BOOL)arg1 ;
-(BOOL)suppressesScreenshots;
-(BOOL)shouldDisableALS;
-(BOOL)expectsFaceContact;
-(void)prepareForUIUnlock;
-(BOOL)canHostAnApp;
-(void)updateStatusBarForLockScreenTeardown;
-(BOOL)suppressesBanners;
-(id<SBBiometricUnlockBehaviorDelegate>)biometricUnlockBehaviorDelegate;
-(id)succinctDescription;
-(BOOL)handleHomeButtonDoublePress;
-(void)setBacklightLevel:(double)arg1 ;
-(BOOL)isInScreenOffMode;
-(void)setIdleTimerCoordinator:(id<SBIdleTimerCoordinating>)arg1 ;
-(id<SBIdleTimerCoordinating>)idleTimerCoordinator;
-(BOOL)handleVolumeUpButtonPress;
-(void)noteMenuButtonDown;
-(void)noteMenuButtonUp;
-(BOOL)handleHomeButtonPress;
-(void)handleBiometricEvent:(unsigned long long)arg1 ;
-(void)disableLockScreenPluginWithContext:(id)arg1 ;
-(void)enableLockScreenPluginWithContext:(id)arg1 ;
-(id)coordinatorRequestedIdleTimerBehavior:(id)arg1 ;
-(void)updateStatusBarForLockScreenComeback;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)noteDeviceBlockedStatusUpdated;
-(double)backlightLevel;
-(void)exitEmergencyDialerAnimated:(BOOL)arg1 ;
-(void)emergencyDialerExitedWithError:(id)arg1 ;
-(void)setBiometricUnlockBehaviorDelegate:(id<SBBiometricUnlockBehaviorDelegate>)arg1 ;
-(void)launchEmergencyDialer;
-(BOOL)willUIUnlockFromSource:(int)arg1 ;
-(BOOL)contentOccludesBackground;
-(void)viewDidLoad;
-(id)createHomeButtonSuppressAfterUnlockRecognizerForUnlockSource:(int)arg1 ;
-(BOOL)isMakingEmergencyCall;
-(BOOL)canBeDeactivatedForUIUnlockFromSource:(int)arg1 ;
-(void)conformsToSBApplicationHosting;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(id)createHomeButtonShowPasscodeRecognizerForHomeButtonPress;
-(UIVisualEffectView *)wakeEffectView;
-(void)setWakeEffectView:(UIVisualEffectView *)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(void)launchEmergencyDialerAnimated:(BOOL)arg1 ;
-(BOOL)isHostingAnApp;
-(BOOL)isPasscodeLockVisible;
-(id)succinctDescriptionBuilder;
-(SBFLockScreenWakeAnimator *)lockScreenWakeAnimator;
-(void)setInScreenOffMode:(BOOL)arg1 forAutoUnlock:(BOOL)arg2 fromUnlockSource:(int)arg3 ;
-(BOOL)shouldShowLockStatusBarTime;
-(void)jiggleLockIcon;
-(void)conformsToSBCoverSheetSlidingViewControllerContentViewController;
@end

