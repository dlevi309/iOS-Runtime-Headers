/*
* Generated on Thursday, January 14, 2021 at 2:25:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SyncedDefaults.framework/SyncedDefaults
*/

#import <SyncedDefaults/SyncedDefaults-Structs.h>
#import <SyncedDefaults/SYDRemotePreferencesSource.h>
#import <libobjc.A.dylib/SYDClientProtocol.h>

@protocol OS_dispatch_queue;
@class SYDStoreConfiguration, NSXPCConnection, NSObject, NSCache, NSString;

@interface SYDClientToDaemonConnection : SYDRemotePreferencesSource <SYDClientProtocol> {

	BOOL _didLogFaultForEntitlements;
	int _daemonWakeNotifyToken;
	SYDStoreConfiguration* _storeConfiguration;
	NSXPCConnection* _xpcConnection;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	NSObject*<OS_dispatch_queue> _analyticsQueue;
	NSCache* _cachedObjects;
	unsigned long long _syncingWithCloudCounter;

}

@property (nonatomic,retain) SYDStoreConfiguration * storeConfiguration;               //@synthesize storeConfiguration=_storeConfiguration - In the implementation block
@property (nonatomic,retain) NSXPCConnection * xpcConnection;                          //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                       //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> callbackQueue;               //@synthesize callbackQueue=_callbackQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> analyticsQueue;              //@synthesize analyticsQueue=_analyticsQueue - In the implementation block
@property (assign,nonatomic) int daemonWakeNotifyToken;                                //@synthesize daemonWakeNotifyToken=_daemonWakeNotifyToken - In the implementation block
@property (assign,nonatomic) BOOL didLogFaultForEntitlements;                          //@synthesize didLogFaultForEntitlements=_didLogFaultForEntitlements - In the implementation block
@property (nonatomic,retain) NSCache * cachedObjects;                                  //@synthesize cachedObjects=_cachedObjects - In the implementation block
@property (nonatomic,readonly) BOOL isSyncingWithCloud; 
@property (assign) unsigned long long syncingWithCloudCounter;                         //@synthesize syncingWithCloudCounter=_syncingWithCloudCounter - In the implementation block
@property (nonatomic,readonly) NSString * storeIdentifier; 
@property (nonatomic,readonly) long long storeType; 
+(BOOL)hasInitializedStoreWithIdentifier:(id)arg1 ;
+(id)shouldSyncOnFirstInitializationOverride;
+(id)defaultStoreIdentifierForCurrentProcessWithApplicationIdentifier:(id)arg1 ;
+(id)daemonProtocolInterface;
+(void)setShouldSyncOnFirstInitializationOverride:(id)arg1 ;
+(id)disgustingUglyHardcodedKnownStoreIdentifierForApplicationIdentifier:(id)arg1 ;
+(void)setHasInitializedStoreWithIdentifier:(id)arg1 ;
+(void)processAccountChangesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)ping;
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
-(id)dictionaryRepresentation;
-(NSXPCConnection *)xpcConnection;
-(id)initWithStoreConfiguration:(id)arg1 ;
-(id)synchronousDaemonWithErrorHandler:(/*^block*/id)arg1 ;
-(void)registerForSynchronizedDefaults;
-(id)init;
-(BOOL)isSyncingWithCloud;
-(void)setValue:(void*)arg1 forKey:(CFStringRef)arg2 ;
-(long long)generationCount;
-(void)discardExternalChangesForChangeCount:(long long)arg1 ;
-(void)setDidLogFaultForEntitlements:(BOOL)arg1 ;
-(unsigned char)synchronizeForced:(unsigned char)arg1 ;
-(long long)maximumKeyCount;
-(void)removeObjectForKey:(id)arg1 ;
-(id)asyncDaemonWithErrorHandler:(/*^block*/id)arg1 ;
-(void)setStoreConfiguration:(SYDStoreConfiguration *)arg1 ;
-(void)processChangeDictionary:(id)arg1 ;
-(void)setAnalyticsQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void*)getValueForKey:(CFStringRef)arg1 ;
-(id)description;
-(unsigned char)synchronize;
-(long long)maximumDataLengthPerKey;
-(id)objectForKey:(id)arg1 ;
-(SYDStoreConfiguration *)storeConfiguration;
-(unsigned char)hasExternalChanges;
-(BOOL)didLogFaultForEntitlements;
-(void)synchronizationWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)updateConfiguration;
-(void)setCachedObjects:(NSCache *)arg1 ;
-(void)setSyncingWithCloudCounter:(unsigned long long)arg1 ;
-(void)registerForDaemonDidWakeNotifications;
-(long long)maximumTotalDataLength;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)copyExternalChangesWithChangeCount:(long long*)arg1 ;
-(NSCache *)cachedObjects;
-(void)setDefaultsConfiguration:(id)arg1 ;
-(id)changeToken;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(void)setChangeToken:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)analyticsQueue;
-(void)performInitialSyncIfNecessary;
-(long long)storeType;
-(CFArrayRef)copyKeyList;
-(void)scheduleRemoteSynchronization;
-(void)setDaemonWakeNotifyToken:(int)arg1 ;
-(unsigned long long)syncingWithCloudCounter;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(CFDictionaryRef)copyDictionary;
-(NSString *)storeIdentifier;
-(int)daemonWakeNotifyToken;
-(void)unregisterForSynchronizedDefaults;
-(long long)maximumKeyLength;
-(void)dealloc;
-(void)storeDidChangeWithConfiguration:(id)arg1 changeDictionary:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(id)initWithStoreIdentifier:(id)arg1 type:(long long)arg2 ;
-(void)logFaultIfNecessaryForError:(id)arg1 ;
-(void)daemonDidWake;
@end

