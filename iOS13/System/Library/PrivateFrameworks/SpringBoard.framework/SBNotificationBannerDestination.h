/*
* Generated on Monday, March 1, 2021 at 2:35:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
#import <libobjc.A.dylib/NCNotificationAlertDestination.h>
#import <libobjc.A.dylib/SBNotificationDestinationHomeButtonPressHandler.h>
#import <libobjc.A.dylib/SBFNotificationExtensionVisibilityProviding.h>
#import <libobjc.A.dylib/NCNotificationViewControllerDelegate.h>
#import <libobjc.A.dylib/NCNotificationViewControllerObserving.h>

@protocol NCNotificationAlertDestinationDelegate, OS_dispatch_source, OS_dispatch_queue, OS_dispatch_semaphore, BSInvalidatable;
@class SBAssistantController, SBLockScreenManager, SBSetupManager, SBNotificationBannerWindow, NCNotificationViewController, NSMutableSet, NSObject, UIApplicationSceneDeactivationAssertion, SBAppStatusBarSettingsAssertion, SBInAppStatusBarHiddenAssertion, SBNotificationLongLookBannerDestination, DNDEventBehaviorResolutionService, NCNotificationManagementViewPresenter, SBDashBoardLegibilityProvider, NSMutableArray, UIView, NSString, BSServiceConnectionEndpoint;

@interface SBNotificationBannerDestination : NSObject <NCNotificationViewControllerDelegatePrivate, CSExternalBehaviorProviding, SBFIdleTimerBehaviorProviding, SBFMotionGestureObserver, SBAssistantObserver, SBNotificationHomeAffordanceControllerClient, NCNotificationManagementContentProviderDelegate, NCNotificationManagementViewPresenterDelegate, NCNotificationAlertDestination, SBNotificationDestinationHomeButtonPressHandler, SBFNotificationExtensionVisibilityProviding, NCNotificationViewControllerDelegate, NCNotificationViewControllerObserving> {

	BOOL _shouldPreemptSTAR;
	BOOL _userInteractionInProgress;
	BOOL _bannerPresentationPending;
	id<NCNotificationAlertDestinationDelegate> _delegate;
	SBAssistantController* _assistantController;
	SBLockScreenManager* _lockScreenManager;
	SBSetupManager* _setupManager;
	SBNotificationBannerWindow* _bannerWindow;
	NCNotificationViewController* _presentedBanner;
	NSMutableSet* _presentedBanners;
	NSObject*<OS_dispatch_source> _presentTimer;
	NSObject*<OS_dispatch_source> _replaceTimer;
	NSObject*<OS_dispatch_source> _dismissTimer;
	NSObject*<OS_dispatch_queue> _bannerPresentationQueue;
	NSObject*<OS_dispatch_semaphore> _pendingTransitionSemaphore;
	UIApplicationSceneDeactivationAssertion* _resignActiveAssertion;
	SBAppStatusBarSettingsAssertion* _systemStatusBarAssertion;
	SBInAppStatusBarHiddenAssertion* _appsStatusBarAssertion;
	SBNotificationLongLookBannerDestination* _longLookDestination;
	NSMutableSet* _destinationObservers;
	id<BSInvalidatable> _idleTimerDisableAssertion;
	id<BSInvalidatable> _starModeDisableAssertion;
	DNDEventBehaviorResolutionService* _dndEventBehaviorResolutionService;
	NCNotificationManagementViewPresenter* _notificationManagementPresenter;
	SBDashBoardLegibilityProvider* _dashBoardLegibilityProvider;
	NSMutableArray* _windowLevelAssertions;
	UIView* _activeDragPlatterSourceView;

}

@property (nonatomic,retain,readonly) NCNotificationViewController * presentedBanner; 
@property (setter=_setPresentedBanner:,nonatomic,retain) NCNotificationViewController * presentedBanner;                                            //@synthesize presentedBanner=_presentedBanner - In the implementation block
@property (nonatomic,retain) NSMutableSet * presentedBanners;                                                                                       //@synthesize presentedBanners=_presentedBanners - In the implementation block
@property (nonatomic,retain) SBNotificationBannerWindow * bannerWindow;                                                                             //@synthesize bannerWindow=_bannerWindow - In the implementation block
@property (assign,getter=isUserInteractionInProgress,nonatomic) BOOL userInteractionInProgress;                                                     //@synthesize userInteractionInProgress=_userInteractionInProgress - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> presentTimer;                                                                            //@synthesize presentTimer=_presentTimer - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> replaceTimer;                                                                            //@synthesize replaceTimer=_replaceTimer - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> dismissTimer;                                                                            //@synthesize dismissTimer=_dismissTimer - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> bannerPresentationQueue;                                                                  //@synthesize bannerPresentationQueue=_bannerPresentationQueue - In the implementation block
@property (assign,setter=_setBannerPresentationPending:,getter=_isBannerPresentationPending,nonatomic) BOOL bannerPresentationPending;              //@synthesize bannerPresentationPending=_bannerPresentationPending - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_semaphore> pendingTransitionSemaphore;                                                           //@synthesize pendingTransitionSemaphore=_pendingTransitionSemaphore - In the implementation block
@property (nonatomic,retain) UIApplicationSceneDeactivationAssertion * resignActiveAssertion;                                                       //@synthesize resignActiveAssertion=_resignActiveAssertion - In the implementation block
@property (nonatomic,retain) SBAppStatusBarSettingsAssertion * systemStatusBarAssertion;                                                            //@synthesize systemStatusBarAssertion=_systemStatusBarAssertion - In the implementation block
@property (nonatomic,retain) SBInAppStatusBarHiddenAssertion * appsStatusBarAssertion;                                                              //@synthesize appsStatusBarAssertion=_appsStatusBarAssertion - In the implementation block
@property (nonatomic,retain) SBNotificationLongLookBannerDestination * longLookDestination;                                                         //@synthesize longLookDestination=_longLookDestination - In the implementation block
@property (nonatomic,retain) NSMutableSet * destinationObservers;                                                                                   //@synthesize destinationObservers=_destinationObservers - In the implementation block
@property (nonatomic,retain) id<BSInvalidatable> idleTimerDisableAssertion;                                                                         //@synthesize idleTimerDisableAssertion=_idleTimerDisableAssertion - In the implementation block
@property (nonatomic,retain) id<BSInvalidatable> starModeDisableAssertion;                                                                          //@synthesize starModeDisableAssertion=_starModeDisableAssertion - In the implementation block
@property (nonatomic,retain) DNDEventBehaviorResolutionService * dndEventBehaviorResolutionService;                                                 //@synthesize dndEventBehaviorResolutionService=_dndEventBehaviorResolutionService - In the implementation block
@property (nonatomic,retain) NCNotificationManagementViewPresenter * notificationManagementPresenter;                                               //@synthesize notificationManagementPresenter=_notificationManagementPresenter - In the implementation block
@property (nonatomic,retain) SBDashBoardLegibilityProvider * dashBoardLegibilityProvider;                                                           //@synthesize dashBoardLegibilityProvider=_dashBoardLegibilityProvider - In the implementation block
@property (nonatomic,retain) NSMutableArray * windowLevelAssertions;                                                                                //@synthesize windowLevelAssertions=_windowLevelAssertions - In the implementation block
@property (assign,nonatomic,__weak) UIView * activeDragPlatterSourceView;                                                                           //@synthesize activeDragPlatterSourceView=_activeDragPlatterSourceView - In the implementation block
@property (nonatomic,retain) SBAssistantController * assistantController;                                                                           //@synthesize assistantController=_assistantController - In the implementation block
@property (nonatomic,retain) SBLockScreenManager * lockScreenManager;                                                                               //@synthesize lockScreenManager=_lockScreenManager - In the implementation block
@property (nonatomic,retain) SBSetupManager * setupManager;                                                                                         //@synthesize setupManager=_setupManager - In the implementation block
@property (getter=isPresentingBanner,nonatomic,readonly) BOOL presentingBanner; 
@property (getter=isPresentingBannerInLongLook,nonatomic,readonly) BOOL presentingBannerInLongLook; 
@property (getter=isDismissingBanner,nonatomic,readonly) BOOL dismissingBanner; 
@property (getter=isPreventingAutomaticLock,nonatomic,readonly) BOOL preventingAutomaticLock; 
@property (nonatomic,readonly) BOOL shouldPreemptSTAR;                                                                                              //@synthesize shouldPreemptSTAR=_shouldPreemptSTAR - In the implementation block
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
@property (assign,nonatomic,__weak) id<NCNotificationDestinationDelegate> delegate; 
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) BSServiceConnectionEndpoint * endpoint; 
+(id)notificationRequestForBannerWithIcon;
-(id)init;
-(void)dealloc;
-(id<NCNotificationDestinationDelegate>)delegate;
-(void)setDelegate:(id<NCNotificationDestinationDelegate>)arg1 ;
-(NSString *)identifier;
-(BSServiceConnectionEndpoint *)endpoint;
-(id)_rootViewController;
-(BOOL)shouldPreemptSTAR;
-(id)_viewControllerForPresentation;
-(BOOL)_shouldHideStatusBar;
-(void)didReceiveRaiseGesture;
-(long long)idleTimerMode;
-(void)_setupTimers;
-(unsigned long long)restrictedCapabilities;
-(long long)notificationBehavior;
-(long long)participantState;
-(SBNotificationBannerWindow *)bannerWindow;
-(void)homeGestureParticipantOwningHomeGestureDidChange:(id)arg1 ;
-(NSString *)coverSheetIdentifier;
-(long long)scrollingStrategy;
-(long long)proximityDetectionMode;
-(void)postNotificationRequest:(id)arg1 ;
-(void)withdrawNotificationRequest:(id)arg1 ;
-(BOOL)isNotificationContentExtensionVisible:(id)arg1 ;
-(long long)idleTimerDuration;
-(long long)idleWarnMode;
-(BOOL)handleHomeButtonPress;
-(void)modifyNotificationRequest:(id)arg1 ;
-(void)presentModalBannerAndExpandForNotificationRequest:(id)arg1 ;
-(DNDEventBehaviorResolutionService *)dndEventBehaviorResolutionService;
-(BOOL)_shouldScreenTimeSuppressNotificationsForBundleIdentifier:(id)arg1 ;
-(void)setDndEventBehaviorResolutionService:(DNDEventBehaviorResolutionService *)arg1 ;
-(BOOL)canReceiveNotificationRequest:(id)arg1 ;
-(void)_lockStateChanged;
-(void)prepareDestinationToReceiveCriticalNotificationRequest:(id)arg1 ;
-(void)notificationViewController:(id)arg1 requestPermissionToExecuteAction:(id)arg2 withParameters:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)notificationViewController:(id)arg1 executeAction:(id)arg2 withParameters:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)notificationViewControllerWillDismissForCancelAction:(id)arg1 ;
-(BOOL)notificationViewControllerShouldPan:(id)arg1 ;
-(BOOL)notificationViewControllerShouldInterpretTapAsDefaultAction:(id)arg1 ;
-(BOOL)notificationViewControllerShouldSupportClickPresentationInteraction:(id)arg1 ;
-(BOOL)notificationViewControllerShouldAllowDragInteraction:(id)arg1 ;
-(void)notificationViewController:(id)arg1 shouldFinishLongLookTransitionForTrigger:(long long)arg2 withCompletionBlock:(/*^block*/id)arg3 ;
-(BOOL)notificationViewController:(id)arg1 suggestsDismissingShortLookWithSourceGestureRecognizer:(id)arg2 animated:(BOOL)arg3 ;
-(id)notificationUsageTrackingStateForNotificationViewController:(id)arg1 ;
-(id)notificationViewController:(id)arg1 keyboardAssertionForGestureWindow:(id)arg2 ;
-(id)hideHomeAffordanceAnimationSettingsForNotificationViewController:(id)arg1 ;
-(id)unhideHomeAffordanceAnimationSettingsForNotificationViewController:(id)arg1 ;
-(id)settleHomeAffordanceAnimationBehaviorDescriptionForNotificationViewController:(id)arg1 ;
-(id)notificationViewController:(id)arg1 staticContentProviderForNotificationRequest:(id)arg2 ;
-(id)notificationViewController:(id)arg1 auxiliaryOptionsContentProviderForNotificationRequest:(id)arg2 withLongLook:(BOOL)arg3 ;
-(void)notificationViewControllerWillPresent:(id)arg1 ;
-(void)notificationViewControllerDidPresent:(id)arg1 ;
-(void)notificationViewControllerWillDismiss:(id)arg1 ;
-(void)notificationViewControllerDidDismiss:(id)arg1 ;
-(void)notificationManagementViewPresenterWillPresentManagementView:(id)arg1 ;
-(void)notificationManagementViewPresenterDidDismissManagementView:(id)arg1 ;
-(id)notificationManagementViewPresenter:(id)arg1 sectionSettingsForSectionIdentifier:(id)arg2 ;
-(void)notificationManagementViewPresenter:(id)arg1 setAllowsNotifications:(BOOL)arg2 forNotificationRequest:(id)arg3 withSectionIdentifier:(id)arg4 ;
-(void)notificationManagementViewPresenter:(id)arg1 setDeliverQuietly:(BOOL)arg2 forNotificationRequest:(id)arg3 withSectionIdentifier:(id)arg4 ;
-(void)notificationManagementViewPresenter:(id)arg1 setAllowsCriticalAlerts:(BOOL)arg2 forNotificationRequest:(id)arg3 withSectionIdentifier:(id)arg4 ;
-(void)notificationManagementContentProvider:(id)arg1 requestsPresentingNotificationManagementViewType:(unsigned long long)arg2 forNotificationRequest:(id)arg3 withPresentingView:(id)arg4 ;
-(void)notificationViewControllerWillBeginUserInteraction:(id)arg1 ;
-(void)notificationViewControllerDidEndUserInteraction:(id)arg1 ;
-(void)longLookWillPresentForNotificationViewController:(id)arg1 ;
-(void)longLookDidPresentForNotificationViewController:(id)arg1 ;
-(void)longLookWillDismissForNotificationViewController:(id)arg1 ;
-(void)longLookDidDismissForNotificationViewController:(id)arg1 ;
-(NSObject*<OS_dispatch_source>)dismissTimer;
-(SBSetupManager *)setupManager;
-(void)dismissPresentedBannerAnimated:(BOOL)arg1 ;
-(BOOL)isPresentingBannerInLongLook;
-(id)acquireWindowLevelAssertionWithPriority:(long long)arg1 windowLevel:(double)arg2 reason:(id)arg3 ;
-(void)_runLongLookPresentationTestWithBeginBlock:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_runLongLookDismissAndReParkTestWithBeginBlock:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_runLongLookDismissAndClearTestWithBeginBlock:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_runBannerPresentationTestWithBeginBlock:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)assistantWillAppear:(id)arg1 ;
-(SBLockScreenManager *)lockScreenManager;
-(void)setLockScreenManager:(SBLockScreenManager *)arg1 ;
-(SBAssistantController *)assistantController;
-(void)setAssistantController:(SBAssistantController *)arg1 ;
-(void)assistantDidDisappear:(id)arg1 ;
-(BOOL)_shouldScreenTimeSuppressNotificationRequest:(id)arg1 ;
-(BOOL)_isBundleIdentifierBlockedForScreenTimeExpiration:(id)arg1 ;
-(BOOL)_isBundleIdentifierBlockedForCommunicationPolicy:(id)arg1 ;
-(BOOL)_isInSetupMode;
-(BOOL)isPresentingBanner;
-(void)dismissPresentedBannerAnimated:(BOOL)arg1 forceIfSticky:(BOOL)arg2 silence:(BOOL)arg3 clear:(BOOL)arg4 ;
-(NCNotificationViewController *)presentedBanner;
-(void)_postNotificationRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_runLongLookDismissalTestAndClearNotifications:(BOOL)arg1 withBeginBlock:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_updateWindowLevel;
-(UIApplicationSceneDeactivationAssertion *)resignActiveAssertion;
-(void)setResignActiveAssertion:(UIApplicationSceneDeactivationAssertion *)arg1 ;
-(NSMutableArray *)windowLevelAssertions;
-(void)setWindowLevelAssertions:(NSMutableArray *)arg1 ;
-(id<BSInvalidatable>)idleTimerDisableAssertion;
-(void)setIdleTimerDisableAssertion:(id<BSInvalidatable>)arg1 ;
-(void)_setupSystemStateChangeNotifications;
-(BOOL)_isPresentingBanner;
-(BOOL)_isPresentingBannerInLongLook;
-(BOOL)_isPresentingBannerPreventingAutomaticLock;
-(BOOL)isPreventingAutomaticLock;
-(BOOL)_isPresentingBannerPreemptingSTAR;
-(BOOL)isPreemptingSTAR;
-(BOOL)_isPresentingOrDismissingBannerForRequest:(id)arg1 ;
-(void)_postNotificationRequest:(id)arg1 modal:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(NSMutableSet *)destinationObservers;
-(BOOL)_isPresentingStickyBanner;
-(BOOL)_isPresentedBannerBeingDragged;
-(BOOL)_isBannerPresentationPending;
-(BOOL)_canReceiveNotificationRequestIfLocked:(id)arg1 ;
-(BOOL)_presentedBannerMatchesNotificationRequest:(id)arg1 ;
-(void)dismissPresentedBannerAnimated:(BOOL)arg1 forceIfSticky:(BOOL)arg2 ;
-(BOOL)_shouldAllowDragInteraction;
-(BOOL)_isContentSuppressedForNotificationRequest:(id)arg1 ;
-(id)_notificationSectionSettingsForSectionIdentifier:(id)arg1 ;
-(void)_setStatusBarsHidden:(BOOL)arg1 withDuration:(double)arg2 ;
-(void)_cancelReplaceAndDismissTimers;
-(void)_setReadyForNotificationRequestsCoalescingWith:(id)arg1 ;
-(void)_updateMotionGestureObservation;
-(void)_dismissBannerCompleted:(id)arg1 ;
-(void)_cleanupRootViewControllerPresentationStack;
-(BOOL)isUserInteractionInProgress;
-(void)setUserInteractionInProgress:(BOOL)arg1 ;
-(void)_startReplaceAndDismissTimersForRequest:(id)arg1 ;
-(BOOL)_isPresentingBannerRequestingRaiseGesture;
-(void)_resetPresentTimer;
-(BOOL)_isPresentingBannerWithHiddenPreview;
-(BOOL)_isUILocked;
-(void)_publishDidPresentBannerForNotificationRequest:(id)arg1 ;
-(id)_notificationViewControllerForRequest:(id)arg1 ;
-(void)_presentNotificationViewController:(id)arg1 modal:(BOOL)arg2 forRequest:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_setPresentedBanner:(id)arg1 ;
-(void)_scheduleNotificationViewControllerPresentationBlock:(/*^block*/id)arg1 ;
-(void)_setReadyForNotificationRequests;
-(SBInAppStatusBarHiddenAssertion *)appsStatusBarAssertion;
-(void)setAppsStatusBarAssertion:(SBInAppStatusBarHiddenAssertion *)arg1 ;
-(void)setSystemStatusBarAssertion:(SBAppStatusBarSettingsAssertion *)arg1 ;
-(BOOL)_isDeviceAuthenticated;
-(NSMutableSet *)presentedBanners;
-(NSObject*<OS_dispatch_semaphore>)pendingTransitionSemaphore;
-(id)_topPresentedViewController;
-(void)_setBannerPresentationPending:(BOOL)arg1 ;
-(void)setPendingTransitionSemaphore:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(BOOL)_isShowingShortLookAtRest;
-(id)_startTimerWithDelay:(unsigned long long)arg1 eventHandler:(/*^block*/id)arg2 ;
-(void)_startReplaceTimer;
-(void)_startDismissTimer;
-(void)_cancelReplaceTimer;
-(void)_cancelDismissTimer;
-(BOOL)_isPresentingOrDismissingBanner;
-(void)_setupModeChanged;
-(void)dismissPresentedBannerAnimated:(BOOL)arg1 forceIfSticky:(BOOL)arg2 silence:(BOOL)arg3 ;
-(void)_dismissPresentedBannerAndClearNotification:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_clearPresentedBanner:(id)arg1 ;
-(CGRect)presentedBannerScreenFrame;
-(BOOL)isDismissingBanner;
-(void)presentModalBannerForNotificationRequest:(id)arg1 ;
-(void)registerNotificationBannerDestinationObserver:(id)arg1 ;
-(void)unregisterNotificationBannerDestinationObserver:(id)arg1 ;
-(id)_dashBoardLegibilitySettings;
-(void)setSetupManager:(SBSetupManager *)arg1 ;
-(void)setBannerWindow:(SBNotificationBannerWindow *)arg1 ;
-(void)setPresentedBanners:(NSMutableSet *)arg1 ;
-(NSObject*<OS_dispatch_source>)presentTimer;
-(void)setPresentTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(NSObject*<OS_dispatch_source>)replaceTimer;
-(void)setReplaceTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)setDismissTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(NSObject*<OS_dispatch_queue>)bannerPresentationQueue;
-(void)setBannerPresentationQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(SBAppStatusBarSettingsAssertion *)systemStatusBarAssertion;
-(SBNotificationLongLookBannerDestination *)longLookDestination;
-(void)setLongLookDestination:(SBNotificationLongLookBannerDestination *)arg1 ;
-(void)setDestinationObservers:(NSMutableSet *)arg1 ;
-(id<BSInvalidatable>)starModeDisableAssertion;
-(void)setStarModeDisableAssertion:(id<BSInvalidatable>)arg1 ;
-(NCNotificationManagementViewPresenter *)notificationManagementPresenter;
-(void)setNotificationManagementPresenter:(NCNotificationManagementViewPresenter *)arg1 ;
-(SBDashBoardLegibilityProvider *)dashBoardLegibilityProvider;
-(void)setDashBoardLegibilityProvider:(SBDashBoardLegibilityProvider *)arg1 ;
-(UIView *)activeDragPlatterSourceView;
-(void)setActiveDragPlatterSourceView:(UIView *)arg1 ;
@end

