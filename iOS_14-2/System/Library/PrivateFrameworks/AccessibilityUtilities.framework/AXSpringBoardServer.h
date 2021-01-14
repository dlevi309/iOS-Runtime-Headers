/*
* Generated on Thursday, January 14, 2021 at 2:22:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)takeScreenshot;
-(void)acquireAssertionWithType:(id)arg1 identifier:(id)arg2 synchronously:(BOOL)arg3 ;
-(BOOL)connectedDevicesRequireAssistiveTouch;
-(void)_willClearServer;
-(id)runningAppPIDs;
-(BOOL)shouldFocusNonExclusiveSystemUI;
-(BOOL)isShowingHomescreen;
-(BOOL)isLockScreenVisible;
-(void)setReachabilityEnabled:(BOOL)arg1 ;
-(BOOL)isDockVisible;
-(void)isMagnifierVisibleWithCompletion:(/*^block*/id)arg1 ;
-(void)openAppSwitcher;
-(void)_wasDisconnectedFromClient;
-(BOOL)isSideSwitchUsedForOrientation;
-(void)_didConnectToClient;
-(id)currentAlertHandler;
-(id)_serviceName;
-(double)volumeLevel;
-(BOOL)hasActiveOrPendingCall;
-(void)setVolume:(double)arg1 ;
-(int)pid;
-(void)didPotentiallyDismissNonExclusiveSystemUI;
-(BOOL)isSystemAppFrontmostExludingSiri;
-(void)setCancelGestureActivation:(unsigned long long)arg1 cancelEnabled:(BOOL)arg2 ;
-(void)setShowSpeechPlaybackControls:(BOOL)arg1 ;
-(void)resumeMediaForApp:(id)arg1 ;
-(id)_axSpringBoardServerInstanceDelegate;
-(void)setCurrentAlertHandler:(id)arg1 ;
-(BOOL)hasActiveCall;
-(BOOL)isPIPWindowVisible;
-(void)registerReachabilityHandler:(/*^block*/id)arg1 withIdentifierCallback:(/*^block*/id)arg2 ;
-(long long)activeInterfaceOrientation;
-(void)dismissAppSwitcher;
-(id)init;
-(void)purpleBuddyPID:(/*^block*/id)arg1 ;
-(void)showNotificationCenter;
-(id)runningAppProcesses;
-(BOOL)canSetDockIconActivationMode;
-(void)relinquishAssertionWithType:(id)arg1 identifier:(id)arg2 synchronously:(BOOL)arg3 ;
-(void)_didConnectToServer;
-(BOOL)isMediaPlayingForApp:(id)arg1 ;
-(double)reachabilityOffset;
-(BOOL)isSpotlightVisible;
-(id)_handleReachabilityResult:(id)arg1 ;
-(void)setActionHandlers:(NSMutableArray *)arg1 ;
-(void)rebootDevice;
-(BOOL)isShowingRemoteView:(long long)arg1 ;
-(BOOL)isControlCenterVisible;
-(void)screenLockStatus:(/*^block*/id)arg1 passcodeStatusRequired:(BOOL)arg2 ;
-(BOOL)isScreenSaverVisible;
-(id)allowedMedusaGestures;
-(BOOL)isShowingAXAlert;
-(void)simulateEdgePressHaptics;
-(void)openAssistiveTouchCustomGestureCreation;
-(void)startHearingAidServer;
-(BOOL)isNotificationVisible;
-(void)_getPasscodeStatusImmediate:(/*^block*/id)arg1 passcodeStatusRequired:(BOOL)arg2 ;
-(BOOL)performMedusaGesture:(unsigned long long)arg1 ;
-(id)_axSpringBoardServerInstanceIfExists;
-(BOOL)isVoiceControlRunning;
-(BOOL)hasActiveOrPendingCallOrFaceTime;
-(void)setReachabilityActive:(BOOL)arg1 ;
-(BOOL)isShowingNonSystemApp;
-(BOOL)showNotificationCenter:(BOOL)arg1 ;
-(BOOL)isSyncingRestoringResettingOrUpdating;
-(BOOL)isSystemAppFrontmost;
-(BOOL)isPurpleBuddyAppFrontmost;
-(BOOL)isScreenshotWindowVisible;
-(void)setDockIconActivationMode:(unsigned long long)arg1 ;
-(id)focusedAppPID;
-(id)_payloadForRemoteViewType:(long long)arg1 data:(id)arg2 ;
-(void)removeActionHandler:(id)arg1 ;
-(BOOL)isRingerMuted;
-(BOOL)hasActiveEndpointCall;
-(id)_messageForMediaPlayingQueryForBundleID:(id)arg1 ;
-(void)cancelReachabilityDetection;
-(void)hideAlert;
-(BOOL)isSiriTalkingOrListening;
-(void)cleanupAlertHandler;
-(void)resetDimTimer;
-(void)showAlert:(int)arg1 withHandler:(/*^block*/id)arg2 withData:(id)arg3 ;
-(void)isSystemSleeping:(/*^block*/id)arg1 ;
-(BOOL)isMagnifierVisible;
-(void)activeInterfaceOrientation:(/*^block*/id)arg1 ;
-(void)toggleNotificationCenter;
-(void)toggleDock;
-(BOOL)isPointInsideAccessibilityInspector:(id)arg1 ;
-(void)setShouldFocusNonExclusiveSystemUI:(BOOL)arg1 ;
-(void)_isSystemAppFrontmostExcludingSiri:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)copyStringToPasteboard:(id)arg1 ;
-(BOOL)dismissSiri;
-(BOOL)isMediaPlaying;
-(void)isMediaPlayingForApp:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)openCommandAndControlSettings;
-(void)showAlert:(int)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)armApplePay;
-(void)resumeMedia;
-(void)openSCATCustomGestureCreation;
-(BOOL)toggleDarkMode;
-(BOOL)isReceivingAirPlay;
-(id)applicationWithIdentifier:(id)arg1 ;
-(BOOL)isNonExclusiveSystemUIFocusableIncludingPIPWindow:(BOOL)arg1 ;
-(void)reactivateInCallService;
-(BOOL)isSettingsAppFrontmost;
-(void)launchMagnifierApp;
-(void)wakeUpDeviceIfNecessary;
-(BOOL)isOrientationLocked;
-(id)_handleReplyResult:(id)arg1 ;
-(void)unlockDevice;
-(void)openCommandAndControlCommands;
-(AXAccessQueue *)accessQueue;
-(void)setCaptionPanelContextId:(unsigned)arg1 ;
-(void)revealSpotlight;
-(BOOL)isStatusBarNativeFocusable;
-(void)hideRemoteView:(long long)arg1 ;
-(BOOL)areSystemGesturesDisabledNatively;
-(id)_handleActionResult:(id)arg1 ;
-(BOOL)isAppSwitcherVisible;
-(BOOL)isScreenLockedWithPasscode:(BOOL*)arg1 ;
-(void)pauseMediaForApp:(id)arg1 ;
-(void)_sendRemoteViewIPCMessage:(int)arg1 withRemoteViewType:(long long)arg2 withData:(id)arg3 ;
-(void)activateSOSMode;
-(BOOL)isMakingEmergencyCall;
-(BOOL)loadGAXBundleForUnmanagedASAM;
-(void)openCommandAndControlVocabulary;
-(void)setHearingAidControlVisible:(BOOL)arg1 ;
-(id)splashImageForAppWithBundleIdentifier:(id)arg1 ;
-(BOOL)isSoftwareUpdateUIVisible;
-(id)focusedApps;
-(BOOL)_isSystemAppFrontmostExcludingSiri:(BOOL)arg1 ;
-(BOOL)isNotificationCenterVisible;
-(id)medusaApps;
-(void)toggleReachability;
-(void)openVoiceControl;
-(BOOL)showControlCenter:(BOOL)arg1 ;
-(id)installedApps;
-(void)hideNotificationCenter;
-(int)topEventPidOverride;
-(id)focusedAppProcess;
-(BOOL)isDarkModeActive;
-(BOOL)_shouldDispatchLocally;
-(BOOL)isPasscodeLockVisible;
-(id)_axSpringBoardServerInstance;
-(void)systemAppInfoWithQuery:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)dismissBuddyIfNecessary;
-(void)pid:(/*^block*/id)arg1 ;
-(void)setReachabilityHandlers:(NSMutableDictionary *)arg1 ;
-(BOOL)isBannerVisible;
-(BOOL)isSystemSleeping;
-(BOOL)isSiriVisible;
-(void)toggleSpotlight;
-(BOOL)isSystemAppShowingAnAlert;
-(BOOL)isInspectorMinimized;
-(BOOL)_shouldValidateEntitlements;
-(int)purpleBuddyPID;
-(BOOL)toggleIncomingCall;
-(long long)activeApplicationOrientation;
-(NSMutableArray *)actionHandlers;
-(NSMutableDictionary *)reachabilityHandlers;
-(void)cancelSiriDismissalForAssistiveTouch;
-(BOOL)isSpeakThisTemporarilyDisabled;
-(BOOL)areSystemGesturesDisabledByAccessibility;
-(void)showRemoteView:(long long)arg1 withData:(id)arg2 ;
-(BOOL)isNowPlayingUIVisible;
-(void)isSystemAppFrontmost:(/*^block*/id)arg1 ;
-(void)registerSpringBoardActionHandler:(/*^block*/id)arg1 withIdentifierCallback:(/*^block*/id)arg2 ;
-(void)setAccessQueue:(AXAccessQueue *)arg1 ;
-(void)pauseMedia;
-(BOOL)isGuidedAccessActive;
-(void)setOrientationLocked:(BOOL)arg1 ;
-(void)removeReachabilityHandler:(id)arg1 ;
@end

