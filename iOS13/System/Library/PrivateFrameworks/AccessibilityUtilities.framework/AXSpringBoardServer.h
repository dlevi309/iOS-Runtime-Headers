/*
* Generated on Monday, March 1, 2021 at 2:30:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
*/

#import <AccessibilityUtilities/AXServer.h>
#import <libobjc.A.dylib/AXSystemAppServer.h>

@class AXAccessQueue, NSMutableArray, NSMutableDictionary, NSString;

@interface AXSpringBoardServer : AXServer <AXSystemAppServer> {

	BOOL _shouldFocusNonExclusiveSystemUI;
	AXAccessQueue* _accessQueue;
	/*^block*/id _currentAlertHandler;
	NSMutableArray* _actionHandlers;
	NSMutableDictionary* _reachabilityHandlers;

}

@property (nonatomic,retain) AXAccessQueue * accessQueue;                             //@synthesize accessQueue=_accessQueue - In the implementation block
@property (nonatomic,copy) id currentAlertHandler;                                    //@synthesize currentAlertHandler=_currentAlertHandler - In the implementation block
@property (nonatomic,retain) NSMutableArray * actionHandlers;                         //@synthesize actionHandlers=_actionHandlers - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * reachabilityHandlers;              //@synthesize reachabilityHandlers=_reachabilityHandlers - In the implementation block
@property (nonatomic,readonly) BOOL isGuidedAccessActive; 
@property (assign,nonatomic) BOOL shouldFocusNonExclusiveSystemUI;                    //@synthesize shouldFocusNonExclusiveSystemUI=_shouldFocusNonExclusiveSystemUI - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)server;
-(id)init;
-(id)_serviceName;
-(AXAccessQueue *)accessQueue;
-(int)pid;
-(void)setVolume:(double)arg1 ;
-(long long)activeInterfaceOrientation;
-(void)setAccessQueue:(AXAccessQueue *)arg1 ;
-(BOOL)isGuidedAccessActive;
-(void)setActionHandlers:(NSMutableArray *)arg1 ;
-(id)currentAlertHandler;
-(void)setCurrentAlertHandler:(id)arg1 ;
-(NSMutableDictionary *)reachabilityHandlers;
-(NSMutableArray *)actionHandlers;
-(void)_didConnectToServer;
-(id)_handleReplyResult:(id)arg1 ;
-(id)_handleActionResult:(id)arg1 ;
-(id)_handleReachabilityResult:(id)arg1 ;
-(BOOL)_shouldValidateEntitlements;
-(void)_willClearServer;
-(void)_wasDisconnectedFromClient;
-(void)_didConnectToClient;
-(void)cleanupAlertHandler;
-(void)showAlert:(int)arg1 withHandler:(/*^block*/id)arg2 withData:(id)arg3 ;
-(BOOL)isShowingAXAlert;
-(void)_sendRemoteViewIPCMessage:(int)arg1 withRemoteViewType:(long long)arg2 withData:(id)arg3 ;
-(id)_payloadForRemoteViewType:(long long)arg1 data:(id)arg2 ;
-(void)registerSpringBoardActionHandler:(/*^block*/id)arg1 withIdentifierCallback:(/*^block*/id)arg2 ;
-(void)setCancelGestureActivation:(unsigned long long)arg1 cancelEnabled:(BOOL)arg2 ;
-(void)registerReachabilityHandler:(/*^block*/id)arg1 withIdentifierCallback:(/*^block*/id)arg2 ;
-(void)setReachabilityHandlers:(NSMutableDictionary *)arg1 ;
-(double)reachabilityOffset;
-(void)setReachabilityActive:(BOOL)arg1 ;
-(BOOL)_shouldDispatchLocally;
-(id)_axSpringBoardServerInstanceDelegate;
-(id)_axSpringBoardServerInstance;
-(void)_getPasscodeStatusImmediate:(/*^block*/id)arg1 ;
-(BOOL)isMediaPlayingForApp:(id)arg1 ;
-(id)_messageForMediaPlayingQueryForBundleID:(id)arg1 ;
-(void)pauseMediaForApp:(id)arg1 ;
-(void)resumeMediaForApp:(id)arg1 ;
-(BOOL)isNotificationCenterVisible;
-(void)toggleNotificationCenter;
-(BOOL)_isSystemAppFrontmostExcludingSiri:(BOOL)arg1 ;
-(void)_isSystemAppFrontmostExcludingSiri:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)isPurpleBuddyAppFrontmost;
-(int)purpleBuddyPID;
-(BOOL)isMultiTaskingActive;
-(void)acquireAssertionWithType:(id)arg1 identifier:(id)arg2 ;
-(void)relinquishAssertionWithType:(id)arg1 identifier:(id)arg2 ;
-(BOOL)isNotificationVisible;
-(BOOL)isDockVisible;
-(BOOL)isScreenshotWindowVisible;
-(BOOL)isSiriVisible;
-(BOOL)isStatusBarNativeFocusable;
-(BOOL)isPIPWindowVisible;
-(BOOL)shouldFocusNonExclusiveSystemUI;
-(BOOL)isNonExclusiveSystemUIFocusableIncludingPIPWindow:(BOOL)arg1 ;
-(void)setShouldFocusNonExclusiveSystemUI:(BOOL)arg1 ;
-(void)pid:(/*^block*/id)arg1 ;
-(void)activeInterfaceOrientation:(/*^block*/id)arg1 ;
-(BOOL)dismissSiri;
-(BOOL)isAppSwitcherVisible;
-(BOOL)isControlCenterVisible;
-(BOOL)isScreenSaverVisible;
-(BOOL)isNowPlayingUIVisible;
-(BOOL)isSoftwareUpdateUIVisible;
-(BOOL)isSiriTalkingOrListening;
-(BOOL)isReceivingAirPlay;
-(BOOL)isMediaPlaying;
-(void)rebootDevice;
-(BOOL)isSystemSleeping;
-(void)wakeUpDeviceIfNecessary;
-(BOOL)isPasscodeLockVisible;
-(void)takeScreenshot;
-(void)openAssistiveTouchCustomGestureCreation;
-(void)openSCATCustomGestureCreation;
-(void)openCommandAndControlSettings;
-(void)openCommandAndControlCommands;
-(void)openCommandAndControlVocabulary;
-(void)setCaptionPanelContextId:(unsigned)arg1 ;
-(void)setHearingAidControlVisible:(BOOL)arg1 ;
-(void)startHearingAidServer;
-(int)topEventPidOverride;
-(BOOL)isOrientationLocked;
-(void)setOrientationLocked:(BOOL)arg1 ;
-(void)resetDimTimer;
-(BOOL)isSideSwitchUsedForOrientation;
-(BOOL)isRingerMuted;
-(double)volumeLevel;
-(void)hideAlert;
-(void)showAlert:(int)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)showRemoteView:(long long)arg1 withData:(id)arg2 ;
-(void)hideRemoteView:(long long)arg1 ;
-(BOOL)isShowingRemoteView:(long long)arg1 ;
-(void)setShowSpeechPlaybackControls:(BOOL)arg1 ;
-(void)removeActionHandler:(id)arg1 ;
-(void)cancelReachabilityDetection;
-(BOOL)toggleIncomingCall;
-(void)toggleReachability;
-(void)setReachabilityEnabled:(BOOL)arg1 ;
-(void)removeReachabilityHandler:(id)arg1 ;
-(BOOL)isInspectorMinimized;
-(BOOL)isPointInsideAccessibilityInspector:(id)arg1 ;
-(int)activeApplicationOrientation;
-(void)copyStringToPasteboard:(id)arg1 ;
-(void)activateSOSMode;
-(void)performVoiceShortcutWithIdentifier:(id)arg1 bundleID:(id)arg2 ;
-(id)splashImageForAppWithBundleIdentifier:(id)arg1 ;
-(BOOL)connectedDevicesRequireAssistiveTouch;
-(BOOL)isScreenLockedWithPasscode:(BOOL*)arg1 ;
-(void)screenLockStatus:(/*^block*/id)arg1 ;
-(void)isSystemSleeping:(/*^block*/id)arg1 ;
-(BOOL)isSyncingRestoringResettingOrUpdating;
-(BOOL)areSystemGesturesDisabledNatively;
-(BOOL)areSystemGesturesDisabledByAccessibility;
-(id)installedApps;
-(void)unlockDevice;
-(void)isMediaPlayingForApp:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)pauseMedia;
-(void)resumeMedia;
-(BOOL)hasActiveCall;
-(BOOL)hasActiveEndpointCall;
-(BOOL)hasActiveOrPendingCall;
-(BOOL)hasActiveOrPendingCallOrFaceTime;
-(BOOL)isMakingEmergencyCall;
-(void)showNotificationCenter;
-(void)hideNotificationCenter;
-(BOOL)showNotificationCenter:(BOOL)arg1 ;
-(BOOL)showControlCenter:(BOOL)arg1 ;
-(void)armApplePay;
-(void)toggleDock;
-(BOOL)isShowingNonSystemApp;
-(BOOL)isShowingHomescreen;
-(void)openAppSwitcher;
-(void)dismissAppSwitcher;
-(void)simulateEdgePressHaptics;
-(void)toggleSpotlight;
-(void)revealSpotlight;
-(BOOL)isDarkModeActive;
-(BOOL)toggleDarkMode;
-(BOOL)isSpotlightVisible;
-(void)openVoiceControl;
-(BOOL)isVoiceControlRunning;
-(BOOL)isSpeakThisTemporarilyDisabled;
-(id)allowedMedusaGestures;
-(BOOL)performMedusaGesture:(unsigned long long)arg1 ;
-(id)medusaApps;
-(void)setDockIconActivationMode:(unsigned long long)arg1 ;
-(BOOL)canSetDockIconActivationMode;
-(void)systemAppInfoWithQuery:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)isSystemAppShowingAnAlert;
-(id)focusedAppPID;
-(void)purpleBuddyPID:(/*^block*/id)arg1 ;
-(id)runningAppPIDs;
-(BOOL)isSystemAppFrontmost;
-(void)isSystemAppFrontmost:(/*^block*/id)arg1 ;
-(BOOL)isSystemAppFrontmostExludingSiri;
-(BOOL)dismissBuddyIfNecessary;
-(BOOL)isSettingsAppFrontmost;
-(id)focusedApps;
-(BOOL)loadGAXBundleForUnmanagedASAM;
-(void)reactivateInCallService;
-(void)launchMagnifierApp;
-(void)isMagnifierVisibleWithCompletion:(/*^block*/id)arg1 ;
-(void)didPotentiallyDismissNonExclusiveSystemUI;
-(BOOL)isMagnifierVisible;
-(id)applicationWithIdentifier:(id)arg1 ;
-(id)focusedAppProcess;
-(id)runningAppProcesses;
-(id)_axSpringBoardServerInstanceIfExists;
@end

