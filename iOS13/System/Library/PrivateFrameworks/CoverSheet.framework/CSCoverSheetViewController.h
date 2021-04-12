/*
* Generated on Monday, March 1, 2021 at 2:33:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
*/

#import <CoverSheet/CoverSheet-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/CSPersistentContentLayoutProviding.h>
#import <libobjc.A.dylib/CSDateTimeLayoutAggregating.h>
#import <libobjc.A.dylib/CSCoverSheetViewDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/CSLegibilityProviderDelegate.h>
#import <libobjc.A.dylib/SBLockScreenActionProvider.h>
#import <libobjc.A.dylib/SBFIrisWallpaperViewDelegate.h>
#import <libobjc.A.dylib/CSCoverSheetViewTransitionSource.h>
#import <libobjc.A.dylib/CSNotificationDestination.h>
#import <libobjc.A.dylib/CSTimerViewControllerDelegate.h>
#import <libobjc.A.dylib/_UISettingsKeyObserver.h>
#import <libobjc.A.dylib/CSScrollGestureControllerDelegate.h>
#import <libobjc.A.dylib/CSNotificationClearingTriggerDelegate.h>
#import <libobjc.A.dylib/CSInterstitialTransitionDelegate.h>
#import <libobjc.A.dylib/CSLocketTransitionDelegate.h>
#import <libobjc.A.dylib/CSPasscodeViewControllerDelegate.h>
#import <libobjc.A.dylib/CSLocketViewControllerDelegate.h>
#import <libobjc.A.dylib/SBFTodayOverlayObserving.h>
#import <libobjc.A.dylib/FBSDisplayLayoutPublisherObserving.h>
#import <libobjc.A.dylib/CSCoverSheetViewControllerProtocol.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@protocol CSCoverSheetContextProviding, CSCoverSheetViewControllerDelegate, CSCameraPrewarming, CSNotificationDispatcher, SBFIrisWallpaperView, CSWallpaperColorProvider, CSEmergencyCalling, CSOrientationUpdateControlling, CSIdleTimerControlling, CSApplicationLaunching, CSSpotlightPresenting, CSLegibilityProviding, SBFLockOutStatusProvider, CSCoverSheetViewTransitionSource, SBFTodayOverlayControllingCSExternalBehaviorProvidingCSExternalEventHandling, BSInvalidatable, SBFScreenWakeAnimationControlling;
@class CSLockScreenSettings, SBFSteppedAnimationTimingFunctionCalculator, NSHashTable, CSNotificationDispatcher, FBDisplayLayoutTransition, CSHomeButtonShowPasscodeRecognizer, CSHomeButtonSuppressAfterUnlockRecognizer, CSModalPresentationViewController, CSChargingViewController, BSTimer, CSFixedFooterViewController, CSProudLockViewController, CSTeachableMomentsContainerViewController, CSQuickActionsViewController, CSScrollGestureController, UITapGestureRecognizer, UIGestureRecognizer, CSLocketForcePressGestureRecognizer, CSNotificationClearingTrigger, SBLockScreenDefaults, SBFLockScreenWakeAnimator, CSDismissableModalViewController, SBFLockScreenDateSubtitleView, CSUserPresenceMonitor, SBFLockScreenActionContext, CSLayoutStrategy, CSAppearance, CSBehavior, NSArray, CSMainPageContentViewController, CSPresentation, SBFLockScreenDateViewController, CSPowerChangeObserver, CSTimerViewController, UIStatusBar, UIVisualEffectView, CSInterstitialTransitionSource, CSLocketTransitionSource, SBWallpaperAggdLogger, CSCoverSheetView, CSPresentationViewController, NSString, NSSet, _UILegibilitySettings, UIColor;

@interface CSCoverSheetViewController : UIViewController <CSPersistentContentLayoutProviding, CSDateTimeLayoutAggregating, CSCoverSheetViewDelegate, UIGestureRecognizerDelegate, CSLegibilityProviderDelegate, SBLockScreenActionProvider, SBFIrisWallpaperViewDelegate, CSCoverSheetViewTransitionSource, CSNotificationDestination, CSTimerViewControllerDelegate, _UISettingsKeyObserver, CSScrollGestureControllerDelegate, CSNotificationClearingTriggerDelegate, CSInterstitialTransitionDelegate, CSLocketTransitionDelegate, CSPasscodeViewControllerDelegate, CSLocketViewControllerDelegate, SBFTodayOverlayObserving, FBSDisplayLayoutPublisherObserving, CSCoverSheetViewControllerProtocol, BSDescriptionProviding> {

	id<CSCoverSheetContextProviding> _coverSheetContext;
	CSLockScreenSettings* _prototypeSettings;
	BOOL _screenOffMode;
	BOOL _hasContentAboveCoverSheet;
	BOOL _preventAppearanceUpdatesForRotation;
	SBFSteppedAnimationTimingFunctionCalculator* _interactiveAnimationCalculator;
	NSHashTable* _externalAppearanceProviders;
	NSHashTable* _externalBehaviorProviders;
	NSHashTable* _externalEventHandlers;
	NSHashTable* _externalPresentationProviders;
	NSHashTable* _externalLockProviders;
	NSHashTable* _observers;
	NSHashTable* _applicationHosters;
	CSNotificationDispatcher* _notificationDispatcher;
	long long _transitionType;
	SCD_Struct_CS6 _transitionContext;
	FBDisplayLayoutTransition* _displayLayoutTransition;
	long long _participantState;
	BOOL _transitionDisabledIdleTimer;
	CSHomeButtonShowPasscodeRecognizer* _homeButtonShowPasscodeRecognizer;
	CSHomeButtonSuppressAfterUnlockRecognizer* _homeButtonSuppressAfterUnlockRecognizer;
	CSModalPresentationViewController* _modalPresentationController;
	CSChargingViewController* _chargingViewController;
	BSTimer* _chargingViewControllerTimer;
	/*^block*/id _chargingViewTimerHandler;
	CSFixedFooterViewController* _fixedFooterViewController;
	CSProudLockViewController* _proudLockViewController;
	CSTeachableMomentsContainerViewController* _teachableMomentsContainerViewController;
	CSQuickActionsViewController* _quickActionsViewController;
	CSScrollGestureController* _scrollGestureController;
	BOOL _listeningForDisplayLayoutChanges;
	BOOL _screenOnForLiftToWake;
	BOOL _statusBarInLockdownForTeardown;
	UITapGestureRecognizer* _quickNoteGestureRecognizer;
	UIGestureRecognizer* _wallpaperGestureRecognizer;
	CSLocketForcePressGestureRecognizer* _locketGestureRecognizer;
	CSNotificationClearingTrigger* _notificationClearingTrigger;
	int _lastAppearState;
	BOOL _wantsAccessibilityContentSizes;
	BOOL _needsAccessibilityContentSizesUpdate;
	double _accessibilityTimeLabelBaselineY;
	double _accessibilityTimeSubtitleBaselineY;
	double _initialInterstitialTransitionProgress;
	BOOL _interstitialTransitionStartedFromPasscodePresented;
	SBLockScreenDefaults* _lockScreenDefaults;
	SBFLockScreenWakeAnimator* _lockScreenWakeAnimator;
	CSDismissableModalViewController* _dismissableModalViewController;
	SBFLockScreenDateSubtitleView* _chargingLabel;
	CSUserPresenceMonitor* _userPresenceMonitor;
	BOOL _contentAboveIsControlCenter;
	BOOL _authenticated;
	BOOL _irisPlayerIsInteracting;
	BOOL _shouldTransitionIrisWallpaperToStillWhenPlaybackFinishes;
	double _backlightLevel;
	SBFLockScreenActionContext* _customLockScreenActionContext;
	id<CSCoverSheetViewControllerDelegate> _delegate;
	CSLayoutStrategy* _layoutStrategy;
	id<CSCameraPrewarming> _cameraPrewarmer;
	CSAppearance* _activeAppearance;
	CSBehavior* _activeBehavior;
	id<CSNotificationDispatcher> _dispatcher;
	id<SBFIrisWallpaperView> _irisWallpaperView;
	id<CSWallpaperColorProvider> _wallpaperColorProvider;
	long long _effectiveInterfaceOrientationOverride;
	id<CSEmergencyCalling> _emergencyCaller;
	id<CSOrientationUpdateControlling> _orientationUpdateController;
	id<CSIdleTimerControlling> _idleTimerController;
	id<CSApplicationLaunching> _applicationLauncher;
	id<CSSpotlightPresenting> _spotlightPresenter;
	NSArray* _pageViewControllers;
	NSArray* _allowedPageViewControllers;
	CSMainPageContentViewController* _mainPageContentViewController;
	unsigned long long _lastSettledPageIndex;
	CSBehavior* _localBehavior;
	CSBehavior* _irisBehavior;
	double _appearanceFraction;
	CSAppearance* _previousAppearance;
	CSAppearance* _localAppearance;
	CSPresentation* _activePresentation;
	SBFLockScreenDateViewController* _dateViewController;
	CSPowerChangeObserver* _powerChangeObserver;
	CSTimerViewController* _timerViewController;
	id<CSLegibilityProviding> _legibilityProvider;
	UIStatusBar* _fakeStatusBar;
	UIVisualEffectView* _statusBarBackgroundView;
	id<SBFLockOutStatusProvider> _lockOutController;
	id<CSCoverSheetViewTransitionSource> _currentTransitionSource;
	CSInterstitialTransitionSource* _interstitialTransitionSource;
	CSLocketTransitionSource* _locketTransitionSource;
	id<SBFTodayOverlayControlling><CSExternalBehaviorProviding><CSExternalEventHandling> _todayOverlayController;
	id<BSInvalidatable> _suspendWallpaperAnimationAssertion;
	id<SBFScreenWakeAnimationControlling> _screenWakeAnimationController;
	SBWallpaperAggdLogger* _wallpaperAggdLogger;

}

@property (nonatomic,readonly) CSCoverSheetView * coverSheetView; 
@property (nonatomic,retain) CSLayoutStrategy * layoutStrategy;                                                                                                                                //@synthesize layoutStrategy=_layoutStrategy - In the implementation block
@property (setter=_setPageViewControllers:,nonatomic,copy) NSArray * pageViewControllers;                                                                                                      //@synthesize pageViewControllers=_pageViewControllers - In the implementation block
@property (setter=_setAllowedPageViewControllers:,getter=_allowedPageViewControllers,nonatomic,copy) NSArray * allowedPageViewControllers;                                                     //@synthesize allowedPageViewControllers=_allowedPageViewControllers - In the implementation block
@property (setter=_setMainPageContentViewController:,nonatomic,retain) CSMainPageContentViewController * mainPageContentViewController;                                                        //@synthesize mainPageContentViewController=_mainPageContentViewController - In the implementation block
@property (assign,nonatomic) unsigned long long lastSettledPageIndex;                                                                                                                          //@synthesize lastSettledPageIndex=_lastSettledPageIndex - In the implementation block
@property (nonatomic,copy) CSBehavior * activeBehavior;                                                                                                                                        //@synthesize activeBehavior=_activeBehavior - In the implementation block
@property (nonatomic,retain) CSBehavior * localBehavior;                                                                                                                                       //@synthesize localBehavior=_localBehavior - In the implementation block
@property (nonatomic,retain) CSBehavior * irisBehavior;                                                                                                                                        //@synthesize irisBehavior=_irisBehavior - In the implementation block
@property (assign,nonatomic) double appearanceFraction;                                                                                                                                        //@synthesize appearanceFraction=_appearanceFraction - In the implementation block
@property (nonatomic,copy) CSAppearance * activeAppearance;                                                                                                                                    //@synthesize activeAppearance=_activeAppearance - In the implementation block
@property (nonatomic,copy) CSAppearance * previousAppearance;                                                                                                                                  //@synthesize previousAppearance=_previousAppearance - In the implementation block
@property (nonatomic,copy) CSAppearance * localAppearance;                                                                                                                                     //@synthesize localAppearance=_localAppearance - In the implementation block
@property (nonatomic,retain) CSPresentation * activePresentation;                                                                                                                              //@synthesize activePresentation=_activePresentation - In the implementation block
@property (nonatomic,retain) SBFLockScreenDateViewController * dateViewController;                                                                                                             //@synthesize dateViewController=_dateViewController - In the implementation block
@property (nonatomic,retain) CSPowerChangeObserver * powerChangeObserver;                                                                                                                      //@synthesize powerChangeObserver=_powerChangeObserver - In the implementation block
@property (nonatomic,retain) CSTimerViewController * timerViewController;                                                                                                                      //@synthesize timerViewController=_timerViewController - In the implementation block
@property (nonatomic,retain) id<CSLegibilityProviding> legibilityProvider;                                                                                                                     //@synthesize legibilityProvider=_legibilityProvider - In the implementation block
@property (nonatomic,retain) UIStatusBar * fakeStatusBar;                                                                                                                                      //@synthesize fakeStatusBar=_fakeStatusBar - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * statusBarBackgroundView;                                                                                                                     //@synthesize statusBarBackgroundView=_statusBarBackgroundView - In the implementation block
@property (assign,nonatomic) BOOL irisPlayerIsInteracting;                                                                                                                                     //@synthesize irisPlayerIsInteracting=_irisPlayerIsInteracting - In the implementation block
@property (assign,nonatomic) BOOL shouldTransitionIrisWallpaperToStillWhenPlaybackFinishes;                                                                                                    //@synthesize shouldTransitionIrisWallpaperToStillWhenPlaybackFinishes=_shouldTransitionIrisWallpaperToStillWhenPlaybackFinishes - In the implementation block
@property (nonatomic,retain) CSModalPresentationViewController * modalPresentationController;                                                                                                  //@synthesize modalPresentationController=_modalPresentationController - In the implementation block
@property (setter=_setLockOutController:,getter=_lockOutController,nonatomic,retain) id<SBFLockOutStatusProvider> lockOutController;                                                           //@synthesize lockOutController=_lockOutController - In the implementation block
@property (nonatomic,retain) id<CSCoverSheetViewTransitionSource> currentTransitionSource;                                                                                                     //@synthesize currentTransitionSource=_currentTransitionSource - In the implementation block
@property (nonatomic,retain) CSInterstitialTransitionSource * interstitialTransitionSource;                                                                                                    //@synthesize interstitialTransitionSource=_interstitialTransitionSource - In the implementation block
@property (nonatomic,retain) CSLocketTransitionSource * locketTransitionSource;                                                                                                                //@synthesize locketTransitionSource=_locketTransitionSource - In the implementation block
@property (nonatomic,retain) id<SBFTodayOverlayControlling><CSExternalBehaviorProviding><CSExternalEventHandling> todayOverlayController;                                                      //@synthesize todayOverlayController=_todayOverlayController - In the implementation block
@property (nonatomic,retain) id<BSInvalidatable> suspendWallpaperAnimationAssertion;                                                                                                           //@synthesize suspendWallpaperAnimationAssertion=_suspendWallpaperAnimationAssertion - In the implementation block
@property (setter=_setScreenWakeAnimationController:,getter=_screenWakeAnimationController,nonatomic,retain) id<SBFScreenWakeAnimationControlling> screenWakeAnimationController;              //@synthesize screenWakeAnimationController=_screenWakeAnimationController - In the implementation block
@property (nonatomic,retain) SBWallpaperAggdLogger * wallpaperAggdLogger;                                                                                                                      //@synthesize wallpaperAggdLogger=_wallpaperAggdLogger - In the implementation block
@property (assign,nonatomic,__weak) id<CSCoverSheetViewControllerDelegate> delegate;                                                                                                           //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) id<SBFIrisWallpaperView> irisWallpaperView;                                                                                                                       //@synthesize irisWallpaperView=_irisWallpaperView - In the implementation block
@property (nonatomic,retain) UIGestureRecognizer * wallpaperGestureRecognizer;                                                                                                                 //@synthesize wallpaperGestureRecognizer=_wallpaperGestureRecognizer - In the implementation block
@property (assign,nonatomic,__weak) id<CSWallpaperColorProvider> wallpaperColorProvider;                                                                                                       //@synthesize wallpaperColorProvider=_wallpaperColorProvider - In the implementation block
@property (nonatomic,readonly) id<SBNotificationDestination> notificationDestination; 
@property (nonatomic,readonly) BOOL hasContentAboveCoverSheet;                                                                                                                                 //@synthesize hasContentAboveCoverSheet=_hasContentAboveCoverSheet - In the implementation block
@property (nonatomic,readonly) BOOL externalLockProvidersRequireUnlock; 
@property (nonatomic,readonly) BOOL externalLockProvidersShowPasscode; 
@property (nonatomic,readonly) long long effectiveInterfaceOrientation; 
@property (assign,nonatomic) long long effectiveInterfaceOrientationOverride;                                                                                                                  //@synthesize effectiveInterfaceOrientationOverride=_effectiveInterfaceOrientationOverride - In the implementation block
@property (nonatomic,readonly) CSPresentationViewController * mainPagePresentationViewController; 
@property (nonatomic,retain) id<CSCameraPrewarming> cameraPrewarmer;                                                                                                                           //@synthesize cameraPrewarmer=_cameraPrewarmer - In the implementation block
@property (assign,nonatomic,__weak) id<CSEmergencyCalling> emergencyCaller;                                                                                                                    //@synthesize emergencyCaller=_emergencyCaller - In the implementation block
@property (nonatomic,retain) id<CSOrientationUpdateControlling> orientationUpdateController;                                                                                                   //@synthesize orientationUpdateController=_orientationUpdateController - In the implementation block
@property (assign,nonatomic,__weak) id<CSIdleTimerControlling> idleTimerController;                                                                                                            //@synthesize idleTimerController=_idleTimerController - In the implementation block
@property (assign,nonatomic,__weak) id<CSApplicationLaunching> applicationLauncher;                                                                                                            //@synthesize applicationLauncher=_applicationLauncher - In the implementation block
@property (assign,nonatomic,__weak) id<CSSpotlightPresenting> spotlightPresenter;                                                                                                              //@synthesize spotlightPresenter=_spotlightPresenter - In the implementation block
@property (assign,nonatomic) double backlightLevel;                                                                                                                                            //@synthesize backlightLevel=_backlightLevel - In the implementation block
@property (nonatomic,readonly) BOOL contentOccludesBackground; 
@property (getter=_customLockScreenActionContext,nonatomic,retain) SBFLockScreenActionContext * customLockScreenActionContext;                                                                 //@synthesize customLockScreenActionContext=_customLockScreenActionContext - In the implementation block
@property (assign,getter=isAuthenticated,nonatomic) BOOL authenticated;                                                                                                                        //@synthesize authenticated=_authenticated - In the implementation block
@property (assign,getter=isShowingMediaControls,nonatomic) BOOL showingMediaControls; 
@property (nonatomic,readonly) BOOL shouldShowLockStatusBarTime; 
@property (nonatomic,readonly) id<SBFScreenWakeAnimationTarget> lockScreenWakeAnimator;                                                                                                        //@synthesize lockScreenWakeAnimator=_lockScreenWakeAnimator - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * coverSheetIdentifier; 
@property (nonatomic,readonly) long long participantState; 
@property (getter=isTransitioning,nonatomic,readonly) BOOL transitioning; 
@property (nonatomic,readonly) SCD_Struct_CS7 transitionContext;                                                                                                                               //@synthesize transitionContext=_transitionContext - In the implementation block
@property (assign,nonatomic,__weak) id<CSNotificationDispatcher> dispatcher;                                                                                                                   //@synthesize dispatcher=_dispatcher - In the implementation block
@property (nonatomic,copy,readonly) NSString * appearanceIdentifier; 
@property (nonatomic,readonly) long long backgroundStyle; 
@property (nonatomic,copy,readonly) NSSet * components; 
@property (nonatomic,readonly) _UILegibilitySettings * legibilitySettings; 
@property (nonatomic,readonly) UIColor * backgroundColor; 
@property (nonatomic,readonly) long long scrollingStrategy; 
@property (nonatomic,readonly) long long notificationBehavior; 
@property (nonatomic,readonly) unsigned long long restrictedCapabilities; 
@property (nonatomic,readonly) long long proximityDetectionMode; 
@property (nonatomic,__weak,readonly) id<UICoordinateSpace> presentationCoordinateSpace; 
@property (nonatomic,copy,readonly) NSArray * presentationRegions; 
@property (nonatomic,readonly) long long idleTimerDuration; 
@property (nonatomic,readonly) long long idleTimerMode; 
@property (nonatomic,readonly) long long idleWarnMode; 
@property (nonatomic,readonly) double customIdleExpirationTimeout; 
@property (nonatomic,readonly) double customIdleWarningTimeout; 
@property (assign,nonatomic,__weak) id<CSCoverSheetViewPresenting> presenter; 
@property (nonatomic,readonly) long long presentationStyle; 
@property (nonatomic,readonly) long long presentationType; 
@property (nonatomic,readonly) long long presentationTransition; 
@property (nonatomic,readonly) long long presentationPriority; 
@property (nonatomic,readonly) long long presentationAltitude; 
@property (nonatomic,copy,readonly) CSPresentation * externalPresentation; 
-(id<CSCoverSheetViewControllerDelegate>)delegate;
-(void)setDelegate:(id<CSCoverSheetViewControllerDelegate>)arg1 ;
-(NSSet *)components;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(BOOL)isAuthenticated;
-(void)setAuthenticated:(BOOL)arg1 ;
-(UIColor *)backgroundColor;
-(void)loadView;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)presentViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(long long)presentationStyle;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(BOOL)_canShowWhileLocked;
-(SCD_Struct_CS7)transitionContext;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)shouldAutorotate;
-(long long)statusBarStyle;
-(long long)effectiveInterfaceOrientation;
-(void)_updateBackground;
-(long long)preferredInterfaceOrientationForPresentation;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(BOOL)handleEvent:(id)arg1 ;
-(void)presentViewController:(id)arg1 withTransition:(int)arg2 completion:(/*^block*/id)arg3 ;
-(void)presentModalViewController:(id)arg1 withTransition:(int)arg2 ;
-(_UILegibilitySettings *)legibilitySettings;
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(BOOL)isTransitioning;
-(long long)backgroundStyle;
-(id<CSCoverSheetViewPresenting>)presenter;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(void)cancelTransition;
-(void)setBacklightLevel:(double)arg1 ;
-(double)backlightLevel;
-(id)dateView;
-(void)jiggleLockIcon;
-(BOOL)_handleEvent:(id)arg1 ;
-(void)publisher:(id)arg1 didUpdateLayout:(id)arg2 withTransition:(id)arg3 ;
-(BOOL)isPasscodeLockVisible;
-(long long)presentationType;
-(NSString *)appearanceIdentifier;
-(id<CSNotificationDispatcher>)dispatcher;
-(void)setDispatcher:(id<CSNotificationDispatcher>)arg1 ;
-(double)bottomContentInset;
-(void)setStatusBarBackgroundView:(UIVisualEffectView *)arg1 ;
-(UIVisualEffectView *)statusBarBackgroundView;
-(long long)presentationTransition;
-(void)irisWallpaperView:(id)arg1 didReplaceGestureRecognizer:(id)arg2 withGestureRecognizer:(id)arg3 ;
-(void)irisWallpaperViewPlaybackStateDidChange:(id)arg1 ;
-(void)irisWallpaperViewIsInteractingDidChange:(id)arg1 ;
-(double)timeLabelBaselineY;
-(double)timeToSubtitleLabelBaselineDifferenceY;
-(double)dateBaselineToListY;
-(id)superviewForDateViewAnimation;
-(void)handleBiometricEvent:(unsigned long long)arg1 ;
-(long long)idleTimerMode;
-(id)_passcodeViewController;
-(void)_addStateCaptureHandlers;
-(unsigned long long)restrictedCapabilities;
-(long long)notificationBehavior;
-(BOOL)shouldShowLockStatusBarTime;
-(UIStatusBar *)fakeStatusBar;
-(void)setFakeStatusBar:(UIStatusBar *)arg1 ;
-(BOOL)isShowingTodayView;
-(void)activateTodayViewWithCompletion:(/*^block*/id)arg1 ;
-(SBFLockScreenDateViewController *)dateViewController;
-(void)setPresenter:(id<CSCoverSheetViewPresenting>)arg1 ;
-(long long)participantState;
-(void)setActiveBehavior:(CSBehavior *)arg1 ;
-(CSBehavior *)activeBehavior;
-(double)dateTimeMostExtremeLeadingX;
-(double)dateTimeMostExtremeTrailingX;
-(BOOL)containsCenteredDateTimeLayout;
-(double)listMinY;
-(NSArray *)presentationRegions;
-(CSAppearance *)activeAppearance;
-(void)activateCameraViewAnimated:(BOOL)arg1 sendingActions:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)handleAction:(id)arg1 fromSender:(id)arg2 ;
-(long long)presentationPriority;
-(id<CSCameraPrewarming>)cameraPrewarmer;
-(void)setCameraPrewarmer:(id<CSCameraPrewarming>)arg1 ;
-(id)_lockOutController;
-(void)setWallpaperColorProvider:(id<CSWallpaperColorProvider>)arg1 ;
-(id<CSWallpaperColorProvider>)wallpaperColorProvider;
-(void)updateAppearanceForController:(id)arg1 ;
-(BOOL)wouldHandleButtonEvent:(id)arg1 ;
-(CSCoverSheetView *)coverSheetView;
-(void)transitionSource:(id)arg1 willBeginWithType:(long long)arg2 ;
-(void)transitionSource:(id)arg1 didUpdateTransitionWithContext:(SCD_Struct_CS7)arg2 ;
-(void)transitionSource:(id)arg1 didEndWithContext:(SCD_Struct_CS7)arg2 ;
-(NSString *)coverSheetIdentifier;
-(long long)scrollingStrategy;
-(long long)proximityDetectionMode;
-(CSLayoutStrategy *)layoutStrategy;
-(void)setLayoutStrategy:(CSLayoutStrategy *)arg1 ;
-(BOOL)isShowingMediaControls;
-(void)updateBehaviorForController:(id)arg1 ;
-(void)postNotificationRequest:(id)arg1 ;
-(void)updateNotificationRequest:(id)arg1 ;
-(void)withdrawNotificationRequest:(id)arg1 ;
-(void)updateNotificationSectionSettings:(id)arg1 previousSectionSettings:(id)arg2 ;
-(BOOL)isNotificationContentExtensionVisible:(id)arg1 ;
-(BOOL)isPresentingNotificationInLongLook;
-(BOOL)dismissNotificationInLongLookAnimated:(BOOL)arg1 ;
-(id<UICoordinateSpace>)presentationCoordinateSpace;
-(long long)idleTimerDuration;
-(long long)idleWarnMode;
-(long long)presentationAltitude;
-(void)updateAppearanceForController:(id)arg1 withAnimationSettings:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_conformsToCSCoverSheetViewPresenting;
-(CSPresentation *)externalPresentation;
-(id)lockScreenActionContext;
-(void)invalidateLockScreenActionContext;
-(void)_setPageViewControllers:(id)arg1 ;
-(void)_setAllowedPageViewControllers:(id)arg1 ;
-(void)_setMainPageContentViewController:(id)arg1 ;
-(void)_displayWillTurnOnWhileOnCoverSheet:(id)arg1 ;
-(void)_preferredContentSizeDidChange;
-(void)_powerStatusChangedToConnectedState:(BOOL)arg1 ;
-(id<CSLegibilityProviding>)legibilityProvider;
-(void)_setLockOutController:(id)arg1 ;
-(id)__currentDesiredAppearanceWithStartIndex:(unsigned long long*)arg1 targetIndex:(unsigned long long*)arg2 targetAppearance:(id*)arg3 targetPresentation:(id*)arg4 modalAppearance:(id*)arg5 proudLockAppearance:(id*)arg6 ;
-(CSMainPageContentViewController *)mainPageContentViewController;
-(void)_setupWallpaperGesture;
-(id<SBFTodayOverlayControlling><CSExternalBehaviorProviding><CSExternalEventHandling>)todayOverlayController;
-(unsigned long long)_indexOfTodayPage;
-(void)activatePage:(unsigned long long)arg1 animated:(BOOL)arg2 withCompletion:(/*^block*/id)arg3 ;
-(unsigned long long)_indexOfMainPage;
-(void)_activateCameraAnimated:(BOOL)arg1 actions:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)pageViewControllerAtIndex:(unsigned long long)arg1 ;
-(void)dismissTodayOverlay;
-(CSModalPresentationViewController *)modalPresentationController;
-(void)setPasscodeLockVisible:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_transitionChargingViewToVisible:(BOOL)arg1 showBattery:(BOOL)arg2 animated:(BOOL)arg3 ;
-(NSArray *)pageViewControllers;
-(long long)effectiveInterfaceOrientationOverride;
-(void)_updateActiveAppearanceForReason:(id)arg1 ;
-(void)_updateActiveBehaviorsForReason:(id)arg1 ;
-(id)visiblePageViewController;
-(void)scrollPanGestureDidUpdate:(id)arg1 ;
-(void)setActiveAppearance:(CSAppearance *)arg1 ;
-(void)updateQuickActionsVisibility;
-(void)_loadViewsForRestrictedPagesIfPossible;
-(BOOL)_quickActionsSupported;
-(void)_prepareForViewWillAppearIfNecessary;
-(BOOL)_handleEventType:(long long)arg1 ;
-(void)_beginAppearanceTransitionForPageViewControllersToVisible:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)noteDeviceBlockedStatusUpdated;
-(void)_updateScrollingBehavior;
-(void)_calculateAppearanceForCurrentOrientation;
-(void)_displayWillAppearImplementation;
-(void)_sendAuthenticationChangedEvent;
-(void)_setupQuickNoteGestureRecognizer;
-(void)_setupLocketGestureRecognizer;
-(void)_endAppearanceTransitionForPageViewControllersToVisible:(BOOL)arg1 ;
-(void)_displayWillDisappearImplementation;
-(void)_displayDidDisappearImplementation;
-(BOOL)isTransitioningInteractively;
-(BOOL)isHostingAnApp;
-(id)hostedAppSceneHandle;
-(BOOL)_wouldUpdateActiveAppearance;
-(id)_componentForHidingWithType:(long long)arg1 ;
-(void)_setHasContentAboveCoverSheet:(BOOL)arg1 ;
-(void)_listenForDisplayLayoutChanges:(BOOL)arg1 ;
-(void)_invalidateStatusBarAssertions;
-(void)updateInterstitialPresentationWithProgress:(double)arg1 ;
-(void)cleanupInterstitialPresentationToPresented:(BOOL)arg1 inPlace:(BOOL)arg2 ;
-(BOOL)_isPresentingModalViewControllerWithIdentifier:(id)arg1 ;
-(void)setPasscodeLockVisible:(BOOL)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)setPasscodeLockVisible:(BOOL)arg1 animated:(BOOL)arg2 forceBiometricPresentation:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)isUnlockDisabled;
-(id)_customLockScreenActionContext;
-(void)_presentModalViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(CSInterstitialTransitionSource *)interstitialTransitionSource;
-(void)_dismissModalViewControllersWithIdentifier:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)externalLockProvidersRequireUnlock;
-(id<CSCoverSheetViewTransitionSource>)currentTransitionSource;
-(void)setInterstitialTransitionSource:(CSInterstitialTransitionSource *)arg1 ;
-(void)unregisterExternalAppearanceProvider:(id)arg1 ;
-(void)unregisterExternalBehaviorProvider:(id)arg1 ;
-(void)registerExternalAppearanceProvider:(id)arg1 ;
-(void)registerExternalBehaviorProvider:(id)arg1 ;
-(void)setInScreenOffMode:(BOOL)arg1 forAutoUnlock:(BOOL)arg2 fromUnlockSource:(int)arg3 ;
-(void)_addOrRemoveThermalTrapViewIfNecessaryAnimated:(BOOL)arg1 ;
-(void)_addOrRemoveBlockedViewIfNecessaryAnimated:(BOOL)arg1 ;
-(void)_addOrRemoveResetRestoreViewIfNecessaryAnimated:(BOOL)arg1 ;
-(void)_updateModalPresentationControllerVisibility;
-(unsigned long long)_indexOfCameraPage;
-(void)activateMainPageWithCompletion:(/*^block*/id)arg1 ;
-(void)setTodayOverlayController:(id<SBFTodayOverlayControlling><CSExternalBehaviorProviding><CSExternalEventHandling>)arg1 ;
-(void)registerExternalEventHandler:(id)arg1 ;
-(void)unregisterExternalEventHandler:(id)arg1 ;
-(BOOL)isMainPageVisible;
-(BOOL)hasContentAboveCoverSheet;
-(void)updateCallToActionForMesaMatchFailure;
-(CSAppearance *)previousAppearance;
-(CSPresentation *)activePresentation;
-(id)_presentationForParticipant:(id)arg1 ;
-(void)setCustomLockScreenActionContext:(SBFLockScreenActionContext *)arg1 ;
-(void)_setModalPresentationControllerVisibility:(BOOL)arg1 ;
-(void)_dismissToMainPageFromPageViewController:(id)arg1 ;
-(void)_dismissModalViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)_addBedtimeGreetingBackgroundView;
-(void)_removeBedtimeGreetingBackgroundViewAnimated:(BOOL)arg1 ;
-(id)_averageLockScreenWallpaperColor;
-(BOOL)_isKnownTransitionConflictFrom:(id)arg1 to:(id)arg2 ;
-(void)setPreviousAppearance:(CSAppearance *)arg1 ;
-(void)_updateActiveBehaviorsForReason:(id)arg1 updatingAppearanceIfNeeded:(BOOL)arg2 ;
-(BOOL)_isSourceForHorizontalScrolling:(id)arg1 ;
-(id)_allowedPageViewControllers;
-(BOOL)_isPageContentHidden;
-(BOOL)canHostAnApp;
-(id)hostedAppSceneHandles;
-(void)hostedAppWillRotateToInterfaceOrientation:(long long)arg1 ;
-(CSBehavior *)irisBehavior;
-(void)_updateUIForPlaying:(BOOL)arg1 immediately:(BOOL)arg2 ;
-(void)setWallpaperGestureRecognizer:(UIGestureRecognizer *)arg1 ;
-(BOOL)_wallpaperGestureShouldRequireUserPresence;
-(id<SBNotificationDestination>)notificationDestination;
-(id)_activeViewControllers;
-(BOOL)_gestureRecognizer:(id)arg1 isLocatedOverHorizontalContentRegionInViewController:(id)arg2 ;
-(BOOL)_overSlidingControlForLocation:(CGPoint)arg1 inView:(id)arg2 ;
-(unsigned long long)lastSettledPageIndex;
-(CGPoint)_slideableContentOffset;
-(BOOL)_isSlideableContentOffsetOnscreen:(CGPoint)arg1 ;
-(id)_eligiblePageViewControllers;
-(void)_addVisiblePageViewController:(id)arg1 ;
-(void)_removeAllowedPageViewController:(id)arg1 ;
-(void)_updateVisibilityForPageViewControllersWithVisiblePageViewController:(id)arg1 ;
-(unsigned long long)_indexOfPageViewControllerForRole:(id)arg1 ;
-(BOOL)isInScreenOffMode;
-(BOOL)_isWakeAnimationInProgress;
-(void)_updateNotificationClearingTriggerForEvent:(id)arg1 ;
-(CSAppearance *)localAppearance;
-(void)_updateAppearance:(id)arg1 forComponentType:(long long)arg2 shouldHide:(BOOL)arg3 ;
-(BOOL)_shouldUpdateActiveAppearanceForReason:(id)arg1 ;
-(void)setActivePresentation:(CSPresentation *)arg1 ;
-(void)_updateLocalAppearanceForPresentation;
-(id)_appearanceForParticipant:(id)arg1 ;
-(void)setAppearanceFraction:(double)arg1 ;
-(double)appearanceFraction;
-(CGPoint)_offsetForTransitionFromOffset:(CGPoint)arg1 toOffset:(CGPoint)arg2 timingFunction:(id)arg3 ;
-(double)_dateViewAlphaForCurrentWakeState;
-(double)_alphaForTransitionFromHidden:(BOOL)arg1 toHidden:(BOOL)arg2 unhiddenAlpha:(double)arg3 timingFunction:(id)arg4 ;
-(double)_alphaForTransitionFromHidden:(BOOL)arg1 toHidden:(BOOL)arg2 timingFunction:(id)arg3 ;
-(id)_fakeStatusBarSettings;
-(CGPoint)_finalizeOffset:(CGPoint)arg1 referenceFrame:(CGRect)arg2 ;
-(double)_scaleForTransitionFromScale:(double)arg1 toScale:(double)arg2 timingFunction:(id)arg3 ;
-(void)_updateHomeAffordance;
-(void)_updateDateTimeView;
-(void)_updateStatusBar;
-(void)_updatePageContent;
-(void)_updateForegroundView;
-(void)_updateLegibilitySettings;
-(void)_updateWallpaperEffectView;
-(void)_updateTintingView;
-(void)_updateStatusBarBackground;
-(void)_updateFixedFooterView;
-(void)_updateProudLockView;
-(void)_updateScalableContent;
-(void)_updateControlCenterGrabber;
-(void)_updateQuickActions;
-(void)_updateStatusBarGradient;
-(BOOL)_isSlideableContentOnscreen;
-(void)_updateRestrictedBehavior;
-(void)_updateIdleTimerBehavior;
-(id)_behaviorForParticipant:(id)arg1 ;
-(unsigned long long)_pageCapabilities;
-(void)_updateProudLockViewUpdateSuspension;
-(double)_valueForTransitionInterval:(SCD_Struct_CS5)arg1 timingFunction:(id)arg2 ;
-(double)dateTimeSubtitleMaximumWidth;
-(void)_setFakeStatusBarEnabled:(BOOL)arg1 ;
-(void)_createStatusBarBackgroundViewIfNeeded;
-(CSBehavior *)localBehavior;
-(id<BSInvalidatable>)suspendWallpaperAnimationAssertion;
-(void)setSuspendWallpaperAnimationAssertion:(id<BSInvalidatable>)arg1 ;
-(id)_createFakeStatusBar;
-(void)_handleQuickNoteLaunch:(id)arg1 ;
-(id<SBFIrisWallpaperView>)irisWallpaperView;
-(void)_actuallyUpdateUIForIrisNotPlaying;
-(void)_actuallyUpdateUIForIrisPlaying:(BOOL)arg1 ;
-(void)_handleLocketForcePressGestureRecognizer:(id)arg1 ;
-(void)_prepareForLocketPresentation;
-(void)_updateLocketPresentationWithProgress:(double)arg1 completed:(BOOL)arg2 ;
-(void)_cleanupLocketPresentationForCompleted:(BOOL)arg1 ;
-(void)setLocketTransitionSource:(CSLocketTransitionSource *)arg1 ;
-(CSLocketTransitionSource *)locketTransitionSource;
-(void)_startFadeInAnimationForSource:(long long)arg1 ;
-(double)_dateTimeAlphaForFade;
-(id<SBFScreenWakeAnimationTarget>)lockScreenWakeAnimator;
-(void)_transitionTimerViewToVisible:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_updateLocalAppearanceForRequester:(id)arg1 animationSettings:(id)arg2 actions:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_updateDateSubtitleAppearanceForBattery:(BOOL)arg1 animated:(BOOL)arg2 chargingVisible:(BOOL)arg3 ;
-(BOOL)_isMainPageShowing;
-(void)_transitionChargingDateSubtitleToVisible:(BOOL)arg1 animated:(BOOL)arg2 force:(BOOL)arg3 ;
-(void)_setModalPresentationControllerVisibility:(BOOL)arg1 cancelTouches:(BOOL)arg2 ;
-(void)dismissOverlaysAnimated:(BOOL)arg1 ;
-(id)_presentedModalViewControllerWithIdentifier:(id)arg1 ;
-(BOOL)shouldModifyPageScrolling;
-(void)coverSheetLegibilityProviderDidUpdate:(id)arg1 ;
-(void)timerControllerDidStartTimer:(id)arg1 ;
-(void)timerControllerDidStopTimer:(id)arg1 ;
-(BOOL)controller:(id)arg1 shouldAllowPanScrollingWithSystemGestureRecognizer:(id)arg2 ;
-(void)controllerWillCancelHorizontalScrolling:(id)arg1 ;
-(void)coverSheetNotificationClearingTriggerDidFire:(id)arg1 ;
-(void)passcodeViewControllerDidBeginPasscodeEntry:(id)arg1 ;
-(void)passcodeViewControllerDidCancelPasscodeEntry:(id)arg1 ;
-(void)passcodeViewController:(id)arg1 didCompletePasscodeEntry:(BOOL)arg2 ;
-(void)dismissLocketViewController:(double)arg1 ;
-(void)todayOverlayController:(id)arg1 didChangePresentationProgress:(double)arg2 ;
-(void)startHostingWallpaperOverlay:(id)arg1 ;
-(id)relinquishHostingOfWallpaperOverlay;
-(id)initWithPageViewControllers:(id)arg1 mainPageContentViewController:(id)arg2 context:(id)arg3 ;
-(CSPresentationViewController *)mainPagePresentationViewController;
-(void)setIrisWallpaperView:(id<SBFIrisWallpaperView>)arg1 ;
-(void)setCoverSheetIsVisible:(BOOL)arg1 ;
-(BOOL)isShowingModalView;
-(void)noteWillPresentForUserGesture;
-(void)resetMainPageContentOffset;
-(void)externalAppearanceProviderBehaviorChanged:(id)arg1 ;
-(void)externalBehaviorProviderBehaviorChanged:(id)arg1 ;
-(void)registerExternalLockProvider:(id)arg1 ;
-(void)externalLockProviderStateChanged:(id)arg1 ;
-(void)unregisterExternalLockProvider:(id)arg1 ;
-(void)registerExternalPresentationProvider:(id)arg1 ;
-(void)externalPresentationProviderPresentationChanged:(id)arg1 ;
-(void)unregisterExternalPresentationProvider:(id)arg1 ;
-(void)addCoverSheetObserver:(id)arg1 ;
-(void)removeCoverSheetObserver:(id)arg1 ;
-(void)presentModalViewController:(id)arg1 fromRect:(CGRect)arg2 inView:(id)arg3 animated:(BOOL)arg4 ;
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
-(BOOL)externalLockProvidersShowPasscode;
-(BOOL)willUIUnlockFromSource:(int)arg1 ;
-(void)prepareForUIUnlock;
-(void)prepareForUILock;
-(void)finishUIUnlockFromSource:(int)arg1 ;
-(BOOL)canBeDeactivatedForUIUnlockFromSource:(int)arg1 ;
-(BOOL)contentOccludesBackground;
-(void)prepareForInterstitialPresentation;
-(void)setInScreenOffMode:(BOOL)arg1 ;
-(BOOL)shouldDisableALS;
-(void)noteResetRestoreStateUpdated;
-(BOOL)shouldUnlockUIOnKeyDownEvent;
-(void)setShowingMediaControls:(BOOL)arg1 ;
-(void)idleTimerDidRefresh;
-(void)idleTimerDidExpire;
-(void)idleTimerDidWarn;
-(void)idleTimerDidChange;
-(void)idleTimerWillRefresh;
-(BOOL)isLockScreenShowingDefaultContent;
-(id)createHomeButtonShowPasscodeRecognizerForHomeButtonPress;
-(id)createHomeButtonSuppressAfterUnlockRecognizerForUnlockSource:(int)arg1 ;
-(BOOL)shouldAutoUnlockForSource:(int)arg1 ;
-(id)_windowsFromViewControllers:(id)arg1 ;
-(void)updateStatusBarForLockScreenTeardown;
-(void)updateStatusBarForLockScreenComeback;
-(void)_actuallyUpdateUIForIrisPlaying;
-(void)startLockScreenFadeInAnimationForSource:(int)arg1 ;
-(void)addApplicationHoster:(id)arg1 ;
-(void)removeApplicationHoster:(id)arg1 ;
-(UIGestureRecognizer *)wallpaperGestureRecognizer;
-(void)setEffectiveInterfaceOrientationOverride:(long long)arg1 ;
-(id<CSEmergencyCalling>)emergencyCaller;
-(void)setEmergencyCaller:(id<CSEmergencyCalling>)arg1 ;
-(id<CSOrientationUpdateControlling>)orientationUpdateController;
-(void)setOrientationUpdateController:(id<CSOrientationUpdateControlling>)arg1 ;
-(id<CSIdleTimerControlling>)idleTimerController;
-(void)setIdleTimerController:(id<CSIdleTimerControlling>)arg1 ;
-(id<CSApplicationLaunching>)applicationLauncher;
-(void)setApplicationLauncher:(id<CSApplicationLaunching>)arg1 ;
-(id<CSSpotlightPresenting>)spotlightPresenter;
-(void)setSpotlightPresenter:(id<CSSpotlightPresenting>)arg1 ;
-(void)setLastSettledPageIndex:(unsigned long long)arg1 ;
-(void)setLocalBehavior:(CSBehavior *)arg1 ;
-(void)setIrisBehavior:(CSBehavior *)arg1 ;
-(void)setLocalAppearance:(CSAppearance *)arg1 ;
-(void)setDateViewController:(SBFLockScreenDateViewController *)arg1 ;
-(CSPowerChangeObserver *)powerChangeObserver;
-(void)setPowerChangeObserver:(CSPowerChangeObserver *)arg1 ;
-(CSTimerViewController *)timerViewController;
-(void)setTimerViewController:(CSTimerViewController *)arg1 ;
-(void)setLegibilityProvider:(id<CSLegibilityProviding>)arg1 ;
-(BOOL)irisPlayerIsInteracting;
-(void)setIrisPlayerIsInteracting:(BOOL)arg1 ;
-(BOOL)shouldTransitionIrisWallpaperToStillWhenPlaybackFinishes;
-(void)setShouldTransitionIrisWallpaperToStillWhenPlaybackFinishes:(BOOL)arg1 ;
-(void)setModalPresentationController:(CSModalPresentationViewController *)arg1 ;
-(void)setCurrentTransitionSource:(id<CSCoverSheetViewTransitionSource>)arg1 ;
-(id)_screenWakeAnimationController;
-(void)_setScreenWakeAnimationController:(id)arg1 ;
-(SBWallpaperAggdLogger *)wallpaperAggdLogger;
-(void)setWallpaperAggdLogger:(SBWallpaperAggdLogger *)arg1 ;
-(void)_updateAccessibilityContentSizesIfNeeded;
-(unsigned long long)_dateTimeLayoutForPage:(id)arg1 ;
-(double)_timeLabelScrollPercentForDateTimeLayout:(unsigned long long)arg1 ;
-(id)_pageForScrollPercent:(double)arg1 ;
-(double)_dateTimeInsetXForPage:(id)arg1 ;
-(double)_minDateListSpacingForPage:(id)arg1 ;
-(double)timeLabelOffsetForScrollPercent:(double)arg1 ;
@end

