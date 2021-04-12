/*
* Generated on Monday, March 1, 2021 at 2:36:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/SBPasscodeEntryTransientOverlayViewControllerDelegate.h>
#import <libobjc.A.dylib/SBFPrivateAuthenticationObserver.h>
#import <libobjc.A.dylib/CSCoverSheetViewControllerDelegate.h>
#import <libobjc.A.dylib/CSWallpaperColorProvider.h>
#import <libobjc.A.dylib/SBLockScreenBiometricAuthenticationCoordinatorDelegate.h>
#import <libobjc.A.dylib/SBHomeButtonShowPasscodeRecognizerDelegate.h>
#import <libobjc.A.dylib/SBHomeButtonSuppressAfterUnlockRecognizerDelegate.h>
#import <libobjc.A.dylib/SBWallpaperObserver.h>
#import <libobjc.A.dylib/SBCoverSheetPresentationDelegate.h>
#import <libobjc.A.dylib/SBUILockStateProvider.h>
#import <libobjc.A.dylib/SBTapToWakeDelegate.h>
#import <libobjc.A.dylib/SBSRemoteAlertHandleObserver.h>
#import <libobjc.A.dylib/SBIdleTimerProviding.h>
#import <libobjc.A.dylib/SBIdleTimerCoordinating.h>

@protocol SBLockScreenEnvironment, SBHomeButtonShowPasscodeRecognizer, SBHomeButtonSuppressAfterUnlockRecognizer, SBFLockOutStatusProvider;
@class SBLockScreenBiometricAuthenticationCoordinator, SBCoverSheetBiometricResourceObserver, SBPearlInterlockObserver, SBLockScreenUnlockRequest, SBPasscodeEntryTransientOverlayViewController, SBFAuthenticationAssertion, SBLockScreenDisabledAssertionManager, SBLockScreenAutoUnlockAggregateRule, SBSRemoteAlertHandle, SBFUserAuthenticationController, SBLiftToWakeManager, SBTapToWakeController, SBFMouseButtonDownGestureRecognizer, NSMutableDictionary, NSMutableSet, SBIdleTimerCoordinatorHelper, UINotificationFeedbackGenerator, SBLockScreenOrientationManager, CSCoverSheetViewController, NSString;

@interface SBLockScreenManager : NSObject <BSDescriptionProviding, SBPasscodeEntryTransientOverlayViewControllerDelegate, SBFPrivateAuthenticationObserver, CSCoverSheetViewControllerDelegate, CSWallpaperColorProvider, SBLockScreenBiometricAuthenticationCoordinatorDelegate, SBHomeButtonShowPasscodeRecognizerDelegate, SBHomeButtonSuppressAfterUnlockRecognizerDelegate, SBWallpaperObserver, SBCoverSheetPresentationDelegate, SBUILockStateProvider, SBTapToWakeDelegate, SBSRemoteAlertHandleObserver, SBIdleTimerProviding, SBIdleTimerCoordinating> {

	SBLockScreenBiometricAuthenticationCoordinator* _biometricAuthenticationCoordinator;
	SBCoverSheetBiometricResourceObserver* _biometricResourceObserver;
	SBPearlInterlockObserver* _pearlInterlockObserver;
	id<SBLockScreenEnvironment> _lockScreenEnvironment;
	id<SBHomeButtonShowPasscodeRecognizer> _homeButtonShowPasscodeRecognizer;
	id<SBHomeButtonSuppressAfterUnlockRecognizer> _homeButtonSuppressAfterUnlockRecognizer;
	BOOL _allowDisablePasscodeLockAssertion;
	BOOL _allowUILockUnlock;
	BOOL _isScreenOn;
	BOOL _isUILocked;
	SBLockScreenUnlockRequest* _unlockRequest;
	BOOL _saveUnlockRequest;
	BOOL _uiHasBeenLockedOnce;
	BOOL _uiUnlocking;
	SBPasscodeEntryTransientOverlayViewController* _passcodeEntryTransientOverlayViewController;
	BOOL _passcodeEntryTransientOverlayViewControllerPresentedAnimated;
	SBFAuthenticationAssertion* _sustainAuthenticationWhileUIUnlockedAssertion;
	SBLockScreenDisabledAssertionManager* _lockScreenDisabledAssertionManager;
	BOOL _isInLostMode;
	SBLockScreenAutoUnlockAggregateRule* _autoUnlockRuleAggregator;
	BOOL _shouldTransitionIrisWallpaperToStillWhenPlaybackFinishes;
	SBSRemoteAlertHandle* _wakeToRemoteAlertHandle;
	/*^block*/id _alertLaunchFinish;
	id<SBFLockOutStatusProvider> _lockOutController;
	SBFUserAuthenticationController* _userAuthController;
	SBLiftToWakeManager* _liftToWakeManager;
	SBTapToWakeController* _tapToWakeController;
	SBFMouseButtonDownGestureRecognizer* _mouseButtonDownGesture;
	NSMutableDictionary* _mesaCoordinatorDisabledAssertions;
	NSMutableDictionary* _mesaWalletPreArmDisabledAssertions;
	NSMutableSet* _mesaWalletPreArmDisabledReasons;
	NSMutableDictionary* _mesaAutoUnlockingDisabledAssertions;
	NSMutableDictionary* _mesaUnlockingDisabledAssertions;
	SBIdleTimerCoordinatorHelper* _idleTimerCoordinatorHelper;
	UINotificationFeedbackGenerator* _authenticationFeedbackGenerator;
	BOOL _isWaitingToLockUI;
	SBLockScreenOrientationManager* _lockScreenOrientationManager;
	/*^block*/id _unlockActionBlock;

}

@property (assign,getter=isUIUnlocking,nonatomic) BOOL UIUnlocking;                                                                                       //@synthesize uiUnlocking=_uiUnlocking - In the implementation block
@property (setter=_setLockOutController:,getter=_lockOutController,nonatomic,retain) id<SBFLockOutStatusProvider> lockOutController;                      //@synthesize lockOutController=_lockOutController - In the implementation block
@property (setter=_setUserAuthController:,getter=_userAuthController,nonatomic,retain) SBFUserAuthenticationController * userAuthController;              //@synthesize userAuthController=_userAuthController - In the implementation block
@property (setter=_setLiftToWakeManager:,getter=_liftToWakeManager,nonatomic,retain) SBLiftToWakeManager * liftToWakeManager;                             //@synthesize liftToWakeManager=_liftToWakeManager - In the implementation block
@property (setter=_setTapToWakeController:,getter=_tapToWakeController,nonatomic,retain) SBTapToWakeController * tapToWakeController;                     //@synthesize tapToWakeController=_tapToWakeController - In the implementation block
@property (nonatomic,copy) id unlockActionBlock;                                                                                                          //@synthesize unlockActionBlock=_unlockActionBlock - In the implementation block
@property (nonatomic,readonly) id<SBLockScreenEnvironment> lockScreenEnvironment;                                                                         //@synthesize lockScreenEnvironment=_lockScreenEnvironment - In the implementation block
@property (nonatomic,readonly) CSCoverSheetViewController * coverSheetViewController; 
@property (nonatomic,readonly) id<SBNotificationDestination> notificationDestination; 
@property (nonatomic,readonly) SBLockScreenOrientationManager * lockScreenOrientationManager;                                                             //@synthesize lockScreenOrientationManager=_lockScreenOrientationManager - In the implementation block
@property (readonly) BOOL isUILocked;                                                                                                                     //@synthesize isUILocked=_isUILocked - In the implementation block
@property (readonly) BOOL isWaitingToLockUI;                                                                                                              //@synthesize isWaitingToLockUI=_isWaitingToLockUI - In the implementation block
@property (readonly) BOOL shouldHandlePocketStateChanges; 
@property (readonly) BOOL shouldTapToWake; 
@property (readonly) BOOL shouldPlayLockSound; 
@property (readonly) BOOL isLockScreenActive; 
@property (readonly) BOOL isLockScreenVisible; 
@property (readonly) BOOL bioAuthenticatedWhileMenuButtonDown; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)_sharedInstanceCreateIfNeeded:(BOOL)arg1 ;
+(id)sharedInstanceIfExists;
-(id)init;
-(NSString *)description;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(BOOL)handleKeyHIDEvent:(IOHIDEventRef)arg1 ;
-(void)remoteAlertHandleDidActivate:(id)arg1 ;
-(void)extendedKeybagLockStateChanged:(BOOL)arg1 ;
-(CSCoverSheetViewController *)coverSheetViewController;
-(id)_lockOutController;
-(void)homeButtonSuppressAfterUnlockRecognizerRequestsEndOfSuppression:(id)arg1 ;
-(void)_setLockOutController:(id)arg1 ;
-(void)coverSheetViewController:(id)arg1 requestsTouchIDDisabled:(BOOL)arg2 forReason:(id)arg3 ;
-(BOOL)unlockWithRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)coverSheetViewControllerIrisPlayingDidFinish:(id)arg1 ;
-(id<SBNotificationDestination>)notificationDestination;
-(id)averageColorForCurrentWallpaper;
-(void)setBiometricAutoUnlockingDisabled:(BOOL)arg1 forReason:(id)arg2 ;
-(id)newLegibilitySettingsProvider;
-(void)setPasscodeVisible:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)attemptUnlockWithPasscode:(id)arg1 finishUIUnlock:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(double)contrastForCurrentWallpaper;
-(void)homeButtonShowPasscodeRecognizerDidFailToRecognize:(id)arg1 ;
-(void)homeButtonShowPasscodeRecognizerRequestsPasscodeUIToBeShown:(id)arg1 ;
-(void)enableLostModePlugin;
-(void)lockUIFromSource:(int)arg1 withOptions:(id)arg2 ;
-(void)_authenticationStateChanged:(id)arg1 ;
-(BOOL)isUILocked;
-(BOOL)isLockScreenActive;
-(BOOL)hasUIEverBeenLocked;
-(void)loadViewsIfNeeded;
-(BOOL)isInLostMode;
-(void)_noteStartupTransitionWillBegin;
-(void)_noteStartupTransitionDidBegin;
-(id<SBLockScreenEnvironment>)lockScreenEnvironment;
-(void)_setIdleTimerCoordinator:(id)arg1 ;
-(id)coordinatorRequestedIdleTimerBehavior:(id)arg1 ;
-(id)idleTimerProvider:(id)arg1 didProposeBehavior:(id)arg2 forReason:(id)arg3 ;
-(BOOL)unlockUIFromSource:(int)arg1 withOptions:(id)arg2 ;
-(BOOL)shouldPlayLockSound;
-(void)wallpaperDidChangeForVariant:(long long)arg1 ;
-(void)lockUIFromSource:(int)arg1 withOptions:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)handleTransitionRequest:(id)arg1 ;
-(id)biometricAuthenticationCoordinator;
-(BOOL)isUIUnlocking;
-(BOOL)_attemptUnlockWithPasscode:(id)arg1 finishUIUnlock:(BOOL)arg2 ;
-(void)attemptUnlockWithPasscode:(id)arg1 ;
-(BOOL)shouldTapToWake;
-(void)remoteLock:(BOOL)arg1 ;
-(void)_setMesaUnlockingDisabled:(BOOL)arg1 forReason:(id)arg2 ;
-(void)tapToWakeControllerDidRecognizeWakeGesture:(id)arg1 ;
-(void)tapToWakeControllerDidRecognizePencilWakeGesture:(id)arg1 ;
-(BOOL)isLockScreenDisabledForAssertion;
-(void)addLockScreenDisableAssertion:(id)arg1 ;
-(void)removeLockScreenDisableAssertion:(id)arg1 ;
-(void)noteMenuButtonSinglePress;
-(BOOL)handlesHomeButtonSinglePresses;
-(void)noteMenuButtonDoublePress;
-(void)coverSheetPresentationManager:(id)arg1 unlockWithRequest:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)lockScreenViewControllerWillPresent;
-(void)lockScreenViewControllerDidPresent;
-(void)lockScreenViewControllerWillDismiss;
-(void)lockScreenViewControllerDidDismiss;
-(void)lockScreenViewControllerRequestsUnlock;
-(SBLockScreenOrientationManager *)lockScreenOrientationManager;
-(BOOL)biometricAuthenticationCoordinator:(id)arg1 requestsAuthenticationFeedback:(id)arg2 ;
-(BOOL)biometricAuthenticationCoordinator:(id)arg1 requestsUnlockWithIntent:(int)arg2 ;
-(BOOL)bioAuthenticatedWhileMenuButtonDown;
-(void)_setupModeChanged;
-(void)passcodeEntryTransientOverlayViewControllerDidDisappear:(id)arg1 ;
-(void)passcodeEntryTransientOverlayViewControllerRequestsDismissal:(id)arg1 ;
-(void)passcodeEntryTransientOverlayViewControllerRequestsEmergencyCall:(id)arg1 ;
-(BOOL)passcodeEntryTransientOverlayViewController:(id)arg1 authenticatePasscode:(id)arg2 ;
-(void)updateSpringBoardStatusBarForLockScreenTeardown;
-(BOOL)shouldLockUIAfterEndingCall;
-(BOOL)isLockScreenVisible;
-(BOOL)isWaitingToLockUI;
-(id)_newLockScreenEnvironment;
-(void)_reallySetUILocked:(BOOL)arg1 ;
-(void)activationChanged:(id)arg1 ;
-(BOOL)_lockUI;
-(void)_deviceBlockedChanged:(id)arg1 ;
-(void)_resetOrRestoreStateChanged:(id)arg1 ;
-(void)_lockScreenDimmed:(id)arg1 ;
-(void)_handleBacklightLevelWillChange:(id)arg1 ;
-(void)_handleBacklightDidTurnOff:(id)arg1 ;
-(void)_activeCallStateChanged;
-(void)_setUserAuthController:(id)arg1 ;
-(void)_wakeScreenForMouseButtonDown:(id)arg1 ;
-(void)_evaluatePreArmDisabledAssertions;
-(BOOL)_shouldLockAfterEndingTelephonyCall;
-(BOOL)_shouldLockAfterEndingFaceTimeCall;
-(id)_tapToWakeController;
-(void)_disconnectActiveCallIfNeededFromSource:(int)arg1 ;
-(void)_activateLockScreenAnimated:(BOOL)arg1 animationProvider:(/*^block*/id)arg2 automatically:(BOOL)arg3 inScreenOffMode:(BOOL)arg4 dimInAnimation:(BOOL)arg5 dismissNotificationCenter:(BOOL)arg6 completion:(/*^block*/id)arg7 ;
-(void)_clearAuthenticationLockAssertion;
-(void)_relockUIForButtonlikeSource:(int)arg1 afterCall:(BOOL)arg2 ;
-(BOOL)_canHandleTransitionRequest:(id)arg1 ;
-(void)_evaluateWallpaperMode;
-(void)setUIUnlocking:(BOOL)arg1 ;
-(void)_setHomeButtonSuppressAfterUnlockRecognizer:(id)arg1 ;
-(void)_setUILocked:(BOOL)arg1 ;
-(void)_sendUILockStateChangedNotification;
-(void)_runUnlockActionBlock:(BOOL)arg1 ;
-(BOOL)_unlockWithRequest:(id)arg1 cancelPendingRequests:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)_setWalletPreArmDisabled:(BOOL)arg1 forReason:(id)arg2 ;
-(void)_wakeScreenForTapToWake;
-(BOOL)_attemptUnlockWithPasscode:(id)arg1 mesa:(BOOL)arg2 finishUIUnlock:(BOOL)arg3 ;
-(BOOL)_isPasscodeVisible;
-(void)_handleAuthenticationFeedback:(id)arg1 ;
-(BOOL)_shouldEmulateInterstitialPresentation;
-(void)_emulateInterstitialPasscodePresentation;
-(BOOL)_setPasscodeVisible:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_setHomeButtonShowPasscodeRecognizer:(id)arg1 ;
-(BOOL)_shouldDisconnectCallWhenLockingForActiveAudioRoute;
-(BOOL)isPasscodeEntryTransientOverlayVisible;
-(void)_postLockCompletedNotification:(BOOL)arg1 ;
-(void)_setMesaCoordinatorDisabled:(BOOL)arg1 forReason:(id)arg2 ;
-(void)_createAuthenticationAssertion;
-(BOOL)_isUnlockDisabled;
-(BOOL)_finishUIUnlockFromSource:(int)arg1 withOptions:(id)arg2 ;
-(void)_setMesaAutoUnlockingDisabled:(BOOL)arg1 forReason:(id)arg2 ;
-(BOOL)_canAttemptRealUIUnlockIgnoringBacklightNonsenseWithReason:(out id*)arg1 ;
-(void)_prepareWallpaperForInteractiveMode;
-(void)_prepareWallpaperForStaticMode;
-(BOOL)_attemptUnlockWithPasscode:(id)arg1 mesa:(BOOL)arg2 finishUIUnlock:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)_lockFeaturesForRemoteLock:(BOOL)arg1 ;
-(void)exitLostModeIfNecessaryFromRemoteRequest:(BOOL)arg1 ;
-(void)_maybeLaunchSetupForcingCheckIfNotBricked:(BOOL)arg1 ;
-(BOOL)_shouldUnlockUIOnKeyDownEvent;
-(void)coverSheetViewController:(id)arg1 unlockWithRequest:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)averageColorForCurrentWallpaperInScreenRect:(CGRect)arg1 ;
-(BOOL)shouldHandlePocketStateChanges;
-(void)startUIUnlockFromSource:(int)arg1 withOptions:(id)arg2 ;
-(void)attemptUnlockWithMesa;
-(void)activateLostModeForRemoteLock:(BOOL)arg1 ;
-(BOOL)_shouldBeInSetupMode;
-(id)_userAuthController;
-(id)_liftToWakeManager;
-(void)_setLiftToWakeManager:(id)arg1 ;
-(void)_setTapToWakeController:(id)arg1 ;
-(id)unlockActionBlock;
-(void)setUnlockActionBlock:(id)arg1 ;
@end

