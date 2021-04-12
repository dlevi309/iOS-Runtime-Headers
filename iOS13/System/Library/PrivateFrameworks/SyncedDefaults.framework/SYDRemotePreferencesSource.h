/*
* Generated on Monday, March 1, 2021 at 2:32:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SyncedDefaults.framework/SyncedDefaults
*/


@protocol OS_dispatch_queue, OS_dispatch_source, OS_os_transaction;
#import <SyncedDefaults/SyncedDefaults-Structs.h>
@class NSMutableDictionary, SYDClient, NSObject;

@interface SYDRemotePreferencesSource : NSObject {

	long long _generationCount;
	long long _lastGenerationFromDisk;
	CFStringRef _preferenceID;
	CFURLRef _urlOnDisk;
	CFDictionaryRef _cache;
	long long _storageChangeCount;
	long long _initialSyncChangeCount;
	unsigned char _isInitialSync;
	CFSetRef _dirtyKeys;
	CFDictionaryRef _configurationDictionary;
	NSMutableDictionary* _externalChanges;
	SYDClient* _client;
	/*^block*/id _registrationBlock;
	NSObject*<OS_dispatch_queue> _registrationQueue;
	NSObject*<OS_dispatch_queue> _protectionQueue;
	BOOL _memoryWarningSourceEnabled;
	NSObject*<OS_dispatch_source> _memoryWarningSource;
	double _lastAccess;
	BOOL _forceNextSynchronization;
	NSObject*<OS_os_transaction> _isExecutingForClient;

}
+(void)initialize;
+(id)SYDRemotePreferencesSourceDidChangeNotification;
+(id)SYDRemotePreferencesSourceConfigurationDidChangeNotification;
+(id)SYDUbiquitousKeyValueStoreDidChangeExternallyNotification;
+(BOOL)alwaysUseKVSOnCloudKit;
+(void)setAlwaysUseKVSOnCloudKit:(BOOL)arg1 ;
+(void)resetAllApplicationsWithCompletionHandler:(/*^block*/id)arg1 ;
+(void)noteAccountChanges:(id)arg1 ;
+(void)migrateSyncedDefaultsForBundleIdentifier:(id)arg1 ;
-(void)dealloc;
-(unsigned char)synchronize;
-(void)registerForSynchronizedDefaults;
-(void)setValue:(void*)arg1 forKey:(CFStringRef)arg2 ;
-(unsigned char)synchronizeForced:(unsigned char)arg1 ;
-(CFDictionaryRef)copyDictionary;
-(void)synchronizationWithCompletionHandler:(/*^block*/id)arg1 ;
-(long long)generationCount;
-(CFArrayRef)copyKeyList;
-(id)initWithApplicationID:(CFStringRef)arg1 storeID:(CFStringRef)arg2 shared:(BOOL)arg3 additionalSource:(BOOL)arg4 containerPath:(CFStringRef)arg5 storeType:(long long)arg6 ;
-(id)initWithApplicationID:(CFStringRef)arg1 storeID:(CFStringRef)arg2 shared:(BOOL)arg3 ;
-(id)initWithApplicationID:(CFStringRef)arg1 storeID:(CFStringRef)arg2 shared:(BOOL)arg3 additionalSource:(BOOL)arg4 ;
-(id)initWithApplicationID:(CFStringRef)arg1 shared:(BOOL)arg2 ;
-(void)discardExternalChangesForChangeCount:(long long)arg1 ;
-(void*)getValueForKey:(CFStringRef)arg1 ;
-(unsigned char)hasExternalChanges;
-(id)copyExternalChangesWithChangeCount:(long long*)arg1 ;
-(void)scheduleRemoteSynchronization;
-(unsigned char)_synchronizeForced:(unsigned char)arg1 ;
-(void)updateConfiguration;
-(void)unregisterForSynchronizedDefaults;
-(void)ping;
-(long long)maximumKeyCount;
-(long long)maximumKeyLength;
-(long long)maximumDataLengthPerKey;
-(long long)maximumTotalDataLength;
-(unsigned char)isInitialSync;
-(void)setCache:(CFDictionaryRef)arg1 ;
-(long long)configurationValueForKey:(CFStringRef)arg1 ;
-(id)initWithApplicationID:(CFStringRef)arg1 storeID:(CFStringRef)arg2 shared:(BOOL)arg3 additionalSource:(BOOL)arg4 containerPath:(CFStringRef)arg5 ;
-(void)_createMemoryWarningSource;
-(void)_locked_syd_start_transaction;
-(void)_locked_syd_end_transaction;
-(void)_forceRegistrationNow;
-(void)_cachePlistFromDisk;
-(void)_storeConfiguration:(CFDictionaryRef)arg1 ;
-(id)_warningSource;
-(void)_didReceiveMemoryWarning;
-(CFDictionaryRef)copyConfigurationDictionary;
-(void)setDefaultsConfiguration:(id)arg1 ;
-(id)serverSideDebugDescription;
@end

