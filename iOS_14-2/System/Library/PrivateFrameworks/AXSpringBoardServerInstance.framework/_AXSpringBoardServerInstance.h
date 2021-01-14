/*
* Generated on Thursday, January 14, 2021 at 2:27:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AXSpringBoardServerInstance.framework/AXSpringBoardServerInstance
*/


@protocol AXSpringBoardServerInstanceDelegate, OS_dispatch_queue;
#import <AXSpringBoardServerInstance/AXSpringBoardServerInstance-Structs.h>
@class AXIPCServer, AXIPCClient, NSMutableArray, NSMapTable, RBSProcessMonitor, NSObject, _AXAssertionServer;

@interface _AXSpringBoardServerInstance : NSObject {

	AXIPCServer* _server;
	AXIPCClient* _client;
	id<AXSpringBoardServerInstanceDelegate> _delegate;
	NSMutableArray* _actionHandlers;
	NSMutableArray* _reachabilityHandlers;
	NSMapTable* _assertionClients;
	AXIPCClient* _currentSpeakerClient;
	IOHIDManagerRef _hidManager;
	RBSProcessMonitor* _processMonitor;
	NSObject*<OS_dispatch_queue> _avSystemRetrievalQueue;
	BOOL _disableNotificationCenterAssertionHeld;
	BOOL _disableControlCenterAssertionHeld;
	_AXAssertionServer* _assertionServer;

}

@property (nonatomic,retain) _AXAssertionServer * assertionServer;                                 //@synthesize assertionServer=_assertionServer - In the implementation block
@property (assign,nonatomic) BOOL disableNotificationCenterAssertionHeld;                          //@synthesize disableNotificationCenterAssertionHeld=_disableNotificationCenterAssertionHeld - In the implementation block
@property (assign,nonatomic) BOOL disableControlCenterAssertionHeld;                               //@synthesize disableControlCenterAssertionHeld=_disableControlCenterAssertionHeld - In the implementation block
@property (assign,nonatomic,__weak) id<AXSpringBoardServerInstanceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)springBoardServerInstance;
+(unsigned)_axCaptionPanelContextId;
+(id)springBoardServerInstanceIfExists;
-(void)_performValidation;
-(id)_screenLocked:(id)arg1 ;
-(id)_performMedusaGesture:(id)arg1 ;
-(id)_dismissSiri:(id)arg1 ;
-(id)_getPid:(id)arg1 ;
-(id)_isPIPWindowVisible:(id)arg1 ;
-(id)_isMediaPlaying:(id)arg1 ;
-(id)_armApplePay:(id)arg1 ;
-(id)_resumeMedia:(id)arg1 ;
-(void)reachabilityToggledWithPayload:(id)arg1 synchronizationPort:(unsigned)arg2 completion:(/*^block*/id)arg3 ;
-(id)_isMakingEmergencyCall:(id)arg1 ;
-(id)_openAppSwitcher:(id)arg1 ;
-(id)_volumeLevel:(id)arg1 ;
-(id)_handleGetRunningAppPIDs:(id)arg1 ;
-(id)_isDockVisible:(id)arg1 ;
-(id)_isPasscodeLockVisible:(id)arg1 ;
-(BOOL)hasActiveOrPendingCall;
-(id)_getSplashImageForApp:(id)arg1 ;
-(id)_getApplicationOrientation:(id)arg1 ;
-(BOOL)hasActiveCall;
-(id)_takeScreenshot:(id)arg1 ;
-(id)_rebootDevice:(id)arg1 ;
-(id)_allowedMedusaGestures:(id)arg1 ;
-(id)init;
-(id)_isSpotlightVisible:(id)arg1 ;
-(id)_openCustomGestureCreationForSCAT:(id)arg1 ;
-(id<AXSpringBoardServerInstanceDelegate>)delegate;
-(void)_setSystemGesturesEnabled:(BOOL)arg1 ;
-(id)_isShowingRemoteView:(id)arg1 ;
-(id)_handleReactivateInCallService:(id)arg1 ;
-(id)_toggleDarkMode:(id)arg1 ;
-(id)_isNotificationCenterVisible:(id)arg1 ;
-(id)_handleGetFocusedApps:(id)arg1 ;
-(void)userChangedRouteNotification:(id)arg1 ;
-(void)_removeActionHandler:(unsigned)arg1 ;
-(id)_isOrientationLocked:(id)arg1 ;
-(BOOL)hasActiveOrPendingCallOrFaceTime;
-(id)_wakeUpDeviceIfNecessary:(id)arg1 ;
-(id)_setSpeechPlaybackControls:(id)arg1 ;
-(void)relinquishAssertionWithType:(id)arg1 identifier:(id)arg2 clientPort:(unsigned)arg3 ;
-(id)_reachabilityOffset:(id)arg1 ;
-(BOOL)disableControlCenterAssertionHeld;
-(BOOL)_hasActionHandlerForClientPort:(unsigned)arg1 ;
-(id)_showRemoteView:(id)arg1 ;
-(id)_handleLaunchMagnifierApp:(id)arg1 ;
-(id)_reachabilityHandling:(id)arg1 ;
-(void)springBoardActionOccurred:(long long)arg1 withPayload:(id)arg2 ;
-(void)_accessibilityRetrieveAVSystemControlData:(/*^block*/id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(id)_isShowingNonSystemApp:(id)arg1 ;
-(id)_isSyncingRestoringResettingOrUpdating:(id)arg1 ;
-(void)_registerServerAndNotifyClients;
-(void)_relinquishAllAssertionsForClientWithPort:(unsigned)arg1 ;
-(id)_handleSpringBoardInfoQuery:(id)arg1 ;
-(id)_canSetDockIconActivationMode:(id)arg1 ;
-(id)_setOrientationLocked:(id)arg1 ;
-(BOOL)hasActiveEndpointCall;
-(id)_openCustomGestureCreationForAST:(id)arg1 ;
-(id)_initServer;
-(id)_openCommandAndControlCommands:(id)arg1 ;
-(id)_getActiveInterfaceOrientation:(id)arg1 ;
-(id)_toggleDock:(id)arg1 ;
-(void)_initializeHearing;
-(id)_handleIsPurpleBuddyAppFrontmost:(id)arg1 ;
-(id)_showNotificationCenter:(id)arg1 ;
-(id)_handleInstalledApps:(id)arg1 ;
-(void)_updateProcess:(id)arg1 ;
-(void)_setupAssertionServerIfNeeded;
-(id)_actionHandling:(id)arg1 ;
-(void)registerHandlerForMessageKey:(int)arg1 target:(id)arg2 selector:(SEL)arg3 entitlements:(id)arg4 ;
-(void)setDelegate:(id<AXSpringBoardServerInstanceDelegate>)arg1 ;
-(void)_initializeHandlers;
-(id)_unlockDevice:(id)arg1 ;
-(void)_setAVCallRoute:(id)arg1 ;
-(id)_hideAlert:(id)arg1 ;
-(id)_isSystemSleeping:(id)arg1 ;
-(id)_hasActiveOrPendingCall:(id)arg1 ;
-(id)_isVoiceControlRunning:(id)arg1 ;
-(id)_resetDimTimer:(id)arg1 ;
-(id)_areSystemGesturesDisabledByAccessibility:(id)arg1 ;
-(id)_startHearingAidServer:(id)arg1 ;
-(id)_isGuidedAccessActive:(id)arg1 ;
-(id)_activateSOSMode:(id)arg1 ;
-(id)_topEventPidOverride:(id)arg1 ;
-(_AXAssertionServer *)assertionServer;
-(void)_removeReachabilityHandler:(unsigned)arg1 ;
-(BOOL)disableNotificationCenterAssertionHeld;
-(id)_dismissAppSwitcher:(id)arg1 ;
-(id)_hasActiveCall:(id)arg1 ;
-(void)_performBlockAsynchronously:(/*^block*/id)arg1 afterDelay:(double)arg2 ;
-(void)setDisableControlCenterAssertionHeld:(BOOL)arg1 ;
-(id)_reachabilityActive:(id)arg1 ;
-(id)_isSideSwitchUsedForOrientation:(id)arg1 ;
-(id)_handleRelinquishAssertion:(id)arg1 ;
-(id)_handleIsInspectorMinimized:(id)arg1 ;
-(id)_isPointInAXInspector:(id)arg1 ;
-(id)_handleAcquireAssertion:(id)arg1 ;
-(id)_handleToggleSpotlight:(id)arg1 ;
-(id)_toggleHearingControl:(id)arg1 ;
-(id)_showControlCenter:(id)arg1 ;
-(id)_reachabilityEnabled:(id)arg1 ;
-(id)_handleIsSettingsAppFrontmost:(id)arg1 ;
-(id)_isRingerMuted:(id)arg1 ;
-(void)_springBoardFinishedLaunching:(id)arg1 ;
-(id)_hasActiveOrPendingCallOrFaceTime:(id)arg1 ;
-(void)springBoardActionOccurred:(long long)arg1 ;
-(id)_hideRemoteView:(id)arg1 ;
-(id)_handleToggleIncomingCall:(id)arg1 ;
-(id)_isControlCenterVisible:(id)arg1 ;
-(id)_cancelSiriDismissalForAssistiveTouch:(id)arg1 ;
-(id)_handleGetFocusedAppPID:(id)arg1 ;
-(id)_simulateEdgePressHaptics:(id)arg1 ;
-(id)_setCaptionPanelContextId:(id)arg1 ;
-(void)_setCallRoute:(int)arg1 ifCurrentlyRoutedTo:(id)arg2 withRoutes:(id)arg3 ;
-(void)_proximityDidChange:(id)arg1 ;
-(id)_isDarkModeActive:(id)arg1 ;
-(id)_handleCancelReachabilityTimer:(id)arg1 ;
-(id)_isLockScreenVisible:(id)arg1 ;
-(id)_cancelGestureActivation:(id)arg1 ;
-(id)_openCommandAndControlVocabulary:(id)arg1 ;
-(BOOL)shouldCancelSiriTouchActivationBlock;
-(void)_setDashboardSystemGesturesDisabled:(BOOL)arg1 ;
-(id)_areSystemGesturesDisabledNatively:(id)arg1 ;
-(void)_setCallRoute:(int)arg1 ifCurrentlyRoutedTo:(id)arg2 ;
-(id)_medusaApps:(id)arg1 ;
-(id)_handleIsSystemAppShowingAnAlert:(id)arg1 ;
-(void)acquireAssertionWithType:(id)arg1 identifier:(id)arg2 clientPort:(unsigned)arg3 ;
-(id)_openVoiceControl:(id)arg1 ;
-(id)_isAppSwitcherVisible:(id)arg1 ;
-(id)_openCommandAndControlSettings:(id)arg1 ;
-(void)setAssertionServer:(_AXAssertionServer *)arg1 ;
-(id)_handleRevealSpotlight:(id)arg1 ;
-(id)_setDockIconActivationMode:(id)arg1 ;
-(id)_connectedDevicesRequireAssistiveTouch:(id)arg1 ;
-(id)_handleLoadGAXBundleForUnmanagedASAM:(id)arg1 ;
-(BOOL)shouldSendReachabilityToggled;
-(void)setDisableNotificationCenterAssertionHeld:(BOOL)arg1 ;
-(id)_pauseMedia:(id)arg1 ;
-(id)_handleGetPurpleBuddyPID:(id)arg1 ;
-(id)_isShowingHomescreen:(id)arg1 ;
-(BOOL)_hasReachabilityHandlerForClientPort:(unsigned)arg1 ;
-(id)_handleIsMagnifierVisible:(id)arg1 ;
-(BOOL)shouldBlockGestureActivation:(unsigned long long)arg1 ;
-(id)_hasActiveEndpointCall:(id)arg1 ;
-(id)_isSpeakThisTemporarilyDisabled:(id)arg1 ;
-(id)_isSiriVisible:(id)arg1 ;
-(BOOL)onlySystemGesturesDisabledHolderIsGuidedAccess;
-(id)_showAlert:(id)arg1 ;
-(void)dealloc;
-(id)_handleIsSystemAppFrontmost:(id)arg1 ;
-(id)_assertionClientForPort:(unsigned)arg1 ;
-(id)_toggleNotificationCenter:(id)arg1 ;
-(id)_copyStringToPasteboard:(id)arg1 ;
@end

