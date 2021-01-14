/*
* Generated on Thursday, January 14, 2021 at 2:20:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
*/


@protocol OS_xpc_object;
#import <CoreFoundation/CoreFoundation-Structs.h>
@class NSObject;

@interface _CFXPreferences : NSObject {

	CFDictionaryRef _sources;
	CFDictionaryRef _namedVolatileSources;
	CFDictionaryRef _searchLists;
	NSObject*<OS_xpc_object> _agentConnection;
	NSObject*<OS_xpc_object> _daemonConnection;
	NSObject*<OS_xpc_object> _directConnection;
	unsigned _launchdUID;
	unsigned _euid;
	Ac _userHomeDirectoryState;
	os_unfair_lock_s _sourcesLock;
	os_unfair_lock_s _searchListsLock;
	os_unfair_lock_s _namedVolatileSourcesLock;

}
+(id)copyDefaultPreferences;
-(void)assertEquivalence:(BOOL)arg1 ofIdentifiers:(CFArrayRef)arg2 users:(CFArrayRef)arg3 hosts:(CFArrayRef)arg4 containers:(CFArrayRef)arg5 managedFlags:(CFArrayRef)arg6 cloudFlags:(CFArrayRef)arg7 ;
-(id)init;
-(void)registerDefaultValues:(CFDictionaryRef)arg1 ;
-(void)simulateTimerSynchronizeForTestingForUser:(CFStringRef)arg1 ;
-(void)assertEquivalence:(BOOL)arg1 ofIdentifiers:(CFArrayRef)arg2 containers:(CFArrayRef)arg3 cloudConfigurationURLs:(CFArrayRef)arg4 ;
-(unsigned)euid;
-(void*)copyAppValueForKey:(CFStringRef)arg1 identifier:(CFStringRef)arg2 container:(CFStringRef)arg3 configurationURL:(CFURLRef)arg4 ;
-(void*)copyValueForKey:(CFStringRef)arg1 identifier:(CFStringRef)arg2 user:(CFStringRef)arg3 host:(CFStringRef)arg4 container:(CFStringRef)arg5 ;
-(void)resetPreferences:(BOOL)arg1 ;
-(void)generateKVONotificationsForIdentifier:(CFStringRef)arg1 withOldValues:(id)arg2 newValues:(id)arg3 ;
-(void)setDaemonCacheEnabled:(BOOL)arg1 identifier:(CFStringRef)arg2 user:(CFStringRef)arg3 host:(CFStringRef)arg4 container:(CFStringRef)arg5 ;
-(void)registerUserDefaultsInstance:(id)arg1 configurationURL:(CFURLRef)arg2 ;
-(void)unregisterUserDefaultsInstance:(id)arg1 ;
-(void)setValue:(void*)arg1 forKey:(CFStringRef)arg2 appIdentifier:(CFStringRef)arg3 container:(CFStringRef)arg4 configurationURL:(CFURLRef)arg5 ;
-(void)dealloc;
@end

