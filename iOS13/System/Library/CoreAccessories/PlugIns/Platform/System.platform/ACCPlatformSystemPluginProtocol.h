/*
* Generated on Monday, March 1, 2021 at 2:35:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/CoreAccessories/PlugIns/Platform/System.platform/System
*/


@protocol ACCPlatformSystemPluginProtocol <NSObject,ACCPlatformPluginProtocol>
@optional
-(void)stopObservingApplicationState;
-(BOOL)isDeviceLocked;
-(id)applicationInfoForPID:(int)arg1;
-(BOOL)unlockedSinceBoot;
-(id)appNameForBundleID:(id)arg1;
-(void)launchApplication:(id)arg1;
-(id)applicationInfoForBundleID:(id)arg1;
-(void)toggleProcessAssertionForBundleID:(id)arg1;
-(BOOL)isAppVisibleInCurrentMode:(id)arg1;
-(id)applicationsInstalledWithExternalAccessoryProtocol:(id)arg1;
-(BOOL)launchURL:(id)arg1;
-(BOOL)isAppInstalledWithBundleID:(id)arg1;
-(void)startObservingApplicationState;
-(BOOL)isApplicationInForeground:(id)arg1;
-(id)foregroundAppBundleIDs;
-(void)cancelProcessAssertionForBundleID:(id)arg1;
-(void)launchBundleIDToBackground:(id)arg1;
-(BOOL)supportsExternalAccessoryBackgroundMode:(id)arg1;
-(BOOL)isDeviceLockSettingEnabled;
-(long long)timeSinceBootInSecs;
-(long long)secondsSinceLastLockModeEvent:(int)arg1;
-(BOOL)isLockScreenUIDisplayed;
-(BOOL)createFolder:(const char*)arg1 mode:(unsigned short)arg2;
-(id)mediaLibraryUIDString:(BOOL)arg1;

@end

