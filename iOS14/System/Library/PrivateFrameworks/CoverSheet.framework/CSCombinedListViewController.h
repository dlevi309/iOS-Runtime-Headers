/*
* Generated on Thursday, January 14, 2021 at 2:26:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
*/

#import <CoverSheet/CoverSheet-Structs.h>
#import <CoverSheet/CSCoverSheetViewControllerBase.h>
#import <libobjc.A.dylib/CSNotificationAdjunctListViewControllerDelegate.h>
#import <libobjc.A.dylib/SBFMotionGestureObserver.h>
#import <libobjc.A.dylib/NCNotificationStructuredListContentObserver.h>
#import <libobjc.A.dylib/CSStatusBarBackgroundIntersecting.h>
#import <libobjc.A.dylib/PTSettingsKeyObserver.h>
#import <libobjc.A.dylib/CSHomeGestureParticipating.h>
#import <libobjc.A.dylib/CSDNDBedtimeControllerObserver.h>
#import <libobjc.A.dylib/DNDStateUpdateListener.h>
#import <libobjc.A.dylib/CSDNDBedtimeGreetingDelegate.h>
#import <libobjc.A.dylib/CSApplicationInformationObserving.h>
#import <libobjc.A.dylib/NCNotificationStructuredListViewControllerDelegate.h>
#import <libobjc.A.dylib/SBUICoronaAnimationControllerParticipant.h>
#import <libobjc.A.dylib/_UIGestureStudyInteractionDelegate.h>
#import <libobjc.A.dylib/CSProximitySensorProviderObserver.h>
#import <libobjc.A.dylib/CSNotificationDestination.h>
#import <libobjc.A.dylib/CSDateViewScrolling.h>
#import <libobjc.A.dylib/CSAppearanceProviding.h>

@protocol SBUIBiometricResource, BSInvalidatable, CSCombinedListViewControllerDelegate, CSApplicationInforming, CSNotificationDispatcher, CSPageViewControllerProtocol, CSHomeAffordanceControlling, CSUnlockRequesting, CSNotificationPresenting, SBFAuthenticationStatusProvider, CSProximitySensorProviding, CSDeviceOrientationProviding;
@class NSString, NSSet, _UILegibilitySettings, UIColor, UIViewController, NCNotificationStructuredListViewController, SBFTouchPassThroughView, BSTimer, CSComponent, NSMutableSet, CSDNDBedtimeController, CSDNDBedtimeGreetingViewController, _UIGestureStudyInteraction, NSDate, CSLayoutStrategy, CSNotificationAdjunctListViewController, NCNotificationRequest, DNDEventBehaviorResolutionService, DNDStateService, CSLockScreenSettings, UIScrollView;

@interface CSCombinedListViewController : CSCoverSheetViewControllerBase <CSNotificationAdjunctListViewControllerDelegate, SBFMotionGestureObserver, NCNotificationStructuredListContentObserver, CSStatusBarBackgroundIntersecting, PTSettingsKeyObserver, CSHomeGestureParticipating, CSDNDBedtimeControllerObserver, DNDStateUpdateListener, CSDNDBedtimeGreetingDelegate, CSApplicationInformationObserving, NCNotificationStructuredListViewControllerDelegate, SBUICoronaAnimationControllerParticipant, _UIGestureStudyInteractionDelegate, CSProximitySensorProviderObserver, CSNotificationDestination, CSDateViewScrolling, CSAppearanceProviding> {

	UIViewController* _captureOnlyMaterialViewController;
	NCNotificationStructuredListViewController* _structuredListViewController;
	SBFTouchPassThroughView* _clippingView;
	double _cachedAdjunctHeight;
	double _footerOffset;
	BOOL _listPresentingContent;
	BOOL _listDismissingContent;
	BOOL _listBeingLaidOut;
	BSTimer* _significantUserInteractionTimer;
	BOOL _listSuppressLongLookDismissal;
	CSComponent* _dateViewComponent;
	CSComponent* _statusBarBackgroundComponent;
	CSComponent* _proudLockComponent;
	CSComponent* _homeAffordanceComponent;
	CSComponent* _footerCallToActionLabelComponent;
	BOOL _hasUserInteraction;
	CSComponent* _statusBarComponent;
	NSMutableSet* _quickActionsHiddenReasons;
	CSComponent* _quickActionsComponent;
	CSDNDBedtimeController* _dndBedtimeController;
	CSDNDBedtimeGreetingViewController* _dndBedtimeGreetingViewController;
	NSMutableSet* _backgroundAnimationDisabledReasons;
	NSMutableSet* _footerCallToActionHiddenReasons;
	NSMutableSet* _notificationListHiddenReasons;
	NSMutableSet* _dismissGestureDisabledReasons;
	_UILegibilitySettings* _legibilitySettings;
	_UIGestureStudyInteraction* _gestureStudyInteraction;
	NSDate* _screenOnTime;
	BOOL _confirmedNotInPocket;
	BOOL _shouldPadBottomSpacingWhileDragging;
	id<SBUIBiometricResource> _biometricResource;
	id<BSInvalidatable> _faceDetectWantedAssertion;
	id<BSInvalidatable> _notificationLongPressProximitySensorAssertion;
	id<BSInvalidatable> _deviceWakeProximitySensorAssertion;
	BOOL _faceInView;
	BOOL _liftDetected;
	BOOL _homeButtonPressDetected;
	BOOL _lockButtonPressDetected;
	BOOL _screenOn;
	BOOL _coverSheetWasDismissed;
	BOOL _historyWasRevealed;
	BOOL _proximitySensorCoveredSinceWake;
	BOOL _hasProximitySensor;
	BOOL _dndNotificationDeliveryDelayActive;
	BOOL _dndDrivingModeActive;
	BOOL _disableScrolling;
	BOOL _disableBackgroundAnimation;
	BOOL _footerCallToActionLabelHidden;
	BOOL _notificationListHidden;
	BOOL _dismissGestureDisabled;
	BOOL _presentationDirtiedAppearance;
	id<CSCombinedListViewControllerDelegate> _delegate;
	id<CSApplicationInforming> _applicationInformer;
	id<CSNotificationDispatcher> _dispatcher;
	CSLayoutStrategy* _layoutStrategy;
	id<CSPageViewControllerProtocol> _page;
	id<CSHomeAffordanceControlling> _homeAffordanceController;
	id<CSUnlockRequesting> _unlockRequester;
	id<CSNotificationPresenting> _notificationPresenter;
	id<SBFAuthenticationStatusProvider> _authenticationStatusProvider;
	id<CSProximitySensorProviding> _proximitySensorProvider;
	id<CSDeviceOrientationProviding> _deviceOrientationProvider;
	CSNotificationAdjunctListViewController* _adjunctListViewController;
	NCNotificationRequest* _activeRaiseToListenNotificationRequest;
	DNDEventBehaviorResolutionService* _dndEventBehaviorResolutionService;
	DNDStateService* _dndStateService;
	CSLockScreenSettings* _lockScreenSettings;
	SBFTouchPassThroughView* _debugViewLeft;
	SBFTouchPassThroughView* _debugViewRight;

}

@property (nonatomic,readonly) UIViewController * notificationListViewController; 
@property (nonatomic,readonly) UIScrollView * notificationListScrollView; 
@property (nonatomic,retain) CSNotificationAdjunctListViewController * adjunctListViewController;                              //@synthesize adjunctListViewController=_adjunctListViewController - In the implementation block
@property (nonatomic,retain) NCNotificationRequest * activeRaiseToListenNotificationRequest;                                   //@synthesize activeRaiseToListenNotificationRequest=_activeRaiseToListenNotificationRequest - In the implementation block
@property (nonatomic,retain) DNDEventBehaviorResolutionService * dndEventBehaviorResolutionService;                            //@synthesize dndEventBehaviorResolutionService=_dndEventBehaviorResolutionService - In the implementation block
@property (nonatomic,retain) DNDStateService * dndStateService;                                                                //@synthesize dndStateService=_dndStateService - In the implementation block
@property (assign,getter=isDndNotificationDeliveryDelayActive,nonatomic) BOOL dndNotificationDeliveryDelayActive;              //@synthesize dndNotificationDeliveryDelayActive=_dndNotificationDeliveryDelayActive - In the implementation block
@property (assign,getter=isDndDrivingModeActive,nonatomic) BOOL dndDrivingModeActive;                                          //@synthesize dndDrivingModeActive=_dndDrivingModeActive - In the implementation block
@property (nonatomic,retain) CSLockScreenSettings * lockScreenSettings;                                                        //@synthesize lockScreenSettings=_lockScreenSettings - In the implementation block
@property (nonatomic,retain) SBFTouchPassThroughView * debugViewLeft;                                                          //@synthesize debugViewLeft=_debugViewLeft - In the implementation block
@property (nonatomic,retain) SBFTouchPassThroughView * debugViewRight;                                                         //@synthesize debugViewRight=_debugViewRight - In the implementation block
@property (assign,setter=_setHasUserInteraction:,getter=_hasUserInteraction,nonatomic) BOOL hasUserInteraction;                //@synthesize hasUserInteraction=_hasUserInteraction - In the implementation block
@property (assign,setter=_setDisableScrolling:,getter=_disableScrolling,nonatomic) BOOL disableScrolling;                      //@synthesize disableScrolling=_disableScrolling - In the implementation block
@property (nonatomic,readonly) BOOL disableBackgroundAnimation;                                                                //@synthesize disableBackgroundAnimation=_disableBackgroundAnimation - In the implementation block
@property (nonatomic,readonly) BOOL footerCallToActionLabelHidden;                                                             //@synthesize footerCallToActionLabelHidden=_footerCallToActionLabelHidden - In the implementation block
@property (nonatomic,readonly) BOOL notificationListHidden;                                                                    //@synthesize notificationListHidden=_notificationListHidden - In the implementation block
@property (nonatomic,readonly) BOOL dismissGestureDisabled;                                                                    //@synthesize dismissGestureDisabled=_dismissGestureDisabled - In the implementation block
@property (assign,getter=hasPresentationDirtiedAppearance,nonatomic) BOOL presentationDirtiedAppearance;                       //@synthesize presentationDirtiedAppearance=_presentationDirtiedAppearance - In the implementation block
@property (nonatomic,readonly) BOOL hasContent;                                                                                //@synthesize listPresentingContent=_listPresentingContent - In the implementation block
@property (nonatomic,readonly) BOOL hasVisibleContentToReveal; 
@property (getter=isShowingMediaControls,nonatomic,readonly) BOOL showingMediaControls; 
@property (nonatomic,readonly) NSString * listViewControllerBackgroundGroupName; 
@property (nonatomic,retain) CSLayoutStrategy * layoutStrategy;                                                                //@synthesize layoutStrategy=_layoutStrategy - In the implementation block
@property (assign,nonatomic,__weak) id<CSCombinedListViewControllerDelegate> delegate;                                         //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<CSPageViewControllerProtocol> page;                                                     //@synthesize page=_page - In the implementation block
@property (assign,nonatomic,__weak) id<SBFActionProviding> contentActionProvider; 
@property (assign,nonatomic,__weak) id<CSApplicationInforming> applicationInformer;                                            //@synthesize applicationInformer=_applicationInformer - In the implementation block
@property (assign,nonatomic,__weak) id<CSHomeAffordanceControlling> homeAffordanceController;                                  //@synthesize homeAffordanceController=_homeAffordanceController - In the implementation block
@property (assign,nonatomic,__weak) id<CSUnlockRequesting> unlockRequester;                                                    //@synthesize unlockRequester=_unlockRequester - In the implementation block
@property (assign,nonatomic,__weak) id<CSNotificationPresenting> notificationPresenter;                                        //@synthesize notificationPresenter=_notificationPresenter - In the implementation block
@property (assign,nonatomic,__weak) id<SBFAuthenticationStatusProvider> authenticationStatusProvider;                          //@synthesize authenticationStatusProvider=_authenticationStatusProvider - In the implementation block
@property (assign,nonatomic,__weak) id<CSProximitySensorProviding> proximitySensorProvider;                                    //@synthesize proximitySensorProvider=_proximitySensorProvider - In the implementation block
@property (assign,nonatomic,__weak) id<CSDeviceOrientationProviding> deviceOrientationProvider;                                //@synthesize deviceOrientationProvider=_deviceOrientationProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) double distanceFromBarToContent; 
@property (nonatomic,readonly) double topContentInset; 
@property (assign,nonatomic,__weak) id<CSNotificationDispatcher> dispatcher;                                                   //@synthesize dispatcher=_dispatcher - In the implementation block
@property (nonatomic,copy,readonly) NSString * coverSheetIdentifier; 
@property (nonatomic,readonly) long long participantState; 
@property (nonatomic,readonly) double clippingOffset; 
@property (nonatomic,copy,readonly) NSString * appearanceIdentifier; 
@property (nonatomic,readonly) long long backgroundStyle; 
@property (nonatomic,copy,readonly) NSSet * components; 
@property (nonatomic,readonly) _UILegibilitySettings * legibilitySettings; 
@property (nonatomic,readonly) UIColor * backgroundColor; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)updateAppearanceForHidden:(BOOL)arg1 offset:(CGPoint)arg2 ;
-(id<CSUnlockRequesting>)unlockRequester;
-(void)setAuthenticationStatusProvider:(id<SBFAuthenticationStatusProvider>)arg1 ;
-(BOOL)isShowingMediaControls;
-(void)_screenTimeExpirationApplicationsDidChange:(id)arg1 ;
-(double)distanceFromBarToContent;
-(id<SBFAuthenticationStatusProvider>)authenticationStatusProvider;
-(void)postNotificationRequest:(id)arg1 ;
-(double)interItemSpacingToMimicForAdjunctListViewController:(id)arg1 ;
-(DNDEventBehaviorResolutionService *)dndEventBehaviorResolutionService;
-(BOOL)_allowsDateViewOrProudLockScroll;
-(void)setProximitySensorProvider:(id<CSProximitySensorProviding>)arg1 ;
-(id<CSNotificationPresenting>)notificationPresenter;
-(void)stateService:(id)arg1 didReceiveDoNotDisturbStateUpdate:(id)arg2 ;
-(void)setContentActionProvider:(id<SBFActionProviding>)arg1 ;
-(void)setPage:(id<CSPageViewControllerProtocol>)arg1 ;
-(UIScrollView *)notificationListScrollView;
-(double)_statusBarHeight;
-(void)didReceiveRaiseGesture;
-(BOOL)disableBackgroundAnimation;
-(void)viewWillLayoutSubviews;
-(id<SBFActionProviding>)contentActionProvider;
-(id<CSHomeAffordanceControlling>)homeAffordanceController;
-(double)clippingOffset;
-(void)setDndStateService:(DNDStateService *)arg1 ;
-(long long)presentationPriority;
-(void)_addStateCaptureHandlers;
-(CGSize)sizeToMimicForAdjunctListViewController:(id)arg1 ;
-(void)proximitySensorProvider:(id)arg1 objectWithinProximityDidChange:(BOOL)arg2 ;
-(long long)presentationTransition;
-(void)_handleBiometricEvent:(unsigned long long)arg1 ;
-(void)updateNotificationSectionSettings:(id)arg1 previousSectionSettings:(id)arg2 ;
-(void)setDndEventBehaviorResolutionService:(DNDEventBehaviorResolutionService *)arg1 ;
-(void)notificationsLoadedForSectionIdentifier:(id)arg1 ;
-(BOOL)_shouldScreenTimeSuppressNotificationsForBundleIdentifier:(id)arg1 ;
-(void)notificationStructuredListViewController:(id)arg1 setAllowsNotifications:(BOOL)arg2 forSectionIdentifier:(id)arg3 ;
-(id<CSPageViewControllerProtocol>)page;
-(void)coronaAnimationController:(id)arg1 willAnimateCoronaTransitionWithAnimator:(id)arg2 ;
-(BOOL)interpretsViewAsContent:(id)arg1 ;
-(BOOL)notificationStructuredListViewController:(id)arg1 isClockNotificationRequest:(id)arg2 ;
-(id<CSNotificationDispatcher>)dispatcher;
-(CSLockScreenSettings *)lockScreenSettings;
-(UIViewController *)notificationListViewController;
-(void)setDispatcher:(id<CSNotificationDispatcher>)arg1 ;
-(BOOL)hasVisibleContentToReveal;
-(BOOL)hasContent;
-(void)updateNotificationRequest:(id)arg1 ;
-(id<CSApplicationInforming>)applicationInformer;
-(void)setLockScreenSettings:(CSLockScreenSettings *)arg1 ;
-(void)notificationStructuredListViewController:(id)arg1 didEndUserInteractionWithNotificationViewController:(id)arg2 ;
-(void)notificationStructuredListViewController:(id)arg1 setAllowsCriticalAlerts:(BOOL)arg2 forSectionIdentifier:(id)arg3 ;
-(CSNotificationAdjunctListViewController *)adjunctListViewController;
-(CSLayoutStrategy *)layoutStrategy;
-(void)withdrawNotificationRequest:(id)arg1 ;
-(BOOL)notificationStructuredListViewControllerShouldHintForDefaultAction:(id)arg1 ;
-(BOOL)dismissNotificationInLongLookAnimated:(BOOL)arg1 ;
-(BOOL)isPresentingNotificationInLongLook;
-(void)updateAppearanceForStatusBarBackgroundHidden:(BOOL)arg1 ;
-(double)_minInsetsToPushDateOffScreen;
-(BOOL)notificationStructuredListViewController:(id)arg1 shouldFilterNotificationRequest:(id)arg2 ;
-(double)topContentInset;
-(id)notificationStructuredListViewController:(id)arg1 keyboardAssertionForGestureWindow:(id)arg2 ;
-(BOOL)hasPresentationDirtiedAppearance;
-(BOOL)_disableScrolling;
-(BOOL)isNotificationContentExtensionVisible:(id)arg1 ;
-(id<CSCombinedListViewControllerDelegate>)delegate;
-(void)_requestAuthenticationWithCompletion:(/*^block*/id)arg1 ;
-(void)_setFooterCallToActionLabelHidden:(BOOL)arg1 forReason:(id)arg2 ;
-(BOOL)handleEvent:(id)arg1 ;
-(void)notificationStructuredListViewController:(id)arg1 requestsAuthenticationAndPerformBlock:(/*^block*/id)arg2 ;
-(void)notificationStructuredListViewController:(id)arg1 presentingLongLook:(BOOL)arg2 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)_setNotificationListHidden:(BOOL)arg1 forReason:(id)arg2 ;
-(void)notificationStructuredListViewController:(id)arg1 shouldFinishLongLookTransitionForNotificationRequest:(id)arg2 trigger:(long long)arg3 withCompletionBlock:(/*^block*/id)arg4 ;
-(double)_sanitizedContentOffset:(double)arg1 forContentInset:(UIEdgeInsets)arg2 ;
-(BOOL)isDndNotificationDeliveryDelayActive;
-(void)_updateFaceDetectAssertion;
-(void)_setDismissGestureDisabled:(BOOL)arg1 forReason:(id)arg2 ;
-(void)_setListHasContent:(BOOL)arg1 ;
-(void)aggregateBehavior:(id)arg1 ;
-(id<CSDeviceOrientationProviding>)deviceOrientationProvider;
-(CGRect)_suggestedListViewFrame;
-(id)hideHomeAffordanceAnimationSettingsForNotificationStructuredListViewController:(id)arg1 ;
-(CGSize)effectiveContentSizeForScrollView:(id)arg1 ;
-(void)setAdjunctListViewController:(CSNotificationAdjunctListViewController *)arg1 ;
-(BOOL)wouldHandleButtonEvent:(id)arg1 ;
-(id)legibilitySettingsForNotificationStructuredListViewController:(id)arg1 ;
-(void)setLayoutStrategy:(CSLayoutStrategy *)arg1 ;
-(id)notificationUsageTrackingStateForNotificationStructuredListViewController:(id)arg1 ;
-(void)notificationStructuredListViewController:(id)arg1 setDeliverQuietly:(BOOL)arg2 forSectionIdentifier:(id)arg3 ;
-(void)_setQuickActionsHidden:(BOOL)arg1 forReason:(id)arg2 ;
-(void)_updatePresentation;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(CGSize)_adjunctListViewSize;
-(void)dndBedtimeControllerActiveStateDidChange:(id)arg1 ;
-(id)_updateProximitySensorAssertion:(id)arg1 wantsAssertion:(BOOL)arg2 forReason:(id)arg3 ;
-(CGSize)_adjunctListViewSizeIncludingSpacing;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(BOOL)dismissGestureDisabled;
-(void)_homeButtonPressDetected;
-(NSString *)listViewControllerBackgroundGroupName;
-(void)notificationStructuredListViewControllerDidSignificantUserInteraction:(id)arg1 ;
-(BOOL)notificationStructuredListViewController:(id)arg1 shouldAllowInteractionsForNotificationRequest:(id)arg2 ;
-(void)_setDisableBackgroundAnimation:(BOOL)arg1 forReason:(id)arg2 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)adjunctListViewController:(id)arg1 didUpdateWithSize:(CGSize)arg2 ;
-(void)_updateCaptureOnlyMaterialView;
-(void)updateForLegibilitySettings:(id)arg1 ;
-(void)setDelegate:(id<CSCombinedListViewControllerDelegate>)arg1 ;
-(void)setDebugViewRight:(SBFTouchPassThroughView *)arg1 ;
-(BOOL)_hasUserInteraction;
-(BOOL)notificationStructuredListViewController:(id)arg1 shouldDelayDeliveryOfNotificationRequest:(id)arg2 ;
-(void)_updateListViewContentInset;
-(void)aggregateAppearance:(id)arg1 ;
-(void)_startScreenOnTimer;
-(void)notificationStructuredListViewControllerDidScrollToRevealNotificationHistory:(id)arg1 ;
-(void)_lockButtonPressDetected;
-(void)_updateRaiseGestureDetectionForNotificationRequest:(id)arg1 ;
-(void)_liftToWakeGestureDetected;
-(void)_layoutListView;
-(void)notificationStructuredListViewController:(id)arg1 requestsClearingFromIncomingSectionNotificationRequests:(id)arg2 ;
-(id)notificationStructuredListViewController:(id)arg1 requestsSectionSettingsForSectionIdentifier:(id)arg2 ;
-(long long)presentationType;
-(void)migrateIncomingNotificationsToNotificationCenter;
-(void)forceNotificationHistoryRevealed:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)dndBedtimeControllerShowGreetingStateDidChange:(id)arg1 animated:(BOOL)arg2 ;
-(void)viewDidLoad;
-(void)_toggleGestureStudyInteractionIfNecessary;
-(UIEdgeInsets)_listViewDefaultContentInsets;
-(void)_dismissDNDBedtimeGreetingViewAnimated:(BOOL)arg1 ;
-(void)setApplicationInformer:(id<CSApplicationInforming>)arg1 ;
-(void)setNotificationPresenter:(id<CSNotificationPresenting>)arg1 ;
-(BOOL)isDndDrivingModeActive;
-(BOOL)_isClockSnoozeAlarmNotificationRequest:(id)arg1 ;
-(void)notificationStructuredListViewController:(id)arg1 requestsClearingNotificationRequests:(id)arg2 ;
-(BOOL)notificationStructuredListViewControllerShouldAllowNotificationHistoryReveal:(id)arg1 ;
-(BOOL)_shouldPadBottomSpacingIsDragging:(BOOL)arg1 ;
-(BOOL)_allowNotificationsRevealPolicy;
-(void)structuredListContentChanged:(BOOL)arg1 ;
-(void)setDebugViewLeft:(SBFTouchPassThroughView *)arg1 ;
-(void)_stopScreenOnTimer;
-(void)_updateDeviceWakeProximitySensorAssertion;
-(id)_testingNotificationRequestWithIdentifier:(id)arg1 sectionIdentifier:(id)arg2 ;
-(void)setPresentationDirtiedAppearance:(BOOL)arg1 ;
-(double)_minListHeightForPadding;
-(void)dismissDNDBedtimeGreetingViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)_updateNotificationLongPressProximitySensorAssertion;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(void)rebuildEverythingForReason:(id)arg1 ;
-(void)_setHasUserInteraction:(BOOL)arg1 ;
-(void)setDndDrivingModeActive:(BOOL)arg1 ;
-(UIEdgeInsets)insetMarginsToMimicForAdjunctListViewController:(id)arg1 ;
-(SBFTouchPassThroughView *)debugViewRight;
-(id)groupNameBaseForAdjunctListViewController:(id)arg1 ;
-(BOOL)notificationStructuredListViewControllerShouldAllowLongPressGesture:(id)arg1 ;
-(DNDStateService *)dndStateService;
-(void)setDndNotificationDeliveryDelayActive:(BOOL)arg1 ;
-(SBFTouchPassThroughView *)debugViewLeft;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)layoutListView;
-(BOOL)_shouldPadBottomSpacing;
-(void)applicationInformer:(id)arg1 updatedApplications:(id)arg2 ;
-(void)setDeviceOrientationProvider:(id<CSDeviceOrientationProviding>)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)setHomeAffordanceController:(id<CSHomeAffordanceControlling>)arg1 ;
-(id<CSProximitySensorProviding>)proximitySensorProvider;
-(void)setUnlockRequester:(id<CSUnlockRequesting>)arg1 ;
-(BOOL)notificationListHidden;
-(void)_evaluateShouldShowGreeting:(id)arg1 animated:(BOOL)arg2 ;
-(id)_threadIdentifierForNotificationRequest:(id)arg1 ;
-(void)performCustomTransitionToVisible:(BOOL)arg1 withAnimationSettings:(id)arg2 completion:(/*^block*/id)arg3 ;
-(NCNotificationRequest *)activeRaiseToListenNotificationRequest;
-(BOOL)footerCallToActionLabelHidden;
-(void)notificationStructuredListViewController:(id)arg1 requestsClearingNotificationRequestsInSections:(id)arg2 ;
-(id)unhideHomeAffordanceAnimationSettingsForNotificationStructuredListViewController:(id)arg1 ;
-(BOOL)_shouldDNDDelayDeliveryOfNotificationRequest:(id)arg1 ;
-(void)homeGestureParticipantOwningHomeGestureDidChange:(id)arg1 ownsHomeGesture:(BOOL)arg2 ;
-(void)notificationStructuredListViewController:(id)arg1 didBeginUserInteractionWithNotificationViewController:(id)arg2 ;
-(void)_testingCoalesceExpandedBundleForNotificationRequest:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)metadataForTriggeredInteraction:(id)arg1 ;
-(double)defaultRestingOffsetExcludingAdjunct;
-(void)notificationStructuredListViewController:(id)arg1 requestsExecuteAction:(id)arg2 forNotificationRequest:(id)arg3 requestAuthentication:(BOOL)arg4 withParameters:(id)arg5 completion:(/*^block*/id)arg6 ;
-(id)_identifierForNotificationRequest:(id)arg1 ;
-(void)notificationStructuredListViewController:(id)arg1 requestPermissionToExecuteAction:(id)arg2 forNotificationRequest:(id)arg3 withParameters:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)_testingExpandCoalescedBundleForNotificationRequest:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_setDisableScrolling:(BOOL)arg1 ;
-(void)_performSelfCorrectingListViewAction:(/*^block*/id)arg1 ;
-(id)settleHomeAffordanceAnimationBehaviorDescriptionForNotificationStructuredListViewController:(id)arg1 ;
-(CGPoint)_determineMaxContentOffsetForContentInset:(UIEdgeInsets)arg1 ;
-(void)setActiveRaiseToListenNotificationRequest:(NCNotificationRequest *)arg1 ;
-(void)resetContentOffset;
-(BOOL)_shouldFilterNotificationRequest:(id)arg1 ;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end

