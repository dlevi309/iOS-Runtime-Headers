/*
* Generated on Thursday, January 14, 2021 at 2:26:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setIsRunning:(BOOL)arg1 ;
-(id)_convertDictionaryToPlatformACCDictionary:(id)arg1 ;
-(NSString *)pluginName;
-(void)_observeApplicationState:(id)arg1 ;
-(void)takeOneTimeProcessAssertionForBundleID:(id)arg1 ;
-(NSMutableSet *)foregroundAppBundleIDsMutable;
-(void)cancelProcessAssertionForBundleID:(id)arg1 ;
-(BOOL)isLockScreenUIDisplayed;
-(void)stopObservingApplicationState;
-(BOOL)createFolder:(const char*)arg1 mode:(unsigned short)arg2 ;
-(BOOL)isApplicationRunning:(id)arg1 ;
-(BOOL)isAppVisibleInCurrentMode:(id)arg1 ;
-(BOOL)isDeviceLocked;
-(BOOL)isApplicationInForeground:(id)arg1 ;
-(BOOL)unlockedSinceBoot;
-(id)mediaLibraryUIDString:(BOOL)arg1 ;
-(BOOL)isDeviceLockSettingEnabled;
-(void)launchBundleIDToBackground:(id)arg1 ;
-(void)setForegroundAppBundleIDsMutable:(NSMutableSet *)arg1 ;
-(id)applicationsInstalledWithExternalAccessoryProtocol:(id)arg1 ;
-(void)layoutMonitor:(id)arg1 didUpdateDisplayLayout:(id)arg2 withContext:(id)arg3 ;
-(id)appNameForBundleID:(id)arg1 ;
-(BOOL)supportsExternalAccessoryBackgroundMode:(id)arg1 ;
-(BOOL)isRunning;
-(NSMutableDictionary *)activeProcessAssertions;
-(id)applicationInfoForBundleID:(id)arg1 ;
-(NSLock *)applicationStateLock;
-(void)stopPlugin;
-(void)startObservingApplicationState;
-(void)initPlugin;
-(id)foregroundAppBundleIDs;
-(BOOL)launchURL:(id)arg1 ;
-(id)applicationInfoForPID:(int)arg1 ;
-(long long)timeSinceBootInSecs;
-(void)launchApplication:(id)arg1 ;
-(BOOL)isAppInstalledWithBundleID:(id)arg1 ;
-(void)startPlugin;
-(long long)secondsSinceLastLockModeEvent:(int)arg1 ;
-(void)setActiveProcessAssertions:(NSMutableDictionary *)arg1 ;
-(void)setApplicationStateLock:(NSLock *)arg1 ;
-(void)toggleProcessAssertionForBundleID:(id)arg1 ;
@end

