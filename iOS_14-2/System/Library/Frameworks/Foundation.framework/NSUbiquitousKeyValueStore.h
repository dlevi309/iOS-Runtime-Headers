/*
* Generated on Thursday, January 14, 2021 at 2:20:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/


@class NSDictionary;

@interface NSUbiquitousKeyValueStore : NSObject {

	id _private1;
	id _private2;
	id _private3;
	void* _private4;
	void** _reserved[3];
	int _daemonWakeToken;

}

@property (copy,readonly) NSDictionary * dictionaryRepresentation; 
+(id)defaultStore;
+(id)additionalStoreWithIdentifier:(id)arg1 ;
+(void)_synchronizeStoresForced:(BOOL)arg1 ;
+(void)_appWillDeactivate;
+(void)_appWillActivate;
-(void)setDictionary:(id)arg1 forKey:(id)arg2 ;
-(NSDictionary *)dictionaryRepresentation;
-(id)initWithBundleIdentifier:(id)arg1 storeIdentifier:(id)arg2 additionalStore:(BOOL)arg3 storeType:(long long)arg4 ;
-(id)initWithBundleIdentifier:(id)arg1 ;
-(id)dataForKey:(id)arg1 ;
-(void)setString:(id)arg1 forKey:(id)arg2 ;
-(void)setData:(id)arg1 forKey:(id)arg2 ;
-(BOOL)_postDidChangeNotificationExternalChanges:(id)arg1 sourceChangeCount:(long long)arg2 ;
-(id)dictionaryForKey:(id)arg1 ;
-(id)_initWithStoreIdentifier:(id)arg1 usingEndToEndEncryption:(BOOL)arg2 ;
-(id)initWithBundleIdentifier:(id)arg1 storeIdentifier:(id)arg2 additionalStore:(BOOL)arg3 ;
-(id)init;
-(id)initWithBundleIdentifier:(id)arg1 storeIdentifier:(id)arg2 ;
-(void)_sourceDidChangePassthroughNotification:(id)arg1 ;
-(void)setDouble:(double)arg1 forKey:(id)arg2 ;
-(void)registerDefaultValues:(id)arg1 ;
-(void)setArray:(id)arg1 forKey:(id)arg2 ;
-(double)doubleForKey:(id)arg1 ;
-(unsigned long long)maximumKeyCount;
-(void)removeObjectForKey:(id)arg1 ;
-(BOOL)_synchronizeForced:(BOOL)arg1 notificationQueue:(id)arg2 ;
-(void)_scheduleRemoteSynchronization;
-(int)_storeChangeFromSourceChange:(int)arg1 ;
-(BOOL)synchronize;
-(unsigned long long)maximumDataLengthPerKey;
-(void)_adjustTimer:(id)arg1 ;
-(BOOL)synchronizeWithSourceForced:(BOOL)arg1 ;
-(id)objectForKey:(id)arg1 ;
-(void)_syncConcurrentlyForced:(BOOL)arg1 ;
-(long long)longLongForKey:(id)arg1 ;
-(void)_useSourceSyncWithBlock:(/*^block*/id)arg1 ;
-(id)_remotePreferencesSource;
-(void)_setShouldAvoidSynchronize:(BOOL)arg1 ;
-(void)_useSourceAsyncWithBlock:(/*^block*/id)arg1 ;
-(void)_setHasPendingSynchronize:(BOOL)arg1 ;
-(void)_syncConcurrently;
-(void)_sourceDidChange:(id)arg1 ;
-(void)_registerToDaemon;
-(void)_sendPingToDaemon;
-(void)synchronizeWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_unregisterFromDaemon;
-(BOOL)boolForKey:(id)arg1 ;
-(BOOL)_hasPendingSynchronize;
-(id)arrayForKey:(id)arg1 ;
-(unsigned long long)maximumTotalDataLength;
-(BOOL)_synchronizeForced:(BOOL)arg1 ;
-(void)_pleaseSynchronize:(id)arg1 ;
-(void)setLongLong:(long long)arg1 forKey:(id)arg2 ;
-(void)_rethrowException:(id)arg1 ;
-(void)setBool:(BOOL)arg1 forKey:(id)arg2 ;
-(void)_configurationDidChange;
-(void)_adjustTimerForAutosync;
-(BOOL)_shouldAvoidSynchronize;
-(id)stringForKey:(id)arg1 ;
-(unsigned long long)maximumKeyLength;
-(void)dealloc;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
@end

