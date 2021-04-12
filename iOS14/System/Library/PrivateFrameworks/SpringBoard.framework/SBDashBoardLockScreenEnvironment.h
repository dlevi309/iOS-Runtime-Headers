/*
* Generated on Thursday, January 14, 2021 at 2:25:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id<SBLockScreenApplicationLaunching>)applicationLauncher;
-(id)hostedAppSceneHandle;
-(id<SBLockScreenIdleTimerControlling>)idleTimerController;
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
-(BOOL)handleVolumeUpButtonPress;
-(void)noteMenuButtonDown;
-(void)noteMenuButtonUp;
-(BOOL)biometricUnlockBehavior:(id)arg1 requestsUnlock:(id)arg2 withFeedback:(id)arg3 ;
-(BOOL)biometricUnlockBehavior:(id)arg1 requestsFeedback:(id)arg2 ;
-(BOOL)handleHomeButtonPress;
-(id<SBLockScreenCallHandling>)callController;
-(void)handleBiometricEvent:(unsigned long long)arg1 ;
-(id<SBLockScreenBehaviorSuppressing>)behaviorSuppressor;
-(id)init;
-(void)updateStatusBarForLockScreenComeback;
-(CSCoverSheetViewController *)coverSheetViewController;
-(id<SBLockScreenCustomActionStoring>)customActionStore;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)noteDeviceBlockedStatusUpdated;
-(double)backlightLevel;
-(id<SBApplicationHosting>)applicationHoster;
-(id<SBLockScreenLockingAndUnlocking>)lockController;
-(void)setBiometricUnlockBehaviorDelegate:(id<SBBiometricUnlockBehaviorDelegate>)arg1 ;
-(id<SBButtonEventsHandler>)buttonEventsHandler;
-(id<SBLockScreenBlockedStateObserving>)blockedStateObserver;
-(id)initWithCoverSheetViewController:(id)arg1 ;
-(id<SBLockScreenProximityBehaviorProviding>)proximityBehaviorProvider;
-(void)coverSheetViewController:(id)arg1 didChangeActiveBehavior:(id)arg2 ;
-(id<SBAutoUnlockRule>)autoUnlockRule;
-(NSString *)description;
-(BOOL)willUIUnlockFromSource:(int)arg1 ;
-(UIViewController *)rootViewController;
-(id<SBLockScreenPasscodeViewPresenting>)passcodeViewPresenter;
-(id<SBIdleTimerProviding>)idleTimerProvider;
-(id<SBLockScreenStatusBarTransitioning>)statusBarTransitionController;
-(id<SBLockScreenPluginPresenting>)pluginPresenter;
-(id)createHomeButtonSuppressAfterUnlockRecognizerForUnlockSource:(int)arg1 ;
-(id<SBFScreenWakeAnimationTarget>)screenWakeAnimationTarget;
-(id<SBLockScreenButtonObserving>)buttonObserver;
-(BOOL)canBeDeactivatedForUIUnlockFromSource:(int)arg1 ;
-(id<SBLockScreenContentStateProviding>)contentStateProvider;
-(id<SBLockScreenMediaControlsPresenting>)mediaControlsPresenter;
-(void)conformsToSBApplicationHosting;
-(id)createHomeButtonShowPasscodeRecognizerForHomeButtonPress;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(BOOL)isHostingAnApp;
-(BOOL)isPasscodeLockVisible;
-(id)succinctDescriptionBuilder;
-(id<SBLockScreenBacklightControlling>)backlightController;
-(void)setInScreenOffMode:(BOOL)arg1 forAutoUnlock:(BOOL)arg2 fromUnlockSource:(int)arg3 ;
-(void)_setExpectsFaceContact:(BOOL)arg1 ;
-(id<SBBiometricUnlockBehavior>)biometricUnlockBehavior;
-(BOOL)shouldShowLockStatusBarTime;
-(void)jiggleLockIcon;
@end

