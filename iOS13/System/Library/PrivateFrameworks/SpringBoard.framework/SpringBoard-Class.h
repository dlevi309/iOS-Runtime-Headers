/*
* Generated on Monday, March 1, 2021 at 2:35:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKitCore/UISystemShellApplication.h>
#import <libobjc.A.dylib/CCUIPPTHostDelegate.h>
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

@protocol OS_dispatch_source, SBFLockOutStatusProvider, SBIdleTimer, SBProximityBacklightPolicy, BSInvalidatable;
@class UIWindow, SBUIController, NSMutableSet, NSMutableArray, NSSet, SBApplication, NSNumberFormatter, NSTimer, NSDate, NSObject, SBCardItemsController, SBNCNotificationDispatcher, SBUserSessionController, SBFUserAuthenticationController, NSHashTable, NSCountedSet, SBAppStatusBarSettingsAssertion, SBSStatusBarStyleOverridesAssertion, NSString, SBBluetoothAccessoryBatteryMonitor, SBDeveloperBuildExpirationTrigger, SBScreenshotManager, SSScreenCapturer, SBSynchronizeCloudCriticalDataOperation, SBRestartManager, SBModalAlertPresenter, SBModalAlertPresentationCoordinator, SBMainDisplayInterfaceOrientationAggregator, SBDeviceOrientationUpdateManager, SBIdleTimerPolicyAggregator, SBPressPrecedenceArbiter, SBApplicationAutoLaunchService, SBApplicationLaunchAlertService, SBMainWorkspace, SBModalUIFluidDismissGestureManager, SBCarDoNotDisturbController, SBScreenTimeTrackingController, SBProximitySensorManager, SBExternalDisplayManager, SBUserAgent, SBSpuriousScreenUndimmingAssertion, SBLockScreenService, SBHomeScreenService, SBAppSwitcherSystemService, DNDAWDMetricsService, DNDNotificationsService, SBRemoteAlertHandleServer, SBTestAutomationService, SBStateDumpService, SBSpotlightTransientOverlayViewController, SBMousePointerManager, SBAccessibilityWindowHostingControllerServer, SBWidgetController, SBSystemCursorInteractionManager, SBHomeHardwareButton, SBLockHardwareButton, SBVolumeHardwareButton, SBCameraHardwareButton, SBAccountStoreManager, SBInteractiveScreenshotGestureManager, SBSoftwareUpdatePasscodePolicyManager, STStatusServer, STTelephonyStateProvider, SBRemoteTransientOverlaySessionManager, SBCombinationHardwareButton, RSPeerToPeerServerController, NSArray;

@interface SpringBoard : UISystemShellApplication <CCUIPPTHostDelegate, MCProfileConnectionObserver, RSPeerToPeerConnectionControllerDataSource, SBRestartManagerDelegate, SBModalAlertPresentationCoordinatorDelegate, UIStatusBarStyleDelegate_SpringBoardOnly, SSScreenCapturerDelegate, SBBacklightControllerObserver, SBInteractiveScreenshotGestureManagerDelegate, SBRemoteTransientOverlaySessionManagerDelegate, SBSpotlightTransientOverlayViewControllerDelegate, _UIApplicationInitializationContextFactory, SBAVSystemControllerCacheObserver, UIApplicationDelegate, SBIdleTimerProviding> {

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
	NSMutableSet* _activeInterfaceOrientationObservers;
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
	SBAppSwitcherSystemService* _appSwitcherSystemService;
	long long _lastSeekRequestSource;
	DNDAWDMetricsService* _dndAWDMetricsService;
	DNDNotificationsService* _dndNotificationsService;
	SBRemoteAlertHandleServer* _remoteAlertHandleServer;
	SBTestAutomationService* _testAutomationService;
	SBStateDumpService* _stateDumpService;
	unsigned long long _stateDumpServiceRevision;
	int _currentOverrides;
	SBSpotlightTransientOverlayViewController* _spotlightTransientOverlayViewController;
	NSHashTable* _activeRemoteTransientOverlayViewProviders;
	/*^block*/id _headsetButtonUpHandler;
	SBMousePointerManager* _mousePointerManager;
	SBAccessibilityWindowHostingControllerServer* _accessibilityWindowHostingController;
	BOOL _requestingStatusBarStyleWithoutConsideringAlerts;
	BOOL _typingActive;
	BOOL _batterySaverModeActive;
	int _nowPlayingProcessPID;
	NSMutableArray* _nowLocatingApps;
	SBWidgetController* _widgetController;
	SBSystemCursorInteractionManager* _systemCursorInteractionManager;
	double _bottomEdgeAmbiguousActivationMargin;
	SBHomeHardwareButton* _homeHardwareButton;
	SBLockHardwareButton* _lockHardwareButton;
	SBVolumeHardwareButton* _volumeHardwareButton;
	SBCameraHardwareButton* _cameraHardwareButton;
	SBAccountStoreManager* _accountStoreController;
	SBInteractiveScreenshotGestureManager* _interactiveScreenshotGestureManager;
	SBSoftwareUpdatePasscodePolicyManager* _softwareUpdatePasscodePolicyManager;
	STStatusServer* _systemStatusServer;
	STTelephonyStateProvider* _telephonyStateProvider;
	SBRemoteTransientOverlaySessionManager* _remoteTransientOverlaySessionManager;
	NSTimer* _daylightSavingsTimer;
	SBCombinationHardwareButton* _combinationHardwareButton;
	RSPeerToPeerServerController* _stateDumpServerController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSMutableArray * nowLocatingApps;                                                             //@synthesize nowLocatingApps=_nowLocatingApps - In the implementation block
@property (setter=_setIdleTimer:,nonatomic,retain) id<SBIdleTimer> idleTimer;                                              //@synthesize idleTimer=_idleTimer - In the implementation block
@property (nonatomic,retain) NSTimer * daylightSavingsTimer;                                                               //@synthesize daylightSavingsTimer=_daylightSavingsTimer - In the implementation block
@property (assign,nonatomic) int nowPlayingProcessPID;                                                                     //@synthesize nowPlayingProcessPID=_nowPlayingProcessPID - In the implementation block
@property (assign,getter=isBatterySaverModeActive,nonatomic) BOOL batterySaverModeActive;                                  //@synthesize batterySaverModeActive=_batterySaverModeActive - In the implementation block
@property (nonatomic,readonly) SBCombinationHardwareButton * combinationHardwareButton;                                    //@synthesize combinationHardwareButton=_combinationHardwareButton - In the implementation block
@property (nonatomic,retain) RSPeerToPeerServerController * stateDumpServerController;                                     //@synthesize stateDumpServerController=_stateDumpServerController - In the implementation block
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
@property (nonatomic,readonly) SBWidgetController * widgetController;                                                      //@synthesize widgetController=_widgetController - In the implementation block
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
@property (nonatomic,readonly) STTelephonyStateProvider * telephonyStateProvider;                                          //@synthesize telephonyStateProvider=_telephonyStateProvider - In the implementation block
@property (nonatomic,readonly) SBSystemCursorInteractionManager * systemCursorInteractionManager;                          //@synthesize systemCursorInteractionManager=_systemCursorInteractionManager - In the implementation block
@property (nonatomic,readonly) int ringerSwitchState;                                                                      //@synthesize ringerSwitchState=_ringerSwitchState - In the implementation block
@property (nonatomic,readonly) SBRemoteTransientOverlaySessionManager * remoteTransientOverlaySessionManager;              //@synthesize remoteTransientOverlaySessionManager=_remoteTransientOverlaySessionManager - In the implementation block
@property (nonatomic,readonly) BOOL wantsOrientationEvents; 
@property (nonatomic,retain) UIWindow * window; 
+(id)_newApplicationInitializationContext;
+(void)initializeSystemServicesBeforeApplicationDidFinishLaunching;
+(id)_defaultSceneIdentity;
-(id)init;
-(NSString *)debugDescription;
-(void)profileConnectionDidReceivePasscodePolicyChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(BOOL)isLocked;
-(BOOL)isBatterySaverModeActive;
-(void)beginIgnoringInteractionEvents;
-(void)endIgnoringInteractionEvents;
-(long long)_frontMostAppOrientation;
-(void)willDisplayMiniAlert;
-(void)didDismissMiniAlert;
-(long long)_classicMode;
-(BOOL)disablesFrontBoardImplicitWindowScenes;
-(void)_deactivateReachability;
-(void)didReceiveMemoryWarning;
-(id)keyCommands;
-(void)startedTest:(id)arg1 ;
-(id)_keyWindowForScreen:(id)arg1 ;
-(BOOL)canOpenURL:(id)arg1 ;
-(void)setExpectsFaceContact:(BOOL)arg1 inLandscape:(BOOL)arg2 ;
-(void)batteryStatusDidChange:(id)arg1 ;
-(BOOL)_handlePhysicalButtonEvent:(id)arg1 ;
-(long long)activeInterfaceOrientation;
-(void)_setAmbiguousControlCenterActivationMargin:(double)arg1 ;
-(void)_setReachabilitySupported:(BOOL)arg1 ;
-(BOOL)application:(id)arg1 handleOpenURL:(id)arg2 ;
-(void)_application:(id)arg1 statusBarTouchesEnded:(id)arg2 ;
-(void)applicationDidFinishLaunching:(id)arg1 ;
-(void)_setStatusBarShowsProgress:(BOOL)arg1 ;
-(void)applicationOpenURL:(id)arg1 ;
-(void)setSystemVolumeHUDEnabled:(BOOL)arg1 forAudioCategory:(id)arg2 ;
-(id)_windowForSystemAppButtonEventsForScreen:(id)arg1 ;
-(void)_handleDeviceOrientationChangedEvent:(GSEventRef)arg1 ;
-(void)_handleKeyUIEvent:(id)arg1 ;
-(void)handleKeyHIDEvent:(IOHIDEventRef)arg1 ;
-(int)statusBar:(id)arg1 effectiveStyleOverridesForRequestedStyle:(long long)arg2 overrides:(int)arg3 ;
-(BOOL)handleDoubleHeightStatusBarTapWithStyleOverride:(int)arg1 ;
-(BOOL)handleStatusBarHoverActionForRegion:(long long)arg1 ;
-(BOOL)_statusBarOrientationFollowsWindow:(id)arg1 ;
-(void)setWantsVolumeButtonEvents:(BOOL)arg1 ;
-(void)resetIdleTimerAndUndim;
-(void)_headsetButtonDown:(IOHIDEventRef)arg1 ;
-(void)_headsetButtonUp:(IOHIDEventRef)arg1 ;
-(BOOL)launchApplicationWithIdentifier:(id)arg1 suspended:(BOOL)arg2 ;
-(double)windowRotationDuration;
-(void)significantTimeChange;
-(void)setSuspensionAnimationDelay:(double)arg1 ;
-(void)_handleHIDEvent:(IOHIDEventRef)arg1 ;
-(void)setExpectsFaceContact:(BOOL)arg1 ;
-(long long)alertInterfaceOrientation;
-(BOOL)_isDim;
-(void)installNotificationObserverForNotificationName:(id)arg1 forOneNotification:(BOOL)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)rotateIfNeeded:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)finishedTest:(id)arg1 extraResults:(id)arg2 waitForNotification:(id)arg3 withTeardownBlock:(/*^block*/id)arg4 ;
-(void)failedTest:(id)arg1 withResults:(id)arg2 ;
-(long long)_testOrientation:(id)arg1 options:(id)arg2 ;
-(BOOL)runTest:(id)arg1 options:(id)arg2 ;
-(long long)startupInterfaceOrientation;
-(BOOL)hasFinishedLaunching;
-(void)takeScreenshot;
-(BOOL)isShowingHomescreen;
-(SBFUserAuthenticationController *)authenticationController;
-(void)localeChanged;
-(void)_localeChanged;
-(SBWidgetController *)widgetController;
-(id)_defaultExpirationComponents;
-(id<SBUIUserAgent>)pluginUserAgent;
-(void)_significantTimeChangeNotificationReceived;
-(id<SBIdleTimer>)idleTimer;
-(void)_registerForAVSystemControllerNotifications;
-(BOOL)underMemoryPressure;
-(STTelephonyStateProvider *)telephonyStateProvider;
-(void)setBatterySaverModeActive:(BOOL)arg1 ;
-(void)screenCapturer:(id)arg1 didCaptureScreenshotsOfScreens:(id)arg2 ;
-(id<SBFLockOutStatusProvider>)lockOutController;
-(SBUserSessionController *)userSessionController;
-(id)_combinedListViewController;
-(void)noteInterfaceOrientationChanged:(long long)arg1 duration:(double)arg2 logMessage:(id)arg3 ;
-(void)addActiveOrientationObserver:(id)arg1 ;
-(void)removeActiveOrientationObserver:(id)arg1 ;
-(BOOL)_accessibilityIsSystemGestureActive;
-(BOOL)_accessibilitySystemGesturesDisabledByAccessibility;
-(void)_toggleSearch;
-(void)_takeScreenshotAndEdit:(BOOL)arg1 ;
-(void)_accessibilitySetSystemGesturesDisabledByAccessibility:(BOOL)arg1 ;
-(id)_leadingNotificationRequest;
-(void)prepareForControlCenterPPTHostState:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(long long)rawDeviceOrientationIgnoringOrientationLocks;
-(id)localPeerDisplayName;
-(id)allowedRemotePeerDisplayNames;
-(id)supportedStateTypes;
-(void)stateForStateType:(unsigned long long)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(double)_accessibilityActivationAnimationStartDelay;
-(double)_accessibilityDeactivationAnimationStartDelay;
-(void)_accessibilityActivationAnimationWillBegin;
-(void)_accessibilityDeactivationAnimationWillBegin;
-(void)_ringerChanged:(IOHIDEventRef)arg1 ;
-(void)languageChanged;
-(BOOL)smartCoverIsClosed;
-(id)deviceOrientationUpdateDeferralAssertionWithReason:(id)arg1 ;
-(void)beginIgnoringInteractionEventsForReason:(id)arg1 ;
-(void)_handleShutDownAndReboot;
-(void)_keyboardOrCaseLatchWantsToAttemptUnlock:(int)arg1 ;
-(BOOL)_shouldSwallowHIDEvent:(IOHIDEventRef)arg1 ;
-(void)_createInitialAppScene;
-(void)noteBacklightLevelChanged;
-(void)noteBacklightFadeFinished;
-(void)setWantsOrientationEvents:(BOOL)arg1 logMessage:(id)arg2 ;
-(void)_updateRingerState:(int)arg1 withVisuals:(BOOL)arg2 updatePreferenceRegister:(BOOL)arg3 ;
-(void)_updateOrientationDetectionSettings;
-(void)noteInterfaceOrientationChanged:(long long)arg1 force:(BOOL)arg2 logMessage:(id)arg3 ;
-(void)_lockdownActivationChanged:(id)arg1 ;
-(void)_initializeDeferredItems;
-(void)_startBulletinBoardServer;
-(void)_performDeferredLaunchWork;
-(void)_iapServerConnectionDiedNotification:(id)arg1 ;
-(void)_batterySaverModeChanged:(int)arg1 ;
-(void)_nowPlayingAppDidChangeNotification:(id)arg1 ;
-(void)_significantTimeDidChange:(BOOL)arg1 ;
-(void)registerAnalyticsEventHandlers;
-(void)_updateHomeScreenPresenceNotification:(id)arg1 ;
-(void)_initializeAndStartObservingDefaultsIfNecessary;
-(void)_waitForCloudCriticalData;
-(void)frontDisplayDidChange:(id)arg1 ;
-(SBSystemCursorInteractionManager *)systemCursorInteractionManager;
-(id)coordinatorRequestedIdleTimerBehavior:(id)arg1 ;
-(void)_setIdleTimer:(id)arg1 ;
-(void)_updateRecordingPID:(int)arg1 ;
-(void)_removeRecordingStatusBarStyleOverrideAssertion;
-(void)toggleSearchWithWillBeginHandler:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(SBNCNotificationDispatcher *)notificationDispatcher;
-(id)_settingLanguageStringForNewLanguage;
-(void)_postSpringBoardSignificantTimeChangedNotificationWithLogMessage:(id)arg1 ;
-(void)setupMidnightTimer;
-(void)setUpDaylightSavingsTimer;
-(void)_logReliabilityInfoForEvent:(IOHIDEventRef)arg1 ;
-(void)_handleSnapshotButtonHIDEvent:(IOHIDEventRef)arg1 buttonIsDown:(BOOL)arg2 fromSource:(int)arg3 ;
-(void)_startSeekWithDirection:(id)arg1 ;
-(void)_smartCoverDidOpen:(IOHIDEventRef)arg1 ;
-(void)_smartCoverMightHaveOpened:(IOHIDEventRef)arg1 ;
-(void)_smartCoverDidClose:(IOHIDEventRef)arg1 ;
-(void)_setDeferredHeadsetButtonDownEvent:(IOHIDEventRef)arg1 ;
-(BOOL)__handleHIDEvent:(IOHIDEventRef)arg1 ;
-(void)_handleGotoHomeScreenShortcut:(id)arg1 ;
-(void)_handleScreenShotShortcut:(id)arg1 ;
-(void)_handleLockShortcut:(id)arg1 ;
-(void)_handleCommandQ:(id)arg1 ;
-(void)_toggleFloatingDockVisibility:(id)arg1 ;
-(void)handleLockButtonPressFromTransientOverlayViewController:(id)arg1 ;
-(void)_iapExtendedModeReset;
-(void)_performDelayedHeadsetClickTimeout;
-(BOOL)_handleStatusBarHoverActionForRegion:(long long)arg1 ;
-(void)applicationOpenURL:(id)arg1 withApplication:(id)arg2 animating:(BOOL)arg3 activationSettings:(id)arg4 origin:(id)arg5 notifyLSOnFailure:(BOOL)arg6 withResult:(/*^block*/id)arg7 ;
-(void)_applicationOpenURL:(id)arg1 withApplication:(id)arg2 animating:(BOOL)arg3 activationSettings:(id)arg4 origin:(id)arg5 withResult:(/*^block*/id)arg6 ;
-(BOOL)shouldShowAlertForUnhandledURL:(id)arg1 error:(int)arg2 ;
-(void)showAlertForUnhandledURL:(id)arg1 error:(int)arg2 ;
-(void)_openURLCore:(id)arg1 display:(id)arg2 animating:(BOOL)arg3 activationSettings:(id)arg4 origin:(id)arg5 withResult:(/*^block*/id)arg6 ;
-(void)_adjustSignificantTimersAfterSleep;
-(void)_midnightPassed;
-(void)_daylightSavingsTimeChanged;
-(NSTimer *)daylightSavingsTimer;
-(void)setDaylightSavingsTimer:(NSTimer *)arg1 ;
-(void)_adjustMidnightTimerAfterSleep;
-(void)_adjustDaylightSavingsTimerAfterSleep;
-(void)_caseLatchWantsToAttemptLock;
-(BOOL)allowCaseLatchLockAndUnlock;
-(void)_enqueueWorkspaceEvent:(/*^block*/id)arg1 withName:(id)arg2 ifSatisfiesCondition:(/*^block*/id)arg3 cancelingEventsWithNames:(id)arg4 failureBlock:(/*^block*/id)arg5 ;
-(void)noteCaseHardwarePresent;
-(void)noteInterfaceOrientationChanged:(long long)arg1 duration:(double)arg2 updateMirroredDisplays:(BOOL)arg3 force:(BOOL)arg4 logMessage:(id)arg5 ;
-(void)updateMirroredDisplayOrientationWithLogMessage:(id)arg1 ;
-(BOOL)isCurrentlyDeferringOrientationUpdates;
-(void)_removeTransientActiveInterfaceOrientationOverrideForReason:(id)arg1 ;
-(void)_setDeviceOrientation:(long long)arg1 animated:(BOOL)arg2 logMessage:(id)arg3 ;
-(void)updateNativeOrientationAndMirroredDisplays:(BOOL)arg1 logMessage:(id)arg2 ;
-(void)updateNativeOrientationWithOrientation:(long long)arg1 updateMirroredDisplays:(BOOL)arg2 animated:(BOOL)arg3 logMessage:(id)arg4 ;
-(long long)interfaceOrientationForCurrentDeviceOrientation:(BOOL)arg1 ;
-(void)noteInterfaceOrientationChanged:(long long)arg1 duration:(double)arg2 updateMirroredDisplays:(BOOL)arg3 logMessage:(id)arg4 ;
-(void)_postActiveInterfaceOrientationChangedNotificationAnimated:(BOOL)arg1 ;
-(BOOL)homeScreenRotationStyleWantsUIKitRotation;
-(BOOL)homeScreenSupportsRotation;
-(long long)homeScreenRotationStyle;
-(long long)activeInterfaceOrientationWithoutConsideringTransientOverlays;
-(BOOL)wantsOrientationEvents;
-(BOOL)supportsPortraitUpsideDownOrientation;
-(void)noteSubstantialTransitionOccured;
-(BOOL)isKeybagRefetchTransactionActive;
-(void)endIgnoringInteractionEventsForReason:(id)arg1 ;
-(int)nowPlayingProcessPID;
-(BOOL)_hasForegroundAppWithPID:(int)arg1 ;
-(void)setNowPlayingProcessPID:(int)arg1 ;
-(void)updateNativeOrientationWithLogMessage:(id)arg1 ;
-(void)_takeScreenshotWithOptionsCollection:(id)arg1 presentationOptions:(id)arg2 ;
-(id)_dumpStateCaptureData;
-(void)_disableRemoteStateDumpWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)_isRemoteStateDumpEnabled;
-(void)_preheatScreenshotsWithPresentationOptions:(id)arg1 ;
-(void)restartManagerWillShutdown:(id)arg1 ;
-(void)restartManagerWillReboot:(id)arg1 ;
-(void)restartManager:(id)arg1 willRestartWithTransitionRequest:(id)arg2 ;
-(void)restartManagerExitImminent:(id)arg1 ;
-(id)modalAlertPresentationCoordinatorRequestedForegroundScenes:(id)arg1 ;
-(void)modalAlertPresentationCoordinator:(id)arg1 didChangeShowingSystemModalAlert:(BOOL)arg2 ;
-(void)backlightController:(id)arg1 willAnimateBacklightToFactor:(float)arg2 source:(long long)arg3 ;
-(void)interactiveScreenshotGestureManager:(id)arg1 requestsScreenshotPreheatWithPresentationOptions:(id)arg2 ;
-(void)interactiveScreenshotGestureManager:(id)arg1 requestsScreenshotWithOptionsCollection:(id)arg2 presentationOptions:(id)arg3 ;
-(long long)remoteTransientOverlaySessionManager:(id)arg1 activeWallpaperVariantForSession:(id)arg2 ;
-(BOOL)remoteTransientOverlaySessionManager:(id)arg1 shouldActivateOverlayWithContext:(id)arg2 forSession:(id)arg3 ;
-(BOOL)remoteTransientOverlaySessionManager:(id)arg1 performDismissalRequest:(id)arg2 forSession:(id)arg3 ;
-(BOOL)remoteTransientOverlaySessionManager:(id)arg1 performPresentationRequest:(id)arg2 forSession:(id)arg3 ;
-(BOOL)remoteTransientOverlaySessionManager:(id)arg1 prefersStatusBarActivityItemVisibleForServiceBundleIdentifier:(id)arg2 forSession:(id)arg3 ;
-(void)remoteTransientOverlaySessionManager:(id)arg1 requestsHandlingForButtonEvents:(unsigned long long)arg2 forSession:(id)arg3 viewController:(id)arg4 ;
-(void)spotlightTransientOverlayViewControllerRequestsDismissal:(id)arg1 ;
-(void)spotlightTransientOverlayViewControllerDidDismiss:(id)arg1 ;
-(void)cache:(id)arg1 didUpdateRecordingPID:(int)arg2 ;
-(void)cache:(id)arg1 didUpdateActiveAudioRoute:(id)arg2 ;
-(BOOL)_frontBoardWantsKeyboardSceneLayerOrderedIntoScene;
-(void)handleSignal:(int)arg1 ;
-(BOOL)isDeterminingBootTransition;
-(id)transactionForDismissingSearchTransientOverlay;
-(BOOL)launchedForUserTransition;
-(void)requestDeviceUnlock;
-(void)_rotateView:(id)arg1 toOrientation:(long long)arg2 ;
-(void)wipeDeviceNowWithReason:(id)arg1 ;
-(void)runFieldTestScript;
-(BOOL)iapIsInExtendedMode;
-(BOOL)lockScreenCameraSupported;
-(BOOL)canShowLockScreenCameraGrabber;
-(void)_handleCommandTab:(id)arg1 ;
-(void)_handleShiftCommandTab:(id)arg1 ;
-(void)_keyboardAvailabilityChanged;
-(BOOL)shouldNeverLock;
-(void)registerRemoteAlertSceneViewProvider:(id)arg1 ;
-(void)unregisterRemoteAlertSceneViewProvider:(id)arg1 ;
-(BOOL)isBundleIdentifierRestrictionDisabled:(id)arg1 ;
-(BOOL)isSpringBoardStatusBarHidden;
-(void)setMenuButtonInterceptApp:(id)arg1 forever:(BOOL)arg2 ;
-(id)menuButtonInterceptApp;
-(BOOL)menuButtonInterceptAppEnabledForever;
-(void)setAppRegisteredForVolumeEvents:(id)arg1 isActive:(BOOL)arg2 ;
-(NSArray *)appsRegisteredForVolumeEvents;
-(void)setAppRegisteredForLockButtonEvents:(id)arg1 isActive:(BOOL)arg2 ;
-(NSArray *)appsRegisteredForLockButtonEvents;
-(BOOL)caseIsEnabledAndLatched;
-(void)_setStatusBarOrientation:(long long)arg1 logMessage:(id)arg2 ;
-(void)_setStatusBarOrientation:(long long)arg1 animated:(BOOL)arg2 logMessage:(id)arg3 ;
-(void)noteInterfaceOrientationChanged:(long long)arg1 logMessage:(id)arg2 ;
-(void)noteMainTransientOverlayPresentationManagerWillChangeToInterfaceOrientation:(long long)arg1 ;
-(void)pushTransientActiveInterfaceOrientation:(long long)arg1 forReason:(id)arg2 ;
-(void)popTransientActiveInterfaceOrientationForReason:(id)arg1 ;
-(SBMainDisplayInterfaceOrientationAggregator *)orientationAggregator;
-(void)updateNativeOrientationAnimated:(BOOL)arg1 logMessage:(id)arg2 ;
-(void)updateNativeOrientationWithOrientation:(long long)arg1 logMessage:(id)arg2 ;
-(long long)_currentNonFlatDeviceOrientation;
-(long long)deviceOrientationForDeferredUpdateIfAny;
-(BOOL)expectsFaceContact;
-(BOOL)expectsFaceContactInLandscape;
-(void)noteSceneLayoutDidUpdateOnDisplayWithIdentity:(id)arg1 ;
-(void)launchMusicPlayerSuspended;
-(void)setTypingActive:(BOOL)arg1 ;
-(id)nowRecordingApp;
-(id)inCallApp;
-(void)addInCallApp:(id)arg1 ;
-(void)removeInCallApp;
-(void)addNowLocatingApp:(id)arg1 ;
-(void)removeNowLocatingApp:(id)arg1 ;
-(void)nowLocatingAppDidEnterForeground:(id)arg1 ;
-(SBApplication *)leastRecentlyForegroundLocatingApp;
-(BOOL)isNowPlayingAppPlaying;
-(void)setNowPlayingInfo:(id)arg1 forProcessWithPID:(int)arg2 ;
-(id)formattedDecimalStringForNumber:(id)arg1 ;
-(id)formattedPercentStringForNumber:(id)arg1 ;
-(id)_accessibilityFrontMostApplication;
-(id)_accessibilityTopDisplay;
-(id)_accessibilityRunningApplications;
-(BOOL)_accessibilityShouldAllowAppLaunch;
-(BOOL)_accessibilityShouldAllowIconLaunch;
-(BOOL)_accessibilityObjectWithinProximity;
-(void)noteKeybagRefetchTransactionIsActive:(BOOL)arg1 ;
-(void)addDisableActiveInterfaceOrientationChangeAssertion:(id)arg1 ;
-(void)removeDisableActiveInterfaceOrientationChangeAssertion:(id)arg1 nudgeOrientationIfRemovingLast:(BOOL)arg2 ;
-(BOOL)hasDisableActiveInterfaceOrientationChangeAssertions;
-(void)_dumpLoggingStateCaptureWithCompletion:(/*^block*/id)arg1 ;
-(void)_enableRemoteStateDumpWithTimeout:(long long)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_broadcastStateCaptureToConnectedRemotePeers:(id)arg1 ;
-(SBIdleTimerPolicyAggregator *)idleTimerPolicyAggregator;
-(NSMutableArray *)nowLocatingApps;
-(void)setNowLocatingApps:(NSMutableArray *)arg1 ;
-(SBScreenshotManager *)screenshotManager;
-(SBRestartManager *)restartManager;
-(SBModalAlertPresentationCoordinator *)modalAlertPresentationCoordinator;
-(SBLockScreenService *)lockScreenService;
-(SBApplicationAutoLaunchService *)applicationAutoLaunchService;
-(SBApplicationLaunchAlertService *)applicationLaunchAlertService;
-(SBProximitySensorManager *)proximitySensorManager;
-(BOOL)isTypingActive;
-(double)bottomEdgeAmbiguousActivationMargin;
-(void)setBottomEdgeAmbiguousActivationMargin:(double)arg1 ;
-(SBHomeHardwareButton *)homeHardwareButton;
-(SBLockHardwareButton *)lockHardwareButton;
-(SBVolumeHardwareButton *)volumeHardwareButton;
-(SBCameraHardwareButton *)cameraHardwareButton;
-(SBAccountStoreManager *)accountStoreController;
-(SBInteractiveScreenshotGestureManager *)interactiveScreenshotGestureManager;
-(SBSoftwareUpdatePasscodePolicyManager *)softwareUpdatePasscodePolicyManager;
-(STStatusServer *)systemStatusServer;
-(int)ringerSwitchState;
-(SBRemoteTransientOverlaySessionManager *)remoteTransientOverlaySessionManager;
-(SBCombinationHardwareButton *)combinationHardwareButton;
-(RSPeerToPeerServerController *)stateDumpServerController;
-(void)setStateDumpServerController:(RSPeerToPeerServerController *)arg1 ;
-(id)setNextVoiceRecognitionAudioInputPaths:(id)arg1 ;
-(void)setNextAssistantRecognitionStrings:(id)arg1 ;
-(void)_turnScreenOnAndUnlockWithCompletion:(/*^block*/id)arg1 ;
-(void)_turnScreenOnOnDashBoardWithCompletion:(/*^block*/id)arg1 ;
-(void)_runAppOpen:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)_appIconsToPutInFolderForTest;
-(void)runHomeScreenRotationTest:(int)arg1 ;
-(void)runFolderRotationTest:(int)arg1 ;
-(void)_runCoverSheetPresentTestWithCompletion:(/*^block*/id)arg1 ;
-(void)_runCoverSheetPresentOverSafariTest;
-(void)_runCoverSheetDismissTestWithCompletion:(/*^block*/id)arg1 ;
-(void)_runCoverSheetDismissToSafariTest;
-(void)_runCoverSheetNotificationListHistoryRevealTest;
-(void)_runPresentLongLookTest;
-(void)_runReParkLongLookTest;
-(void)_runClearLongLookTest;
-(void)_runPresentBannerTest;
-(void)_runNotificationCoalescingExpandingTestWithOptions:(id)arg1 ;
-(void)_runNotificationCoalescingRestackingTestWithOptions:(id)arg1 ;
-(void)_runNotificationCoalescingRestackingFromBottomTestWithOptions:(id)arg1 ;
-(void)_runNotificationCoalescingExpandingScrollingTestWithOptions:(id)arg1 ;
-(void)_runHomeScreenSwipeLeftToTodayView;
-(void)_runHomeScreenSwipeRightFromTodayView;
-(void)_runHomeScreenIconPullToSpotlight;
-(void)_runHomeScreenIconPullToSpotlightDismiss;
-(void)_runTodayViewPullDownToSpotlight;
-(void)_runLockScreenTodayViewPullDownToSpotlight;
-(void)_runLockScreenTodayViewPullDownToSpotlightDismiss;
-(void)_runSiriBringUpImmediateBeepTest:(id)arg1 ;
-(void)_runSiriBringUpTest:(id)arg1 testOptions:(id)arg2 ;
-(void)_runScrollIconListTestEditing:(BOOL)arg1 ;
-(void)startLaunchTestNamed:(id)arg1 options:(id)arg2 ;
-(void)startResumeTestNamed:(id)arg1 options:(id)arg2 ;
-(void)_runWidgetLaunchTestNamed:(id)arg1 options:(id)arg2 ;
-(void)_installSwitcherModelForSwitcherTests;
-(void)_runAppSwitcherBringupTestOverApp:(BOOL)arg1 rotated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)_runAppSwitcherDismissTestOverApp:(BOOL)arg1 rotated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)_runScrollAppSwitcherTest:(id)arg1 overApp:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)_runScrollAppSwitcherLandscapeTest:(id)arg1 overApp:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)_runPresentContinuityBannerInSwitcherTest;
-(void)_runDismissContinuityBannerInSwitcherTest;
-(void)_runTapContinuityBannerInSwitcherTest;
-(void)_runDoSiDoTest;
-(void)_runSwipeToHomeTestWithCompletion:(/*^block*/id)arg1 ;
-(void)_runSwipeToHomeOverFolderTest;
-(void)_runSwipeAndPauseForSwitcherTestFromHomeScreen:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)_runSwipeAndPauseForSwitcherOverFolderTest;
-(void)_runBottomEdgeSwipeTestFromHomeScreen:(BOOL)arg1 ;
-(void)_runBottomEdgeSwipeMultipleAppsTest;
-(void)_runArcSwipeTestFromHomeScreen:(BOOL)arg1 ;
-(void)_runArcSwipeMultipleAppsTest;
-(void)_runFourFingerSwipeTest;
-(void)_runFourFingerSwipeMultipleAppsTest;
-(void)_runScrunchToHomeTest;
-(void)_runScrunchToAppSwitcherTest;
-(void)_runScrunchAndSwipeTest;
-(void)_runScrunchAndSwipeMultipleAppsTest;
-(void)_runSwipeUpHomeToAutoPiPTest;
-(void)_runScrunchHomeToAutoPiPTest;
-(void)_runDashBoardScrollToLeftPageTestWithBlur:(BOOL)arg1 ;
-(void)_runDashBoardScrollToRightPageTestWithBlur:(BOOL)arg1 ;
-(void)_runDashBoardScrollFromLeftToRightPageTestWithBlur:(BOOL)arg1 ;
-(void)_runDashBoardRotateCameraPage;
-(void)_runDashBoardRotateMainPage;
-(void)_runDashBoardRotateTodayViewPage;
-(void)_runDashBoardDismissWhileAuthenticatedTest;
-(void)_runDashBoardDismissFromPasscodeViewAfterAuthenticationTest;
-(void)_runDashBoardDismissFromTodayViewWhileAuthenticatedTest;
-(void)_runDashBoardPresentDismissPasscode;
-(void)_runTodayViewScrollWidgetsTestWithOptions:(id)arg1 ;
-(void)_runDashboardTodayViewScrollWidgetsTestWithOptions:(id)arg1 ;
-(void)_runLockScreenScrollNotificationsTestWithOptions:(id)arg1 ;
-(void)_runFloatingDockPresent:(BOOL)arg1 testName:(id)arg2 ;
-(void)_performFiveFingerScrunchWithComposer:(id)arg1 scrunchProgress:(double)arg2 duration:(double)arg3 withContinuationBlock:(/*^block*/id)arg4 ;
-(void)_medusaTestWithName:(id)arg1 testOptions:(id)arg2 ;
-(void)_startAutoPiPWithGesture:(/*^block*/id)arg1 setupCompletion:(/*^block*/id)arg2 finalCompletion:(/*^block*/id)arg3 ;
-(void)_runTodayViewFocusSearchFieldToSpotlight;
-(void)_runHomeScreenSearchPresent;
-(void)_runHomeScreenSearchDismiss;
-(void)_runAppSearchPresent;
-(void)_runAppSearchDismiss;
-(void)_runSpotlightPulldownRotation;
-(void)_runSpotlightTodayViewRotation;
-(void)_runSpotlightCoverSheetTodayViewRotation;
-(void)_runMedusaSplitViewResizeTest:(id)arg1 withOptions:(id)arg2 ;
-(void)_runMedusaSplitViewSuspendTest:(id)arg1 withOptions:(id)arg2 ;
-(void)_runMedusaMoveFloatingApplicationTest:(id)arg1 withOptions:(id)arg2 ;
-(void)_runMedusaPinFloatingApplicationTest:(id)arg1 withOptions:(id)arg2 ;
-(void)_runMedusaUnpinFloatingApplicationTest:(id)arg1 withOptions:(id)arg2 ;
-(void)startLaunchTestNamed:(id)arg1 options:(id)arg2 withCompletionBlock:(/*^block*/id)arg3 ;
-(void)_retryLaunchTestWithOptions:(id)arg1 ;
-(void)_handleApplicationExit:(id)arg1 ;
-(BOOL)_shouldPendAlertsForTest:(id)arg1 ;
-(void)runHomeScreenRotationIterationWithRemainingIterations:(int)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_handleEndOfScrollingTest;
-(void)_performAfterDelay:(double)arg1 block:(/*^block*/id)arg2 ;
-(void)_setupKeyboardAnimationSubTestsForTestName:(id)arg1 ;
-(id)_homeScreenTodayViewEventStreamWithDismissal:(BOOL)arg1 ;
-(void)_dismissSpotlightByHomeButtonEvent:(/*^block*/id)arg1 ;
-(void)_pullDownToSpotlightForView:(id)arg1 offset:(double)arg2 duration:(double)arg3 completion:(/*^block*/id)arg4 ;
-(void)_returnToHomeScreenWithCompletion:(/*^block*/id)arg1 ;
-(id)_dashBoardControllerForTesting;
-(id)_dashBoardTodayControllerForTestingIfExists;
-(void)_runToggleSearchTest;
-(void)_activateSafariWithCompletion:(/*^block*/id)arg1 ;
-(void)_startScrollAppSwitcherTest:(id)arg1 overApp:(BOOL)arg2 runColdTest:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(id)_applicationToUseForScrollTesting;
-(void)_continueRunningScrollAppSwitcherTest:(id)arg1 runColdTest:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(id)_applicationToUseForOpenAndCloseTesting;
-(void)_forceRotateToOrientation:(long long)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_continueRunningDismissAppSwitcherTestWithCompletion:(/*^block*/id)arg1 ;
-(id)_singleHomeButtonPressEventStream;
-(id)_doubleHomeButtonPressEventStream;
-(void)_performMainWorkspaceTransitionWithPrimaryWorkspaceEntity:(id)arg1 sideWorkspaceEntity:(id)arg2 floatingWorkspaceEntity:(id)arg3 spaceConfiguration:(long long)arg4 floatingConfiguration:(long long)arg5 animated:(BOOL)arg6 completion:(/*^block*/id)arg7 ;
-(void)_runScrollTestWithScrollView:(id)arg1 options:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_performSwipeHomeWithComposer:(id)arg1 ;
-(void)_prepareToRunSwitcherGestureTestsWithCompletion:(/*^block*/id)arg1 ;
-(void)_pauseWithComposer:(id)arg1 locations:(CGPoint*)arg2 touchCount:(unsigned long long)arg3 ;
-(void)_performSwipeWithComposer:(id)arg1 startLocation:(CGPoint)arg2 endLocation:(CGPoint)arg3 duration:(double)arg4 timingFunction:(id)arg5 intermediateTransformer:(/*^block*/id)arg6 completion:(/*^block*/id)arg7 ;
-(void)_prepareToRunSwitcherGestureTestsFromHomeScreen:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_performSwipeWithComposer:(id)arg1 startLocation:(CGPoint)arg2 endLocation:(CGPoint)arg3 duration:(double)arg4 ;
-(void)_performArcSwipeWithComposer:(id)arg1 ;
-(void)_performFourFingerSwipeWithComposer:(id)arg1 vertically:(BOOL)arg2 duration:(double)arg3 ;
-(void)_performScrunchAndSwipeWithComposer:(id)arg1 ;
-(void)_runAutoPiPWithGestureTest:(/*^block*/id)arg1 ;
-(void)_prepareToRunAutoPiPTestWithCompletion:(/*^block*/id)arg1 ;
-(void)_prepareToRunSwitcherGestureTestsWithForegroundApp:(id)arg1 shouldStartTest:(BOOL)arg2 withCompletion:(/*^block*/id)arg3 ;
-(id)_flickTimingFunction;
-(void)_performMultiFingerDragWithComposer:(id)arg1 startLocations:(CGPoint*)arg2 endLocations:(CGPoint*)arg3 touchCount:(unsigned long long)arg4 duration:(double)arg5 timingFunction:(id)arg6 startWithTouchDown:(BOOL)arg7 intermediateTransformer:(/*^block*/id)arg8 completion:(/*^block*/id)arg9 ;
-(void)_runCoverSheetTestPresenting:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)_bringUpCoverSheetWithBeforePresent:(/*^block*/id)arg1 afterPresent:(/*^block*/id)arg2 beforeDismiss:(/*^block*/id)arg3 afterDismiss:(/*^block*/id)arg4 ;
-(id)_coverSheetBringUpEventStream;
-(id)_dashBoardCombinedListViewController;
-(void)_runBannerTestWithBlock:(/*^block*/id)arg1 ;
-(void)_publishFakeThreadedLockScreenNotificationsWithCount:(unsigned long long)arg1 uniqueThreadCount:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)_setupNotificationListTest;
-(void)_removeAllFakeNotifications;
-(void)_simulateUserScrollForNotificationListWithCount:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)_turnScreenOnAndAuthenticateWithCompletion:(/*^block*/id)arg1 ;
-(void)_performNotificationPublishingWithCount:(unsigned long long)arg1 uniqueThreadCount:(unsigned long long)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)_performExpandingCoalescedBundleForNotificationRequest:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_performRestackingExpandedBundleForNotificationRequest:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_runDashBoardScrollTestFromPageIndex:(unsigned long long)arg1 toPageWithIndex:(unsigned long long)arg2 subTestName:(id)arg3 backSubTestName:(id)arg4 withBlur:(BOOL)arg5 ;
-(void)_runDashBoardRotationTestOnPageAtIndex:(unsigned long long)arg1 ;
-(void)_runDashBoardRotationTestOnPageAtIndex:(unsigned long long)arg1 showSpotlight:(BOOL)arg2 ;
-(void)_rotateFromPortrait:(/*^block*/id)arg1 toLandscape:(/*^block*/id)arg2 andFromLandscape:(/*^block*/id)arg3 andBackToPortrait:(/*^block*/id)arg4 ;
-(void)_resetForceRotate;
-(void)_rotationCompletion:(id)arg1 ;
-(void)_runDashBoardDismissTestFromPageIndex:(unsigned long long)arg1 showPasscodeView:(BOOL)arg2 ;
-(void)_unlockAnimationDidFinish:(id)arg1 ;
-(void)_simulateHomeButtonPress;
-(void)_runMedusaTest:(id)arg1 withMainWorkspaceTransition:(/*^block*/id)arg2 options:(id)arg3 ;
-(void)_cleanupMainWorkspaceForMedusaTestWithCompletion:(/*^block*/id)arg1 ;
-(void)_setupMainWorkspaceForMedusaTestWithOptions:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_simulateHomeButtonPressWithCompletion:(/*^block*/id)arg1 ;
-(void)_simulateLockButtonPress;
-(void)_runTestWithVariableFinish:(/*^block*/id)arg1 options:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_basicRotationTestForCurrentConfigurationWithTeardown:(/*^block*/id)arg1 ;
-(void)_unscatterWillBegin:(id)arg1 ;
-(void)_cleanUpLaunchTestState;
-(void)endLaunchTest;
-(void)_runCoverSheetTestPresenting:(BOOL)arg1 ;
-(void)assistantWillAppear:(id)arg1 ;
-(void)assistantDidAppear:(id)arg1 ;
-(void)_returnToHomescreenWithCompletion:(/*^block*/id)arg1 ;
-(void)_launchFullscreenApplication:(id)arg1 withLaunchResult:(/*^block*/id)arg2 transactionCompletion:(/*^block*/id)arg3 ;
@end

