/*
* Generated on Thursday, January 14, 2021 at 2:25:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/SBCoverSheetSlidingViewControllerDelegate.h>
#import <libobjc.A.dylib/SBCoverSheetGrabberDelegate.h>
#import <libobjc.A.dylib/CSExternalAppearanceProviding.h>
#import <libobjc.A.dylib/CSExternalBehaviorProviding.h>
#import <libobjc.A.dylib/CSCoverSheetViewControllerObserver.h>
#import <libobjc.A.dylib/SBFIdleTimerBehaviorProviding.h>
#import <libobjc.A.dylib/SBSecureAppViewControllerDelegate.h>
#import <libobjc.A.dylib/SBSecureAppObserver.h>
#import <libobjc.A.dylib/SBAssistantObserver.h>
#import <libobjc.A.dylib/PTSettingsKeyObserver.h>
#import <libobjc.A.dylib/SBHomeGestureParticipantDelegate.h>
#import <libobjc.A.dylib/SBCoverSheetSecureAppEnvironmentViewControllerDelegate.h>
#import <libobjc.A.dylib/SBWallpaperOrientationProvider.h>
#import <libobjc.A.dylib/SBPearlMatchingStateProviderDelegate.h>

@protocol SBCoverSheetPresentationDelegate, SBUILockStateProvider, SBPearlMatchingStateProvider, SBLockScreenEnvironment, BSInvalidatable, OS_dispatch_group;
@class SBWindow, SBCoverSheetSlidingViewController, SBDashBoardHostedAppViewController, SBMainWorkspace, NSMutableSet, SBCoverSheetSecureAppEnvironmentViewController, SBCoverSheetSceneManager, BSEventQueue, CSLockScreenSettings, UIImpactFeedbackGenerator, CSCoverSheetTransitionSettings, SBAsynchronousRenderingAssertion, SBDisableActiveInterfaceOrientationChangeAssertion, SBCoverSheetIconFlyInAnimator, NSObject, CSCoverSheetFlyInSettings, SBHomeGestureParticipant, SBDeviceApplicationSceneHandle, NSString, NSSet, _UILegibilitySettings, UIColor;

@interface SBCoverSheetPresentationManager : NSObject <SBCoverSheetSlidingViewControllerDelegate, SBCoverSheetGrabberDelegate, CSExternalAppearanceProviding, CSExternalBehaviorProviding, CSCoverSheetViewControllerObserver, SBFIdleTimerBehaviorProviding, SBSecureAppViewControllerDelegate, SBSecureAppObserver, SBAssistantObserver, PTSettingsKeyObserver, SBHomeGestureParticipantDelegate, SBCoverSheetSecureAppEnvironmentViewControllerDelegate, SBWallpaperOrientationProvider, SBPearlMatchingStateProviderDelegate> {

	BOOL _isCoverSheetHostingUnlockedEnvironmentWindows;
	BOOL _hasBeenDismissedSinceKeybagLock;
	BOOL _hasBeenDismissedSinceKeybagLockAndAuthenticated;
	BOOL _hasBeenDismissedSinceBoot;
	BOOL _activeInterfaceOrientationLocked;
	BOOL _shouldDisplayFakeStatusBar;
	BOOL _needsFakeStatusBarUpdate;
	BOOL _dismissingCoverSheet;
	BOOL _centerFollowsFinger;
	BOOL _animateIconsOnPresentationToo;
	BOOL _iconAnimatorNeedsAnimating;
	BOOL _wantsHomeGestureOwnership;
	SBWindow* _coverSheetWindow;
	SBWindow* _secureAppWindow;
	SBCoverSheetSlidingViewController* _secureAppSlidingViewController;
	long long _participantState;
	long long _scrollingStrategy;
	id<SBCoverSheetPresentationDelegate> _delegate;
	id<SBUILockStateProvider> _uiLockStateProvider;
	id<SBPearlMatchingStateProvider> _pearlMatchingStateProvider;
	id<SBLockScreenEnvironment> _lockScreenEnvironment;
	SBDashBoardHostedAppViewController* _secureAppViewController;
	SBMainWorkspace* _mainWorkspace;
	NSMutableSet* _coverSheetWindowVisibleReasons;
	NSMutableSet* _secureAppWindowVisibleReasons;
	SBCoverSheetSecureAppEnvironmentViewController* _secureAppEnvironmentViewController;
	/*^block*/id _secureAppCleanupHandler;
	SBCoverSheetSceneManager* _sceneManager;
	BSEventQueue* _lockUnlockQueue;
	CSLockScreenSettings* _lockScreenSettings;
	UIImpactFeedbackGenerator* _rubberBandFeedbackGenerator;
	unsigned long long _transitionType;
	CSCoverSheetTransitionSettings* _transitionSettings;
	unsigned long long _transitionOverrideOptions;
	SBAsynchronousRenderingAssertion* _asynchronousRenderingAssertion;
	SBDisableActiveInterfaceOrientationChangeAssertion* _activeInterfaceOrientationChangeAssertion;
	id<BSInvalidatable> _deferOrientationUpdatesAssertion;
	SBCoverSheetIconFlyInAnimator* _iconAnimator;
	NSObject*<OS_dispatch_group> _iconAnimatorCompletionGroup;
	/*^block*/id _iconAnimatorCompletionBlock;
	CSCoverSheetFlyInSettings* _flyInSettings;
	double _iconFlyInInteractiveResponseMin;
	double _iconFlyInInteractiveResponseMax;
	double _iconFlyInInteractiveDampingRatioMin;
	double _iconFlyInInteractiveDampingRatioMax;
	double _iconFlyInTension;
	double _iconFlyInFriction;
	SBHomeGestureParticipant* _homeGestureParticipant;
	id<BSInvalidatable> _suspendWallpaperAnimationAssertion;
	id<BSInvalidatable> _requireWallpaperAssertion;
	/*^block*/id _ppt_transitionBeginsCallback;
	/*^block*/id _ppt_transitionEndsCallback;
	SBCoverSheetSlidingViewController* _coverSheetSlidingViewController;

}

@property (nonatomic,retain) SBWindow * coverSheetWindow;                                                                                 //@synthesize coverSheetWindow=_coverSheetWindow - In the implementation block
@property (nonatomic,retain) NSMutableSet * coverSheetWindowVisibleReasons;                                                               //@synthesize coverSheetWindowVisibleReasons=_coverSheetWindowVisibleReasons - In the implementation block
@property (nonatomic,retain) SBWindow * secureAppWindow;                                                                                  //@synthesize secureAppWindow=_secureAppWindow - In the implementation block
@property (nonatomic,retain) NSMutableSet * secureAppWindowVisibleReasons;                                                                //@synthesize secureAppWindowVisibleReasons=_secureAppWindowVisibleReasons - In the implementation block
@property (nonatomic,retain) SBCoverSheetSlidingViewController * secureAppSlidingViewController;                                          //@synthesize secureAppSlidingViewController=_secureAppSlidingViewController - In the implementation block
@property (nonatomic,retain) SBCoverSheetSecureAppEnvironmentViewController * secureAppEnvironmentViewController;                         //@synthesize secureAppEnvironmentViewController=_secureAppEnvironmentViewController - In the implementation block
@property (nonatomic,copy) id secureAppCleanupHandler;                                                                                    //@synthesize secureAppCleanupHandler=_secureAppCleanupHandler - In the implementation block
@property (nonatomic,retain) SBCoverSheetSceneManager * sceneManager;                                                                     //@synthesize sceneManager=_sceneManager - In the implementation block
@property (nonatomic,retain) BSEventQueue * lockUnlockQueue;                                                                              //@synthesize lockUnlockQueue=_lockUnlockQueue - In the implementation block
@property (nonatomic,retain) CSLockScreenSettings * lockScreenSettings;                                                                   //@synthesize lockScreenSettings=_lockScreenSettings - In the implementation block
@property (nonatomic,retain) UIImpactFeedbackGenerator * rubberBandFeedbackGenerator;                                                     //@synthesize rubberBandFeedbackGenerator=_rubberBandFeedbackGenerator - In the implementation block
@property (assign,nonatomic) long long participantState;                                                                                  //@synthesize participantState=_participantState - In the implementation block
@property (assign,nonatomic) unsigned long long transitionType;                                                                           //@synthesize transitionType=_transitionType - In the implementation block
@property (assign,nonatomic,__weak) CSCoverSheetTransitionSettings * transitionSettings;                                                  //@synthesize transitionSettings=_transitionSettings - In the implementation block
@property (assign,nonatomic) unsigned long long transitionOverrideOptions;                                                                //@synthesize transitionOverrideOptions=_transitionOverrideOptions - In the implementation block
@property (assign,nonatomic) BOOL shouldDisplayFakeStatusBar;                                                                             //@synthesize shouldDisplayFakeStatusBar=_shouldDisplayFakeStatusBar - In the implementation block
@property (assign,nonatomic) BOOL needsFakeStatusBarUpdate;                                                                               //@synthesize needsFakeStatusBarUpdate=_needsFakeStatusBarUpdate - In the implementation block
@property (nonatomic,retain) SBAsynchronousRenderingAssertion * asynchronousRenderingAssertion;                                           //@synthesize asynchronousRenderingAssertion=_asynchronousRenderingAssertion - In the implementation block
@property (nonatomic,retain) SBDisableActiveInterfaceOrientationChangeAssertion * activeInterfaceOrientationChangeAssertion;              //@synthesize activeInterfaceOrientationChangeAssertion=_activeInterfaceOrientationChangeAssertion - In the implementation block
@property (nonatomic,retain) id<BSInvalidatable> deferOrientationUpdatesAssertion;                                                        //@synthesize deferOrientationUpdatesAssertion=_deferOrientationUpdatesAssertion - In the implementation block
@property (assign,nonatomic) BOOL hasBeenDismissedSinceKeybagLock;                                                                        //@synthesize hasBeenDismissedSinceKeybagLock=_hasBeenDismissedSinceKeybagLock - In the implementation block
@property (assign,nonatomic) BOOL hasBeenDismissedSinceBoot;                                                                              //@synthesize hasBeenDismissedSinceBoot=_hasBeenDismissedSinceBoot - In the implementation block
@property (nonatomic,retain) SBCoverSheetIconFlyInAnimator * iconAnimator;                                                                //@synthesize iconAnimator=_iconAnimator - In the implementation block
@property (assign,nonatomic) BOOL dismissingCoverSheet;                                                                                   //@synthesize dismissingCoverSheet=_dismissingCoverSheet - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_group> iconAnimatorCompletionGroup;                                                    //@synthesize iconAnimatorCompletionGroup=_iconAnimatorCompletionGroup - In the implementation block
@property (nonatomic,copy) id iconAnimatorCompletionBlock;                                                                                //@synthesize iconAnimatorCompletionBlock=_iconAnimatorCompletionBlock - In the implementation block
@property (nonatomic,retain) CSCoverSheetFlyInSettings * flyInSettings;                                                                   //@synthesize flyInSettings=_flyInSettings - In the implementation block
@property (assign,nonatomic) BOOL centerFollowsFinger;                                                                                    //@synthesize centerFollowsFinger=_centerFollowsFinger - In the implementation block
@property (assign,nonatomic) BOOL animateIconsOnPresentationToo;                                                                          //@synthesize animateIconsOnPresentationToo=_animateIconsOnPresentationToo - In the implementation block
@property (assign,nonatomic) double iconFlyInInteractiveResponseMin;                                                                      //@synthesize iconFlyInInteractiveResponseMin=_iconFlyInInteractiveResponseMin - In the implementation block
@property (assign,nonatomic) double iconFlyInInteractiveResponseMax;                                                                      //@synthesize iconFlyInInteractiveResponseMax=_iconFlyInInteractiveResponseMax - In the implementation block
@property (assign,nonatomic) double iconFlyInInteractiveDampingRatioMin;                                                                  //@synthesize iconFlyInInteractiveDampingRatioMin=_iconFlyInInteractiveDampingRatioMin - In the implementation block
@property (assign,nonatomic) double iconFlyInInteractiveDampingRatioMax;                                                                  //@synthesize iconFlyInInteractiveDampingRatioMax=_iconFlyInInteractiveDampingRatioMax - In the implementation block
@property (assign,nonatomic) double iconFlyInTension;                                                                                     //@synthesize iconFlyInTension=_iconFlyInTension - In the implementation block
@property (assign,nonatomic) double iconFlyInFriction;                                                                                    //@synthesize iconFlyInFriction=_iconFlyInFriction - In the implementation block
@property (assign,nonatomic) BOOL iconAnimatorNeedsAnimating;                                                                             //@synthesize iconAnimatorNeedsAnimating=_iconAnimatorNeedsAnimating - In the implementation block
@property (assign,nonatomic) BOOL wantsHomeGestureOwnership;                                                                              //@synthesize wantsHomeGestureOwnership=_wantsHomeGestureOwnership - In the implementation block
@property (nonatomic,retain) SBHomeGestureParticipant * homeGestureParticipant;                                                           //@synthesize homeGestureParticipant=_homeGestureParticipant - In the implementation block
@property (nonatomic,retain) id<BSInvalidatable> suspendWallpaperAnimationAssertion;                                                      //@synthesize suspendWallpaperAnimationAssertion=_suspendWallpaperAnimationAssertion - In the implementation block
@property (nonatomic,retain) id<BSInvalidatable> requireWallpaperAssertion;                                                               //@synthesize requireWallpaperAssertion=_requireWallpaperAssertion - In the implementation block
@property (nonatomic,copy) id ppt_transitionBeginsCallback;                                                                               //@synthesize ppt_transitionBeginsCallback=_ppt_transitionBeginsCallback - In the implementation block
@property (nonatomic,copy) id ppt_transitionEndsCallback;                                                                                 //@synthesize ppt_transitionEndsCallback=_ppt_transitionEndsCallback - In the implementation block
@property (nonatomic,retain) SBCoverSheetSlidingViewController * coverSheetSlidingViewController;                                         //@synthesize coverSheetSlidingViewController=_coverSheetSlidingViewController - In the implementation block
@property (assign,nonatomic,__weak) id<SBCoverSheetPresentationDelegate> delegate;                                                        //@synthesize delegate=_delegate - In the implementation block
@property (setter=setUILockStateProvider:,nonatomic,retain) id<SBUILockStateProvider> uiLockStateProvider;                                //@synthesize uiLockStateProvider=_uiLockStateProvider - In the implementation block
@property (assign,nonatomic,__weak) id<SBPearlMatchingStateProvider> pearlMatchingStateProvider;                                          //@synthesize pearlMatchingStateProvider=_pearlMatchingStateProvider - In the implementation block
@property (nonatomic,retain) id<SBLockScreenEnvironment> lockScreenEnvironment;                                                           //@synthesize lockScreenEnvironment=_lockScreenEnvironment - In the implementation block
@property (nonatomic,retain) SBDashBoardHostedAppViewController * secureAppViewController;                                                //@synthesize secureAppViewController=_secureAppViewController - In the implementation block
@property (getter=isCoverSheetHostingAnApp,nonatomic,readonly) BOOL coverSheetHostingAnApp; 
@property (nonatomic,readonly) BOOL isCoverSheetHostingUnlockedEnvironmentWindows;                                                        //@synthesize isCoverSheetHostingUnlockedEnvironmentWindows=_isCoverSheetHostingUnlockedEnvironmentWindows - In the implementation block
@property (nonatomic,readonly) SBDeviceApplicationSceneHandle * coverSheetHostedAppSceneHandle; 
@property (nonatomic,retain) SBMainWorkspace * mainWorkspace;                                                                             //@synthesize mainWorkspace=_mainWorkspace - In the implementation block
@property (nonatomic,readonly) BOOL hasBeenDismissedSinceKeybagLockAndAuthenticated;                                                      //@synthesize hasBeenDismissedSinceKeybagLockAndAuthenticated=_hasBeenDismissedSinceKeybagLockAndAuthenticated - In the implementation block
@property (assign,getter=activeInterfaceOrientationLocked,nonatomic) BOOL activeInterfaceOrientationLocked;                               //@synthesize activeInterfaceOrientationLocked=_activeInterfaceOrientationLocked - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * appearanceIdentifier; 
@property (nonatomic,readonly) long long backgroundStyle; 
@property (nonatomic,copy,readonly) NSSet * components; 
@property (nonatomic,readonly) _UILegibilitySettings * legibilitySettings; 
@property (nonatomic,readonly) UIColor * backgroundColor; 
@property (nonatomic,copy,readonly) NSString * coverSheetIdentifier; 
@property (nonatomic,readonly) long long scrollingStrategy;                                                                               //@synthesize scrollingStrategy=_scrollingStrategy - In the implementation block
@property (nonatomic,readonly) long long notificationBehavior; 
@property (nonatomic,readonly) unsigned long long restrictedCapabilities; 
@property (nonatomic,readonly) long long proximityDetectionMode; 
@property (nonatomic,readonly) long long idleTimerDuration; 
@property (nonatomic,readonly) long long idleTimerMode; 
@property (nonatomic,readonly) long long idleWarnMode; 
@property (nonatomic,readonly) double customIdleExpirationTimeout; 
@property (nonatomic,readonly) double customIdleWarningTimeout; 
+(id)sharedInstance;
-(void)loadViewsIfNeeded;
-(unsigned long long)transitionType;
-(void)setIconFlyInFriction:(double)arg1 ;
-(BOOL)centerFollowsFinger;
-(unsigned long long)screenEdgesDeferringSystemGestures;
-(void)setFlyInSettings:(CSCoverSheetFlyInSettings *)arg1 ;
-(void)setPpt_transitionBeginsCallback:(id)arg1 ;
-(void)setActiveInterfaceOrientationChangeAssertion:(SBDisableActiveInterfaceOrientationChangeAssertion *)arg1 ;
-(SBHomeGestureParticipant *)homeGestureParticipant;
-(id)secureAppSlidingViewControllerIfLoaded;
-(SBCoverSheetSceneManager *)sceneManager;
-(id)ppt_transitionEndsCallback;
-(void)setSecureAppWindow:(SBWindow *)arg1 ;
-(void)setHomeGestureParticipant:(SBHomeGestureParticipant *)arg1 ;
-(SBAsynchronousRenderingAssertion *)asynchronousRenderingAssertion;
-(void)assistantDidDisappear:(id)arg1 ;
-(void)setWantsHomeGestureOwnership:(BOOL)arg1 ;
-(BOOL)dismissingCoverSheet;
-(BOOL)coverSheetSlidingViewControllerContentShouldAutoRotateWhenNotVisible:(id)arg1 ;
-(BOOL)wantsHomeGestureOwnership;
-(void)coverSheetSlidingViewController:(id)arg1 dismissGestureChangedWithProgress:(double)arg2 ;
-(void)_requestHomeGestureOwnership;
-(void)setIconFlyInTension:(double)arg1 ;
-(void)setNeedsFakeStatusBarUpdate:(BOOL)arg1 ;
-(void)_relinquishHomeGestureOwnership;
-(void)setSceneManager:(SBCoverSheetSceneManager *)arg1 ;
-(void)coverSheetSlidingViewControllerUserPresentGestureBegan:(id)arg1 ;
-(void)noteScreenDidTurnOff;
-(void)setTransitionType:(unsigned long long)arg1 ;
-(void)setCoverSheetSlidingViewController:(SBCoverSheetSlidingViewController *)arg1 ;
-(void)setIconAnimator:(SBCoverSheetIconFlyInAnimator *)arg1 ;
-(CSCoverSheetFlyInSettings *)flyInSettings;
-(void)updateBecauseSecureAppChanged;
-(void)setRubberBandFeedbackGenerator:(UIImpactFeedbackGenerator *)arg1 ;
-(SBDeviceApplicationSceneHandle *)coverSheetHostedAppSceneHandle;
-(void)_updateInterstitialTransitionForSlidingViewController:(id)arg1 withProgress:(double)arg2 ;
-(id<SBLockScreenEnvironment>)lockScreenEnvironment;
-(long long)interfaceOrientationForWallpaperController:(id)arg1 ;
-(void)_prepareSecureAppWindowForDisplay;
-(void)setSecureAppEnvironmentViewController:(SBCoverSheetSecureAppEnvironmentViewController *)arg1 ;
-(CSLockScreenSettings *)lockScreenSettings;
-(void)setTransitionOverrideOptions:(unsigned long long)arg1 ;
-(SBMainWorkspace *)mainWorkspace;
-(void)_notifyDelegateRequestsUnlock;
-(void)willUIUnlockWithPendingUnlockRequest:(BOOL)arg1 ;
-(double)iconFlyInInteractiveDampingRatioMin;
-(void)_updateProximitySensorState;
-(void)setLockScreenSettings:(CSLockScreenSettings *)arg1 ;
-(void)_tellDashBoardOurAppearanceChanged;
-(id)secureAppCleanupHandler;
-(void)conformsToCSExternalBehaviorProviding;
-(void)setIconFlyInInteractiveDampingRatioMax:(double)arg1 ;
-(void)setTransitionSettings:(CSCoverSheetTransitionSettings *)arg1 ;
-(BOOL)isCoverSheetHostingUnlockedEnvironmentWindows;
-(id)init;
-(double)iconFlyInFriction;
-(BOOL)isAnyGestureActivelyRecognized;
-(BOOL)isDismissGestureActive;
-(CSCoverSheetTransitionSettings *)transitionSettings;
-(id<SBCoverSheetPresentationDelegate>)delegate;
-(void)setPpt_transitionEndsCallback:(id)arg1 ;
-(BOOL)isCoverSheetHostingAnApp;
-(void)setCenterFollowsFinger:(BOOL)arg1 ;
-(long long)backgroundStyle;
-(void)coverSheetSlidingViewController:(id)arg1 animateForGestureActive:(BOOL)arg2 withProgress:(double)arg3 beginBlock:(/*^block*/id)arg4 endBlock:(/*^block*/id)arg5 ;
-(SBWindow *)secureAppWindow;
-(void)setPearlMatchingStateProvider:(id<SBPearlMatchingStateProvider>)arg1 ;
-(void)_tellDashBoardOurBehaviorChanged;
-(id)coverSheetViewController;
-(double)iconFlyInInteractiveDampingRatioMax;
-(void)_setCoverSheetWindowVisible:(BOOL)arg1 forReason:(id)arg2 ;
-(void)coverSheetSlidingViewControllerCleanupDismissalTransition:(id)arg1 ;
-(id)_newRubberBandFeedbackGeneratorForSettings:(id)arg1 ;
-(void)setDismissingCoverSheet:(BOOL)arg1 ;
-(void)_notifyDelegateDidDismiss;
-(BOOL)shouldDisplayFakeStatusBar;
-(void)secureAppEnvironmentViewControllerOwnsHomeGestureDidChange;
-(void)_prepareForARubberBandTransitionForSlidingViewController:(id)arg1 ;
-(void)setSecureAppCleanupHandler:(id)arg1 ;
-(void)setIconAnimatorCompletionGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(long long)notificationBehavior;
-(void)_cleanupIconAnimator;
-(BOOL)isInSecureApp;
-(void)conformsToCSBehaviorProviding;
-(void)_cleanupRubberBandDismissalTransitionForSlidingViewController:(id)arg1 ;
-(void)setSecureAppSlidingViewController:(SBCoverSheetSlidingViewController *)arg1 ;
-(BOOL)hasFirstSwipeShowGrabberOverride;
-(void)setParticipantState:(long long)arg1 ;
-(BOOL)hasBeenDismissedSinceBoot;
-(double)iconFlyInTension;
-(void)_performAfterSecureAppCleanup:(/*^block*/id)arg1 ;
-(SBCoverSheetSlidingViewController *)secureAppSlidingViewController;
-(id)coverSheetSlidingViewControllerIfLoaded;
-(long long)proximityDetectionMode;
-(void)coverSheetSlidingViewController:(id)arg1 committingToEndPresented:(BOOL)arg2 ;
-(void)setCoverSheetWindowVisibleReasons:(NSMutableSet *)arg1 ;
-(id)ppt_transitionBeginsCallback;
-(UIImpactFeedbackGenerator *)rubberBandFeedbackGenerator;
-(void)secureAppOfTypeDidEnd:(unsigned long long)arg1 ;
-(void)_prepareForDismissalTransition;
-(SBCoverSheetSecureAppEnvironmentViewController *)secureAppEnvironmentViewController;
-(void)setCoverSheetPresented:(BOOL)arg1 animated:(BOOL)arg2 options:(unsigned long long)arg3 withCompletion:(/*^block*/id)arg4 ;
-(NSString *)appearanceIdentifier;
-(void)setSecureAppWindowVisibleReasons:(NSMutableSet *)arg1 ;
-(UIColor *)backgroundColor;
-(void)setSecureAppViewController:(SBDashBoardHostedAppViewController *)arg1 ;
-(void)setIconAnimatorCompletionBlock:(id)arg1 ;
-(void)_prepareForRubberBandDismissalTransitionForSlidingViewController:(id)arg1 ;
-(NSSet *)components;
-(NSString *)coverSheetIdentifier;
-(void)_cleanupInterstitialTransitionForSlidingViewController:(id)arg1 ;
-(void)_tellDashBoardOurAppearanceAndBehaviorChanged;
-(void)setDelegate:(id<SBCoverSheetPresentationDelegate>)arg1 ;
-(void)coverSheetSlidingViewControllerCleanupRubberBandedPresentationTransition:(id)arg1 ;
-(void)setShouldDisplayFakeStatusBar:(BOOL)arg1 ;
-(id<BSInvalidatable>)deferOrientationUpdatesAssertion;
-(void)setIconAnimatorNeedsAnimating:(BOOL)arg1 ;
-(void)_cleanupATransition;
-(void)_cleanupARubberBandTransitionForSlidingViewController:(id)arg1 ;
-(void)noteDeviceDidLock;
-(BOOL)animateIconsOnPresentationToo;
-(double)iconFlyInInteractiveResponseMin;
-(void)setActiveInterfaceOrientationLocked:(BOOL)arg1 ;
-(void)_enqueueBlock:(/*^block*/id)arg1 withName:(id)arg2 ;
-(void)conformsToCSAppearanceProviding;
-(void)pearlMatchingStateProviderStateChangedForMatchFailure:(id)arg1 ;
-(void)_setOrientationUpdatesDeferred:(BOOL)arg1 ;
-(void)coverSheetSlidingViewController:(id)arg1 animationTickedWithProgress:(double)arg2 coverSheetFrame:(CGRect)arg3 gestureActive:(BOOL)arg4 forPresentationValue:(BOOL)arg5 ;
-(SBCoverSheetIconFlyInAnimator *)iconAnimator;
-(void)setUILockStateProvider:(id)arg1 ;
-(void)_prepareForATransition;
-(void)_setCoverSheet:(BOOL)arg1 windowVisible:(BOOL)arg2 forReason:(id)arg3 ;
-(id<SBUILockStateProvider>)uiLockStateProvider;
-(BOOL)isVisible;
-(BOOL)isActiveInterfaceOrientationLocked;
-(void)_prepareIconAnimatorForPresenting:(BOOL)arg1 ;
-(_UILegibilitySettings *)legibilitySettings;
-(void)_clearSecureAppViewControllersIncludingWindow:(BOOL)arg1 ;
-(void)_notifyDelegateWillPresent;
-(void)setCoverSheetWindow:(SBWindow *)arg1 ;
-(void)coverSheetSlidingViewControllerDidPassRubberBandThreshold:(id)arg1 ;
-(unsigned long long)transitionOverrideOptions;
-(long long)idleTimerDuration;
-(void)secureAppViewControllerDidAuthenticate:(id)arg1 ;
-(long long)idleTimerMode;
-(void)setAsynchronousRenderingAssertion:(SBAsynchronousRenderingAssertion *)arg1 ;
-(long long)participantState;
-(void)homeGestureParticipantOwningHomeGestureDidChange:(id)arg1 ;
-(void)coverSheetSlidingViewControllerCleanupPresentationTransition:(id)arg1 ;
-(BOOL)isTransitioning;
-(void)_cleanupDismissalTransition;
-(void)setLockScreenEnvironment:(id<SBLockScreenEnvironment>)arg1 ;
-(void)_prepareInterstitialTransitionForSlidingViewController:(id)arg1 ;
-(void)_setTransitionProgress:(double)arg1 animated:(BOOL)arg2 gestureActive:(BOOL)arg3 coverSheetProgress:(double)arg4 completion:(/*^block*/id)arg5 ;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(SBCoverSheetSlidingViewController *)coverSheetSlidingViewController;
-(void)setAnimateIconsOnPresentationToo:(BOOL)arg1 ;
-(void)_setSecureAppWindowVisible:(BOOL)arg1 forReason:(id)arg2 ;
-(void)setMainWorkspace:(SBMainWorkspace *)arg1 ;
-(void)updateInterfaceOrientationToMatchOrientation:(long long)arg1 ;
-(SBDisableActiveInterfaceOrientationChangeAssertion *)activeInterfaceOrientationChangeAssertion;
-(void)coverSheetSlidingViewController:(id)arg1 prepareForDismissalTransitionForReversingTransition:(BOOL)arg2 forUserGesture:(BOOL)arg3 ;
-(long long)idleWarnMode;
-(BOOL)iconAnimatorNeedsAnimating;
-(void)setIconFlyInInteractiveResponseMax:(double)arg1 ;
-(double)iconFlyInInteractiveResponseMax;
-(BOOL)_isEffectivelyLocked;
-(void)secureAppOfTypeDidBegin:(unsigned long long)arg1 ;
-(BOOL)isPresented;
-(void)setCoverSheetPresented:(BOOL)arg1 animated:(BOOL)arg2 withCompletion:(/*^block*/id)arg3 ;
-(id)iconAnimatorCompletionBlock;
-(void)_transitionFromSecureAppToFullAppAndDismiss:(BOOL)arg1 preservingBanners:(BOOL)arg2 ;
-(void)_prepareSecureAppViewController;
-(void)_prepareForRubberBandPresentationTransitionForSlidingViewController:(id)arg1 ;
-(void)coverSheetSlidingViewControllerCleanupInterstitialTransition:(id)arg1 ;
-(void)setRequireWallpaperAssertion:(id<BSInvalidatable>)arg1 ;
-(void)_acquireAsynchronousRenderingAssertion;
-(void)setIconFlyInInteractiveResponseMin:(double)arg1 ;
-(NSMutableSet *)coverSheetWindowVisibleReasons;
-(void)coverSheetViewControllerExternalLockProviderStateDidChange:(id)arg1 ;
-(BSEventQueue *)lockUnlockQueue;
-(void)_cleanupPresentationTransition;
-(SBDashBoardHostedAppViewController *)secureAppViewController;
-(void)setLockUnlockQueue:(BSEventQueue *)arg1 ;
-(void)setHasBeenDismissedSinceBoot:(BOOL)arg1 ;
-(id)_impactFeedbackGeneratorConfigurationForStyle:(long long)arg1 ;
-(void)setHasBeenDismissedSinceKeybagLock:(BOOL)arg1 ;
-(long long)scrollingStrategy;
-(void)setSuspendWallpaperAnimationAssertion:(id<BSInvalidatable>)arg1 ;
-(NSMutableSet *)secureAppWindowVisibleReasons;
-(BOOL)hasContentUnderCoverSheetSlidingViewController:(id)arg1 ;
-(void)_prepareCoverSheetWindowForDisplay;
-(void)_updateIconsFlyInWithSettings:(id)arg1 ;
-(id<BSInvalidatable>)suspendWallpaperAnimationAssertion;
-(void)updateVisibilityForGrabberVisible:(BOOL)arg1 ;
-(void)authenticationStateMayHaveChangedFromSource:(int)arg1 ;
-(BOOL)needsFakeStatusBarUpdate;
-(void)_noteEffectiveLockStatusMayHaveChangedForUserNotification:(BOOL)arg1 canDismiss:(BOOL)arg2 ;
-(id<BSInvalidatable>)requireWallpaperAssertion;
-(void)setIconFlyInInteractiveDampingRatioMin:(double)arg1 ;
-(id<SBPearlMatchingStateProvider>)pearlMatchingStateProvider;
-(void)coverSheetSlidingViewController:(id)arg1 prepareForPresentationTransitionForUserGesture:(BOOL)arg2 ;
-(void)_authenticationChanged:(id)arg1 ;
-(void)_cleanupRubberBandPresentationTransitionForSlidingViewController:(id)arg1 ;
-(BOOL)activeInterfaceOrientationLocked;
-(void)_prepareForTransitionToSecureApp;
-(unsigned long long)restrictedCapabilities;
-(void)setDeferOrientationUpdatesAssertion:(id<BSInvalidatable>)arg1 ;
-(void)_relinquishAsynchronousRenderingAssertion;
-(void)_animateForProgress:(double)arg1 ;
-(void)_prepareForPresentationTransitionForUserGesture:(BOOL)arg1 ;
-(BOOL)hasBeenDismissedSinceKeybagLock;
-(BOOL)hasBeenDismissedSinceKeybagLockAndAuthenticated;
-(NSObject*<OS_dispatch_group>)iconAnimatorCompletionGroup;
-(void)_notifyDelegateWillDismiss;
-(void)_notifyDelegateDidPresent;
-(void)_updateVisibilityOfWindow:(id)arg1 forReasons:(id)arg2 ;
-(SBWindow *)coverSheetWindow;
-(void)coverSheetSlidingViewControllerPrepareForRubberBandedPresentationTransition:(id)arg1 ;
@end

