/*
* Generated on Thursday, January 14, 2021 at 2:26:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
*/

#import <CoverSheet/CoverSheet-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/SBCoverSheetSlidingViewControllerContentViewController.h>
#import <libobjc.A.dylib/CSPersistentContentLayoutProviding.h>
#import <libobjc.A.dylib/CSDateTimeLayoutAggregating.h>
#import <libobjc.A.dylib/BCBatteryDeviceObserving.h>
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
#import <libobjc.A.dylib/CSPasscodeViewControllerDelegate.h>
#import <libobjc.A.dylib/SBFOverlayObserving.h>
#import <libobjc.A.dylib/SBFOverlayDismissalDelegate.h>
#import <libobjc.A.dylib/FBSDisplayLayoutPublisherObserving.h>
#import <libobjc.A.dylib/CSRemoteContentSessionHostDelegate.h>
#import <libobjc.A.dylib/CSEmbeddedContentActionManagerDelegate.h>
#import <libobjc.A.dylib/CSMainPageContentViewControllerNotificationObserver.h>
#import <libobjc.A.dylib/CSPresentationViewControllerDelegate.h>
#import <libobjc.A.dylib/CAAnimationDelegate.h>
#import <libobjc.A.dylib/CSAccessoryStatusDelegate.h>
#import <libobjc.A.dylib/CSCoverSheetViewControllerProtocol.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/SBFDashBoardModalPresenterProtocol.h>

@protocol CSCoverSheetContextProviding, CSCoverSheetViewControllerDelegate, CSCameraPrewarming, CSNotificationDispatcher, SBFIrisWallpaperView, CSWallpaperColorProvider, CSEmergencyCalling, CSOrientationUpdateControlling, CSIdleTimerControlling, CSApplicationLaunching, CSSpotlightPresenting, CSLegibilityProviding, SBFLockOutStatusProvider, CSCoverSheetViewTransitionSource, SBFOverlayControllingCSExternalBehaviorProvidingCSExternalEventHandling, BSInvalidatable, SBFScreenWakeAnimationControlling;
@class CSLockScreenSettings, SBFSteppedAnimationTimingFunctionCalculator, NSHashTable, CSNotificationDispatcher, FBDisplayLayoutTransition, CSHomeButtonShowPasscodeRecognizer, CSHomeButtonSuppressAfterUnlockRecognizer, CSModalPresentationViewController, CSAccessoryViewController, BSTimer, NSMutableArray, CSChargingViewController, BCBatteryDeviceController, CSFixedFooterViewController, CSProudLockViewController, CSPoseidonViewController, CSTeachableMomentsContainerViewController, CSQuickActionsViewController, CSScrollGestureController, UITapGestureRecognizer, UIGestureRecognizer, CSNotificationClearingTrigger, SBLockScreenDefaults, SBFLockScreenWakeAnimator, CSRemoteContentSessionManager, CSRemoteContentModalViewController, CSEmbeddedContentActionManager, SBFLockScreenDateSubtitleView, CSUserPresenceMonitor, CSFaceOcclusionMonitor, SBFLockScreenActionContext, CSLayoutStrategy, CSAppearance, CSBehavior, NSArray, CSMainPageContentViewController, CSAccessoryStatusObserver, CSPresentation, SBFLockScreenDateViewController, CSPowerChangeObserver, CSTimerViewController, UIStatusBar, UIVisualEffectView, CSInterstitialTransitionSource, SBWallpaperAggdLogger, NSString, CSCoverSheetView, CSPresentationViewController, NSSet, _UILegibilitySettings, UIColor;

@interface CSCoverSheetViewController : UIViewController <SBCoverSheetSlidingViewControllerContentViewController, CSPersistentContentLayoutProviding, CSDateTimeLayoutAggregating, BCBatteryDeviceObserving, CSCoverSheetViewDelegate, UIGestureRecognizerDelegate, CSLegibilityProviderDelegate, SBLockScreenActionProvider, SBFIrisWallpaperViewDelegate, CSCoverSheetViewTransitionSource, CSNotificationDestination, CSTimerViewControllerDelegate, _UISettingsKeyObserver, CSScrollGestureControllerDelegate, CSNotificationClearingTriggerDelegate, CSInterstitialTransitionDelegate, CSPasscodeViewControllerDelegate, SBFOverlayObserving, SBFOverlayDismissalDelegate, FBSDisplayLayoutPublisherObserving, CSRemoteContentSessionHostDelegate, CSEmbeddedContentActionManagerDelegate, CSMainPageContentViewControllerNotificationObserver, CSPresentationViewControllerDelegate, CAAnimationDelegate, CSAccessoryStatusDelegate, CSCoverSheetViewControllerProtocol, BSDescriptionProviding, SBFDashBoardModalPresenterProtocol> {

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
	SCD_Struct_CS7 _transitionContext;
	FBDisplayLayoutTransition* _displayLayoutTransition;
	long long _participantState;
	BOOL _transitionDisabledIdleTimer;
	CSHomeButtonShowPasscodeRecognizer* _homeButtonShowPasscodeRecognizer;
	CSHomeButtonSuppressAfterUnlockRecognizer* _homeButtonSuppressAfterUnlockRecognizer;
	CSModalPresentationViewController* _modalPresentationController;
	BOOL _accessoryViewPresentationDelayed;
	CSAccessoryViewController* _accessoryViewController;
	BSTimer* _accessoryViewControllerTimer;
	/*^block*/id _accessoryViewControllerTimerHandler;
	BSTimer* _accessoryViewControllerChargingTimer;
	/*^block*/id _accessoryViewControllerChargingTimerHandler;
	NSMutableArray* _attachedAccessories;
	BOOL _isAccessoryAnimationAllowed;
	CSChargingViewController* _chargingViewController;
	BCBatteryDeviceController* _batteryDeviceController;
	BSTimer* _chargingViewControllerTimer;
	/*^block*/id _chargingViewTimerHandler;
	CSFixedFooterViewController* _fixedFooterViewController;
	CSProudLockViewController* _proudLockViewController;
	CSPoseidonViewController* _poseidonViewController;
	CSTeachableMomentsContainerViewController* _teachableMomentsContainerViewController;
	CSQuickActionsViewController* _quickActionsViewController;
	CSScrollGestureController* _scrollGestureController;
	BOOL _listeningForDisplayLayoutChanges;
	BOOL _screenOnForLiftToWake;
	BOOL _statusBarInLockdownForTeardown;
	UITapGestureRecognizer* _quickNoteGestureRecognizer;
	UIGestureRecognizer* _wallpaperGestureRecognizer;
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
	CSRemoteContentSessionManager* _remoteContentSessionManager;
	CSRemoteContentModalViewController* _remoteContentModalViewController;
	BOOL _didSuppressRemoteContentOnDisappear;
	CSEmbeddedContentActionManager* _embeddedContentActionManager;
	SBFLockScreenDateSubtitleView* _chargingLabel;
	CSUserPresenceMonitor* _userPresenceMonitor;
	CSFaceOcclusionMonitor* _faceOcclusionMonitor;
	BOOL _contentAboveIsControlCenter;
	BOOL _authenticated;
	BOOL _isAccessoryAnimationPresenting;
	BOOL _irisPlayerIsInteracting;
	BOOL _shouldTransitionIrisWallpaperToStillWhenPlaybackFinishes;
	int _wakeSource;
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
	CSAccessoryStatusObserver* _accessoryAttachmentObserver;
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
	id<SBFOverlayControlling><CSExternalBehaviorProviding><CSExternalEventHandling> _overlayController;
	id<BSInvalidatable> _suspendWallpaperAnimationAssertion;
	double _initialOverlayPresentationProgress;
	id<SBFScreenWakeAnimationControlling> _screenWakeAnimationController;
	SBWallpaperAggdLogger* _wallpaperAggdLogger;

}

@property (nonatomic,readonly) BOOL contentOccludesBackground; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CSCoverSheetView * coverSheetView; 
@property (nonatomic,retain) CSLayoutStrategy * layoutStrategy;                                                                                                                                //@synthesize layoutStrategy=_layoutStrategy - In the implementation block
@property (setter=_setPageViewControllers:,nonatomic,copy) NSArray * pageViewControllers;                                                                                                      //@synthesize pageViewControllers=_pageViewControllers - In the implementation block
@property (setter=_setAllowedPageViewControllers:,getter=_allowedPageViewControllers,nonatomic,copy) NSArray * allowedPageViewControllers;                                                     //@synthesize allowedPageViewControllers=_allowedPageViewControllers - In the implementation block
@property (setter=_setMainPageContentViewController:,nonatomic,retain) CSMainPageContentViewController * mainPageContentViewController;                                                        //@synthesize mainPageContentViewController=_mainPageContentViewController - In the implementation block
@property (assign,nonatomic) unsigned long long lastSettledPageIndex;                                                                                                                          //@synthesize lastSettledPageIndex=_lastSettledPageIndex - In the implementation block
@property (nonatomic,retain) CSAccessoryStatusObserver * accessoryAttachmentObserver;                                                                                                          //@synthesize accessoryAttachmentObserver=_accessoryAttachmentObserver - In the implementation block
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
@property (nonatomic,retain) id<SBFOverlayControlling><CSExternalBehaviorProviding><CSExternalEventHandling> overlayController;                                                                //@synthesize overlayController=_overlayController - In the implementation block
@property (nonatomic,retain) id<BSInvalidatable> suspendWallpaperAnimationAssertion;                                                                                                           //@synthesize suspendWallpaperAnimationAssertion=_suspendWallpaperAnimationAssertion - In the implementation block
@property (assign,nonatomic) double initialOverlayPresentationProgress;                                                                                                                        //@synthesize initialOverlayPresentationProgress=_initialOverlayPresentationProgress - In the implementation block
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
@property (nonatomic,readonly) int wakeSource;                                                                                                                                                 //@synthesize wakeSource=_wakeSource - In the implementation block
@property (getter=isRestToOpenAvailable,nonatomic,readonly) BOOL restToOpenAvailable; 
@property (nonatomic,retain) id<CSCameraPrewarming> cameraPrewarmer;                                                                                                                           //@synthesize cameraPrewarmer=_cameraPrewarmer - In the implementation block
@property (assign,nonatomic,__weak) id<CSEmergencyCalling> emergencyCaller;                                                                                                                    //@synthesize emergencyCaller=_emergencyCaller - In the implementation block
@property (nonatomic,retain) id<CSOrientationUpdateControlling> orientationUpdateController;                                                                                                   //@synthesize orientationUpdateController=_orientationUpdateController - In the implementation block
@property (assign,nonatomic,__weak) id<CSIdleTimerControlling> idleTimerController;                                                                                                            //@synthesize idleTimerController=_idleTimerController - In the implementation block
@property (assign,nonatomic,__weak) id<CSApplicationLaunching> applicationLauncher;                                                                                                            //@synthesize applicationLauncher=_applicationLauncher - In the implementation block
@property (assign,nonatomic,__weak) id<CSSpotlightPresenting> spotlightPresenter;                                                                                                              //@synthesize spotlightPresenter=_spotlightPresenter - In the implementation block
@property (nonatomic,readonly) BOOL isAccessoryAnimationPresenting;                                                                                                                            //@synthesize isAccessoryAnimationPresenting=_isAccessoryAnimationPresenting - In the implementation block
@property (assign,nonatomic) double backlightLevel;                                                                                                                                            //@synthesize backlightLevel=_backlightLevel - In the implementation block
@property (getter=_customLockScreenActionContext,nonatomic,retain) SBFLockScreenActionContext * customLockScreenActionContext;                                                                 //@synthesize customLockScreenActionContext=_customLockScreenActionContext - In the implementation block
@property (assign,getter=isAuthenticated,nonatomic) BOOL authenticated;                                                                                                                        //@synthesize authenticated=_authenticated - In the implementation block
@property (assign,getter=isShowingMediaControls,nonatomic) BOOL showingMediaControls; 
@property (nonatomic,readonly) BOOL shouldShowLockStatusBarTime; 
@property (nonatomic,readonly) id<SBFScreenWakeAnimationTarget> lockScreenWakeAnimator;                                                                                                        //@synthesize lockScreenWakeAnimator=_lockScreenWakeAnimator - In the implementation block
@property (nonatomic,copy,readonly) NSString * coverSheetIdentifier; 
@property (nonatomic,readonly) long long participantState; 
@property (getter=isTransitioning,nonatomic,readonly) BOOL transitioning; 
@property (nonatomic,readonly) SCD_Struct_CS8 transitionContext;                                                                                                                               //@synthesize transitionContext=_transitionContext - In the implementation block
@property (assign,nonatomic,__weak) id<CSNotificationDispatcher> dispatcher;                                                                                                                   //@synthesize dispatcher=_dispatcher - In the implementation block
@property (nonatomic,copy,readonly) CSPresentation * externalPresentation; 
@property (assign,nonatomic,__weak) id<CSCoverSheetViewPresenting> presenter; 
@property (nonatomic,readonly) long long presentationStyle; 
@property (nonatomic,readonly) long long presentationType; 
@property (nonatomic,readonly) long long presentationTransition; 
@property (nonatomic,readonly) long long presentationPriority; 
@property (nonatomic,readonly) long long presentationAltitude; 
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
-(void)conformsToSBCoverSheetSlidingViewControllerContentViewController;
-(id<CSWallpaperColorProvider>)wallpaperColorProvider;
-(id<UICoordinateSpace>)presentationCoordinateSpace;
-(void)setInScreenOffMode:(BOOL)arg1 ;
-(void)setCustomLockScreenActionContext:(SBFLockScreenActionContext *)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(BOOL)shouldUnlockUIOnKeyDownEvent;
-(CSBehavior *)localBehavior;
-(void)_updateBackground;
-(double)listMinY;
-(BOOL)handleHomeButtonLongPress;
-(void)setAuthenticated:(BOOL)arg1 ;
-(BOOL)suppressesControlCenter;
-(void)setStatusBarBackgroundView:(UIVisualEffectView *)arg1 ;
-(void)noteResetRestoreStateUpdated;
-(void)setTimerViewController:(CSTimerViewController *)arg1 ;
-(void)finishUIUnlockFromSource:(int)arg1 ;
-(void)startLockScreenFadeInAnimationForSource:(int)arg1 ;
-(void)setPasscodeLockVisible:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id<CSApplicationLaunching>)applicationLauncher;
-(void)setWallpaperColorProvider:(id<CSWallpaperColorProvider>)arg1 ;
-(id)hostedAppSceneHandle;
-(CSTimerViewController *)timerViewController;
-(void)setWallpaperGestureRecognizer:(UIGestureRecognizer *)arg1 ;
-(id<CSIdleTimerControlling>)idleTimerController;
-(UIVisualEffectView *)statusBarBackgroundView;
-(BOOL)handleHeadsetButtonPress:(BOOL)arg1 ;
-(id)_customLockScreenActionContext;
-(BOOL)isMainPageVisible;
-(BOOL)handleLockButtonPress;
-(BOOL)isUnlockDisabled;
-(void)cancelTransition;
-(BOOL)isShowingMediaControls;
-(void)prepareForUILock;
-(id)hostedAppSceneHandles;
-(id)dateView;
-(BOOL)shouldAutoUnlockForSource:(int)arg1 ;
-(UIGestureRecognizer *)wallpaperGestureRecognizer;
-(void)setPasscodeLockVisible:(BOOL)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)conformsToCSEventHandling;
-(BOOL)handleVolumeDownButtonPress;
-(BOOL)isAuthenticated;
-(void)hostedAppWillRotateToInterfaceOrientation:(long long)arg1 ;
-(void)setShowingMediaControls:(BOOL)arg1 ;
-(BOOL)suppressesScreenshots;
-(BOOL)shouldDisableALS;
-(BOOL)isLockScreenShowingDefaultContentExceptControlCenter;
-(void)prepareForUIUnlock;
-(void)fillRestToOpenWithDuration:(double)arg1 ;
-(BOOL)canHostAnApp;
-(id<SBFIrisWallpaperView>)irisWallpaperView;
-(void)updateStatusBarForLockScreenTeardown;
-(BOOL)suppressesBanners;
-(void)postNotificationRequest:(id)arg1 ;
-(id)succinctDescription;
-(BOOL)handleHomeButtonDoublePress;
-(void)setBacklightLevel:(double)arg1 ;
-(void)startRestToOpenCoachingWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)isInScreenOffMode;
-(unsigned long long)_indexOfMainPage;
-(void)accessoryAttached:(id)arg1 ;
-(long long)presentationStyle;
-(void)_setupQuickNoteGestureRecognizer;
-(void)_actuallyUpdateUIForIrisPlaying;
-(void)setLastSettledPageIndex:(unsigned long long)arg1 ;
-(double)bottomContentInset;
-(long long)presentationPriority;
-(void)_addStateCaptureHandlers;
-(void)publisher:(id)arg1 didUpdateLayout:(id)arg2 withTransition:(id)arg3 ;
-(BOOL)handleVolumeUpButtonPress;
-(void)deactivateTodayViewWithCompletion:(/*^block*/id)arg1 ;
-(void)_scrollPanGestureBegan:(id)arg1 ;
-(long long)presentationTransition;
-(id)_windowsFromViewControllers:(id)arg1 ;
-(void)externalAppearanceProviderBehaviorChanged:(id)arg1 ;
-(void)setPresenter:(id<CSCoverSheetViewPresenting>)arg1 ;
-(void)updateNotificationSectionSettings:(id)arg1 previousSectionSettings:(id)arg2 ;
-(double)dateTimeMostExtremeLeadingX;
-(void)notificationsLoadedForSectionIdentifier:(id)arg1 ;
-(void)unregisterExternalPresentationProvider:(id)arg1 ;
-(void)resetRestToOpen;
-(void)_removeAllowedPageViewController:(id)arg1 ;
-(id)lockScreenActionContext;
-(id)visiblePageViewController;
-(BOOL)_shouldReduceWhitePointForAppearance:(id)arg1 ;
-(void)_updateProudLockViewUpdateSuspension;
-(void)_actuallyUpdateUIForIrisNotPlaying;
-(void)startHostingWallpaperOverlay:(id)arg1 ;
-(void)_transitionTimerViewToVisible:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)isLockScreenShowingDefaultContent;
-(BOOL)_canShowEmbeddedRemoteContent;
-(BOOL)handleHomeButtonPress;
-(BOOL)externalLockProvidersRequireUnlock;
-(double)timeToSubtitleLabelBaselineDifferenceY;
-(void)setIdleTimerController:(id<CSIdleTimerControlling>)arg1 ;
-(double)_valueForTransitionInterval:(SCD_Struct_CS6)arg1 timingFunction:(id)arg2 ;
-(void)setCameraPrewarmer:(id<CSCameraPrewarming>)arg1 ;
-(BOOL)_isRemoteContentPresentedInUnlockMode;
-(void)controllerWillCancelHorizontalScrolling:(id)arg1 ;
-(NSArray *)presentationRegions;
-(CSBehavior *)activeBehavior;
-(id<CSNotificationDispatcher>)dispatcher;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(void)handleBiometricEvent:(unsigned long long)arg1 ;
-(void)setDispatcher:(id<CSNotificationDispatcher>)arg1 ;
-(BOOL)isRestToOpenAvailable;
-(void)updateNotificationRequest:(id)arg1 ;
-(void)overlayController:(id)arg1 didChangePresentationProgress:(double)arg2 fromLeading:(BOOL)arg3 ;
-(void)_startFadeInAnimationForSource:(long long)arg1 ;
-(void)_setModalPresentationControllerVisibility:(BOOL)arg1 ;
-(void)coverSheetNotificationClearingTriggerDidFire:(id)arg1 ;
-(id)_pageForScrollPercent:(double)arg1 ;
-(BOOL)_shouldUpdateActiveAppearanceForReason:(id)arg1 ;
-(BOOL)remoteContentSession:(id)arg1 presentViewController:(id)arg2 ;
-(CSLayoutStrategy *)layoutStrategy;
-(void)withdrawNotificationRequest:(id)arg1 ;
-(BOOL)dismissNotificationInLongLookAnimated:(BOOL)arg1 ;
-(void)_setPageViewControllers:(id)arg1 ;
-(id)_screenWakeAnimationController;
-(void)_updateIdleTimerForTransitionProgress:(double)arg1 ;
-(void)setApplicationLauncher:(id<CSApplicationLaunching>)arg1 ;
-(void)idleTimerDidExpire;
-(id)_whitePointReductionFilterFromValues:(id)arg1 ;
-(void)timerControllerDidStopTimer:(id)arg1 ;
-(BOOL)isAccessoryAnimationPresenting;
-(unsigned long long)_indexOfTodayPage;
-(void)actionManager:(id)arg1 addedAction:(id)arg2 ;
-(void)setIrisWallpaperView:(id<SBFIrisWallpaperView>)arg1 ;
-(void)idleTimerDidWarn;
-(void)_setScreenWakeAnimationController:(id)arg1 ;
-(void)_updateNotificationClearingTriggerForEvent:(id)arg1 ;
-(BOOL)isPresentingNotificationInLongLook;
-(void)_updateActiveAppearanceForReason:(id)arg1 ;
-(void)_updateWallpaperEffectView;
-(void)setActiveBehavior:(CSBehavior *)arg1 ;
-(void)externalPresentationProviderPresentationChanged:(id)arg1 ;
-(void)unregisterExternalBehaviorProvider:(id)arg1 ;
-(long long)preferredInterfaceOrientationForPresentation;
-(BOOL)isNotificationContentExtensionVisible:(id)arg1 ;
-(void)_removeBedtimeGreetingBackgroundViewAnimated:(BOOL)arg1 ;
-(unsigned long long)_dateTimeLayoutForPage:(id)arg1 ;
-(id<CSCoverSheetViewControllerDelegate>)delegate;
-(unsigned long long)_indexOfPageViewControllerForRole:(id)arg1 ;
-(void)setShouldTransitionIrisWallpaperToStillWhenPlaybackFinishes:(BOOL)arg1 ;
-(void)unregisterExternalAppearanceProvider:(id)arg1 ;
-(SCD_Struct_CS8)transitionContext;
-(BOOL)handleEvent:(id)arg1 ;
-(double)timeLabelBaselineY;
-(BOOL)_isAccessoryAnimationAllowedForAccessory:(id)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)presentModalViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(long long)backgroundStyle;
-(void)setPreviousAppearance:(CSAppearance *)arg1 ;
-(CSAppearance *)previousAppearance;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)_updateScalableContent;
-(void)scrollPanGestureDidUpdate:(id)arg1 ;
-(void)setActivePresentation:(CSPresentation *)arg1 ;
-(BOOL)hasContentAboveCoverSheet;
-(void)updateStatusBarForLockScreenComeback;
-(void)noteWillPresentForUserGesture;
-(void)overlayControllerDidBeginChangingPresentationProgress:(id)arg1 ;
-(id)_createFakeStatusBar;
-(id<CSCameraPrewarming>)cameraPrewarmer;
-(BOOL)shouldModifyPageScrolling;
-(void)activatePage:(unsigned long long)arg1 animated:(BOOL)arg2 withCompletion:(/*^block*/id)arg3 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)_prepareForViewWillAppearIfNecessary;
-(void)irisWallpaperViewPlaybackStateDidChange:(id)arg1 ;
-(void)noteDeviceBlockedStatusUpdated;
-(void)_addOrRemoveRemoteContentViewIfNecessary;
-(void)_updateAccessibilityContentSizesIfNeeded;
-(double)backlightLevel;
-(void)irisWallpaperView:(id)arg1 didReplaceGestureRecognizer:(id)arg2 withGestureRecognizer:(id)arg3 ;
-(void)setFakeStatusBar:(UIStatusBar *)arg1 ;
-(void)_removeReduceWhitePointAnimationForKeyPath:(id)arg1 onLayer:(id)arg2 ;
-(UIStatusBar *)fakeStatusBar;
-(void)_updateScrollingBehavior;
-(void)overlayController:(id)arg1 visibilityDidChange:(BOOL)arg2 ;
-(id<CSOrientationUpdateControlling>)orientationUpdateController;
-(BOOL)_removeRemoteViewControllerForInvalidatedSession:(id)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned long long)lastSettledPageIndex;
-(long long)notificationBehavior;
-(CGPoint)_slideableContentOffset;
-(void)_addOrRemoveResetRestoreViewIfNecessaryAnimated:(BOOL)arg1 ;
-(CSPresentation *)externalPresentation;
-(BOOL)wouldHandleButtonEvent:(id)arg1 ;
-(BOOL)_dismissRemoteViewControllerForReason:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)conformsToCSBehaviorProviding;
-(BOOL)_isSourceForHorizontalScrolling:(id)arg1 ;
-(BOOL)shouldTransitionIrisWallpaperToStillWhenPlaybackFinishes;
-(void)setCoverSheetIsVisible:(BOOL)arg1 ;
-(void)passcodeViewControllerDidCancelPasscodeEntry:(id)arg1 ;
-(void)setWallpaperAggdLogger:(SBWallpaperAggdLogger *)arg1 ;
-(void)setLayoutStrategy:(CSLayoutStrategy *)arg1 ;
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(void)invalidateLockScreenActionContext;
-(void)_transitionAccesoryChargingViewToVisible:(BOOL)arg1 ;
-(long long)presentationAltitude;
-(void)_endAppearanceTransitionForPageViewControllersToVisible:(BOOL)arg1 ;
-(void)registerExternalPresentationProvider:(id)arg1 ;
-(void)_updateProudLockView;
-(void)_loadViewsForRestrictedPagesIfPossible;
-(void)_updateFixedFooterView;
-(void)updateCallToActionForMesaMatchFailure;
-(void)_invalidateStatusBarAssertions;
-(BOOL)isShowingTodayView;
-(unsigned long long)_accessoryAnimationRestrictions;
-(SBFLockScreenDateViewController *)dateViewController;
-(void)externalLockProviderStateChanged:(id)arg1 ;
-(void)_updateQuickActions;
-(BOOL)_overSlidingControlForLocation:(CGPoint)arg1 inView:(id)arg2 ;
-(int)wakeSource;
-(double)dateTimeSubtitleMaximumWidth;
-(BOOL)irisPlayerIsInteracting;
-(void)_updateActiveBehaviorsForReason:(id)arg1 ;
-(void)handleAction:(id)arg1 fromSender:(id)arg2 ;
-(BOOL)_isMainPageShowing;
-(void)setInterstitialTransitionSource:(CSInterstitialTransitionSource *)arg1 ;
-(id)_allowedPageViewControllers;
-(BOOL)_wouldUpdateActiveAppearance;
-(void)_addOrRemoveThermalTrapViewIfNecessaryAnimated:(BOOL)arg1 ;
-(CSMainPageContentViewController *)mainPageContentViewController;
-(void)_setFakeStatusBarEnabled:(BOOL)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)_updateControlCenterGrabber;
-(long long)proximityDetectionMode;
-(NSString *)appearanceIdentifier;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(UIColor *)backgroundColor;
-(BOOL)containsCenteredDateTimeLayout;
-(void)updateQuickActionsVisibility;
-(void)_updateUIForPlaying:(BOOL)arg1 immediately:(BOOL)arg2 ;
-(id)_fakeStatusBarSettings;
-(void)setLocalAppearance:(CSAppearance *)arg1 ;
-(void)_listenForDisplayLayoutChanges:(BOOL)arg1 ;
-(void)connectedDevicesDidChange:(id)arg1 ;
-(BOOL)isTransitioningInteractively;
-(void)addCoverSheetObserver:(id)arg1 ;
-(void)_scrollPanGestureChanged:(id)arg1 ;
-(void)conformsToCSCoverSheetViewControlling;
-(void)didPostNotificationRequest:(id)arg1 ;
-(CSInterstitialTransitionSource *)interstitialTransitionSource;
-(NSSet *)components;
-(id<CSCoverSheetViewPresenting>)presenter;
-(CSAppearance *)activeAppearance;
-(NSString *)coverSheetIdentifier;
-(void)transitionSource:(id)arg1 didUpdateTransitionWithContext:(SCD_Struct_CS8)arg2 ;
-(void)setModalPresentationController:(CSModalPresentationViewController *)arg1 ;
-(void)_setHasContentAboveCoverSheet:(BOOL)arg1 ;
-(void)setDelegate:(id<CSCoverSheetViewControllerDelegate>)arg1 ;
-(void)_setMainPageContentViewController:(id)arg1 ;
-(void)_setupWallpaperGesture;
-(CSBehavior *)irisBehavior;
-(void)_displayDidDisappearImplementation;
-(void)resetMainPageContentOffset;
-(void)_updateHomeAffordance;
-(void)_activateCameraAnimated:(BOOL)arg1 actions:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_addRemoteViewControllerForAction:(id)arg1 ;
-(id)_eligiblePageViewControllers;
-(void)_transitionChargingDateSubtitleToVisible:(BOOL)arg1 animated:(BOOL)arg2 force:(BOOL)arg3 ;
-(BOOL)shouldAutorotate;
-(BOOL)willUIUnlockFromSource:(int)arg1 ;
-(id)superviewForDateViewAnimation;
-(BOOL)isShowingModalView;
-(void)_updateVisibilityForPageViewControllersWithVisiblePageViewController:(id)arg1 ;
-(void)unregisterExternalLockProvider:(id)arg1 ;
-(void)_updateWhitePoint;
-(void)setCurrentTransitionSource:(id<CSCoverSheetViewTransitionSource>)arg1 ;
-(void)conformsToCSAppearanceProviding;
-(BOOL)contentOccludesBackground;
-(long long)presentationType;
-(void)idleTimerDidRefresh;
-(CSModalPresentationViewController *)modalPresentationController;
-(void)_addOrRemoveRemoteContentViewIfNecessaryMaintainingState:(BOOL)arg1 ;
-(id<SBNotificationDestination>)notificationDestination;
-(void)_transitionChargingViewToVisible:(BOOL)arg1 showBattery:(BOOL)arg2 animated:(BOOL)arg3 ;
-(void)updateInterstitialPresentationWithProgress:(double)arg1 ;
-(void)passcodeViewController:(id)arg1 didCompletePasscodeEntry:(BOOL)arg2 ;
-(id)_fullscreeNotificationViewControllerMatchingNotificationRequest:(id)arg1 ;
-(BOOL)_canShowWhileLocked;
-(BOOL)_isSlideableContentOffsetOnscreen:(CGPoint)arg1 ;
-(void)_dismissModalViewControllersWithIdentifier:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)_updateForegroundView;
-(void)registerExternalLockProvider:(id)arg1 ;
-(void)updateBehaviorForController:(id)arg1 ;
-(void)updateAppearanceForController:(id)arg1 ;
-(SBWallpaperAggdLogger *)wallpaperAggdLogger;
-(void)_updateRestrictedBehavior;
-(BOOL)_isKnownTransitionConflictFrom:(id)arg1 to:(id)arg2 ;
-(void)viewDidLoad;
-(void)_scrollPanGestureEnded:(id)arg1 ;
-(CSPresentation *)activePresentation;
-(double)timeLabelOffsetForScrollPercent:(double)arg1 ;
-(void)_transitionAccessoryViewToVisible:(BOOL)arg1 accessory:(id)arg2 animated:(BOOL)arg3 ;
-(_UILegibilitySettings *)legibilitySettings;
-(void)setActiveAppearance:(CSAppearance *)arg1 ;
-(void)overlayControllerRequestsDismissal:(id)arg1 ;
-(void)accessoryDetached:(id)arg1 ;
-(id)_lockOutController;
-(void)_displayWillAppearImplementation;
-(void)_setComponentWithType:(long long)arg1 hiddenForLandscape:(BOOL)arg2 ;
-(void)_dismissAccessoryViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)setIrisPlayerIsInteracting:(BOOL)arg1 ;
-(long long)idleTimerDuration;
-(void)transitionSource:(id)arg1 didEndWithContext:(SCD_Struct_CS8)arg2 ;
-(void)timerControllerDidStartTimer:(id)arg1 ;
-(double)windowedAccessoryInset;
-(id)__currentDesiredAppearanceWithStartIndex:(unsigned long long*)arg1 targetIndex:(unsigned long long*)arg2 targetAppearance:(id*)arg3 targetPresentation:(id*)arg4 modalAppearance:(id*)arg5 proudLockAppearance:(id*)arg6 poseidonAppearance:(id*)arg7 ;
-(long long)idleTimerMode;
-(void)_updatePoseidon;
-(unsigned long long)_pageCapabilities;
-(void)accessoryAnimationStatusChanged:(BOOL)arg1 ;
-(void)_updateActiveBehaviorsForReason:(id)arg1 updatingAppearanceIfNeeded:(BOOL)arg2 ;
-(BOOL)_handleEvent:(id)arg1 ;
-(void)_updateStatusBar;
-(id)initWithPageViewControllers:(id)arg1 mainPageContentViewController:(id)arg2 context:(id)arg3 ;
-(long long)participantState;
-(BOOL)_shouldReduceWhitePoint;
-(void)_addOrRemoveBlockedViewIfNecessaryAnimated:(BOOL)arg1 ;
-(void)_setLockOutController:(id)arg1 ;
-(void)setOrientationUpdateController:(id<CSOrientationUpdateControlling>)arg1 ;
-(void)setSpotlightPresenter:(id<CSSpotlightPresenting>)arg1 ;
-(void)_updateAppearance:(id)arg1 forComponentType:(long long)arg2 shouldHide:(BOOL)arg3 ;
-(void)_sendAuthenticationChangedEvent;
-(BOOL)isTransitioning;
-(void)_updateDateSubtitleAppearanceForBattery:(BOOL)arg1 animated:(BOOL)arg2 chargingVisible:(BOOL)arg3 ;
-(id)createHomeButtonSuppressAfterUnlockRecognizerForUnlockSource:(int)arg1 ;
-(BOOL)_transitionPrototypeChargingViewToVisible:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)_gestureRecognizer:(id)arg1 isLocatedOverHorizontalContentRegionInViewController:(id)arg2 ;
-(void)actionManager:(id)arg1 removedAction:(id)arg2 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)_wallpaperGestureShouldRequireUserPresence;
-(id)_behaviorForParticipant:(id)arg1 ;
-(void)_dismissToMainPageFromPageViewController:(id)arg1 ;
-(void)remoteContentSession:(id)arg1 didInvalidateWithError:(id)arg2 ;
-(id)_activeViewControllers;
-(void)cleanupInterstitialPresentationToPresented:(BOOL)arg1 inPlace:(BOOL)arg2 ;
-(void)_addVisiblePageViewController:(id)arg1 ;
-(void)activateCameraViewAnimated:(BOOL)arg1 sendingActions:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)_appearanceForParticipant:(id)arg1 ;
-(BOOL)remoteContentSession:(id)arg1 dismissWithReason:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(long long)effectiveInterfaceOrientationOverride;
-(void)_calculateAppearanceForCurrentOrientation;
-(BOOL)_showingAccessoryView;
-(void)externalBehaviorProviderBehaviorChanged:(id)arg1 ;
-(void)_addBedtimeGreetingBackgroundView;
-(double)dateTimeMostExtremeTrailingX;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(long long)effectiveInterfaceOrientation;
-(id<CSCoverSheetViewTransitionSource>)currentTransitionSource;
-(void)registerExternalBehaviorProvider:(id)arg1 ;
-(id)_passcodeViewController;
-(long long)idleWarnMode;
-(BOOL)canBeDeactivatedForUIUnlockFromSource:(int)arg1 ;
-(void)remoteContentDidUpdateStyle;
-(void)_setAllowedPageViewControllers:(id)arg1 ;
-(void)_displayWillDisappearImplementation;
-(void)presentViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)presentationViewController:(id)arg1 didTransitionViewController:(id)arg2 toPresented:(BOOL)arg3 ;
-(void)registerExternalEventHandler:(id)arg1 ;
-(void)presentModalViewController:(id)arg1 withTransition:(int)arg2 ;
-(CGPoint)_offsetForTransitionFromOffset:(CGPoint)arg1 toOffset:(CGPoint)arg2 timingFunction:(id)arg3 ;
-(void)removeApplicationHoster:(id)arg1 ;
-(void)_updatePageContent;
-(void)setPowerChangeObserver:(CSPowerChangeObserver *)arg1 ;
-(BOOL)_dismissRemoteViewControllerForReason:(long long)arg1 ;
-(long long)_passcodePresentationMode;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)_updateLocalAppearanceForPresentation;
-(void)_updateLocalAppearanceForRequester:(id)arg1 animationSettings:(id)arg2 actions:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
-(CSAppearance *)localAppearance;
-(void)addApplicationHoster:(id)arg1 ;
-(id)_whitePointValuesForAppearance:(id)arg1 ;
-(id)createHomeButtonShowPasscodeRecognizerForHomeButtonPress;
-(long long)statusBarStyle;
-(id<CSLegibilityProviding>)legibilityProvider;
-(void)conformsToCSCoverSheetViewPresenting;
-(void)_updateStatusBarGradient;
-(void)removeCoverSheetObserver:(id)arg1 ;
-(void)_updateModalPresentationControllerVisibility;
-(void)setPasscodeLockVisible:(BOOL)arg1 animated:(BOOL)arg2 forceBiometricPresentation:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(id<CSSpotlightPresenting>)spotlightPresenter;
-(BOOL)_isPageContentHidden;
-(void)setEffectiveInterfaceOrientationOverride:(long long)arg1 ;
-(void)loadView;
-(BOOL)_isSlideableContentOnscreen;
-(void)activateMainPageWithCompletion:(/*^block*/id)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(double)_dateViewAlphaForCurrentWakeState;
-(void)_dismissModalViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(CSCoverSheetView *)coverSheetView;
-(BOOL)controller:(id)arg1 shouldAllowPanScrollingWithSystemGestureRecognizer:(id)arg2 ;
-(CSPresentationViewController *)mainPagePresentationViewController;
-(id<CSEmergencyCalling>)emergencyCaller;
-(BOOL)_isPresentingModalViewControllerWithIdentifier:(id)arg1 ;
-(BOOL)_shouldSetUpWallpaperGesture;
-(id)_presentedModalViewControllerWithIdentifier:(id)arg1 ;
-(CGPoint)_finalizeOffset:(CGPoint)arg1 referenceFrame:(CGRect)arg2 ;
-(double)_scaleForTransitionFromScale:(double)arg1 toScale:(double)arg2 timingFunction:(id)arg3 ;
-(void)_handleQuickNoteLaunch:(id)arg1 ;
-(BOOL)isHostingAnApp;
-(void)prepareForInterstitialPresentation;
-(double)initialOverlayPresentationProgress;
-(void)passcodeViewControllerDidBeginPasscodeEntry:(id)arg1 ;
-(id)_averageLockScreenWallpaperColor;
-(void)_animateView:(id)arg1 toWhitePointReduced:(BOOL)arg2 withDispatchGroup:(id)arg3 ;
-(BOOL)isPasscodeLockVisible;
-(BOOL)_handleEventType:(long long)arg1 ;
-(void)setLocalBehavior:(CSBehavior *)arg1 ;
-(void)_presentModalViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(double)_alphaForTransitionFromHidden:(BOOL)arg1 toHidden:(BOOL)arg2 timingFunction:(id)arg3 ;
-(void)activateTodayViewWithCompletion:(/*^block*/id)arg1 ;
-(id)succinctDescriptionBuilder;
-(unsigned long long)_indexOfCameraPage;
-(void)_createStatusBarBackgroundViewIfNeeded;
-(void)updateAppearanceForController:(id)arg1 withAnimationSettings:(id)arg2 completion:(/*^block*/id)arg3 ;
-(long long)scrollingStrategy;
-(double)_timeLabelScrollPercentForDateTimeLayout:(unsigned long long)arg1 ;
-(void)setSuspendWallpaperAnimationAssertion:(id<BSInvalidatable>)arg1 ;
-(void)_powerStatusChangedToConnectedState:(BOOL)arg1 ;
-(BOOL)_quickActionsSupported;
-(id<SBFOverlayControlling><CSExternalBehaviorProviding><CSExternalEventHandling>)overlayController;
-(id)relinquishHostingOfWallpaperOverlay;
-(void)setDateViewController:(SBFLockScreenDateViewController *)arg1 ;
-(id)_whitePointValues;
-(id)_batteryDeviceController;
-(void)presentModalViewController:(id)arg1 fromRect:(CGRect)arg2 inView:(id)arg3 animated:(BOOL)arg4 ;
-(id<BSInvalidatable>)suspendWallpaperAnimationAssertion;
-(void)setEmergencyCaller:(id<CSEmergencyCalling>)arg1 ;
-(double)_dateTimeInsetXForPage:(id)arg1 ;
-(void)_updateAccessoryAnimationPresenting:(BOOL)arg1 userInteractionDisabled:(BOOL)arg2 ;
-(id)_filterValuesForWhitePointReduced:(BOOL)arg1 lighterReduction:(BOOL)arg2 ;
-(void)setAccessoryAttachmentObserver:(CSAccessoryStatusObserver *)arg1 ;
-(void)_updateIdleTimerBehavior;
-(void)setInitialOverlayPresentationProgress:(double)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(double)_minDateListSpacingForPage:(id)arg1 ;
-(double)_alphaForTransitionFromHidden:(BOOL)arg1 toHidden:(BOOL)arg2 unhiddenAlpha:(double)arg3 timingFunction:(id)arg4 ;
-(void)idleTimerDidChange;
-(id<SBFScreenWakeAnimationTarget>)lockScreenWakeAnimator;
-(BOOL)attachedAccessoriesContainsAccessoryType:(long long)arg1 ;
-(void)setInScreenOffMode:(BOOL)arg1 forAutoUnlock:(BOOL)arg2 fromUnlockSource:(int)arg3 ;
-(void)dismissOverlaysAnimated:(BOOL)arg1 ;
-(double)appearanceFraction;
-(id)pageViewControllerAtIndex:(unsigned long long)arg1 ;
-(void)_actuallyUpdateUIForIrisPlaying:(BOOL)arg1 ;
-(double)_dateTimeAlphaForFade;
-(void)_beginAppearanceTransitionForPageViewControllersToVisible:(BOOL)arg1 animated:(BOOL)arg2 ;
-(CSAccessoryStatusObserver *)accessoryAttachmentObserver;
-(void)presentViewController:(id)arg1 withTransition:(int)arg2 completion:(/*^block*/id)arg3 ;
-(id)_presentationForParticipant:(id)arg1 ;
-(void)dismissModalViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)_presentModalViewController:(id)arg1 shouldDismissOverlays:(BOOL)arg2 animated:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)passcodeViewControllerShouldHideStatusBar:(id)arg1 ;
-(void)_updateDateTimeView;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)_isWakeAnimationInProgress;
-(void)setIrisBehavior:(CSBehavior *)arg1 ;
-(unsigned long long)restrictedCapabilities;
-(void)_preferredContentSizeDidChange;
-(void)transitionSource:(id)arg1 willBeginWithType:(long long)arg2 ;
-(void)setOverlayController:(id<SBFOverlayControlling><CSExternalBehaviorProviding><CSExternalEventHandling>)arg1 ;
-(void)irisWallpaperViewIsInteractingDidChange:(id)arg1 ;
-(void)_setModalPresentationControllerVisibility:(BOOL)arg1 cancelTouches:(BOOL)arg2 ;
-(BOOL)externalLockProvidersShowPasscode;
-(void)dismissHomeScreenOverlay;
-(BOOL)shouldActivateRemoteContentSession:(id)arg1 ;
-(void)idleTimerWillRefresh;
-(double)dateBaselineToListY;
-(void)registerExternalAppearanceProvider:(id)arg1 ;
-(BOOL)shouldShowLockStatusBarTime;
-(void)_addWhitePointAnimationForKeyPath:(id)arg1 onLayer:(id)arg2 toValues:(id)arg3 withDuration:(double)arg4 dispatchGroup:(id)arg5 ;
-(NSArray *)pageViewControllers;
-(void)_updateStatusBarBackground;
-(void)setLegibilityProvider:(id<CSLegibilityProviding>)arg1 ;
-(CSPowerChangeObserver *)powerChangeObserver;
-(BOOL)interceptDismissalGestureForOverlayController:(id)arg1 ;
-(void)_updateTintingView;
-(void)coverSheetLegibilityProviderDidUpdate:(id)arg1 ;
-(void)setAppearanceFraction:(double)arg1 ;
-(void)_displayWillTurnOnWhileOnCoverSheet:(id)arg1 ;
-(void)jiggleLockIcon;
-(BOOL)_isTodayViewOverlayShowing;
-(void)_updateLegibilitySettings;
-(void)unregisterExternalEventHandler:(id)arg1 ;
@end

