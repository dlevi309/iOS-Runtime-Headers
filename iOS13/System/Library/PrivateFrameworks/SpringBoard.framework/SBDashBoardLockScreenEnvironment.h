/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/SBApplicationHosting.h>
#import <libobjc.A.dylib/SBAutoUnlockRule.h>
#import <libobjc.A.dylib/SBBiometricUnlockBehavior.h>
#import <libobjc.A.dylib/SBBiometricUnlockBehaviorDelegate.h>
#import <libobjc.A.dylib/SBButtonEventsHandler.h>
#import <libobjc.A.dylib/CSCoverSheetViewControllerObserver.h>
#import <libobjc.A.dylib/SBLockScreenBacklightControlling.h>
#import <libobjc.A.dylib/SBLockScreenBehaviorSuppressing.h>
#import <libobjc.A.dylib/SBLockScreenBlockedStateObserving.h>
#import <libobjc.A.dylib/SBLockScreenButtonObserving.h>
#import <libobjc.A.dylib/SBLockScreenContentStateProviding.h>
#import <libobjc.A.dylib/SBLockScreenCustomActionStoring.h>
#import <libobjc.A.dylib/SBLockScreenLockingAndUnlocking.h>
#import <libobjc.A.dylib/SBLockScreenMediaControlsPresenting.h>
#import <libobjc.A.dylib/SBLockScreenPasscodeViewPresenting.h>
#import <libobjc.A.dylib/SBLockScreenProximityBehaviorProviding.h>
#import <libobjc.A.dylib/SBLockScreenStatusBarTransitioning.h>
#import <libobjc.A.dylib/SBLockScreenEnvironment.h>

@protocol SBBiometricUnlockBehaviorDelegate;
@class SBFLockScreenActionContext, CSCoverSheetViewController, SBDashBoardAnalyticsEmitter, SBDashBoardApplicationLauncher, SBDashBoardBiometricUnlockController, SBLockScreenActionManager, SBDashBoardEmergencyDialerController, SBDashBoardIdleTimerController, SBDashBoardOrientationController, SBDashBoardPluginController, SBDashBoardPolicyBasedBehaviorProvider, SBDashBoardSetupController, SBDashBoardSpotlightPresenter, NSString, UIViewController;

@interface SBDashBoardLockScreenEnvironment : NSObject <SBApplicationHosting, SBAutoUnlockRule, SBBiometricUnlockBehavior, SBBiometricUnlockBehaviorDelegate, SBButtonEventsHandler, CSCoverSheetViewControllerObserver, SBLockScreenBacklightControlling, SBLockScreenBehaviorSuppressing, SBLockScreenBlockedStateObserving, SBLockScreenButtonObserving, SBLockScreenContentStateProviding, SBLockScreenCustomActionStoring, SBLockScreenLockingAndUnlocking, SBLockScreenMediaControlsPresenting, SBLockScreenPasscodeViewPresenting, SBLockScreenProximityBehaviorProviding, SBLockScreenStatusBarTransitioning, SBLockScreenEnvironment> {

	CSCoverSheetViewController* _coverSheetViewController;
	SBDashBoardAnalyticsEmitter* _analyticsEmitter;
	SBDashBoardApplicationLauncher* _applicationLauncher;
	SBDashBoardBiometricUnlockController* _biometricUnlockController;
	SBLockScreenActionManager* _lockScreenActionManager;
	SBDashBoardEmergencyDialerController* _emergencyDialerController;
	SBDashBoardIdleTimerController* _idleTimerController;
	SBDashBoardOrientationController* _orientationController;
	SBDashBoardPluginController* _pluginController;
	SBDashBoardPolicyBasedBehaviorProvider* _policyBasedBehaviorProvider;
	SBDashBoardSetupController* _setupController;
	SBDashBoardSpotlightPresenter* _spotlightPresenter;
	BOOL _expectsFaceContact;
	id<SBBiometricUnlockBehaviorDelegate> _biometricUnlockBehaviorDelegate;

}

@property (nonatomic,readonly) CSCoverSheetViewController * coverSheetViewController;                                                       //@synthesize coverSheetViewController=_coverSheetViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<SBBiometricUnlockBehaviorDelegate> biometricUnlockBehaviorDelegate;                                  //@synthesize biometricUnlockBehaviorDelegate=_biometricUnlockBehaviorDelegate - In the implementation block
@property (assign,nonatomic) double backlightLevel; 
@property (getter=_customLockScreenActionContext,nonatomic,retain) SBFLockScreenActionContext * customLockScreenActionContext; 
@property (assign,getter=isAuthenticated,nonatomic) BOOL authenticated; 
@property (assign,getter=isShowingMediaControls,nonatomic) BOOL showingMediaControls; 
@property (nonatomic,readonly) BOOL expectsFaceContact;                                                                                     //@synthesize expectsFaceContact=_expectsFaceContact - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowLockStatusBarTime; 
@property (nonatomic,readonly) UIViewController * rootViewController; 
@property (nonatomic,readonly) id<SBAutoUnlockRule> autoUnlockRule; 
@property (nonatomic,readonly) id<SBBiometricUnlockBehavior> biometricUnlockBehavior; 
@property (nonatomic,readonly) id<SBButtonEventsHandler> buttonEventsHandler; 
@property (nonatomic,readonly) id<SBApplicationHosting> applicationHoster; 
@property (nonatomic,readonly) id<SBIdleTimerProviding> idleTimerProvider; 
@property (nonatomic,readonly) id<SBFScreenWakeAnimationTarget> screenWakeAnimationTarget; 
@property (nonatomic,readonly) id<SBLockScreenApplicationLaunching> applicationLauncher; 
@property (nonatomic,readonly) id<SBLockScreenBacklightControlling> backlightController; 
@property (nonatomic,readonly) id<SBLockScreenBehaviorSuppressing> behaviorSuppressor; 
@property (nonatomic,readonly) id<SBLockScreenBlockedStateObserving> blockedStateObserver; 
@property (nonatomic,readonly) id<SBLockScreenButtonObserving> buttonObserver; 
@property (nonatomic,readonly) id<SBLockScreenCallHandling> callController; 
@property (nonatomic,readonly) id<SBLockScreenContentStateProviding> contentStateProvider; 
@property (nonatomic,readonly) id<SBLockScreenCustomActionStoring> customActionStore; 
@property (nonatomic,readonly) id<SBLockScreenIdleTimerControlling> idleTimerController; 
@property (nonatomic,readonly) id<SBLockScreenLockingAndUnlocking> lockController; 
@property (nonatomic,readonly) id<SBLockScreenMediaControlsPresenting> mediaControlsPresenter; 
@property (nonatomic,readonly) id<SBLockScreenPasscodeViewPresenting> passcodeViewPresenter; 
@property (nonatomic,readonly) id<SBLockScreenPluginPresenting> pluginPresenter; 
@property (nonatomic,readonly) id<SBLockScreenProximityBehaviorProviding> proximityBehaviorProvider; 
@property (nonatomic,readonly) id<SBLockScreenStatusBarTransitioning> statusBarTransitionController; 
-(id)init;
-(NSString *)description;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(BOOL)isAuthenticated;
-(void)setAuthenticated:(BOOL)arg1 ;
-(UIViewController *)rootViewController;
-(void)setBacklightLevel:(double)arg1 ;
-(double)backlightLevel;
-(void)jiggleLockIcon;
-(BOOL)isPasscodeLockVisible;
-(void)handleBiometricEvent:(unsigned long long)arg1 ;
-(BOOL)shouldShowLockStatusBarTime;
-(CSCoverSheetViewController *)coverSheetViewController;
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
-(BOOL)canHostAnApp;
-(id)hostedAppSceneHandles;
-(void)hostedAppWillRotateToInterfaceOrientation:(long long)arg1 ;
-(BOOL)isInScreenOffMode;
-(void)coverSheetViewController:(id)arg1 didChangeActiveBehavior:(id)arg2 ;
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
-(id<SBLockScreenIdleTimerControlling>)idleTimerController;
-(id<SBLockScreenApplicationLaunching>)applicationLauncher;
-(id<SBFScreenWakeAnimationTarget>)screenWakeAnimationTarget;
-(id<SBLockScreenBacklightControlling>)backlightController;
-(id<SBButtonEventsHandler>)buttonEventsHandler;
-(id<SBLockScreenBehaviorSuppressing>)behaviorSuppressor;
-(BOOL)expectsFaceContact;
-(id<SBLockScreenCallHandling>)callController;
-(id<SBLockScreenPasscodeViewPresenting>)passcodeViewPresenter;
-(id<SBLockScreenMediaControlsPresenting>)mediaControlsPresenter;
-(id<SBApplicationHosting>)applicationHoster;
-(id<SBLockScreenPluginPresenting>)pluginPresenter;
-(id)initWithCoverSheetViewController:(id)arg1 ;
-(id<SBLockScreenStatusBarTransitioning>)statusBarTransitionController;
-(id<SBLockScreenProximityBehaviorProviding>)proximityBehaviorProvider;
-(id<SBLockScreenCustomActionStoring>)customActionStore;
-(BOOL)biometricUnlockBehavior:(id)arg1 requestsFeedback:(id)arg2 ;
-(BOOL)biometricUnlockBehavior:(id)arg1 requestsUnlock:(id)arg2 withFeedback:(id)arg3 ;
-(id<SBBiometricUnlockBehaviorDelegate>)biometricUnlockBehaviorDelegate;
-(void)setBiometricUnlockBehaviorDelegate:(id<SBBiometricUnlockBehaviorDelegate>)arg1 ;
-(id<SBAutoUnlockRule>)autoUnlockRule;
-(id<SBBiometricUnlockBehavior>)biometricUnlockBehavior;
-(id<SBIdleTimerProviding>)idleTimerProvider;
-(id<SBLockScreenBlockedStateObserving>)blockedStateObserver;
-(id<SBLockScreenButtonObserving>)buttonObserver;
-(id<SBLockScreenContentStateProviding>)contentStateProvider;
-(id<SBLockScreenLockingAndUnlocking>)lockController;
-(void)noteMenuButtonDown;
-(void)noteMenuButtonUp;
-(void)_setExpectsFaceContact:(BOOL)arg1 ;
@end

