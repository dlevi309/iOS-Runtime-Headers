/*
* Generated on Monday, March 1, 2021 at 2:35:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/CoreAccessories/PlugIns/Platform/System.platform/System
*/

#import <libobjc.A.dylib/FBSDisplayLayoutObserver.h>
#import <libobjc.A.dylib/ACCPlatformSystemPluginProtocol.h>

@class BKSApplicationStateMonitor, FBSDisplayLayoutMonitor, NSMutableSet, NSMutableDictionary, NSLock, NSString;

@interface ACCPlatformPluginSystem : NSObject <FBSDisplayLayoutObserver, ACCPlatformSystemPluginProtocol> {

	BKSApplicationStateMonitor* _appStateMonitor;
	FBSDisplayLayoutMonitor* _sharedDisplayLayoutMonitor;
	BOOL _observingFBSLayoutMonitor;
	BOOL _isRunning;
	NSMutableSet* _foregroundAppBundleIDsMutable;
	NSMutableDictionary* _activeProcessAssertions;
	NSLock* _applicationStateLock;

}

@property (assign,nonatomic) BOOL isRunning;                                            //@synthesize isRunning=_isRunning - In the implementation block
@property (nonatomic,retain) NSMutableSet * foregroundAppBundleIDsMutable;              //@synthesize foregroundAppBundleIDsMutable=_foregroundAppBundleIDsMutable - In the implementation block
@property (retain) NSMutableDictionary * activeProcessAssertions;                       //@synthesize activeProcessAssertions=_activeProcessAssertions - In the implementation block
@property (nonatomic,retain) NSLock * applicationStateLock;                             //@synthesize applicationStateLock=_applicationStateLock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * pluginName; 
-(BOOL)isRunning;
-(void)stopObservingApplicationState;
-(BOOL)isDeviceLocked;
-(void)layoutMonitor:(id)arg1 didUpdateDisplayLayout:(id)arg2 withContext:(id)arg3 ;
-(id)applicationInfoForPID:(int)arg1 ;
-(void)setIsRunning:(BOOL)arg1 ;
-(NSString *)pluginName;
-(void)initPlugin;
-(void)startPlugin;
-(void)stopPlugin;
-(BOOL)unlockedSinceBoot;
-(id)appNameForBundleID:(id)arg1 ;
-(void)launchApplication:(id)arg1 ;
-(NSLock *)applicationStateLock;
-(void)_observeApplicationState:(id)arg1 ;
-(NSMutableSet *)foregroundAppBundleIDsMutable;
-(id)_convertDictionaryToPlatformACCDictionary:(id)arg1 ;
-(id)applicationInfoForBundleID:(id)arg1 ;
-(NSMutableDictionary *)activeProcessAssertions;
-(BOOL)isApplicationRunning:(id)arg1 ;
-(void)toggleProcessAssertionForBundleID:(id)arg1 ;
-(BOOL)isAppVisibleInCurrentMode:(id)arg1 ;
-(id)applicationsInstalledWithExternalAccessoryProtocol:(id)arg1 ;
-(BOOL)launchURL:(id)arg1 ;
-(BOOL)isAppInstalledWithBundleID:(id)arg1 ;
-(void)startObservingApplicationState;
-(BOOL)isApplicationInForeground:(id)arg1 ;
-(id)foregroundAppBundleIDs;
-(void)cancelProcessAssertionForBundleID:(id)arg1 ;
-(void)launchBundleIDToBackground:(id)arg1 ;
-(BOOL)supportsExternalAccessoryBackgroundMode:(id)arg1 ;
-(BOOL)isDeviceLockSettingEnabled;
-(long long)timeSinceBootInSecs;
-(long long)secondsSinceLastLockModeEvent:(int)arg1 ;
-(BOOL)isLockScreenUIDisplayed;
-(BOOL)createFolder:(const char*)arg1 mode:(unsigned short)arg2 ;
-(id)mediaLibraryUIDString:(BOOL)arg1 ;
-(void)takeOneTimeProcessAssertionForBundleID:(id)arg1 ;
-(void)setForegroundAppBundleIDsMutable:(NSMutableSet *)arg1 ;
-(void)setActiveProcessAssertions:(NSMutableDictionary *)arg1 ;
-(void)setApplicationStateLock:(NSLock *)arg1 ;
@end

