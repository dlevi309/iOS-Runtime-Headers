/*
* Generated on Thursday, January 14, 2021 at 2:25:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBWorkspace.h>
#import <libobjc.A.dylib/BSTransactionObserver.h>
#import <libobjc.A.dylib/SBBacklightControllerObserver.h>
#import <libobjc.A.dylib/FBSystemServiceDelegate.h>
#import <libobjc.A.dylib/FBProcessManagerObserver.h>
#import <libobjc.A.dylib/FBApplicationProcessObserver.h>
#import <libobjc.A.dylib/BSWatchdogDelegate.h>
#import <libobjc.A.dylib/FBSceneManagerObserver.h>
#import <libobjc.A.dylib/MCProfileConnectionObserver.h>
#import <libobjc.A.dylib/BSPowerMonitorObserver.h>
#import <libobjc.A.dylib/SBPowerDownViewControllerDelegate.h>
#import <libobjc.A.dylib/SBTransientOverlayPresentationManagerDelegate.h>
#import <libobjc.A.dylib/CCSModulePresentationEndpoint.h>
#import <libobjc.A.dylib/SBControlCenterModuleTransientOverlayViewControllerDelegate.h>
#import <libobjc.A.dylib/SBInCallPresentationManagerDelegate.h>

@protocol SBIdleTimerProviding;
@class BSEventQueueLock, SBOrientationAggdLogger, FBDisplayLayoutTransition, SBWorkspaceTransaction, BSWatchdog, NSMutableDictionary, SBAppStatusBarSettingsAssertion, NSMutableSet, SBIdleTimerCoordinatorHelper, SBPowerDownViewController, SBHomeHardwareButtonLongPressDurationAssertion, SBControlCenterModuleTransientOverlayViewController, SBWorkspaceKeyboardFocusController, SBHUDController, SBVolumeControl, SBRingerControl, SBHomeGestureArbiter, SBInCallTransientOverlayManager, SBTransientOverlayPresentationManager, SBInCallPresentationManager, FBSceneManager, NSString;

@interface SBMainWorkspace : SBWorkspace <BSTransactionObserver, SBBacklightControllerObserver, FBSystemServiceDelegate, FBProcessManagerObserver, FBApplicationProcessObserver, BSWatchdogDelegate, FBSceneManagerObserver, MCProfileConnectionObserver, BSPowerMonitorObserver, SBPowerDownViewControllerDelegate, SBTransientOverlayPresentationManagerDelegate, CCSModulePresentationEndpoint, SBControlCenterModuleTransientOverlayViewControllerDelegate, SBInCallPresentationManagerDelegate> {

	BOOL _initialized;
	BSEventQueueLock* _suspensionLock;
	BOOL _medusaEnabled;
	SBOrientationAggdLogger* _orientationAggdLogger;
	FBDisplayLayoutTransition* _displayLayoutTransition;
	SBWorkspaceTransaction* _currentTransaction;
	BSEventQueueLock* _currentTransactionLock;
	BSWatchdog* _transactionWatchdog;
	NSMutableDictionary* _extensionHandlersByType;
	SBAppStatusBarSettingsAssertion* _statusBarAssertion;
	NSMutableSet* _activeSuspendedWorkspaceTransitions;
	SBIdleTimerCoordinatorHelper* _idleTimerCoordinatorHelper;
	SBPowerDownViewController* _powerDownViewController;
	SBHomeHardwareButtonLongPressDurationAssertion* _powerDownLongPressDurationAssertion;
	SBControlCenterModuleTransientOverlayViewController* _presentedControlCenterModuleTransientOverlayViewController;
	NSMutableSet* _ocelotRepairRequests;
	SBWorkspaceKeyboardFocusController* _keyboardFocusController;
	id<SBIdleTimerProviding> _activeIdleTimerProvider;
	SBHUDController* _HUDController;
	SBVolumeControl* _volumeControl;
	SBRingerControl* _ringerControl;
	SBHomeGestureArbiter* _homeGestureArbiter;
	SBInCallTransientOverlayManager* _inCallTransientOverlayManager;
	SBTransientOverlayPresentationManager* _transientOverlayPresentationManager;
	SBInCallPresentationManager* _inCallPresentationManager;
	FBSceneManager* _sceneManager;

}

@property (nonatomic,retain) SBWorkspaceTransaction * currentTransaction;                                                                                       //@synthesize currentTransaction=_currentTransaction - In the implementation block
@property (nonatomic,readonly) FBSceneManager * sceneManager;                                                                                                   //@synthesize sceneManager=_sceneManager - In the implementation block
@property (setter=_setActiveIdleTimerProvider:,getter=_activeIdleTimerProvider,nonatomic,retain) id<SBIdleTimerProviding> activeIdleTimerProvider;              //@synthesize activeIdleTimerProvider=_activeIdleTimerProvider - In the implementation block
@property (getter=isMedusaEnabled,nonatomic,readonly) BOOL medusaEnabled;                                                                                       //@synthesize medusaEnabled=_medusaEnabled - In the implementation block
@property (nonatomic,readonly) SBHUDController * HUDController;                                                                                                 //@synthesize HUDController=_HUDController - In the implementation block
@property (nonatomic,readonly) SBVolumeControl * volumeControl;                                                                                                 //@synthesize volumeControl=_volumeControl - In the implementation block
@property (nonatomic,readonly) SBRingerControl * ringerControl;                                                                                                 //@synthesize ringerControl=_ringerControl - In the implementation block
@property (nonatomic,readonly) SBHomeGestureArbiter * homeGestureArbiter;                                                                                       //@synthesize homeGestureArbiter=_homeGestureArbiter - In the implementation block
@property (nonatomic,readonly) SBInCallTransientOverlayManager * inCallTransientOverlayManager;                                                                 //@synthesize inCallTransientOverlayManager=_inCallTransientOverlayManager - In the implementation block
@property (nonatomic,readonly) SBTransientOverlayPresentationManager * transientOverlayPresentationManager;                                                     //@synthesize transientOverlayPresentationManager=_transientOverlayPresentationManager - In the implementation block
@property (nonatomic,readonly) SBWorkspaceKeyboardFocusController * keyboardFocusController; 
@property (nonatomic,readonly) SBInCallPresentationManager * inCallPresentationManager;                                                                         //@synthesize inCallPresentationManager=_inCallPresentationManager - In the implementation block
@property (getter=isSpringBoardActive,nonatomic,readonly) BOOL springBoardActive; 
@property (nonatomic,retain) id<SBIdleTimerCoordinating> idleTimerCoordinator; 
@property (getter=isPowerDownTransientOverlayTopmost,nonatomic,readonly) BOOL powerDownTransientOverlayFrontmost; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)start;
+(id)debugDescription;
+(id)_sharedInstanceWithNilCheckPolicy:(long long)arg1 ;
+(id)_instanceIfExists;
-(BOOL)_executeTransitionRequest:(id)arg1 options:(unsigned long long)arg2 validator:(/*^block*/id)arg3 ;
-(void)process:(id)arg1 stateDidChangeFromState:(id)arg2 toState:(id)arg3 ;
-(void)applicationProcessDebuggingStateDidChange:(id)arg1 ;
-(id)createRequestForApplicationActivation:(id)arg1 options:(unsigned long long)arg2 ;
-(void)_addRequestCompletionBlock:(/*^block*/id)arg1 toTransaction:(id)arg2 ;
-(BOOL)isPowerDownTransientOverlayTopmost;
-(void)applicationProcessWillLaunch:(id)arg1 ;
-(id)_alertItemForPreventingLaunchOfApp:(id)arg1 fromTrustState:(unsigned long long)arg2 ;
-(BOOL)requestTransitionWithBuilder:(/*^block*/id)arg1 ;
-(void)transactionDidComplete:(id)arg1 ;
-(id)createRequestWithOptions:(unsigned long long)arg1 ;
-(void)systemService:(id)arg1 handleOpenApplicationRequest:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)setIdleTimerCoordinator:(id<SBIdleTimerCoordinating>)arg1 ;
-(id<SBIdleTimerCoordinating>)idleTimerCoordinator;
-(BOOL)executeTransitionRequest:(id)arg1 withValidator:(/*^block*/id)arg2 ;
-(FBSceneManager *)sceneManager;
-(id)transactionForTransitionRequest:(id)arg1 ;
-(void)_addStateCaptureHandlers;
-(BOOL)executeTransitionRequest:(id)arg1 ;
-(void)_coversheetDidDismiss;
-(void)backlightController:(id)arg1 didAnimateBacklightToFactor:(float)arg2 source:(long long)arg3 ;
-(void)_noteDidWakeFromSleep;
-(void)processManager:(id)arg1 didAddProcess:(id)arg2 ;
-(id)_applicationForIdentifier:(id)arg1 ;
-(id)_selectTransactionForAppActivationRequest:(id)arg1 ;
-(id)transientOverlayPresentationManager:(id)arg1 acquireControlCenterWindowLevelAssertionWithReason:(id)arg2 windowLevel:(double)arg3 ;
-(SBInCallPresentationManager *)inCallPresentationManager;
-(void)processManager:(id)arg1 didRemoveProcess:(id)arg2 ;
-(SBWorkspaceTransaction *)currentTransaction;
-(id)initWithEventQueue:(id)arg1 ;
-(BOOL)requestTransitionWithOptions:(unsigned long long)arg1 builder:(/*^block*/id)arg2 validator:(/*^block*/id)arg3 ;
-(void)_updateFrontMostApplicationEventPort;
-(id)idleTimerProvider:(id)arg1 didProposeBehavior:(id)arg2 forReason:(id)arg3 ;
-(BOOL)transientOverlayPresentationManager:(id)arg1 shouldResignFirstResponderForKeyWindow:(id)arg2 ;
-(void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(BOOL)isSpringBoardActive;
-(id)systemServiceApplicationInfoProvider:(id)arg1 ;
-(id)init;
-(void)watchdogStarted:(id)arg1 ;
-(BOOL)dismissTransientOverlayViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)transientOverlayPresentationManager:(id)arg1 didDismissViewController:(id)arg2 wasTopmostPresentation:(BOOL)arg3 ;
-(long long)inCallPresentationManagerInterfaceOrientationForTransientOverlayPresentation:(id)arg1 ;
-(void)_applyCommonActivationSettings:(id)arg1 forRequestWithOptions:(id)arg2 clientProcess:(id)arg3 application:(id)arg4 ;
-(id)coordinatorRequestedIdleTimerBehavior:(id)arg1 ;
-(void)transientOverlayPresentationManager:(id)arg1 preferredWhitePointAdaptivityStyleDidChangeWithAnimationSettings:(id)arg2 ;
-(void)_proposeIdleTimerBehaviorForReason:(id)arg1 ;
-(void)systemServicePrepareForExit:(id)arg1 andRelaunch:(BOOL)arg2 ;
-(SBHUDController *)HUDController;
-(void)_broadcastCurrentTransaction;
-(void)_handleOpenApplicationRequest:(id)arg1 options:(id)arg2 activationSettings:(id)arg3 origin:(id)arg4 withResult:(/*^block*/id)arg5 ;
-(id)inCallPresentationManager:(id)arg1 createPresentationSessionWithSceneHandle:(id)arg2 ;
-(BOOL)presentTransientOverlayViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)_setCurrentTransactionForRequest:(id)arg1 fallbackProvider:(/*^block*/id)arg2 ;
-(id)transientOverlayPresentationManager:(id)arg1 acquireBannerLongLookWindowLevelAssertionWithReason:(id)arg2 windowLevel:(double)arg3 ;
-(BOOL)dismissAllTransientOverlayPresentationsAnimated:(BOOL)arg1 ;
-(NSString *)debugDescription;
-(unsigned long long)defaultSupportedInterfaceOrientationsForTransientOverlayPresentationManager:(id)arg1 ;
-(void)presentPowerDownTransientOverlay;
-(SBInCallTransientOverlayManager *)inCallTransientOverlayManager;
-(void)_handleUserActionRequest:(id)arg1 options:(id)arg2 activationSettings:(id)arg3 origin:(id)arg4 withResult:(/*^block*/id)arg5 ;
-(void)applicationProcessDidExit:(id)arg1 withContext:(id)arg2 ;
-(id)controlCenterPresentationObservationTokenForTransientOverlayPresentationManager:(id)arg1 ;
-(BOOL)transientOverlayPresentationManager:(id)arg1 shouldRestoreFirstResponderForKeyWindow:(id)arg2 ;
-(void)_destroyApplicationSceneEntity:(id)arg1 ;
-(BOOL)_executeApplicationTransitionRequest:(id)arg1 ;
-(id)_generateIdleTimerBehaviorForReason:(id)arg1 ;
-(void)inCallPresentationManagerRequestsHandlingOfDeferredUILock:(id)arg1 ;
-(void)systemService:(id)arg1 canActivateApplication:(id)arg2 withResult:(/*^block*/id)arg3 ;
-(long long)inCallPresentationManagerInterfaceOrientationForBannerPresentation:(id)arg1 ;
-(void)_dismissPresentedControlCenterModule:(/*^block*/id)arg1 ;
-(void)transientOverlayPresentationManagerRequestsSiriDismissal:(id)arg1 animated:(BOOL)arg2 ;
-(void)_suspend;
-(void)_executeSuspendedTransactionForRequest:(id)arg1 ;
-(id)_selectTransactionForAppRelaunch:(id)arg1 ;
-(void)powerDownViewControllerRequestsDismissal:(id)arg1 ;
-(id)transientOverlayPresentationManager:(id)arg1 acquireInteractiveScreenshotGestureDisabledAssertionWithReason:(id)arg2 ;
-(BOOL)_isApplicationRunningAsViewService:(id)arg1 ;
-(id)transientOverlayPresentationManager:(id)arg1 acquireDeviceOrientationUpdateDeferralAssertionWithReason:(id)arg2 ;
-(id)_selectTransactionForReturningToTheLockScreenWithRequest:(id)arg1 fromApp:(id)arg2 ;
-(SBWorkspaceKeyboardFocusController *)keyboardFocusController;
-(void)powerDownViewControllerRequestsPowerDown:(id)arg1 ;
-(void)systemService:(id)arg1 handleActions:(id)arg2 origin:(id)arg3 withResult:(/*^block*/id)arg4 ;
-(void)_coversheetDidPresent;
-(void)transientOverlayPresentationManager:(id)arg1 willChangeTopmostViewControllerInterfaceOrientationToOrientation:(long long)arg2 ;
-(void)_finishInitialization;
-(id)_activeIdleTimerProvider;
-(BOOL)_preflightTransitionRequest:(id)arg1 forExecution:(BOOL)arg2 ;
-(void)transientOverlayPresentationManager:(id)arg1 unregisterCoverSheetExternalBehaviorProvider:(id)arg2 ;
-(id)_selectTransactionForTransientOverlayPresentationRequest:(id)arg1 ;
-(id)transientOverlayPresentationManager:(id)arg1 acquireWallpaperAnimationSuspensionAssertionWithReason:(id)arg2 ;
-(SBTransientOverlayPresentationManager *)transientOverlayPresentationManager;
-(id)currentStatusBarSettingsForTransientOverlayPresentationManager:(id)arg1 ;
-(SBRingerControl *)ringerControl;
-(id)transientOverlayPresentationManager:(id)arg1 acquireSiriWindowLevelAssertionWithReason:(id)arg2 windowLevel:(double)arg3 ;
-(long long)defaultPreferredInterfaceOrientationForPresentationForTransientOverlayPresentationManager:(id)arg1 ;
-(void)_updateMedusaEnablementAndNotify:(BOOL)arg1 ;
-(id)siriPresentationObservationTokenForTransientOverlayPresentationManager:(id)arg1 ;
-(void)processDidExit:(id)arg1 ;
-(BOOL)isMedusaEnabled;
-(void)transientOverlayPresentationManager:(id)arg1 willPresentViewController:(id)arg2 ;
-(void)_cleanupAppRepairRequest:(id)arg1 ;
-(void)_handleBuddyLaunchFinished;
-(void)_determineSourceForTransitionRequest:(id)arg1 ;
-(void)systemServicePrepareForShutdown:(id)arg1 withOptions:(unsigned long long)arg2 ;
-(void)powerMonitorSystemWillSleep:(id)arg1 ;
-(void)powerMonitorSystemDidWakeFromSleep:(id)arg1 ;
-(id)transientOverlayPresentationManager:(id)arg1 acquireHideAppStatusBarAssertionWithReason:(id)arg2 animated:(BOOL)arg3 ;
-(id)transientOverlayPresentationManager:(id)arg1 acquireDisableAutoUnlockAssertionWithReason:(id)arg2 ;
-(BOOL)_executeTransientOverlayTransitionRequest:(id)arg1 ;
-(SBHomeGestureArbiter *)homeGestureArbiter;
-(void)presentModuleWithIdentifier:(id)arg1 options:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_setActiveIdleTimerProvider:(id)arg1 ;
-(id)bannerLongLookPresentationObservationTokenForTransientOverlayPresentationManager:(id)arg1 ;
-(void)powerMonitorSystemSleepRequestAborted:(id)arg1 ;
-(void)_applicationEntityWasRemovedFromAppSwitcher:(id)arg1 ;
-(BOOL)_canExecuteTransitionRequest:(id)arg1 forExecution:(BOOL)arg2 ;
-(id)_handlerForExtensionPoint:(id)arg1 ;
-(BOOL)_canImplicitlyUnlockAtLockScreenWhileAuthenticatedFromOrigin:(id)arg1 givenOrigin:(id)arg2 trustedRequest:(BOOL)arg3 outReason:(id*)arg4 ;
-(void)_unregisterHandler:(id)arg1 forExtensionPoint:(id)arg2 ;
-(id)_selectTransactionForAppActivationUnderMainScreenLockRequest:(id)arg1 ;
-(void)_resume;
-(void)setCurrentTransaction:(SBWorkspaceTransaction *)arg1 ;
-(void)_handleTrustedOpenRequestForApplication:(id)arg1 options:(id)arg2 activationSettings:(id)arg3 origin:(id)arg4 withResult:(/*^block*/id)arg5 ;
-(void)transientOverlayPresentationManagerRequestsControlCenterDismissal:(id)arg1 animated:(BOOL)arg2 ;
-(BOOL)_applicationProcessExited:(id)arg1 withContext:(id)arg2 ;
-(BOOL)isKeyboardVisibleForSpringBoardForTransientOverlayPresentationManager:(id)arg1 ;
-(id)_validateRequestToOpenApplication:(id)arg1 options:(id)arg2 origin:(id)arg3 error:(out id*)arg4 ;
-(void)_registerHandler:(id)arg1 forExtensionPoint:(id)arg2 ;
-(id)_transactionForTransitionRequest:(id)arg1 ;
-(void)_removeApplicationEntities:(id)arg1 withDestroyalIntent:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)_handleSetupExited:(id)arg1 ;
-(void)dismissPowerDownTransientOverlayWithCompletion:(/*^block*/id)arg1 ;
-(id)_selectTransactionForAppActivationUnderMainScreenLock:(id)arg1 withResult:(/*^block*/id)arg2 ;
-(void)_attemptUnlockToApplication:(id)arg1 showPasscode:(BOOL)arg2 origin:(id)arg3 givenOrigin:(id)arg4 options:(id)arg5 completion:(/*^block*/id)arg6 ;
-(void)applicationProcessDidLaunch:(id)arg1 ;
-(void)controlCenterModuleTransientOverlayViewControllerNeedsDismissal:(id)arg1 ;
-(id)transientOverlayPresentationManager:(id)arg1 newSceneDeactivationAssertionWithReason:(long long)arg2 ;
-(BOOL)defaultShouldAutorotateForTransientOverlayPresentationManager:(id)arg1 ;
-(id)transientOverlayPresentationManager:(id)arg1 acquireProximitySensorEnabledAssertionWithReason:(id)arg2 ;
-(void)systemService:(id)arg1 isPasscodeLockedOrBlockedWithResult:(/*^block*/id)arg2 ;
-(void)_handleUntrustedOpenRequestForApplication:(id)arg1 options:(id)arg2 activationSettings:(id)arg3 origin:(id)arg4 withResult:(/*^block*/id)arg5 ;
-(BOOL)canExecuteTransitionRequest:(id)arg1 ;
-(id)_selectTransactionForReturningToTheLockScreenFromApp:(id)arg1 animated:(BOOL)arg2 forceToBuddy:(BOOL)arg3 withResult:(/*^block*/id)arg4 ;
-(void)updateFrontMostApplicationEventPort;
-(void)dealloc;
-(id)_selectTransactionForAppEntityRemoved:(id)arg1 ;
-(void)powerDownViewControllerDidDisappear:(id)arg1 ;
-(void)transientOverlayPresentationManagerRequestsAppIconForceTouchDismissal:(id)arg1 animated:(BOOL)arg2 ;
-(void)watchdogFired:(id)arg1 ;
-(void)powerMonitorSystemWillWakeFromSleep:(id)arg1 ;
-(SBVolumeControl *)volumeControl;
-(void)transientOverlayPresentationManager:(id)arg1 registerCoverSheetExternalBehaviorProvider:(id)arg2 ;
-(void)_initializeAndObserveDefaults;
@end
