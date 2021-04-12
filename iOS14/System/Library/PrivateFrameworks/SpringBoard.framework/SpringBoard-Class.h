/*
* Generated on Thursday, January 14, 2021 at 2:25:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKitCore/UISystemShellApplication.h>
#import <libobjc.A.dylib/MCProfileConnectionObserver.h>
#import <libobjc.A.dylib/RSPeerToPeerConnectionControllerDataSource.h>
#import <libobjc.A.dylib/SBRestartManagerDelegate.h>
#import <libobjc.A.dylib/SBModalAlertPresentationCoordinatorDelegate.h>
#import <UIKit/UIStatusBarStyleDelegate_SpringBoardOnly.h>
#import <libobjc.A.dylib/SSScreenCapturerDelegate.h>
#import <libobjc.A.dylib/SBBacklightControllerObserver.h>
#import <libobjc.A.dylib/SBInteractiveScreenshotGestureManagerDelegate.h>
#import <libobjc.A.dylib/SBRemoteTransientOverlaySessionManagerDelegate.h>
#import <libobjc.A.dylib/SBSpotlightTransientOverlayViewControllerDelegate.h>
#import <libobjc.A.dylib/_UIApplicationInitializationContextFactory.h>
#import <libobjc.A.dylib/SBAVSystemControllerCacheObserver.h>
#import <UIKit/UIApplicationDelegate.h>
#import <libobjc.A.dylib/SBIdleTimerProviding.h>

@protocol OS_dispatch_source, SBFLockOutStatusProvider, SBIdleTimer, SBProximityBacklightPolicy, BSInvalidatable, OS_os_transaction;
@class UIWindow, SBUIController, NSHashTable, NSMutableArray, NSSet, SBApplication, NSNumberFormatter, NSTimer, NSDate, NSObject, SBCardItemsController, SBNCNotificationDispatcher, SBUserSessionController, SBFUserAuthenticationController, NSCountedSet, SBAppStatusBarSettingsAssertion, SBSStatusBarStyleOverridesAssertion, NSString, SBBluetoothAccessoryBatteryMonitor, SBDeveloperBuildExpirationTrigger, SBScreenshotManager, SSScreenCapturer, SBSynchronizeCloudCriticalDataOperation, SBRestartManager, SBModalAlertPresenter, SBModalAlertPresentationCoordinator, SBMainDisplayInterfaceOrientationAggregator, SBDeviceOrientationUpdateManager, SBIdleTimerPolicyAggregator, SBPressPrecedenceArbiter, SBApplicationAutoLaunchService, SBApplicationLaunchAlertService, SBMainWorkspace, SBModalUIFluidDismissGestureManager, SBCarDoNotDisturbController, SBScreenTimeTrackingController, SBProximitySensorManager, SBExternalDisplayManager, SBUserAgent, SBSpuriousScreenUndimmingAssertion, SBLockScreenService, SBHomeScreenService, SBChronoHomeScreenUsageObserver, SBChronoApplicationProcessStateObserver, SBAppSwitcherSystemService, DNDAWDMetricsService, DNDNotificationsService, SBRemoteAlertHandleServer, SBTestAutomationService, SBStateDumpService, SBSpotlightTransientOverlayViewController, SBMousePointerManager, SBAccessibilityWindowHostingControllerServer, SBKeyboardBrightnessController, SBDisplayBrightnessController, NSMutableSet, DNDToggleManager, STMediaStatusDomain, SBWidgetController, SBAvocadoDebuggingController, SBSystemPointerInteractionManager, SBLockedPointerManager, SBBannerManager, SBHomeHardwareButton, SBLockHardwareButton, SBVolumeHardwareButton, SBCameraHardwareButton, SBAccountStoreManager, SBInteractiveScreenshotGestureManager, SBSoftwareUpdatePasscodePolicyManager, STStatusServer, STDynamicActivityAttributionManager, STTelephonyStateProvider, SBSensorActivityDataProvider, SBRecordingIndicatorManager, SBWebClipService, SBAppClipOverlayCoordinator, SBRemoteTransientOverlaySessionManager, SBCombinationHardwareButton, RSPeerToPeerServerController, NSArray;

@interface SpringBoard : UISystemShellApplication <MCProfileConnectionObserver, RSPeerToPeerConnectionControllerDataSource, SBRestartManagerDelegate, SBModalAlertPresentationCoordinatorDelegate, UIStatusBarStyleDelegate_SpringBoardOnly, SSScreenCapturerDelegate, SBBacklightControllerObserver, SBInteractiveScreenshotGestureManagerDelegate, SBRemoteTransientOverlaySessionManagerDelegate, SBSpotlightTransientOverlayViewControllerDelegate, _UIApplicationInitializationContextFactory, SBAVSystemControllerCacheObserver, UIApplicationDelegate, SBIdleTimerProviding> {

	SBUIController* _uiController;
	double _headsetButtonDownTime;
	IOHIDEventRef _headsetDownEvent;
	int _headsetClickCount;
	int _ringerSwitchState;
	unsigned _headsetButtonClickCount : 8;
	unsigned _menuButtonClickCount : 8;
	unsigned _screenWasDimOnMenuDown : 1;
	unsigned _screenshotWasTaken : 1;
	unsigned _headsetDownDelayedActionPerformed : 1;
	unsigned _isSeekingInMedia : 1;
	unsigned _ignoringCurrentLockButtonPress : 1;
	int _mediaSeekDirection;
	unsigned _springBoardRequestsAccelerometerEvents;
	long long _activeInterfaceOrientation;
	NSHashTable* _activeInterfaceOrientationObservers;
	NSMutableArray* _activeInterfaceOrientationOverrideStack;
	BOOL _wantsOrientationEvents;
	int _notifyDontAnimateREOToken;
	int _notifyDontAllowMediaHUDToken;
	BOOL _expectsFaceContact;
	BOOL _expectsFaceContactInLandscape;
	BOOL _smartCoverClosed;
	BOOL _keybagRefetchTransactionIsActive;
	BOOL _menuButtonDown;
	NSSet* _restrictionDisabledApplications;
	SBApplication* _nowRecordingApp;
	SBApplication* _inCallApp;
	SBApplication* _menuButtonInterceptApp;
	BOOL _menuButtonInterceptAppEnabledForever;
	NSMutableArray* _appsRegisteredForVolumeEvents;
	NSMutableArray* _appsRegisteredForLockButtonEvents;
	SBApplication* _lastLockButtonEventRecipient;
	NSNumberFormatter* _decimalFormatter;
	NSNumberFormatter* _percentFormatter;
	NSTimer* _midnightTimer;
	NSDate* _midnightFireDate;
	NSObject*<OS_dispatch_source> _memoryPressureSource;
	unsigned _memoryPressureStatus;
	NSMutableArray* _blocksAwaitingAvailableMemory;
	SBCardItemsController* _cardItemsController;
	SBNCNotificationDispatcher* _notificationDispatcher;
	CFBooleanRef _shouldDelaySleepForHeadsetClick;
	BOOL _didPlayLockSound;
	SBUserSessionController* _userSessionController;
	id<SBFLockOutStatusProvider> _lockOutController;
	SBFUserAuthenticationController* _authenticationController;
	NSHashTable* _disableActiveOrientationChangeAssertions;
	NSCountedSet* _ignoringInteractionEventsReasons;
	BOOL _hasFinishedLaunching;
	SBAppStatusBarSettingsAssertion* _hideStatusBarAssertion;
	SBAppStatusBarSettingsAssertion* _showStatusBarAssertion;
	SBSStatusBarStyleOverridesAssertion* _recordingStatusBarStyleOverrideAssertion;
	BOOL _atHomescreen;
	NSString* _logFile;
	SBBluetoothAccessoryBatteryMonitor* _bluetoothBatteryMonitor;
	SBDeveloperBuildExpirationTrigger* _developerBuildExpirationTrigger;
	SBScreenshotManager* _screenshotManager;
	SSScreenCapturer* _screenCapturer;
	SBSynchronizeCloudCriticalDataOperation* _synchronizeCloudCriticalDataOperation;
	SBRestartManager* _restartManager;
	GSEventRef _pendingDeviceOrientationChangeEventDuringStartupTransition;
	SBModalAlertPresenter* _systemModalAlertPresenter;
	SBModalAlertPresentationCoordinator* _modalAlertPresentationCoordinator;
	SBMainDisplayInterfaceOrientationAggregator* _orientationAggregator;
	SBDeviceOrientationUpdateManager* _deviceOrientationManager;
	BOOL _inUserTransition;
	BOOL _determiningBootTransition;
	BOOL _dontLockEver;
	SBIdleTimerPolicyAggregator* _idleTimerPolicyAggregator;
	id<SBIdleTimer> _idleTimer;
	SBPressPrecedenceArbiter* _pressPrecedenceArbiter;
	SBApplicationAutoLaunchService* _applicationAutoLaunchService;
	SBApplicationLaunchAlertService* _applicationLaunchAlertService;
	SBMainWorkspace* _mainWorkspace;
	SBModalUIFluidDismissGestureManager* _modalUIFluidDismissGestureManager;
	long long _lastUpdatedMirroredDisplayOrientation;
	long long _mainTransientOverlayPresentationManagerInterfaceOrientation;
	SBCarDoNotDisturbController* _carDoNotDisturbController;
	SBScreenTimeTrackingController* _screenTimeTrackingController;
	SBProximitySensorManager* _proximitySensorManager;
	id<SBProximityBacklightPolicy> _proximityBacklightPolicy;
	SBExternalDisplayManager* _externalDisplayManager;
	SBUserAgent* _pluginUserAgent;
	SBSpuriousScreenUndimmingAssertion* _preventPowerSourceAlertsDarkBootAssertion;
	id<BSInvalidatable> _deferOrientationUpdatesForKeybagAssertion;
	SBLockScreenService* _lockScreenService;
	SBHomeScreenService* _homeScreenService;
	SBChronoHomeScreenUsageObserver* _widgetHomeScreenUsageObserver;
	SBChronoApplicationProcessStateObserver* _widgetApplicationProcessStateObserver;
	SBAppSwitcherSystemService* _appSwitcherSystemService;
	long long _lastSeekRequestSource;
	DNDAWDMetricsService* _dndAWDMetricsService;
	DNDNotificationsService* _dndNotificationsService;
	SBRemoteAlertHandleServer* _remoteAlertHandleServer;
	SBTestAutomationService* _testAutomationService;
	SBStateDumpService* _stateDumpService;
	unsigned long long _stateDumpServiceRevision;
	int _currentOverrides;
	NSCountedSet* _spotlightTransientOverlayRequiringReasons;
	SBSpotlightTransientOverlayViewController* _spotlightTransientOverlayViewController;
	NSHashTable* _activeRemoteTransientOverlayViewProviders;
	/*^block*/id _headsetButtonUpHandler;
	SBMousePointerManager* _mousePointerManager;
	SBAccessibilityWindowHostingControllerServer* _accessibilityWindowHostingController;
	id<BSInvalidatable> _pipSpotlightWindowLevelAssertionInvalidatable;
	SBKeyboardBrightnessController* _keyboardBrightnessController;
	SBDisplayBrightnessController* _displayBrightnessController;
	NSMutableSet* _keyboardUsagePairsDown;
	BOOL _swallowKeyboardEvents;
	BOOL _requestingStatusBarStyleWithoutConsideringAlerts;
	DNDToggleManager* _dndToggleManager;
	STMediaStatusDomain* _mediaDomain;
	id _userHasAuthenticatedForTheFirstTimeNotificationObserver;
	NSObject*<OS_os_transaction> _takingScreenshotTransaction;
	BOOL _typingActive;
	BOOL _batterySaverModeActive;
	int _nowPlayingProcessPID;
	NSMutableArray* _nowLocatingApps;
	SBWidgetController* _widgetController;
	SBAvocadoDebuggingController* _avocadoController;
	SBSystemPointerInteractionManager* _systemPointerInteractionManager;
	SBLockedPointerManager* _lockedPointerManager;
	SBBannerManager* _bannerManager;
	double _bottomEdgeAmbiguousActivationMargin;
	SBHomeHardwareButton* _homeHardwareButton;
	SBLockHardwareButton* _lockHardwareButton;
	SBVolumeHardwareButton* _volumeHardwareButton;
	SBCameraHardwareButton* _cameraHardwareButton;
	SBAccountStoreManager* _accountStoreController;
	SBInteractiveScreenshotGestureManager* _interactiveScreenshotGestureManager;
	SBSoftwareUpdatePasscodePolicyManager* _softwareUpdatePasscodePolicyManager;
	STStatusServer* _systemStatusServer;
	STDynamicActivityAttributionManager* _dynamicAttributionManager;
	STTelephonyStateProvider* _telephonyStateProvider;
	SBSensorActivityDataProvider* _sensorActivityDataProvider;
	SBRecordingIndicatorManager* _recordingIndicatorManager;
	SBWebClipService* _webClipService;
	SBAppClipOverlayCoordinator* _appClipOverlayCoordinator;
	SBRemoteTransientOverlaySessionManager* _remoteTransientOverlaySessionManager;
	NSTimer* _daylightSavingsTimer;
	SBCombinationHardwareButton* _combinationHardwareButton;
	RSPeerToPeerServerController* _stateDumpServerController;

}

@property (nonatomic,retain) NSMutableArray * nowLocatingApps;                                                             //@synthesize nowLocatingApps=_nowLocatingApps - In the implementation block
@property (setter=_setIdleTimer:,nonatomic,retain) id<SBIdleTimer> idleTimer;                                              //@synthesize idleTimer=_idleTimer - In the implementation block
@property (nonatomic,retain) NSTimer * daylightSavingsTimer;                                                               //@synthesize daylightSavingsTimer=_daylightSavingsTimer - In the implementation block
@property (assign,nonatomic) int nowPlayingProcessPID;                                                                     //@synthesize nowPlayingProcessPID=_nowPlayingProcessPID - In the implementation block
@property (assign,getter=isBatterySaverModeActive,nonatomic) BOOL batterySaverModeActive;                                  //@synthesize batterySaverModeActive=_batterySaverModeActive - In the implementation block
@property (nonatomic,readonly) SBCombinationHardwareButton * combinationHardwareButton;                                    //@synthesize combinationHardwareButton=_combinationHardwareButton - In the implementation block
@property (nonatomic,retain) RSPeerToPeerServerController * stateDumpServerController;                                     //@synthesize stateDumpServerController=_stateDumpServerController - In the implementation block
@property (assign) BOOL hasFinishedLaunching;                                                                              //@synthesize hasFinishedLaunching=_hasFinishedLaunching - In the implementation block
@property (assign,getter=isTypingActive,nonatomic) BOOL typingActive;                                                      //@synthesize typingActive=_typingActive - In the implementation block
@property (assign,nonatomic) double bottomEdgeAmbiguousActivationMargin;                                                   //@synthesize bottomEdgeAmbiguousActivationMargin=_bottomEdgeAmbiguousActivationMargin - In the implementation block
@property (nonatomic,readonly) id<SBUIUserAgent> pluginUserAgent;                                                          //@synthesize pluginUserAgent=_pluginUserAgent - In the implementation block
@property (nonatomic,readonly) SBApplication * leastRecentlyForegroundLocatingApp; 
@property (nonatomic,readonly) SBUserSessionController * userSessionController;                                            //@synthesize userSessionController=_userSessionController - In the implementation block
@property (nonatomic,readonly) SBHomeHardwareButton * homeHardwareButton;                                                  //@synthesize homeHardwareButton=_homeHardwareButton - In the implementation block
@property (nonatomic,readonly) SBLockHardwareButton * lockHardwareButton;                                                  //@synthesize lockHardwareButton=_lockHardwareButton - In the implementation block
@property (nonatomic,readonly) SBVolumeHardwareButton * volumeHardwareButton;                                              //@synthesize volumeHardwareButton=_volumeHardwareButton - In the implementation block
@property (nonatomic,readonly) SBCameraHardwareButton * cameraHardwareButton;                                              //@synthesize cameraHardwareButton=_cameraHardwareButton - In the implementation block
@property (nonatomic,readonly) id<SBFLockOutStatusProvider> lockOutController;                                             //@synthesize lockOutController=_lockOutController - In the implementation block
@property (nonatomic,readonly) SBFUserAuthenticationController * authenticationController;                                 //@synthesize authenticationController=_authenticationController - In the implementation block
@property (nonatomic,readonly) SBScreenshotManager * screenshotManager;                                                    //@synthesize screenshotManager=_screenshotManager - In the implementation block
@property (nonatomic,readonly) SBNCNotificationDispatcher * notificationDispatcher;                                        //@synthesize notificationDispatcher=_notificationDispatcher - In the implementation block
@property (nonatomic,readonly) SBBannerManager * bannerManager;                                                            //@synthesize bannerManager=_bannerManager - In the implementation block
@property (nonatomic,readonly) SBWidgetController * widgetController;                                                      //@synthesize widgetController=_widgetController - In the implementation block
@property (nonatomic,readonly) SBAvocadoDebuggingController * avocadoController;                                           //@synthesize avocadoController=_avocadoController - In the implementation block
@property (nonatomic,readonly) SBRestartManager * restartManager;                                                          //@synthesize restartManager=_restartManager - In the implementation block
@property (nonatomic,readonly) SBModalAlertPresentationCoordinator * modalAlertPresentationCoordinator;                    //@synthesize modalAlertPresentationCoordinator=_modalAlertPresentationCoordinator - In the implementation block
@property (nonatomic,readonly) SBAccountStoreManager * accountStoreController;                                             //@synthesize accountStoreController=_accountStoreController - In the implementation block
@property (nonatomic,readonly) NSArray * appsRegisteredForVolumeEvents;                                                    //@synthesize appsRegisteredForVolumeEvents=_appsRegisteredForVolumeEvents - In the implementation block
@property (nonatomic,readonly) NSArray * appsRegisteredForLockButtonEvents;                                                //@synthesize appsRegisteredForLockButtonEvents=_appsRegisteredForLockButtonEvents - In the implementation block
@property (nonatomic,readonly) SBLockScreenService * lockScreenService;                                                    //@synthesize lockScreenService=_lockScreenService - In the implementation block
@property (nonatomic,readonly) SBApplicationAutoLaunchService * applicationAutoLaunchService;                              //@synthesize applicationAutoLaunchService=_applicationAutoLaunchService - In the implementation block
@property (nonatomic,readonly) SBApplicationLaunchAlertService * applicationLaunchAlertService;                            //@synthesize applicationLaunchAlertService=_applicationLaunchAlertService - In the implementation block
@property (nonatomic,readonly) SBIdleTimerPolicyAggregator * idleTimerPolicyAggregator;                                    //@synthesize idleTimerPolicyAggregator=_idleTimerPolicyAggregator - In the implementation block
@property (nonatomic,readonly) SBInteractiveScreenshotGestureManager * interactiveScreenshotGestureManager;                //@synthesize interactiveScreenshotGestureManager=_interactiveScreenshotGestureManager - In the implementation block
@property (nonatomic,readonly) SBProximitySensorManager * proximitySensorManager;                                          //@synthesize proximitySensorManager=_proximitySensorManager - In the implementation block
@property (nonatomic,readonly) SBMainDisplayInterfaceOrientationAggregator * orientationAggregator; 
@property (nonatomic,readonly) SBSoftwareUpdatePasscodePolicyManager * softwareUpdatePasscodePolicyManager;                //@synthesize softwareUpdatePasscodePolicyManager=_softwareUpdatePasscodePolicyManager - In the implementation block
@property (nonatomic,readonly) STStatusServer * systemStatusServer;                                                        //@synthesize systemStatusServer=_systemStatusServer - In the implementation block
@property (nonatomic,readonly) STDynamicActivityAttributionManager * dynamicAttributionManager;                            //@synthesize dynamicAttributionManager=_dynamicAttributionManager - In the implementation block
@property (nonatomic,readonly) STTelephonyStateProvider * telephonyStateProvider;                                          //@synthesize telephonyStateProvider=_telephonyStateProvider - In the implementation block
@property (nonatomic,readonly) SBSensorActivityDataProvider * sensorActivityDataProvider;                                  //@synthesize sensorActivityDataProvider=_sensorActivityDataProvider - In the implementation block
@property (nonatomic,readonly) SBRecordingIndicatorManager * recordingIndicatorManager;                                    //@synthesize recordingIndicatorManager=_recordingIndicatorManager - In the implementation block
@property (nonatomic,readonly) SBSystemPointerInteractionManager * systemPointerInteractionManager;                        //@synthesize systemPointerInteractionManager=_systemPointerInteractionManager - In the implementation block
@property (nonatomic,readonly) SBLockedPointerManager * lockedPointerManager;                                              //@synthesize lockedPointerManager=_lockedPointerManager - In the implementation block
@property (nonatomic,readonly) SBWebClipService * webClipService;                                                          //@synthesize webClipService=_webClipService - In the implementation block
@property (nonatomic,readonly) SBAppClipOverlayCoordinator * appClipOverlayCoordinator;                                    //@synthesize appClipOverlayCoordinator=_appClipOverlayCoordinator - In the implementation block
@property (nonatomic,readonly) int ringerSwitchState;                                                                      //@synthesize ringerSwitchState=_ringerSwitchState - In the implementation block
@property (nonatomic,readonly) SBRemoteTransientOverlaySessionManager * remoteTransientOverlaySessionManager;              //@synthesize remoteTransientOverlaySessionManager=_remoteTransientOverlaySessionManager - In the implementation block
@property (nonatomic,readonly) BOOL wantsOrientationEvents; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) UIWindow * window; 
+(id)_newApplicationInitializationContext;
+(void)initializeSystemServicesBeforeApplicationDidFinishLaunching;
+(id)_defaultSceneIdentity;
-(void)resetIdleTimerAndUndim;
-(void)_ringerChanged:(IOHIDEventRef)arg1 ;
-(id)deviceOrientationUpdateDeferralAssertionWithReason:(id)arg1 ;
-(void)takeScreenshot;
-(id)formattedPercentStringForNumber:(id)arg1 ;
-(BOOL)isShowingHomescreen;
-(SBUserSessionController *)userSessionController;
-(BOOL)isLocked;
-(BOOL)expectsFaceContact;
-(void)_performPanGesturesOnScreenUntilOnDeweyOverlayWithCompletion:(/*^block*/id)arg1 ;
-(void)_setReachabilitySupported:(BOOL)arg1 ;
-(SBBannerManager *)bannerManager;
-(BOOL)handleStatusBarHoverActionForRegion:(long long)arg1 ;
-(void)_handleKeyUIEvent:(id)arg1 ;
-(int)nowPlayingProcessPID;
-(void)localeChanged;
-(void)_updateRingerState:(int)arg1 withVisuals:(BOOL)arg2 updatePreferenceRegister:(BOOL)arg3 ;
-(SBApplication *)leastRecentlyForegroundLocatingApp;
-(SBSensorActivityDataProvider *)sensorActivityDataProvider;
-(BOOL)canOpenURL:(id)arg1 ;
-(NSTimer *)daylightSavingsTimer;
-(void)popTransientActiveInterfaceOrientationForReason:(id)arg1 ;
-(void)_runMedusaSplitViewSuspendTest:(id)arg1 withOptions:(id)arg2 ;
-(void)_openURLCore:(id)arg1 display:(id)arg2 animating:(BOOL)arg3 activationSettings:(id)arg4 origin:(id)arg5 withResult:(/*^block*/id)arg6 ;
-(id)_appIconsToPutInFolderForTest;
-(void)installNotificationObserverForNotificationName:(id)arg1 forOneNotification:(BOOL)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)startResumeTestNamed:(id)arg1 options:(id)arg2 ;
-(BOOL)runTest:(id)arg1 options:(id)arg2 ;
-(void)_handleApplicationExit:(id)arg1 ;
-(void)setMenuButtonInterceptApp:(id)arg1 forever:(BOOL)arg2 ;
-(long long)startupInterfaceOrientation;
-(void)noteMainTransientOverlayPresentationManagerWillChangeToInterfaceOrientation:(long long)arg1 ;
-(void)_setupNotificationListTest;
-(void)registerRemoteAlertSceneViewProvider:(id)arg1 ;
-(void)showAlertForUnhandledURL:(id)arg1 error:(int)arg2 ;
-(void)setBatterySaverModeActive:(BOOL)arg1 ;
-(void)_setDeferredHeadsetButtonDownEvent:(IOHIDEventRef)arg1 ;
-(void)_performRestackingExpandedBundleForNotificationRequest:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_runSwipeAndPauseForSwitcherTestFromHomeScreen:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)_removeTransientActiveInterfaceOrientationOverrideForReason:(id)arg1 ;
-(void)_toggleSearch;
-(void)restartManagerExitImminent:(id)arg1 ;
-(BOOL)handleDoubleHeightStatusBarTapWithStyleOverride:(int)arg1 ;
-(void)_runScrollIconListTestEditing:(BOOL)arg1 withFolders:(BOOL)arg2 withWidgets:(BOOL)arg3 ;
-(SBSoftwareUpdatePasscodePolicyManager *)softwareUpdatePasscodePolicyManager;
-(id)_applicationToUseForOpenAndCloseTesting;
-(void)_performArcSwipeWithComposer:(id)arg1 ;
-(SBMainDisplayInterfaceOrientationAggregator *)orientationAggregator;
-(double)_accessibilityDeactivationAnimationStartDelay;
-(void)launchMusicPlayerSuspended;
-(void)interactiveScreenshotGestureManager:(id)arg1 requestsScreenshotPreheatWithPresentationOptions:(id)arg2 ;
-(void)beginInteractiveSpotlightTransientOverlayPresentationWithValidator:(/*^block*/id)arg1 beginHandler:(/*^block*/id)arg2 ;
-(BOOL)canShowLockScreenCameraGrabber;
-(void)startedTest:(id)arg1 ;
-(id)_combinedListViewController;
-(id)keyCommands;
-(void)_turnScreenOnAndAuthenticateWithCompletion:(/*^block*/id)arg1 ;
-(void)_performFourFingerSwipeWithComposer:(id)arg1 vertically:(BOOL)arg2 duration:(double)arg3 ;
-(void)_headsetButtonDown:(IOHIDEventRef)arg1 ;
-(void)_postSpringBoardSignificantTimeChangedNotificationWithLogMessage:(id)arg1 ;
-(void)removeInCallApp;
-(void)_runScrollDeweyTestWithCompletion:(/*^block*/id)arg1 ;
-(void)_initializeAndStartObservingDefaultsIfNecessary;
-(BOOL)interactiveScreenshotGestureManagerShouldPreventGestureRecognition:(id)arg1 ;
-(long long)activeInterfaceOrientation;
-(id)init;
-(void)_runScrunchToAppSwitcherTest;
-(void)_preheatScreenshotsWithPresentationOptions:(id)arg1 ;
-(void)removeNowLocatingApp:(id)arg1 ;
-(void)_nowPlayingAppDidChangeNotification:(id)arg1 ;
-(BOOL)remoteTransientOverlaySessionManager:(id)arg1 prefersStatusBarActivityItemVisibleForServiceBundleIdentifier:(id)arg2 forSession:(id)arg3 ;
-(NSArray *)appsRegisteredForLockButtonEvents;
-(void)_accessibilityActivationAnimationWillBegin;
-(void)_rotateView:(id)arg1 toOrientation:(long long)arg2 ;
-(void)_runDoSiDoTest;
-(id)_settingLanguageStringForNewLanguage;
-(void)_runDashBoardRotationTestWithCompletion:(/*^block*/id)arg1 ;
-(void)_enqueueWorkspaceEvent:(/*^block*/id)arg1 withName:(id)arg2 ifSatisfiesCondition:(/*^block*/id)arg3 cancelingEventsWithNames:(id)arg4 failureBlock:(/*^block*/id)arg5 ;
-(SBModalAlertPresentationCoordinator *)modalAlertPresentationCoordinator;
-(void)_runNotificationCoalescingExpandingScrollingTestWithOptions:(id)arg1 ;
-(SBWidgetController *)widgetController;
-(NSArray *)appsRegisteredForVolumeEvents;
-(void)_localeChanged;
-(void)_performDragFromPoint:(CGPoint)arg1 andDragTo:(CGPoint)arg2 duration:(double)arg3 fromView:(id)arg4 withCompletion:(/*^block*/id)arg5 ;
-(void)setSuspensionAnimationDelay:(double)arg1 ;
-(BOOL)_shouldSwallowHIDEvent:(IOHIDEventRef)arg1 ;
-(void)_startBulletinBoardServer;
-(void)_midnightPassed;
-(void)_runAppSearchPresent;
-(void)_continueRunningDismissAppSwitcherTestWithCompletion:(/*^block*/id)arg1 ;
-(id)formattedDecimalStringForNumber:(id)arg1 ;
-(void)updateNativeOrientationAndMirroredDisplays:(BOOL)arg1 logMessage:(id)arg2 ;
-(void)updateNativeOrientationWithOrientation:(long long)arg1 logMessage:(id)arg2 ;
-(SBLockScreenService *)lockScreenService;
-(BOOL)isBatterySaverModeActive;
-(void)_forceRotateToOrientation:(long long)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)removeActiveOrientationObserver:(id)arg1 ;
-(id)coordinatorRequestedIdleTimerBehavior:(id)arg1 ;
-(long long)remoteTransientOverlaySessionManager:(id)arg1 activeWallpaperVariantForSession:(id)arg2 ;
-(void)setExpectsFaceContact:(BOOL)arg1 ;
-(void)_batterySaverModeChanged:(int)arg1 ;
-(void)setWantsVolumeButtonEvents:(BOOL)arg1 ;
-(void)_runHomeScreenIconPullToSpotlightWithTestName:(id)arg1 cold:(BOOL)arg2 ;
-(void)_keyboardOrCaseLatchWantsToAttemptUnlock:(int)arg1 ;
-(void)_enableRemoteStateDumpWithTimeout:(long long)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_performExpandingCoalescedBundleForNotificationRequest:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_runExitPageHiding;
-(void)_resetForceRotate;
-(void)_setAmbiguousControlCenterActivationMargin:(double)arg1 ;
-(void)_runAutoPiPWithGestureTest:(/*^block*/id)arg1 ;
-(void)setNowPlayingProcessPID:(int)arg1 ;
-(void)_handleScreenShotShortcut:(id)arg1 ;
-(void)_runScrollAppSwitcherLandscapeTest:(id)arg1 overApp:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(long long)deviceOrientationForDeferredUpdateIfAny;
-(void)_prepareToRunSwitcherGestureTestsWithCompletion:(/*^block*/id)arg1 ;
-(void)_performPanWithComposer:(id)arg1 startLocation:(CGPoint)arg2 endLocation:(CGPoint)arg3 duration:(double)arg4 ;
-(void)noteBacklightLevelChanged;
-(void)_performAfterDelay:(double)arg1 block:(/*^block*/id)arg2 ;
-(BOOL)hasFinishedLaunching;
-(BOOL)remoteTransientOverlaySessionManager:(id)arg1 shouldActivateOverlayWithContext:(id)arg2 forSession:(id)arg3 ;
-(void)_runDashBoardDismissWhileAuthenticatedTest;
-(void)_createInitialAppScene;
-(void)_runDashBoardDismissFromTodayViewWhileAuthenticatedTest;
-(void)_turnScreenOnOnDashBoardWithCompletion:(/*^block*/id)arg1 ;
-(void)noteInterfaceOrientationChanged:(long long)arg1 duration:(double)arg2 logMessage:(id)arg3 ;
-(SBLockHardwareButton *)lockHardwareButton;
-(void)_runScrollDeweyLibrarySearchWithCompletion:(/*^block*/id)arg1 ;
-(void)_handleCommandTab:(id)arg1 ;
-(void)_iapExtendedModeReset;
-(void)_runSwipeFromDeweyTestWithCompletion:(/*^block*/id)arg1 ;
-(void)didDismissMiniAlert;
-(void)_runTodayViewScrollWidgetsTestWithOptions:(id)arg1 ;
-(BOOL)_isDim;
-(void)applicationDidFinishLaunching:(id)arg1 ;
-(SBFUserAuthenticationController *)authenticationController;
-(void)_runDashBoardRotateCameraPage;
-(void)interactiveScreenshotGestureManager:(id)arg1 requestsScreenshotWithOptionsCollection:(id)arg2 presentationOptions:(id)arg3 ;
-(NSString *)debugDescription;
-(long long)homeScreenRotationStyle;
-(SBRestartManager *)restartManager;
-(void)_runMedusaTest:(id)arg1 withMainWorkspaceTransition:(/*^block*/id)arg2 options:(id)arg3 ;
-(void)_runDashboardTodayViewScrollWidgetsTestWithOptions:(id)arg1 ;
-(BOOL)remoteTransientOverlaySessionManager:(id)arg1 performDismissalRequest:(id)arg2 forSession:(id)arg3 ;
-(void)_performScrunchAndSwipeWithComposer:(id)arg1 ;
-(void)requestDeviceUnlock;
-(void)_runDeweyPullToLibrarySearchWithCompletion:(/*^block*/id)arg1 ;
-(void)_runDashBoardScrollToLeftPageTestWithBlur:(BOOL)arg1 ;
-(BOOL)homeScreenSupportsRotation;
-(void)_performPanGesturesOnScreenUntilOnPage:(unsigned long long)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_runHomeScreenIconPullToSpotlightDismiss;
-(SBWebClipService *)webClipService;
-(id)_accessibilityFrontMostApplication;
-(void)_performRightToLeftPanGestureOnScreenWithDuration:(double)arg1 completion:(/*^block*/id)arg2 ;
-(long long)interfaceOrientationForCurrentDeviceOrientation:(BOOL)arg1 ;
-(void)_startScrollAppSwitcherTest:(id)arg1 overApp:(BOOL)arg2 runColdTest:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)spotlightTransientOverlayViewControllerDidPresent:(id)arg1 ;
-(id)_dashBoardCombinedListViewController;
-(BOOL)remoteTransientOverlaySessionManager:(id)arg1 performPresentationRequest:(id)arg2 forSession:(id)arg3 ;
-(long long)_frontMostAppOrientation;
-(void)setDaylightSavingsTimer:(NSTimer *)arg1 ;
-(BOOL)_handlePhysicalButtonEvent:(id)arg1 ;
-(void)_returnToHomescreenWithCompletion:(/*^block*/id)arg1 ;
-(id)allowedRemotePeerDisplayNames;
-(void)_smartCoverDidOpen:(IOHIDEventRef)arg1 ;
-(BOOL)caseIsEnabledAndLatched;
-(void)_handleKeyDownEvent_DisplayBrightnessChange:(IOHIDEventRef)arg1 modifiers:(long long)arg2 ;
-(void)pushTransientActiveInterfaceOrientation:(long long)arg1 forReason:(id)arg2 ;
-(void)_significantTimeChangeNotificationReceived;
-(void)applicationOpenURL:(id)arg1 withApplication:(id)arg2 animating:(BOOL)arg3 activationSettings:(id)arg4 origin:(id)arg5 notifyLSOnFailure:(BOOL)arg6 withResult:(/*^block*/id)arg7 ;
-(void)_simulateHomeButtonPress;
-(BOOL)_accessibilityShouldAllowIconLaunch;
-(void)endIgnoringInteractionEventsForReason:(id)arg1 ;
-(void)_runCoverSheetNotificationListHistoryRevealTest;
-(void)_handleLockShortcut:(id)arg1 ;
-(void)_runToggleSearchTest;
-(void)spotlightTransientOverlayViewControllerRequestsDismissal:(id)arg1 ;
-(void)_runHomeScreenSwipeLeftToTodayView;
-(void)languageChanged;
-(void)handleDeferredUILockForInCallPresentation;
-(SBHomeHardwareButton *)homeHardwareButton;
-(void)_handleShiftCommandTab:(id)arg1 ;
-(BOOL)lockScreenCameraSupported;
-(void)rotateIfNeeded:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)_performSwipeWithComposer:(id)arg1 startLocation:(CGPoint)arg2 endLocation:(CGPoint)arg3 duration:(double)arg4 timingFunction:(id)arg5 intermediateTransformer:(/*^block*/id)arg6 completion:(/*^block*/id)arg7 ;
-(id)_accessibilityRunningApplications;
-(void)_accessibilitySetSystemGesturesDisabledByAccessibility:(BOOL)arg1 ;
-(SBSystemPointerInteractionManager *)systemPointerInteractionManager;
-(id)_doubleHomeButtonPressEventStream;
-(void)_runAppSwitcherDismissTestOverApp:(BOOL)arg1 rotated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)_removeAllFakeNotifications;
-(void)_dismissSpotlightByHomeButtonEvent:(/*^block*/id)arg1 ;
-(long long)_interfaceOrientationForRawOrientation:(long long)arg1 validOrientation:(long long)arg2 ignoringHomeScreenRotationStyle:(BOOL)arg3 ;
-(void)handleDeferredUILockForInCallPresentationAnimateIfNeeded:(BOOL)arg1 inCallPresentationActive:(BOOL)arg2 ;
-(void)updateNativeOrientationWithLogMessage:(id)arg1 ;
-(RSPeerToPeerServerController *)stateDumpServerController;
-(BOOL)_accessibilityIsSystemGestureActive;
-(BOOL)_shouldPendAlertsForTest:(id)arg1 ;
-(id)_accessibilityTopDisplay;
-(void)_adjustSignificantTimersAfterSleep;
-(long long)_currentNonFlatDeviceOrientation;
-(void)applicationOpenURL:(id)arg1 ;
-(void)setNowLocatingApps:(NSMutableArray *)arg1 ;
-(void)_runArcSwipeMultipleAppsTest;
-(void)_takeScreenshotAndEdit:(BOOL)arg1 ;
-(void)_headsetButtonUp:(IOHIDEventRef)arg1 ;
-(id)_keyWindowForScreen:(id)arg1 ;
-(void)_handleKeyDownEvent_KeyboardBrightnessChange:(IOHIDEventRef)arg1 modifiers:(long long)arg2 ;
-(long long)_testOrientation:(id)arg1 options:(id)arg2 ;
-(void)noteInterfaceOrientationChanged:(long long)arg1 duration:(double)arg2 updateMirroredDisplays:(BOOL)arg3 force:(BOOL)arg4 logMessage:(id)arg5 ;
-(void)noteSubstantialTransitionOccured;
-(void)_runSpotlightPulldownRotation;
-(void)updateMirroredDisplayOrientationWithLogMessage:(id)arg1 ;
-(void)__performPanGesturesOnScreenFromPage:(unsigned long long)arg1 toPage:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)updateNativeOrientationWithOrientation:(long long)arg1 updateMirroredDisplays:(BOOL)arg2 animated:(BOOL)arg3 logMessage:(id)arg4 ;
-(void)_runNotificationCoalescingRestackingTestWithOptions:(id)arg1 ;
-(void)runFolderRotationTest:(int)arg1 ;
-(void)_basicRotationTestForCurrentConfigurationWithTeardown:(/*^block*/id)arg1 ;
-(void)setHasFinishedLaunching:(BOOL)arg1 ;
-(void)_endRequiringSpotlightTransientOverlayForReason:(id)arg1 ;
-(void)_cleanupMainWorkspaceForMedusaTestWithCompletion:(/*^block*/id)arg1 ;
-(void)_unscatterWillBegin:(id)arg1 ;
-(void)_runSpotlightTodayViewRotation;
-(void)_setIdleTimer:(id)arg1 ;
-(BOOL)expectsFaceContactInLandscape;
-(void)_runTodayViewPullDownToSpotlight;
-(void)_runHomeScreenSwipeRightFromTodayView;
-(void)noteSceneLayoutDidUpdateOnDisplayWithIdentity:(id)arg1 ;
-(void)registerAnalyticsEventHandlers;
-(void)batteryStatusDidChange:(id)arg1 ;
-(SBAppClipOverlayCoordinator *)appClipOverlayCoordinator;
-(void)setStateDumpServerController:(RSPeerToPeerServerController *)arg1 ;
-(void)_runScrunchAndSwipeTest;
-(void)_runScrollAppSwitcherTest:(id)arg1 overApp:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)_runSwipeAndPauseForSwitcherOverFolderTest;
-(void)didReceiveMemoryWarning;
-(BOOL)application:(id)arg1 handleOpenURL:(id)arg2 ;
-(void)_toggleFloatingDockVisibility:(id)arg1 ;
-(void)_handleApplicationProcessStateDidChangeNotification:(id)arg1 ;
-(void)_runDismissContinuityBannerInSwitcherTestWithCompletion:(/*^block*/id)arg1 ;
-(void)_runPresentContinuityBannerInSwitcherTestWithCompletion:(/*^block*/id)arg1 ;
-(long long)alertInterfaceOrientation;
-(BOOL)hasDisableActiveInterfaceOrientationChangeAssertions;
-(void)_performSwipeWithComposer:(id)arg1 startLocation:(CGPoint)arg2 endLocation:(CGPoint)arg3 duration:(double)arg4 ;
-(void)setNextAssistantRecognitionStrings:(id)arg1 ;
-(void)_runNotificationCoalescingExpandingTestWithOptions:(id)arg1 ;
-(void)_runSwipeToHomeTestWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)shouldShowAlertForUnhandledURL:(id)arg1 error:(int)arg2 ;
-(id)_windowForSystemAppButtonEventsForScreen:(id)arg1 ;
-(void)_runBottomEdgeSwipeTestFromHomeScreen:(BOOL)arg1 ;
-(BOOL)_isStatusBarEffectivelyHiddenForContentOverlayInsetsForWindow:(id)arg1 ;
-(void)_runFourFingerSwipeMultipleAppsTest;
-(void)significantTimeChange;
-(void)setTypingActive:(BOOL)arg1 ;
-(void)setAppRegisteredForLockButtonEvents:(id)arg1 isActive:(BOOL)arg2 ;
-(void)setNowPlayingInfo:(id)arg1 forProcessWithPID:(int)arg2 ;
-(BOOL)underMemoryPressure;
-(long long)rawDeviceOrientationIgnoringOrientationLocks;
-(id)inCallApp;
-(BOOL)_statusBarOrientationFollowsWindow:(id)arg1 ;
-(double)_accessibilityActivationAnimationStartDelay;
-(BOOL)isCurrentlyDeferringOrientationUpdates;
-(void)_postActiveInterfaceOrientationChangedNotificationAnimated:(BOOL)arg1 ;
-(BOOL)isSpringBoardStatusBarHidden;
-(void)_lockdownActivationChanged:(id)arg1 ;
-(BOOL)allowCaseLatchLockAndUnlock;
-(void)_screenshotWindowWillBeDisplayed;
-(void)wipeDeviceNowWithReason:(id)arg1 ;
-(BOOL)smartCoverIsClosed;
-(void)_runScrollDeweyWithinExpandedPodWithCompletion:(/*^block*/id)arg1 ;
-(void)_startAutoPiPWithGesture:(/*^block*/id)arg1 setupCompletion:(/*^block*/id)arg2 finalCompletion:(/*^block*/id)arg3 ;
-(void)_setStatusBarShowsProgress:(BOOL)arg1 ;
-(void)_runTapContinuityBannerInSwitcherTestWithCompletion:(/*^block*/id)arg1 ;
-(void)restartManagerWillReboot:(id)arg1 ;
-(void)_takeScreenshotWithOptionsCollection:(id)arg1 presentationOptions:(id)arg2 ;
-(void)_continueRunningScrollAppSwitcherTest:(id)arg1 runColdTest:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)isKeybagRefetchTransactionActive;
-(void)_beginRequiringSpotlightTransientOverlayForReason:(id)arg1 ;
-(BOOL)_isRemoteStateDumpEnabled;
-(BOOL)isDeterminingBootTransition;
-(void)_applicationOpenURL:(id)arg1 withApplication:(id)arg2 animating:(BOOL)arg3 activationSettings:(id)arg4 origin:(id)arg5 withResult:(/*^block*/id)arg6 ;
-(void)_setDeviceOrientation:(long long)arg1 animated:(BOOL)arg2 logMessage:(id)arg3 ;
-(id<SBFLockOutStatusProvider>)lockOutController;
-(id)modalAlertPresentationCoordinatorRequestedForegroundScenes:(id)arg1 ;
-(void)frontDisplayDidChange:(id)arg1 ;
-(void)remoteTransientOverlaySessionManager:(id)arg1 requestsHandlingForButtonEvents:(unsigned long long)arg2 forSession:(id)arg3 viewController:(id)arg4 ;
-(BOOL)_hasForegroundAppWithPID:(int)arg1 ;
-(SBAvocadoDebuggingController *)avocadoController;
-(id)menuButtonInterceptApp;
-(NSMutableArray *)nowLocatingApps;
-(SBApplicationAutoLaunchService *)applicationAutoLaunchService;
-(void)_runMedusaUnpinFloatingApplicationTest:(id)arg1 withOptions:(id)arg2 ;
-(id<SBIdleTimer>)idleTimer;
-(void)_unlockAnimationDidFinish:(id)arg1 ;
-(void)_performSwipeHomeWithComposer:(id)arg1 ;
-(id)_defaultExpirationComponents;
-(void)_prepareToRunAutoPiPTestWithCompletion:(/*^block*/id)arg1 ;
-(void)_runMedusaSplitViewResizeTest:(id)arg1 withOptions:(id)arg2 ;
-(void)_iapServerConnectionDiedNotification:(id)arg1 ;
-(void)setSystemVolumeHUDEnabled:(BOOL)arg1 forAudioCategory:(id)arg2 ;
-(void)_initializeDeferredItems;
-(void)_resetToHomeScreen;
-(void)_handleHIDEvent:(IOHIDEventRef)arg1 ;
-(void)_simulateHomeButtonPressWithCompletion:(/*^block*/id)arg1 ;
-(void)setUpDaylightSavingsTimer;
-(void)_runBottomEdgeSwipeMultipleAppsTest;
-(void)_smartCoverMightHaveOpened:(IOHIDEventRef)arg1 ;
-(id)_dumpStateCaptureData;
-(void)_performPanGesturesOnScreenUntilOnDefaultHomeScreenIconPageWithCompletion:(/*^block*/id)arg1 ;
-(void)_runAppOpen:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(BOOL)menuButtonInterceptAppEnabledForever;
-(void)_runMedusaMoveFloatingApplicationTest:(id)arg1 withOptions:(id)arg2 ;
-(BOOL)homeScreenRotationStyleWantsUIKitRotation;
-(SBIdleTimerPolicyAggregator *)idleTimerPolicyAggregator;
-(void)_performNotificationPublishingWithCount:(unsigned long long)arg1 uniqueThreadCount:(unsigned long long)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)_prepareToRunSwitcherGestureTestsWithForegroundApp:(id)arg1 shouldStartTest:(BOOL)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)_adjustDaylightSavingsTimerAfterSleep;
-(void)_performPanGestureTowardsUserInterfaceLayoutDirectionOnScreenWithDuration:(double)arg1 completion:(/*^block*/id)arg2 ;
-(id)supportedStateTypes;
-(void)restartManager:(id)arg1 willRestartWithTransitionRequest:(id)arg2 ;
-(id)_dashBoardTodayControllerForTestingIfExists;
-(STStatusServer *)systemStatusServer;
-(void)_prepareToRunSwitcherGestureTestsFromHomeScreen:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_logReliabilityInfoForEvent:(IOHIDEventRef)arg1 source:(int)arg2 ;
-(void)_updateHomeScreenPresenceNotification:(id)arg1 ;
-(void)_runAppSearchDismiss;
-(int)statusBar:(id)arg1 effectiveStyleOverridesForRequestedStyle:(long long)arg2 overrides:(int)arg3 ;
-(SBProximitySensorManager *)proximitySensorManager;
-(void)_medusaTestWithName:(id)arg1 testOptions:(id)arg2 ;
-(void)_pauseWithComposer:(id)arg1 locations:(CGPoint*)arg2 touchCount:(unsigned long long)arg3 ;
-(BOOL)_accessibilityShouldAllowAppLaunch;
-(void)_significantTimeDidChange:(BOOL)arg1 ;
-(void)addActiveOrientationObserver:(id)arg1 ;
-(void)addNowLocatingApp:(id)arg1 ;
-(double)windowRotationDuration;
-(void)_adjustMidnightTimerAfterSleep;
-(void)runHomeScreenRotationTest:(int)arg1 ;
-(id)nowRecordingApp;
-(void)_runDashBoardRotateMainPage;
-(void)_runArcSwipeTestFromHomeScreen:(BOOL)arg1 ;
-(void)_runSwipeToDeweyTestWithCompletion:(/*^block*/id)arg1 ;
-(void)_runVolumeChangeWithCompletion:(/*^block*/id)arg1 ;
-(void)beginIgnoringInteractionEvents;
-(void)_performDelayedHeadsetClickTimeout;
-(void)beginIgnoringInteractionEventsForReason:(id)arg1 ;
-(void)_runSwipeUpHomeToAutoPiPTest;
-(void)endIgnoringInteractionEvents;
-(void)_runDashBoardDismissFromPasscodeViewAfterAuthenticationTest;
-(void)startLaunchTestNamed:(id)arg1 options:(id)arg2 ;
-(void)_performTapAtPoint:(CGPoint)arg1 fromView:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)_returnToHomeScreenWithCompletion:(/*^block*/id)arg1 ;
-(void)_handleSnapshotButtonHIDEvent:(IOHIDEventRef)arg1 buttonIsDown:(BOOL)arg2 fromSource:(int)arg3 ;
-(SBNCNotificationDispatcher *)notificationDispatcher;
-(BOOL)_handleStatusBarHoverActionForRegion:(long long)arg1 ;
-(void)_updateOrientationDetectionSettings;
-(void)_performLeftToRightPanGestureOnScreenWithDuration:(double)arg1 completion:(/*^block*/id)arg2 ;
-(void)_caseLatchWantsToAttemptLock;
-(void)_rotationCompletion:(id)arg1 ;
-(BOOL)isNowPlayingAppPlaying;
-(void)_runSpotlightCoverSheetTodayViewRotation;
-(BOOL)__handleHIDEvent:(IOHIDEventRef)arg1 withUIEvent:(id)arg2 ;
-(void)_handleEndOfScrollingTest:(id)arg1 ;
-(STDynamicActivityAttributionManager *)dynamicAttributionManager;
-(void)cache:(id)arg1 didUpdateActiveAudioRoute:(id)arg2 ;
-(id)_installSwitcherModelForSwitcherTests;
-(void)toggleSearchFromBreadcrumbSource:(BOOL)arg1 withWillBeginHandler:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)stateForStateType:(unsigned long long)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)_setStatusBarOrientation:(long long)arg1 logMessage:(id)arg2 ;
-(void)_runDashBoardScrollToRightPageTestWithBlur:(BOOL)arg1 ;
-(void)setExpectsFaceContact:(BOOL)arg1 inLandscape:(BOOL)arg2 ;
-(void)_retryLaunchTestWithOptions:(id)arg1 ;
-(void)noteInterfaceOrientationChanged:(long long)arg1 duration:(double)arg2 updateMirroredDisplays:(BOOL)arg3 logMessage:(id)arg4 ;
-(void)profileConnectionDidReceivePasscodePolicyChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(void)noteInterfaceOrientationChanged:(long long)arg1 logMessage:(id)arg2 ;
-(void)_application:(id)arg1 statusBarTouchesEnded:(id)arg2 ;
-(void)_broadcastStateCaptureToConnectedRemotePeers:(id)arg1 ;
-(void)setupMidnightTimer;
-(void)updateNativeOrientationAnimated:(BOOL)arg1 logMessage:(id)arg2 ;
-(STTelephonyStateProvider *)telephonyStateProvider;
-(void)_setupKeyboardAnimationSubTestsForTestName:(id)arg1 ;
-(void)restartManagerWillShutdown:(id)arg1 ;
-(void)_runScrunchToHomeTest;
-(void)_performPanGestureAwayFromUserInterfaceLayoutDirectionOnScreenWithDuration:(double)arg1 completion:(/*^block*/id)arg2 ;
-(long long)interfaceOrientationForRawOrientation:(long long)arg1 validOrientation:(long long)arg2 ignoringHomeScreenRotationStyle:(BOOL)arg3 ;
-(SBLockedPointerManager *)lockedPointerManager;
-(void)_performDeferredLaunchWork;
-(void)backlightController:(id)arg1 willAnimateBacklightToFactor:(float)arg2 source:(long long)arg3 ;
-(double)bottomEdgeAmbiguousActivationMargin;
-(void)addInCallApp:(id)arg1 ;
-(void)_runNotificationCoalescingRestackingFromBottomTestWithOptions:(id)arg1 ;
-(BOOL)launchedForUserTransition;
-(void)setWantsOrientationEvents:(BOOL)arg1 logMessage:(id)arg2 ;
-(void)noteBacklightFadeFinished;
-(void)_performFiveFingerScrunchWithComposer:(id)arg1 scrunchProgress:(double)arg2 duration:(double)arg3 withContinuationBlock:(/*^block*/id)arg4 ;
-(void)_keyboardAvailabilityChanged;
-(void)_turnScreenOnAndUnlockWithCompletion:(/*^block*/id)arg1 ;
-(id)_singleHomeButtonPressEventStream;
-(SBRemoteTransientOverlaySessionManager *)remoteTransientOverlaySessionManager;
-(void)_runDashBoardPresentDismissPasscode;
-(void)_simulateUserScrollForNotificationListWithCount:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)_runFourFingerSwipeTest;
-(void)_registerForAVSystemControllerNotifications;
-(id)localPeerDisplayName;
-(void)setAppRegisteredForVolumeEvents:(id)arg1 isActive:(BOOL)arg2 ;
-(void)_disableRemoteStateDumpWithCompletion:(/*^block*/id)arg1 ;
-(void)_pullDownToSpotlightForView:(id)arg1 offset:(double)arg2 duration:(double)arg3 completion:(/*^block*/id)arg4 ;
-(void)_resetHomeScreenToPageIndex:(unsigned long long)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)_runSwipeToHomeOverFolderTest;
-(BOOL)supportsPortraitUpsideDownOrientation;
-(void)handleLockButtonPressFromTransientOverlayViewController:(id)arg1 ;
-(void)_handleGotoHomeScreenShortcut:(id)arg1 ;
-(void)spotlightTransientOverlayViewControllerWillDismiss:(id)arg1 ;
-(void)_runAppSwitcherBringupTestOverApp:(BOOL)arg1 rotated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)_runHomeScreenSearchDismiss;
-(void)_runScrunchAndSwipeMultipleAppsTest;
-(BOOL)_frontBoardWantsKeyboardSceneLayerOrderedIntoScene;
-(void)noteKeybagRefetchTransactionIsActive:(BOOL)arg1 ;
-(void)_runHomeScreenSearchPresent;
-(void)_setStatusBarOrientation:(long long)arg1 animated:(BOOL)arg2 logMessage:(id)arg3 ;
-(void)modalAlertPresentationCoordinator:(id)arg1 didChangeShowingSystemModalAlert:(BOOL)arg2 ;
-(int)ringerSwitchState;
-(void)_runDashBoardDismissTestFromPageIndex:(unsigned long long)arg1 showPasscodeView:(BOOL)arg2 ;
-(void)screenCapturer:(id)arg1 didCaptureScreenshotsOfScreens:(id)arg2 ;
-(void)unregisterRemoteAlertSceneViewProvider:(id)arg1 ;
-(void)_removeRecordingStatusBarStyleOverrideAssertion;
-(void)_accessibilityDeactivationAnimationWillBegin;
-(BOOL)shouldNeverLock;
-(void)noteInterfaceOrientationChanged:(long long)arg1 force:(BOOL)arg2 logMessage:(id)arg3 ;
-(BOOL)iapIsInExtendedMode;
-(BOOL)_accessibilityObjectWithinProximity;
-(void)_cleanUpLaunchTestState;
-(id)setNextVoiceRecognitionAudioInputPaths:(id)arg1 ;
-(SBInteractiveScreenshotGestureManager *)interactiveScreenshotGestureManager;
-(SBScreenshotManager *)screenshotManager;
-(long long)activeInterfaceOrientationWithoutConsideringTransientOverlays;
-(void)setBottomEdgeAmbiguousActivationMargin:(double)arg1 ;
-(void)_runScrunchHomeToAutoPiPTest;
-(void)_runScrollTestWithScrollView:(id)arg1 options:(id)arg2 completion:(/*^block*/id)arg3 ;
-(SBCameraHardwareButton *)cameraHardwareButton;
-(void)endLaunchTest;
-(BOOL)_accessibilitySystemGesturesDisabledByAccessibility;
-(void)_uninstallModelForTestsAndRestoreAppLayouts:(id)arg1 ;
-(void)_setupMainWorkspaceForMedusaTestWithOptions:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)transactionForDismissingSearchTransientOverlay;
-(void)nowLocatingAppDidEnterForeground:(id)arg1 ;
-(void)_handleStandardFunctionKeyActionWithPreferencesURLString:(id)arg1 modifiers:(long long)arg2 block:(/*^block*/id)arg3 ;
-(void)_simulateLockButtonPress;
-(void)failedTest:(id)arg1 withResults:(id)arg2 ;
-(id)_applicationToUseForScrollTesting;
-(void)_updateRecordingPIDFromActivities:(id)arg1 ;
-(void)_runLockScreenScrollNotificationsTestWithOptions:(id)arg1 ;
-(void)_runDashBoardScrollFromLeftToRightPageTestWithBlur:(BOOL)arg1 ;
-(void)_runTodayViewFocusSearchFieldToSpotlight;
-(void)_handleShutDownAndReboot;
-(void)_runMedusaPinFloatingApplicationTest:(id)arg1 withOptions:(id)arg2 ;
-(void)removeDisableActiveInterfaceOrientationChangeAssertion:(id)arg1 nudgeOrientationIfRemovingLast:(BOOL)arg2 ;
-(void)_screenshotWindowWasDismissed;
-(void)_runEnterPageHiding;
-(id)_homeScreenTodayViewEventStreamWithDismissal:(BOOL)arg1 ;
-(void)willDisplayMiniAlert;
-(void)_rotateFromPortrait:(/*^block*/id)arg1 toLandscape:(/*^block*/id)arg2 andFromLandscape:(/*^block*/id)arg3 andBackToPortrait:(/*^block*/id)arg4 ;
-(void)_launchFullscreenApplication:(id)arg1 withLaunchResult:(/*^block*/id)arg2 transactionCompletion:(/*^block*/id)arg3 ;
-(void)_startSeekWithDirection:(id)arg1 ;
-(SBCombinationHardwareButton *)combinationHardwareButton;
-(BOOL)isTypingActive;
-(void)_smartCoverDidClose:(IOHIDEventRef)arg1 ;
-(void)_dumpLoggingStateCaptureWithCompletion:(/*^block*/id)arg1 ;
-(void)startLaunchTestNamed:(id)arg1 options:(id)arg2 withCompletionBlock:(/*^block*/id)arg3 ;
-(void)_handleCommandQ:(id)arg1 ;
-(void)handleKeyHIDEvent:(IOHIDEventRef)arg1 ;
-(id)_flickTimingFunction;
-(void)_performMainWorkspaceTransitionWithPrimaryWorkspaceEntity:(id)arg1 sideWorkspaceEntity:(id)arg2 floatingWorkspaceEntity:(id)arg3 spaceConfiguration:(long long)arg4 floatingConfiguration:(long long)arg5 animated:(BOOL)arg6 completion:(/*^block*/id)arg7 ;
-(SBVolumeHardwareButton *)volumeHardwareButton;
-(BOOL)launchApplicationWithIdentifier:(id)arg1 suspended:(BOOL)arg2 ;
-(void)_activateSafariWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)isBundleIdentifierRestrictionDisabled:(id)arg1 ;
-(BOOL)wantsOrientationEvents;
-(void)_daylightSavingsTimeChanged;
-(id)_leadingNotificationRequest;
-(void)_runDashBoardRotateTodayViewPage;
-(id)_dashBoardControllerForTesting;
-(void)runHomeScreenRotationIterationWithRemainingIterations:(int)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_waitForCloudCriticalData;
-(void)_handleDeviceOrientationChangedEvent:(GSEventRef)arg1 ;
-(void)_performMultiFingerDragWithComposer:(id)arg1 startLocations:(CGPoint*)arg2 endLocations:(CGPoint*)arg3 touchCount:(unsigned long long)arg4 duration:(double)arg5 timingFunction:(id)arg6 startWithTouchDown:(BOOL)arg7 intermediateTransformer:(/*^block*/id)arg8 completion:(/*^block*/id)arg9 ;
-(id<SBUIUserAgent>)pluginUserAgent;
-(void)runFieldTestScript;
-(SBAccountStoreManager *)accountStoreController;
-(void)_deactivateReachability;
-(void)addDisableActiveInterfaceOrientationChangeAssertion:(id)arg1 ;
-(void)_publishFakeThreadedLockScreenNotificationsWithCount:(unsigned long long)arg1 uniqueThreadCount:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(SBApplicationLaunchAlertService *)applicationLaunchAlertService;
-(void)noteCaseHardwarePresent;
-(SBRecordingIndicatorManager *)recordingIndicatorManager;
-(void)_runTestWithVariableFinish:(/*^block*/id)arg1 options:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)finishedTest:(id)arg1 extraResults:(id)arg2 waitForNotification:(id)arg3 withTeardownBlock:(/*^block*/id)arg4 ;
-(BOOL)disablesFrontBoardImplicitWindowScenes;
@end

