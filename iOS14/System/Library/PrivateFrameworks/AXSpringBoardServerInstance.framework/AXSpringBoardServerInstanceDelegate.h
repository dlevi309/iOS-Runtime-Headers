/*
* Generated on Thursday, January 14, 2021 at 2:27:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AXSpringBoardServerInstance.framework/AXSpringBoardServerInstance
*/


@protocol AXSpringBoardServerInstanceDelegate <NSObject>
@required
-(BOOL)connectedDevicesRequireAssistiveTouch;
-(void)openCommandAndControlCommandsWithServerInstance:(id)arg1;
-(BOOL)isMagnifierVisibleWithServerInstance:(id)arg1;
-(BOOL)isControlCenterVisibleWithServerInstance:(id)arg1;
-(BOOL)isVoiceControlRunningWithServerInstance:(id)arg1;
-(void)serverInstance:(id)arg1 hideRemoteViewType:(long long)arg2;
-(BOOL)isMediaPlayingWithServerInstance:(id)arg1 forBundleId:(id)arg2;
-(void)revealSpotlightWithServerInstance:(id)arg1;
-(BOOL)isSettingsAppFrontmostWithServerInstance:(id)arg1;
-(id)medusaAppsWithServerInstance:(id)arg1;
-(BOOL)isSpotlightVisibleWithServerInstance:(id)arg1;
-(id)focusedAppProcessWithServerInstance:(id)arg1;
-(BOOL)hasActiveOrPendingCallOrFaceTimeWithServerInstance:(id)arg1;
-(void)launchMagnifierAppWithServerInstance:(id)arg1;
-(void)setDashBoardSystemGesturesEnabled:(BOOL)arg1 withServerInstance:(id)arg2;
-(void)unlockDeviceWithServerInstance:(id)arg1;
-(BOOL)isShowingNonSystemAppWithServerInstance:(id)arg1;
-(BOOL)isPurpleBuddyAppFrontmostWithServerInstance:(id)arg1;
-(void)openVoiceControlWithServerInstance:(id)arg1;
-(double)volumeLevelWithServerInstance:(id)arg1;
-(void)updateFrontMostApplicationWithServerInstance:(id)arg1;
-(void)serverInstance:(id)arg1 showSpeechPlaybackControls:(BOOL)arg2;
-(void)simulateEdgePressHaptics:(id)arg1;
-(void)openCommandAndControlVocabularyWithServerInstance:(id)arg1;
-(void)setReachabilityActive:(BOOL)arg1;
-(void)openAppSwitcherWithServerInstance:(id)arg1;
-(void)toggleNotificationCenterWithServerInstance:(id)arg1;
-(void)serverInstance:(id)arg1 setReachabilityEnabled:(BOOL)arg2;
-(BOOL)isBannerVisibleWithServerInstance:(id)arg1;
-(BOOL)areSystemGesturesDisabledNativelyWithServerInstance:(id)arg1;
-(void)resetDimTimerWithServerInstance:(id)arg1;
-(BOOL)isScreenshotWindowVisibleWithServerInstance:(id)arg1;
-(id)focusedAppPIDWithServerInstance:(id)arg1;
-(BOOL)isNotificationVisibleWithServerInstance:(id)arg1;
-(BOOL)handleToggleIncomingCallWithServerInstance:(id)arg1;
-(void)reactivateInCallServiceWithServerInstance:(id)arg1;
-(BOOL)toggleDarkModeWithServerInstance:(id)arg1;
-(BOOL)isLockScreenVisibleWithServerInstance:(id)arg1;
-(id)installedAppsWithServerInstance:(id)arg1;
-(id)serverInstance:(id)arg1 springBoardSystemInfoQuery:(unsigned long long)arg2;
-(void)dismissAppSwitcherWithServerInstance:(id)arg1;
-(void)serverInstance:(id)arg1 pauseMedia:(BOOL)arg2 forBundleId:(id)arg3;
-(void)serverInstance:(id)arg1 showRemoteViewType:(long long)arg2 withData:(id)arg3;
-(void)openCustomGestureCreationForSCATWithServerInstance:(id)arg1;
-(void)serverInstance:(id)arg1 setOrientationLocked:(BOOL)arg2;
-(BOOL)isShowingHomescreenWithServerInstance:(id)arg1;
-(BOOL)isNotificationCenterVisibleWithServerInstance:(id)arg1;
-(id)runningAppPIDsWithServerInstance:(id)arg1;
-(void)activateSOSModeWithServerInstance:(id)arg1;
-(void)openCommandAndControlSettingsWithServerInstance:(id)arg1;
-(id)runningAppProcessesWithServerInstance:(id)arg1;
-(void)cancelSiriDismissalForAssistiveTouchWithServerInstance:(id)arg1;
-(BOOL)dismissSiriWithServerInstance:(id)arg1;
-(BOOL)isSiriVisibleWithServerInstance:(id)arg1;
-(void)armApplePayWithServerInstance:(id)arg1;
-(id)serverInstance:(id)arg1 splashImageForAppWithBundleIdentifier:(id)arg2;
-(BOOL)isSyncingRestoringResettingOrUpdatingWithServerInstance:(id)arg1;
-(BOOL)isGuidedAccessActiveWithServerInstance:(id)arg1;
-(BOOL)isRingerMutedWithServerInstance:(id)arg1;
-(BOOL)isSideSwitchUsedForOrientationWithServerInstance:(id)arg1;
-(void)serverInstance:(id)arg1 setDockIconActivationMode:(unsigned long long)arg2;
-(void)serverInstance:(id)arg1 showAlertType:(int)arg2 withHandler:(/*^block*/id)arg3 withData:(id)arg4;
-(BOOL)isPIPWindowVisibleWithServerInstance:(id)arg1;
-(BOOL)isScreenLockedWithServerInstance:(id)arg1;
-(BOOL)hasActiveEndpointCallWithServerInstance:(id)arg1;
-(void)openCustomGestureCreationForASTWithServerInstance:(id)arg1;
-(BOOL)isPasscodeRequiredOnLockWithServerInstance:(id)arg1;
-(BOOL)isDockVisibleWithServerInstance:(id)arg1;
-(void)toggleDockWithServerInstance:(id)arg1;
-(void)toggleSpotlightWithServerInstance:(id)arg1;
-(void)wakeUpDeviceIfNecessaryWithServerInstance:(id)arg1;
-(BOOL)areSystemGesturesDisabledByAccessibilityWithServerInstance:(id)arg1;
-(BOOL)isSystemAppShowingAnAlertWithServerInstance:(id)arg1;
-(BOOL)serverInstance:(id)arg1 showControlCenter:(BOOL)arg2;
-(BOOL)isDarkModeActiveWithServiceInstance:(id)arg1;
-(BOOL)serverInstance:(id)arg1 showNotificationCenter:(BOOL)arg2;
-(BOOL)isOrientationLockedWithServerInstance:(id)arg1;
-(BOOL)isSpeakThisTemporarilyDisabledWithServerInstance:(id)arg1;
-(BOOL)serverInstance:(id)arg1 performMedusaGesture:(unsigned long long)arg2;
-(double)reachabilityOffsetWithServerInstance:(id)arg1;
-(void)hideAlertWithServerInstance:(id)arg1;
-(BOOL)isSystemSleepingWithServerInstance:(id)arg1;
-(BOOL)isMakingEmergencyCallWithServerInstance:(id)arg1;
-(BOOL)isSystemAppFrontmostExcludingSiri:(BOOL)arg1 withServerInstance:(id)arg2;
-(BOOL)serverInstance:(id)arg1 isShowingRemoteViewType:(long long)arg2;
-(int)purpleBuddyPIDWithServerInstance:(id)arg1;
-(BOOL)canSetDockIconActivationModeForServerInstance:(id)arg1;
-(void)forceLoadGAXBundleWithServerInstance:(id)arg1;
-(id)allowedMedusaGesturesWithServerInstance:(id)arg1;
-(BOOL)hasActiveOrPendingCallWithServerInstance:(id)arg1;
-(void)rebootDeviceWithServerInstance:(id)arg1;
-(BOOL)isStatusBarNativeFocusableWithServerInstance:(id)arg1;
-(BOOL)isPasscodeLockVisibleWithServerInstance:(id)arg1;
-(BOOL)isAppSwitcherVisibleWithServerInstance:(id)arg1;
-(BOOL)hasActiveCallWithServerInstance:(id)arg1;
-(id)focusedAppsWithServerInstance:(id)arg1;
-(id)serverInstance:(id)arg1 appWithIdentifier:(id)arg2;

@end

