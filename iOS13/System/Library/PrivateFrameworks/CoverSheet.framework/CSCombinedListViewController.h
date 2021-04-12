/*
* Generated on Monday, March 1, 2021 at 2:33:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
#import <libobjc.A.dylib/CSNotificationDestination.h>
#import <libobjc.A.dylib/CSDateViewScrolling.h>
#import <libobjc.A.dylib/CSAppearanceProviding.h>

@protocol SBUIBiometricResource, BSInvalidatable, CSCombinedListViewControllerDelegate, CSApplicationInforming, CSNotificationDispatcher, CSPageViewControllerProtocol, CSHomeAffordanceControlling, CSUnlockRequesting, CSNotificationPresenting, SBFAuthenticationStatusProvider;
@class NSString, NSSet, _UILegibilitySettings, UIColor, UIViewController, NCNotificationStructuredListViewController, SBFTouchPassThroughView, BSTimer, CSComponent, NSMutableSet, CSDNDBedtimeController, CSDNDBedtimeGreetingViewController, CSLayoutStrategy, CSNotificationAdjunctListViewController, NCNotificationRequest, DNDEventBehaviorResolutionService, DNDStateService, CSLockScreenSettings, UIScrollView;

@interface CSCombinedListViewController : CSCoverSheetViewControllerBase <CSNotificationAdjunctListViewControllerDelegate, SBFMotionGestureObserver, NCNotificationStructuredListContentObserver, CSStatusBarBackgroundIntersecting, PTSettingsKeyObserver, CSHomeGestureParticipating, CSDNDBedtimeControllerObserver, DNDStateUpdateListener, CSDNDBedtimeGreetingDelegate, CSApplicationInformationObserving, NCNotificationStructuredListViewControllerDelegate, SBUICoronaAnimationControllerParticipant, CSNotificationDestination, CSDateViewScrolling, CSAppearanceProviding> {

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
	_UILegibilitySettings* _legibilitySettings;
	BOOL _confirmedNotInPocket;
	BOOL _shouldPadBottomSpacingWhileDragging;
	id<SBUIBiometricResource> _biometricResource;
	id<BSInvalidatable> _faceDetectWantedAssertion;
	BOOL _faceInView;
	BOOL _screenOn;
	BOOL _coverSheetWasDismissed;
	BOOL _dndNotificationDeliveryDelayActive;
	BOOL _dndDrivingModeActive;
	BOOL _disableScrolling;
	BOOL _disableBackgroundAnimation;
	BOOL _footerCallToActionLabelHidden;
	BOOL _presentationDirtiedAppearance;
	BOOL _dismissGestureEnabled;
	id<CSCombinedListViewControllerDelegate> _delegate;
	id<CSApplicationInforming> _applicationInformer;
	id<CSNotificationDispatcher> _dispatcher;
	CSLayoutStrategy* _layoutStrategy;
	id<CSPageViewControllerProtocol> _page;
	id<CSHomeAffordanceControlling> _homeAffordanceController;
	id<CSUnlockRequesting> _unlockRequester;
	id<CSNotificationPresenting> _notificationPresenter;
	id<SBFAuthenticationStatusProvider> _authenticationStatusProvider;
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
@property (nonatomic,retain) CSNotificationAdjunctListViewController * adjunctListViewController;                                                             //@synthesize adjunctListViewController=_adjunctListViewController - In the implementation block
@property (nonatomic,retain) NCNotificationRequest * activeRaiseToListenNotificationRequest;                                                                  //@synthesize activeRaiseToListenNotificationRequest=_activeRaiseToListenNotificationRequest - In the implementation block
@property (nonatomic,retain) DNDEventBehaviorResolutionService * dndEventBehaviorResolutionService;                                                           //@synthesize dndEventBehaviorResolutionService=_dndEventBehaviorResolutionService - In the implementation block
@property (nonatomic,retain) DNDStateService * dndStateService;                                                                                               //@synthesize dndStateService=_dndStateService - In the implementation block
@property (assign,getter=isDndNotificationDeliveryDelayActive,nonatomic) BOOL dndNotificationDeliveryDelayActive;                                             //@synthesize dndNotificationDeliveryDelayActive=_dndNotificationDeliveryDelayActive - In the implementation block
@property (assign,getter=isDndDrivingModeActive,nonatomic) BOOL dndDrivingModeActive;                                                                         //@synthesize dndDrivingModeActive=_dndDrivingModeActive - In the implementation block
@property (nonatomic,retain) CSLockScreenSettings * lockScreenSettings;                                                                                       //@synthesize lockScreenSettings=_lockScreenSettings - In the implementation block
@property (nonatomic,retain) SBFTouchPassThroughView * debugViewLeft;                                                                                         //@synthesize debugViewLeft=_debugViewLeft - In the implementation block
@property (nonatomic,retain) SBFTouchPassThroughView * debugViewRight;                                                                                        //@synthesize debugViewRight=_debugViewRight - In the implementation block
@property (assign,setter=_setHasUserInteraction:,getter=_hasUserInteraction,nonatomic) BOOL hasUserInteraction;                                               //@synthesize hasUserInteraction=_hasUserInteraction - In the implementation block
@property (assign,setter=_setDisableScrolling:,getter=_disableScrolling,nonatomic) BOOL disableScrolling;                                                     //@synthesize disableScrolling=_disableScrolling - In the implementation block
@property (assign,setter=_setDisableBackgroundAnimation:,getter=_disableBackgroundAnimation,nonatomic) BOOL disableBackgroundAnimation;                       //@synthesize disableBackgroundAnimation=_disableBackgroundAnimation - In the implementation block
@property (assign,setter=_setFooterCallToActionLabelHidden:,getter=_footerCallToActionLabelHidden,nonatomic) BOOL footerCallToActionLabelHidden;              //@synthesize footerCallToActionLabelHidden=_footerCallToActionLabelHidden - In the implementation block
@property (assign,getter=hasPresentationDirtiedAppearance,nonatomic) BOOL presentationDirtiedAppearance;                                                      //@synthesize presentationDirtiedAppearance=_presentationDirtiedAppearance - In the implementation block
@property (assign,setter=_setDismissGestureEnabled:,getter=_dismissGestureEnabled,nonatomic) BOOL dismissGestureEnabled;                                      //@synthesize dismissGestureEnabled=_dismissGestureEnabled - In the implementation block
@property (nonatomic,readonly) BOOL hasContent;                                                                                                               //@synthesize listPresentingContent=_listPresentingContent - In the implementation block
@property (getter=isShowingMediaControls,nonatomic,readonly) BOOL showingMediaControls; 
@property (nonatomic,readonly) NSString * listViewControllerBackgroundGroupName; 
@property (nonatomic,retain) CSLayoutStrategy * layoutStrategy;                                                                                               //@synthesize layoutStrategy=_layoutStrategy - In the implementation block
@property (assign,nonatomic,__weak) id<CSCombinedListViewControllerDelegate> delegate;                                                                        //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<CSPageViewControllerProtocol> page;                                                                                    //@synthesize page=_page - In the implementation block
@property (assign,nonatomic,__weak) id<SBFActionProviding> contentActionProvider; 
@property (assign,nonatomic,__weak) id<CSApplicationInforming> applicationInformer;                                                                           //@synthesize applicationInformer=_applicationInformer - In the implementation block
@property (assign,nonatomic,__weak) id<CSHomeAffordanceControlling> homeAffordanceController;                                                                 //@synthesize homeAffordanceController=_homeAffordanceController - In the implementation block
@property (assign,nonatomic,__weak) id<CSUnlockRequesting> unlockRequester;                                                                                   //@synthesize unlockRequester=_unlockRequester - In the implementation block
@property (assign,nonatomic,__weak) id<CSNotificationPresenting> notificationPresenter;                                                                       //@synthesize notificationPresenter=_notificationPresenter - In the implementation block
@property (assign,nonatomic,__weak) id<SBFAuthenticationStatusProvider> authenticationStatusProvider;                                                         //@synthesize authenticationStatusProvider=_authenticationStatusProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) double distanceFromBarToContent; 
@property (nonatomic,readonly) double topContentInset; 
@property (nonatomic,copy,readonly) NSString * coverSheetIdentifier; 
@property (nonatomic,readonly) long long participantState; 
@property (assign,nonatomic,__weak) id<CSNotificationDispatcher> dispatcher;                                                                                  //@synthesize dispatcher=_dispatcher - In the implementation block
@property (nonatomic,readonly) double clippingOffset; 
@property (nonatomic,copy,readonly) NSString * appearanceIdentifier; 
@property (nonatomic,readonly) long long backgroundStyle; 
@property (nonatomic,copy,readonly) NSSet * components; 
@property (nonatomic,readonly) _UILegibilitySettings * legibilitySettings; 
@property (nonatomic,readonly) UIColor * backgroundColor; 
-(void)dealloc;
-(id<CSCombinedListViewControllerDelegate>)delegate;
-(void)setDelegate:(id<CSCombinedListViewControllerDelegate>)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(double)_statusBarHeight;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(BOOL)handleEvent:(id)arg1 ;
-(id<CSPageViewControllerProtocol>)page;
-(void)setPage:(id<CSPageViewControllerProtocol>)arg1 ;
-(BOOL)hasContent;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(long long)presentationType;
-(id<CSNotificationDispatcher>)dispatcher;
-(void)setDispatcher:(id<CSNotificationDispatcher>)arg1 ;
-(double)topContentInset;
-(long long)presentationTransition;
-(void)didReceiveRaiseGesture;
-(void)_handleBiometricEvent:(unsigned long long)arg1 ;
-(void)stateService:(id)arg1 didReceiveDoNotDisturbStateUpdate:(id)arg2 ;
-(void)_addStateCaptureHandlers;
-(void)coronaAnimationController:(id)arg1 willAnimateCoronaTransitionWithAnimator:(id)arg2 ;
-(void)resetContentOffset;
-(void)updateForLegibilitySettings:(id)arg1 ;
-(long long)presentationPriority;
-(void)aggregateAppearance:(id)arg1 ;
-(void)aggregateBehavior:(id)arg1 ;
-(BOOL)wouldHandleButtonEvent:(id)arg1 ;
-(id<CSHomeAffordanceControlling>)homeAffordanceController;
-(void)setHomeAffordanceController:(id<CSHomeAffordanceControlling>)arg1 ;
-(CSLayoutStrategy *)layoutStrategy;
-(void)setLayoutStrategy:(CSLayoutStrategy *)arg1 ;
-(BOOL)isShowingMediaControls;
-(void)layoutListView;
-(void)postNotificationRequest:(id)arg1 ;
-(void)updateNotificationRequest:(id)arg1 ;
-(void)withdrawNotificationRequest:(id)arg1 ;
-(void)updateNotificationSectionSettings:(id)arg1 previousSectionSettings:(id)arg2 ;
-(BOOL)isNotificationContentExtensionVisible:(id)arg1 ;
-(BOOL)isPresentingNotificationInLongLook;
-(BOOL)dismissNotificationInLongLookAnimated:(BOOL)arg1 ;
-(id<SBFAuthenticationStatusProvider>)authenticationStatusProvider;
-(void)setAuthenticationStatusProvider:(id<SBFAuthenticationStatusProvider>)arg1 ;
-(id<CSUnlockRequesting>)unlockRequester;
-(BOOL)interpretsViewAsContent:(id)arg1 ;
-(id<CSApplicationInforming>)applicationInformer;
-(void)setApplicationInformer:(id<CSApplicationInforming>)arg1 ;
-(id<SBFActionProviding>)contentActionProvider;
-(void)setContentActionProvider:(id<SBFActionProviding>)arg1 ;
-(id<CSNotificationPresenting>)notificationPresenter;
-(void)setNotificationPresenter:(id<CSNotificationPresenting>)arg1 ;
-(void)setUnlockRequester:(id<CSUnlockRequesting>)arg1 ;
-(void)rebuildEverythingForReason:(id)arg1 ;
-(void)performCustomTransitionToVisible:(BOOL)arg1 withAnimationSettings:(id)arg2 completion:(/*^block*/id)arg3 ;
-(double)interItemSpacingToMimicForAdjunctListViewController:(id)arg1 ;
-(UIEdgeInsets)insetMarginsToMimicForAdjunctListViewController:(id)arg1 ;
-(CGSize)sizeToMimicForAdjunctListViewController:(id)arg1 ;
-(id)groupNameBaseForAdjunctListViewController:(id)arg1 ;
-(void)adjunctListViewController:(id)arg1 didUpdateWithSize:(CGSize)arg2 ;
-(DNDStateService *)dndStateService;
-(BOOL)_disableScrolling;
-(UIScrollView *)notificationListScrollView;
-(UIViewController *)notificationListViewController;
-(void)_layoutListView;
-(void)_updateCaptureOnlyMaterialView;
-(void)_updatePresentation;
-(void)_updateFaceDetectAssertion;
-(NCNotificationRequest *)activeRaiseToListenNotificationRequest;
-(void)_updateRaiseGestureDetectionForNotificationRequest:(id)arg1 ;
-(double)_sanitizedContentOffset:(double)arg1 forContentInset:(UIEdgeInsets)arg2 ;
-(BOOL)_hasUserInteraction;
-(BOOL)_dismissGestureEnabled;
-(CGSize)effectiveContentSizeForScrollView:(id)arg1 ;
-(void)_dismissDNDBedtimeGreetingViewAnimated:(BOOL)arg1 ;
-(void)_performSelfCorrectingListViewAction:(/*^block*/id)arg1 ;
-(void)_screenTimeExpirationApplicationsDidChange:(id)arg1 ;
-(void)_setListHasContent:(BOOL)arg1 ;
-(CGSize)_adjunctListViewSizeIncludingSpacing;
-(void)_updateListViewContentInset;
-(void)_requestAuthenticationWithCompletion:(/*^block*/id)arg1 ;
-(void)_setQuickActionsHidden:(BOOL)arg1 forReason:(id)arg2 ;
-(void)_setHasUserInteraction:(BOOL)arg1 ;
-(BOOL)_shouldPadBottomSpacing;
-(BOOL)_allowsDateViewOrProudLockScroll;
-(double)defaultRestingOffsetExcludingAdjunct;
-(double)clippingOffset;
-(void)_setDisableScrolling:(BOOL)arg1 ;
-(void)_setDisableBackgroundAnimation:(BOOL)arg1 ;
-(void)_setDismissGestureEnabled:(BOOL)arg1 ;
-(BOOL)_shouldDNDDelayDeliveryOfNotificationRequest:(id)arg1 ;
-(BOOL)_shouldFilterNotificationRequest:(id)arg1 ;
-(BOOL)_isClockSnoozeAlarmNotificationRequest:(id)arg1 ;
-(BOOL)_allowNotificationsRevealPolicy;
-(BOOL)isDndDrivingModeActive;
-(double)_minInsetsToPushDateOffScreen;
-(CGSize)_adjunctListViewSize;
-(void)updateAppearanceForHidden:(BOOL)arg1 offset:(CGPoint)arg2 ;
-(CGRect)_suggestedListViewFrame;
-(UIEdgeInsets)_listViewDefaultContentInsets;
-(CGPoint)_determineMaxContentOffsetForContentInset:(UIEdgeInsets)arg1 ;
-(double)_minListHeightForPadding;
-(void)setActiveRaiseToListenNotificationRequest:(NCNotificationRequest *)arg1 ;
-(DNDEventBehaviorResolutionService *)dndEventBehaviorResolutionService;
-(void)setDndDrivingModeActive:(BOOL)arg1 ;
-(BOOL)_shouldScreenTimeSuppressNotificationsForBundleIdentifier:(id)arg1 ;
-(void)_evaluateShouldShowGreeting:(id)arg1 animated:(BOOL)arg2 ;
-(void)_setFooterCallToActionLabelHidden:(BOOL)arg1 ;
-(void)structuredListContentChanged:(BOOL)arg1 ;
-(void)updateAppearanceForStatusBarBackgroundHidden:(BOOL)arg1 ;
-(double)distanceFromBarToContent;
-(void)homeGestureParticipantOwningHomeGestureDidChange:(id)arg1 ownsHomeGesture:(BOOL)arg2 ;
-(void)dndBedtimeControllerActiveStateDidChange:(id)arg1 ;
-(void)dndBedtimeControllerShowGreetingStateDidChange:(id)arg1 animated:(BOOL)arg2 ;
-(void)dismissDNDBedtimeGreetingViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)applicationInformer:(id)arg1 updatedApplications:(id)arg2 ;
-(void)notificationStructuredListViewController:(id)arg1 requestPermissionToExecuteAction:(id)arg2 forNotificationRequest:(id)arg3 withParameters:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)notificationStructuredListViewController:(id)arg1 requestsExecuteAction:(id)arg2 forNotificationRequest:(id)arg3 requestAuthentication:(BOOL)arg4 withParameters:(id)arg5 completion:(/*^block*/id)arg6 ;
-(void)notificationStructuredListViewController:(id)arg1 requestsAuthenticationAndPerformBlock:(/*^block*/id)arg2 ;
-(void)notificationStructuredListViewController:(id)arg1 requestsClearingFromIncomingSectionNotificationRequests:(id)arg2 ;
-(void)notificationStructuredListViewController:(id)arg1 shouldFinishLongLookTransitionForNotificationRequest:(id)arg2 trigger:(long long)arg3 withCompletionBlock:(/*^block*/id)arg4 ;
-(void)notificationStructuredListViewControllerDidSignificantUserInteraction:(id)arg1 ;
-(void)notificationStructuredListViewController:(id)arg1 didBeginUserInteractionWithNotificationViewController:(id)arg2 ;
-(void)notificationStructuredListViewController:(id)arg1 didEndUserInteractionWithNotificationViewController:(id)arg2 ;
-(void)notificationStructuredListViewController:(id)arg1 presentingLongLook:(BOOL)arg2 ;
-(void)notificationStructuredListViewController:(id)arg1 requestsClearingNotificationRequestsInSections:(id)arg2 ;
-(void)notificationStructuredListViewController:(id)arg1 requestsClearingNotificationRequests:(id)arg2 ;
-(id)notificationStructuredListViewController:(id)arg1 requestsSectionSettingsForSectionIdentifier:(id)arg2 ;
-(id)notificationUsageTrackingStateForNotificationStructuredListViewController:(id)arg1 ;
-(BOOL)notificationStructuredListViewController:(id)arg1 shouldAllowInteractionsForNotificationRequest:(id)arg2 ;
-(BOOL)notificationStructuredListViewController:(id)arg1 shouldDelayDeliveryOfNotificationRequest:(id)arg2 ;
-(BOOL)notificationStructuredListViewController:(id)arg1 shouldFilterNotificationRequest:(id)arg2 ;
-(BOOL)notificationStructuredListViewController:(id)arg1 isClockNotificationRequest:(id)arg2 ;
-(BOOL)notificationStructuredListViewControllerShouldHintForDefaultAction:(id)arg1 ;
-(BOOL)notificationStructuredListViewControllerShouldAllowNotificationHistoryReveal:(id)arg1 ;
-(BOOL)notificationStructuredListViewControllerShouldAllowLongPressGesture:(id)arg1 ;
-(void)notificationStructuredListViewControllerDidScrollToRevealNotificationHistory:(id)arg1 ;
-(id)legibilitySettingsForNotificationStructuredListViewController:(id)arg1 ;
-(void)notificationStructuredListViewController:(id)arg1 setAllowsNotifications:(BOOL)arg2 forSectionIdentifier:(id)arg3 ;
-(void)notificationStructuredListViewController:(id)arg1 setDeliverQuietly:(BOOL)arg2 forSectionIdentifier:(id)arg3 ;
-(void)notificationStructuredListViewController:(id)arg1 setAllowsCriticalAlerts:(BOOL)arg2 forSectionIdentifier:(id)arg3 ;
-(id)notificationStructuredListViewController:(id)arg1 keyboardAssertionForGestureWindow:(id)arg2 ;
-(id)hideHomeAffordanceAnimationSettingsForNotificationStructuredListViewController:(id)arg1 ;
-(id)unhideHomeAffordanceAnimationSettingsForNotificationStructuredListViewController:(id)arg1 ;
-(id)settleHomeAffordanceAnimationBehaviorDescriptionForNotificationStructuredListViewController:(id)arg1 ;
-(NSString *)listViewControllerBackgroundGroupName;
-(id)_identifierForNotificationRequest:(id)arg1 ;
-(id)_threadIdentifierForNotificationRequest:(id)arg1 ;
-(void)forceNotificationHistoryRevealed:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)migrateIncomingNotificationsToNotificationCenter;
-(id)_testingNotificationRequestWithIdentifier:(id)arg1 sectionIdentifier:(id)arg2 ;
-(void)_testingExpandCoalescedBundleForNotificationRequest:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_testingCoalesceExpandedBundleForNotificationRequest:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(CSNotificationAdjunctListViewController *)adjunctListViewController;
-(void)setAdjunctListViewController:(CSNotificationAdjunctListViewController *)arg1 ;
-(void)setDndEventBehaviorResolutionService:(DNDEventBehaviorResolutionService *)arg1 ;
-(void)setDndStateService:(DNDStateService *)arg1 ;
-(BOOL)isDndNotificationDeliveryDelayActive;
-(void)setDndNotificationDeliveryDelayActive:(BOOL)arg1 ;
-(CSLockScreenSettings *)lockScreenSettings;
-(void)setLockScreenSettings:(CSLockScreenSettings *)arg1 ;
-(SBFTouchPassThroughView *)debugViewLeft;
-(void)setDebugViewLeft:(SBFTouchPassThroughView *)arg1 ;
-(SBFTouchPassThroughView *)debugViewRight;
-(void)setDebugViewRight:(SBFTouchPassThroughView *)arg1 ;
-(BOOL)_disableBackgroundAnimation;
-(BOOL)_footerCallToActionLabelHidden;
-(BOOL)hasPresentationDirtiedAppearance;
-(void)setPresentationDirtiedAppearance:(BOOL)arg1 ;
@end

