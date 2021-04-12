/*
* Generated on Thursday, January 14, 2021 at 2:26:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/CoreAccessories/PlugIns/Platform/System.platform/System
*/


@protocol ACCPlatformSystemPluginProtocol <NSObject,ACCPlatformPluginProtocol>
@optional
-(void)cancelProcessAssertionForBundleID:(id)arg1;
-(BOOL)isLockScreenUIDisplayed;
-(void)stopObservingApplicationState;
-(BOOL)createFolder:(const char*)arg1 mode:(unsigned short)arg2;
-(BOOL)isAppVisibleInCurrentMode:(id)arg1;
-(BOOL)isDeviceLocked;
-(BOOL)isApplicationInForeground:(id)arg1;
-(BOOL)unlockedSinceBoot;
-(id)mediaLibraryUIDString:(BOOL)arg1;
-(BOOL)isDeviceLockSettingEnabled;
-(void)launchBundleIDToBackground:(id)arg1;
-(id)applicationsInstalledWithExternalAccessoryProtocol:(id)arg1;
-(id)appNameForBundleID:(id)arg1;
-(BOOL)supportsExternalAccessoryBackgroundMode:(id)arg1;
-(id)applicationInfoForBundleID:(id)arg1;
-(void)startObservingApplicationState;
-(id)foregroundAppBundleIDs;
-(BOOL)launchURL:(id)arg1;
-(id)applicationInfoForPID:(int)arg1;
-(long long)timeSinceBootInSecs;
-(void)launchApplication:(id)arg1;
-(BOOL)isAppInstalledWithBundleID:(id)arg1;
-(long long)secondsSinceLastLockModeEvent:(int)arg1;
-(void)toggleProcessAssertionForBundleID:(id)arg1;

@end

