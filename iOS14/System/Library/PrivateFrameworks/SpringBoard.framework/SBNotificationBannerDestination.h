/*
* Generated on Thursday, January 14, 2021 at 2:25:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/NCNotificationViewControllerDelegatePrivate.h>
#import <libobjc.A.dylib/CSExternalBehaviorProviding.h>
#import <libobjc.A.dylib/SBFIdleTimerBehaviorProviding.h>
#import <libobjc.A.dylib/SBFMotionGestureObserver.h>
#import <libobjc.A.dylib/SBAssistantObserver.h>
#import <libobjc.A.dylib/SBNotificationHomeAffordanceControllerClient.h>
#import <libobjc.A.dylib/NCNotificationManagementContentProviderDelegate.h>
#import <libobjc.A.dylib/NCNotificationManagementViewPresenterDelegate.h>
#import <libobjc.A.dylib/NCNotificationPresentableViewControllerDelegate.h>
#import <libobjc.A.dylib/SBUICoronaAnimationControllerParticipant.h>
#import <libobjc.A.dylib/SBBacklightControllerObserver.h>
#import <libobjc.A.dylib/NCNotificationAlertDestination.h>
#import <libobjc.A.dylib/SBNotificationDestinationHomeButtonPressHandler.h>
#import <libobjc.A.dylib/SBFNotificationExtensionVisibilityProviding.h>
#import <libobjc.A.dylib/NCNotificationViewControllerDelegate.h>
#import <libobjc.A.dylib/NCNotificationViewControllerObserving.h>

@protocol NCNotificationAlertDestinationDelegate, OS_dispatch_source, BSInvalidatable, BNPresentable;
@class SBAssistantController, SBLockScreenManager, SBSetupManager, SBNotificationPresentableViewController, NCNotificationViewController, NSObject, UIApplicationSceneDeactivationAssertion, SBAppStatusBarSettingsAssertion, SBInAppStatusBarHiddenAssertion, NSMutableSet, DNDEventBehaviorResolutionService, NCNotificationManagementViewPresenter, SBDashBoardLegibilityProvider, NSString, BSServiceConnectionEndpoint;

@interface SBNotificationBannerDestination : NSObject <NCNotificationViewControllerDelegatePrivate, CSExternalBehaviorProviding, SBFIdleTimerBehaviorProviding, SBFMotionGestureObserver, SBAssistantObserver, SBNotificationHomeAffordanceControllerClient, NCNotificationManagementContentProviderDelegate, NCNotificationManagementViewPresenterDelegate, NCNotificationPresentableViewControllerDelegate, SBUICoronaAnimationControllerParticipant, SBBacklightControllerObserver, NCNotificationAlertDestination, SBNotificationDestinationHomeButtonPressHandler, SBFNotificationExtensionVisibilityProviding, NCNotificationViewControllerDelegate, NCNotificationViewControllerObserving> {

	BOOL _userInteractionInProgress;
	id<NCNotificationAlertDestinationDelegate> _delegate;
	SBAssistantController* _assistantController;
	SBLockScreenManager* _lockScreenManager;
	SBSetupManager* _setupManager;
	SBNotificationPresentableViewController* _presentedPresentableVC;
	NCNotificationViewController* _notificationViewControllerForActiveDragSession;
	NSObject*<OS_dispatch_source> _presentTimer;
	NSObject*<OS_dispatch_source> _replaceTimer;
	NSObject*<OS_dispatch_source> _dismissTimer;
	UIApplicationSceneDeactivationAssertion* _resignActiveAssertion;
	SBAppStatusBarSettingsAssertion* _systemStatusBarAssertion;
	SBInAppStatusBarHiddenAssertion* _appsStatusBarAssertion;
	NSMutableSet* _destinationObservers;
	id<BSInvalidatable> _idleTimerDisableAssertion;
	id<BSInvalidatable> _starModeDisableAssertion;
	id<BSInvalidatable> _bannerGestureRecognizerPriorityAssertion;
	DNDEventBehaviorResolutionService* _dndEventBehaviorResolutionService;
	NCNotificationManagementViewPresenter* _notificationManagementPresenter;
	SBDashBoardLegibilityProvider* _dashBoardLegibilityProvider;
	id<BNPresentable> _presentablePendingSnapshot;

}

@property (nonatomic,retain,readonly) NCNotificationViewController * presentedBanner; 
@property (setter=_setPresentedPresentableVC:,nonatomic,retain) SBNotificationPresentableViewController * presentedPresentableVC;                                                                                                          //@synthesize presentedPresentableVC=_presentedPresentableVC - In the implementation block
@property (setter=_setNotificationViewControllerForActiveDragSession:,getter=_notificationViewControllerForActiveDragSession,nonatomic,retain) NCNotificationViewController * notificationViewControllerForActiveDragSession;              //@synthesize notificationViewControllerForActiveDragSession=_notificationViewControllerForActiveDragSession - In the implementation block
@property (assign,getter=isUserInteractionInProgress,nonatomic) BOOL userInteractionInProgress;                                                                                                                                            //@synthesize userInteractionInProgress=_userInteractionInProgress - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> presentTimer;                                                                                                                                                                   //@synthesize presentTimer=_presentTimer - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> replaceTimer;                                                                                                                                                                   //@synthesize replaceTimer=_replaceTimer - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> dismissTimer;                                                                                                                                                                   //@synthesize dismissTimer=_dismissTimer - In the implementation block
@property (nonatomic,retain) UIApplicationSceneDeactivationAssertion * resignActiveAssertion;                                                                                                                                              //@synthesize resignActiveAssertion=_resignActiveAssertion - In the implementation block
@property (nonatomic,retain) SBAppStatusBarSettingsAssertion * systemStatusBarAssertion;                                                                                                                                                   //@synthesize systemStatusBarAssertion=_systemStatusBarAssertion - In the implementation block
@property (nonatomic,retain) SBInAppStatusBarHiddenAssertion * appsStatusBarAssertion;                                                                                                                                                     //@synthesize appsStatusBarAssertion=_appsStatusBarAssertion - In the implementation block
@property (nonatomic,retain) NSMutableSet * destinationObservers;                                                                                                                                                                          //@synthesize destinationObservers=_destinationObservers - In the implementation block
@property (nonatomic,retain) id<BSInvalidatable> idleTimerDisableAssertion;                                                                                                                                                                //@synthesize idleTimerDisableAssertion=_idleTimerDisableAssertion - In the implementation block
@property (nonatomic,retain) id<BSInvalidatable> starModeDisableAssertion;                                                                                                                                                                 //@synthesize starModeDisableAssertion=_starModeDisableAssertion - In the implementation block
@property (nonatomic,retain) id<BSInvalidatable> bannerGestureRecognizerPriorityAssertion;                                                                                                                                                 //@synthesize bannerGestureRecognizerPriorityAssertion=_bannerGestureRecognizerPriorityAssertion - In the implementation block
@property (nonatomic,retain) DNDEventBehaviorResolutionService * dndEventBehaviorResolutionService;                                                                                                                                        //@synthesize dndEventBehaviorResolutionService=_dndEventBehaviorResolutionService - In the implementation block
@property (nonatomic,retain) NCNotificationManagementViewPresenter * notificationManagementPresenter;                                                                                                                                      //@synthesize notificationManagementPresenter=_notificationManagementPresenter - In the implementation block
@property (nonatomic,retain) SBDashBoardLegibilityProvider * dashBoardLegibilityProvider;                                                                                                                                                  //@synthesize dashBoardLegibilityProvider=_dashBoardLegibilityProvider - In the implementation block
@property (assign,nonatomic,__weak) id<BNPresentable> presentablePendingSnapshot;                                                                                                                                                          //@synthesize presentablePendingSnapshot=_presentablePendingSnapshot - In the implementation block
@property (nonatomic,retain) SBAssistantController * assistantController;                                                                                                                                                                  //@synthesize assistantController=_assistantController - In the implementation block
@property (nonatomic,retain) SBLockScreenManager * lockScreenManager;                                                                                                                                                                      //@synthesize lockScreenManager=_lockScreenManager - In the implementation block
@property (nonatomic,retain) SBSetupManager * setupManager;                                                                                                                                                                                //@synthesize setupManager=_setupManager - In the implementation block
@property (getter=isPresentingBanner,nonatomic,readonly) BOOL presentingBanner; 
@property (getter=isPresentingStickyBanner,nonatomic,readonly) BOOL presentingStickyBanner; 
@property (getter=isPresentingBannerInLongLook,nonatomic,readonly) BOOL presentingBannerInLongLook; 
@property (getter=isPresentingEmergencyNotification,nonatomic,readonly) BOOL presentingEmergencyNotification; 
@property (getter=isPreventingAutomaticLock,nonatomic,readonly) BOOL preventingAutomaticLock; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long scrollingStrategy; 
@property (nonatomic,readonly) long long notificationBehavior; 
@property (nonatomic,readonly) unsigned long long restrictedCapabilities; 
@property (nonatomic,readonly) long long proximityDetectionMode; 
@property (nonatomic,copy,readonly) NSString * coverSheetIdentifier; 
@property (nonatomic,readonly) long long participantState; 
@property (nonatomic,readonly) long long idleTimerDuration; 
@property (nonatomic,readonly) long long idleTimerMode; 
@property (nonatomic,readonly) long long idleWarnMode; 
@property (nonatomic,readonly) double customIdleExpirationTimeout; 
@property (nonatomic,readonly) double customIdleWarningTimeout; 
@property (assign,nonatomic,__weak) id<NCNotificationAlertDestinationDelegate> delegate;                                                                                                                                                   //@synthesize delegate=_delegate - In the implementation block
@property (getter=isAlertDestination,nonatomic,readonly) BOOL alertDestination; 
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) BSServiceConnectionEndpoint * endpoint; 
+(id)_test_notificationRequestForBannerWithIcon;
-(SBAssistantController *)assistantController;
-(void)_dismissBannerCompleted:(id)arg1 ;
-(void)postNotificationRequest:(id)arg1 ;
-(SBLockScreenManager *)lockScreenManager;
-(DNDEventBehaviorResolutionService *)dndEventBehaviorResolutionService;
-(void)_startReplaceTimer;
-(void)didReceiveRaiseGesture;
-(void)_lockStateChanged;
-(BOOL)notificationPresentableViewControllerShouldPresentLongLook:(id)arg1 ;
-(SBSetupManager *)setupManager;
-(id)notificationManagementViewPresenter:(id)arg1 sectionSettingsForSectionIdentifier:(id)arg2 ;
-(void)presentableWillAppearAsBanner:(id)arg1 ;
-(void)notificationManagementViewPresenter:(id)arg1 setAllowsNotifications:(BOOL)arg2 forNotificationRequest:(id)arg3 withSectionIdentifier:(id)arg4 ;
-(void)presentableDidDisappearAsBanner:(id)arg1 withReason:(id)arg2 ;
-(void)setDndEventBehaviorResolutionService:(DNDEventBehaviorResolutionService *)arg1 ;
-(id)unhideHomeAffordanceAnimationSettingsForNotificationViewController:(id)arg1 ;
-(void)assistantDidDisappear:(id)arg1 ;
-(void)notificationViewControllerWillBeginUserInteraction:(id)arg1 ;
-(void)backlightController:(id)arg1 didAnimateBacklightToFactor:(float)arg2 source:(long long)arg3 ;
-(id)settleHomeAffordanceAnimationBehaviorDescriptionForNotificationViewController:(id)arg1 ;
-(void)_dismissPresentedBannerAnimated:(BOOL)arg1 reason:(id)arg2 forceIfSticky:(BOOL)arg3 ;
-(void)destinationDidBecomeDisabled;
-(id<BSInvalidatable>)starModeDisableAssertion;
-(void)_setupTimers;
-(void)setReplaceTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(BOOL)_shouldScreenTimeSuppressNotificationsForBundleIdentifier:(id)arg1 ;
-(BOOL)isPreventingAutomaticLock;
-(void)_performCancelAction;
-(void)setLockScreenManager:(SBLockScreenManager *)arg1 ;
-(BOOL)isPresentingStickyBanner;
-(BOOL)notificationViewControllerShouldAllowClickPresentationInteraction:(id)arg1 ;
-(void)setResignActiveAssertion:(UIApplicationSceneDeactivationAssertion *)arg1 ;
-(SBInAppStatusBarHiddenAssertion *)appsStatusBarAssertion;
-(void)setPresentTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(BOOL)handleHomeButtonPress;
-(void)notificationManagementViewPresenter:(id)arg1 setDeliverQuietly:(BOOL)arg2 forNotificationRequest:(id)arg3 withSectionIdentifier:(id)arg4 ;
-(SBDashBoardLegibilityProvider *)dashBoardLegibilityProvider;
-(void)notificationManagementViewPresenterWillPresentManagementView:(id)arg1 ;
-(void)setIdleTimerDisableAssertion:(id<BSInvalidatable>)arg1 ;
-(BOOL)_isPresentedBannerBeingDragged;
-(BOOL)isAlertDestination;
-(BOOL)_presentedBannerMatchesNotificationRequest:(id)arg1 ;
-(void)notificationManagementViewPresenterDidDismissManagementView:(id)arg1 ;
-(CGRect)presentedBannerScreenFrame;
-(BOOL)_shouldAllowDragInteraction;
-(BOOL)isPresentingBanner;
-(void)coronaAnimationController:(id)arg1 willAnimateCoronaTransitionWithAnimator:(id)arg2 ;
-(void)notificationViewController:(id)arg1 dragInteraction:(id)arg2 session:(id)arg3 willEndWithOperation:(unsigned long long)arg4 ;
-(void)notificationViewController:(id)arg1 executeAction:(id)arg2 withParameters:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)setNotificationManagementPresenter:(NCNotificationManagementViewPresenter *)arg1 ;
-(void)notificationViewController:(id)arg1 shouldFinishLongLookTransitionForTrigger:(long long)arg2 withCompletionBlock:(/*^block*/id)arg3 ;
-(void)_setupModeChanged;
-(BOOL)shouldAcquireWindowLevelAssertion;
-(BOOL)_isPresentingBannerInLongLook;
-(void)withdrawNotificationRequest:(id)arg1 ;
-(void)conformsToCSExternalBehaviorProviding;
-(void)_dismissPresentedBannerOnly:(BOOL)arg1 reason:(id)arg2 animated:(BOOL)arg3 ;
-(id)init;
-(BOOL)isNotificationContentExtensionVisible:(id)arg1 ;
-(void)modifyNotificationRequest:(id)arg1 ;
-(id<NCNotificationAlertDestinationDelegate>)delegate;
-(BOOL)_isDeviceAuthenticated;
-(BOOL)_isPresentingBannerPreventingAutomaticLock;
-(void)setAppsStatusBarAssertion:(SBInAppStatusBarHiddenAssertion *)arg1 ;
-(void)_startDismissTimer;
-(BOOL)isPresentingBannerInLongLook;
-(BOOL)_isPresentingBannerRequestingRaiseGesture;
-(BOOL)isUserInteractionInProgress;
-(id)notificationUsageTrackingStateForNotificationViewController:(id)arg1 ;
-(BOOL)notificationViewControllerShouldPan:(id)arg1 ;
-(void)prepareDestinationToReceiveCriticalNotificationRequest:(id)arg1 ;
-(void)setBannerGestureRecognizerPriorityAssertion:(id<BSInvalidatable>)arg1 ;
-(void)setSetupManager:(SBSetupManager *)arg1 ;
-(long long)notificationBehavior;
-(BSServiceConnectionEndpoint *)endpoint;
-(void)conformsToCSBehaviorProviding;
-(void)_cancelDismissTimer;
-(id<BSInvalidatable>)bannerGestureRecognizerPriorityAssertion;
-(BOOL)_isPresentingBanner;
-(long long)proximityDetectionMode;
-(BOOL)isPresentingEmergencyNotification;
-(id)_startTimerWithDelay:(unsigned long long)arg1 eventHandler:(/*^block*/id)arg2 ;
-(void)longLookWillPresentForNotificationViewController:(id)arg1 ;
-(NCNotificationManagementViewPresenter *)notificationManagementPresenter;
-(void)setStarModeDisableAssertion:(id<BSInvalidatable>)arg1 ;
-(void)notificationViewController:(id)arg1 requestPermissionToExecuteAction:(id)arg2 withParameters:(id)arg3 completion:(/*^block*/id)arg4 ;
-(SBAppStatusBarSettingsAssertion *)systemStatusBarAssertion;
-(NSString *)coverSheetIdentifier;
-(void)setDelegate:(id<NCNotificationAlertDestinationDelegate>)arg1 ;
-(BOOL)_shouldForceDismisssIfSticyForReason:(id)arg1 ;
-(NSMutableSet *)destinationObservers;
-(void)longLookWillDismissForNotificationViewController:(id)arg1 ;
-(void)registerNotificationBannerDestinationObserver:(id)arg1 ;
-(id<BNPresentable>)presentablePendingSnapshot;
-(BOOL)_isShowingShortLookAtRest;
-(BOOL)_isUILocked;
-(BOOL)_shouldHideStatusBar;
-(void)_updateMotionGestureObservation;
-(void)notificationViewControllerDidEndUserInteraction:(id)arg1 ;
-(void)notificationViewControllerWillDismissForCancelAction:(id)arg1 ;
-(BOOL)_isDismissingLongLookForBanner;
-(BOOL)_isBundleIdentifierBlockedForCommunicationPolicy:(id)arg1 ;
-(void)_setPresentedPresentableVC:(id)arg1 ;
-(void)userInteractionWillBeginForBannerForPresentable:(id)arg1 ;
-(void)presentableDidAppearAsBanner:(id)arg1 ;
-(void)_startReplaceAndDismissTimersForRequest:(id)arg1 ;
-(void)_publishDidPresentBannerForNotificationRequest:(id)arg1 ;
-(void)setSystemStatusBarAssertion:(SBAppStatusBarSettingsAssertion *)arg1 ;
-(void)unregisterNotificationBannerDestinationObserver:(id)arg1 ;
-(BOOL)_canReceiveNotificationRequestIfLocked:(id)arg1 ;
-(long long)idleTimerDuration;
-(void)_postNotificationRequest:(id)arg1 modal:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)_setNotificationViewControllerForActiveDragSession:(id)arg1 ;
-(void)_cancelReplaceAndDismissTimers;
-(void)longLookDidDismissForNotificationViewController:(id)arg1 ;
-(id)notificationViewController:(id)arg1 keyboardAssertionForGestureWindow:(id)arg2 ;
-(BOOL)notificationViewControllerShouldInterpretTapAsDefaultAction:(id)arg1 ;
-(long long)idleTimerMode;
-(void)_test_postNotificationRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_test_dismissNotificationRequest:(id)arg1 ;
-(void)longLookDidPresentForNotificationViewController:(id)arg1 ;
-(long long)participantState;
-(void)_dismissPresentedBannerOnly:(BOOL)arg1 reason:(id)arg2 animated:(BOOL)arg3 forceIfSticky:(BOOL)arg4 ;
-(void)presentModalBannerAndExpandForNotificationRequest:(id)arg1 ;
-(void)homeGestureParticipantOwningHomeGestureDidChange:(id)arg1 ;
-(BOOL)_isPresentingBannerWithHiddenPreview;
-(id<BSInvalidatable>)idleTimerDisableAssertion;
-(void)_cancelReplaceTimer;
-(void)_performSilenceAction;
-(void)_setupSystemStateChangeNotifications;
-(long long)idleWarnMode;
-(BOOL)_isInSetupMode;
-(id)_notificationViewControllerForActiveDragSession;
-(UIApplicationSceneDeactivationAssertion *)resignActiveAssertion;
-(NSObject*<OS_dispatch_source>)replaceTimer;
-(void)presentableWillDisappearAsBanner:(id)arg1 withReason:(id)arg2 ;
-(BOOL)_isBundleIdentifierBlockedForScreenTimeExpiration:(id)arg1 ;
-(void)_presentNotificationViewController:(id)arg1 modal:(BOOL)arg2 forRequest:(id)arg3 completion:(/*^block*/id)arg4 ;
-(NSString *)identifier;
-(BOOL)canReceiveNotificationRequest:(id)arg1 ;
-(SBNotificationPresentableViewController *)presentedPresentableVC;
-(NSObject*<OS_dispatch_source>)dismissTimer;
-(NCNotificationViewController *)presentedBanner;
-(void)setDestinationObservers:(NSMutableSet *)arg1 ;
-(void)setPresentablePendingSnapshot:(id<BNPresentable>)arg1 ;
-(BOOL)shouldDismissForReason:(id)arg1 ;
-(BOOL)_revokeAllPresentablesWithRequesterIdentifier:(id)arg1 reason:(id)arg2 options:(unsigned long long)arg3 ;
-(BOOL)_shouldDismissPresentedBannerPerformingPreludeForcingIfSticky:(BOOL)arg1 ;
-(void)_setReadyForNotificationRequests;
-(id)notificationViewController:(id)arg1 auxiliaryOptionsContentProviderForNotificationRequest:(id)arg2 withLongLook:(BOOL)arg3 ;
-(NSObject*<OS_dispatch_source>)presentTimer;
-(long long)scrollingStrategy;
-(void)_resetPresentTimer;
-(void)_setReadyForNotificationRequestsCoalescingWith:(id)arg1 ;
-(void)setDismissTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(id)_dashBoardLegibilitySettings;
-(void)userInteractionDidEndForBannerForPresentable:(id)arg1 ;
-(BOOL)_shouldScreenTimeSuppressNotificationRequest:(id)arg1 ;
-(void)notificationPresentableViewController:(id)arg1 presentationSize:(out CGSize*)arg2 containerSize:(out CGSize*)arg3 ;
-(void)notificationViewController:(id)arg1 dragInteraction:(id)arg2 session:(id)arg3 didEndWithOperation:(unsigned long long)arg4 ;
-(void)notificationManagementViewPresenter:(id)arg1 setAllowsCriticalAlerts:(BOOL)arg2 forNotificationRequest:(id)arg3 withSectionIdentifier:(id)arg4 ;
-(id)notificationViewController:(id)arg1 staticContentProviderForNotificationRequest:(id)arg2 ;
-(BOOL)notificationViewControllerShouldAllowDragInteraction:(id)arg1 ;
-(void)setDashBoardLegibilityProvider:(SBDashBoardLegibilityProvider *)arg1 ;
-(void)setUserInteractionInProgress:(BOOL)arg1 ;
-(BOOL)_isPresentingStickyBanner;
-(unsigned long long)restrictedCapabilities;
-(void)notificationManagementContentProvider:(id)arg1 requestsPresentingNotificationManagementViewType:(unsigned long long)arg2 forNotificationRequest:(id)arg3 withPresentingView:(id)arg4 ;
-(id)_notificationSectionSettingsForSectionIdentifier:(id)arg1 ;
-(id)_notificationViewControllerForRequest:(id)arg1 ;
-(void)_setStatusBarsHidden:(BOOL)arg1 withDuration:(double)arg2 ;
-(id)hideHomeAffordanceAnimationSettingsForNotificationViewController:(id)arg1 ;
-(BOOL)notificationViewControllerShouldSupportClickPresentationInteraction:(id)arg1 ;
-(void)dealloc;
-(void)notificationViewController:(id)arg1 dragInteraction:(id)arg2 sessionWillBegin:(id)arg3 ;
-(void)setAssistantController:(SBAssistantController *)arg1 ;
-(BOOL)_isContentSuppressedForNotificationRequest:(id)arg1 ;
@end

