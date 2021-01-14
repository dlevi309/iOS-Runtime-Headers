/*
* Generated on Thursday, January 14, 2021 at 2:25:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(void)resetAllApplicationsWithCompletionHandler:(/*^block*/id)arg1 ;
+(id)SYDUbiquitousKeyValueStoreDidChangeExternallyNotification;
+(void)migrateSyncedDefaultsForBundleIdentifier:(id)arg1 ;
+(BOOL)alwaysUseKVSOnCloudKit;
+(id)SYDRemotePreferencesSourceConfigurationDidChangeNotification;
+(void)noteAccountChanges:(id)arg1 ;
+(void)setAlwaysUseKVSOnCloudKit:(BOOL)arg1 ;
-(void)ping;
-(void)_locked_syd_start_transaction;
-(void)registerForSynchronizedDefaults;
-(void)_locked_syd_end_transaction;
-(void)setValue:(void*)arg1 forKey:(CFStringRef)arg2 ;
-(long long)generationCount;
-(void)discardExternalChangesForChangeCount:(long long)arg1 ;
-(void)_didReceiveMemoryWarning;
-(unsigned char)synchronizeForced:(unsigned char)arg1 ;
-(void)setCache:(CFDictionaryRef)arg1 ;
-(void)_createMemoryWarningSource;
-(id)serverSideDebugDescription;
-(long long)maximumKeyCount;
-(id)_warningSource;
-(CFDictionaryRef)copyConfigurationDictionary;
-(id)initWithApplicationID:(CFStringRef)arg1 storeID:(CFStringRef)arg2 shared:(BOOL)arg3 additionalSource:(BOOL)arg4 ;
-(void*)getValueForKey:(CFStringRef)arg1 ;
-(unsigned char)synchronize;
-(long long)maximumDataLengthPerKey;
-(unsigned char)hasExternalChanges;
-(id)initWithApplicationID:(CFStringRef)arg1 storeID:(CFStringRef)arg2 shared:(BOOL)arg3 additionalSource:(BOOL)arg4 containerPath:(CFStringRef)arg5 ;
-(void)_cachePlistFromDisk;
-(long long)configurationValueForKey:(CFStringRef)arg1 ;
-(void)synchronizationWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)updateConfiguration;
-(long long)maximumTotalDataLength;
-(unsigned char)_synchronizeForced:(unsigned char)arg1 ;
-(void)_forceRegistrationNow;
-(id)copyExternalChangesWithChangeCount:(long long*)arg1 ;
-(void)setDefaultsConfiguration:(id)arg1 ;
-(id)initWithApplicationID:(CFStringRef)arg1 storeID:(CFStringRef)arg2 shared:(BOOL)arg3 additionalSource:(BOOL)arg4 containerPath:(CFStringRef)arg5 storeType:(long long)arg6 ;
-(void)_storeConfiguration:(CFDictionaryRef)arg1 ;
-(CFArrayRef)copyKeyList;
-(void)scheduleRemoteSynchronization;
-(CFDictionaryRef)copyDictionary;
-(id)initWithApplicationID:(CFStringRef)arg1 storeID:(CFStringRef)arg2 shared:(BOOL)arg3 ;
-(void)unregisterForSynchronizedDefaults;
-(unsigned char)isInitialSync;
-(long long)maximumKeyLength;
-(id)initWithApplicationID:(CFStringRef)arg1 shared:(BOOL)arg2 ;
-(void)dealloc;
@end

