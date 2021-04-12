/*
* Generated on Thursday, January 14, 2021 at 2:28:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RemoteConfiguration.framework/RemoteConfiguration
*/

#import <libobjc.A.dylib/RCOperationThrottlerDelegate.h>

@protocol RCKeyValueStoreMigrating, RCOperationThrottler;
@class NSString, NSMutableDictionary, RCMutexLock, NSDictionary;

@interface RCKeyValueStore : NSObject <RCOperationThrottlerDelegate> {

	BOOL _shouldExportJSONSidecar;
	BOOL _needSave;
	NSString* _name;
	unsigned long long _storeSize;
	NSMutableDictionary* _objectsByKey;
	NSString* _storeDirectory;
	unsigned long long _clientVersion;
	unsigned long long _optionsMask;
	id<RCKeyValueStoreMigrating> _migrator;
	RCMutexLock* _writeLock;
	id<RCOperationThrottler> _saveThrottler;

}

@property (nonatomic,retain) NSString * name;                                     //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) unsigned long long storeSize;                        //@synthesize storeSize=_storeSize - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * objectsByKey;                  //@synthesize objectsByKey=_objectsByKey - In the implementation block
@property (assign,nonatomic) BOOL needSave;                                       //@synthesize needSave=_needSave - In the implementation block
@property (nonatomic,retain) NSString * storeDirectory;                           //@synthesize storeDirectory=_storeDirectory - In the implementation block
@property (assign,nonatomic) unsigned long long clientVersion;                    //@synthesize clientVersion=_clientVersion - In the implementation block
@property (assign,nonatomic) unsigned long long optionsMask;                      //@synthesize optionsMask=_optionsMask - In the implementation block
@property (nonatomic,retain) id<RCKeyValueStoreMigrating> migrator;               //@synthesize migrator=_migrator - In the implementation block
@property (nonatomic,retain) RCMutexLock * writeLock;                             //@synthesize writeLock=_writeLock - In the implementation block
@property (nonatomic,retain) id<RCOperationThrottler> saveThrottler;              //@synthesize saveThrottler=_saveThrottler - In the implementation block
@property (assign,nonatomic) BOOL shouldExportJSONSidecar;                        //@synthesize shouldExportJSONSidecar=_shouldExportJSONSidecar - In the implementation block
@property (nonatomic,readonly) NSDictionary * asDictionary; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)persistenceQueue;
+(BOOL)shouldDumpToJSON;
-(id<RCOperationThrottler>)saveThrottler;
-(void)saveWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(NSDictionary *)asDictionary;
-(void)operationThrottler:(id)arg1 performAsyncOperationWithCompletion:(/*^block*/id)arg2 ;
-(void)setMigrator:(id<RCKeyValueStoreMigrating>)arg1 ;
-(void)removeObjectsForKeys:(id)arg1 ;
-(id)init;
-(id)objectsForKeys:(id)arg1 ;
-(unsigned long long)storeSize;
-(void)setSaveThrottler:(id<RCOperationThrottler>)arg1 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(void)setBoolValue:(BOOL)arg1 forKey:(id)arg2 ;
-(BOOL)containsObjectForKey:(id)arg1 ;
-(id)initWithName:(id)arg1 directory:(id)arg2 version:(unsigned long long)arg3 options:(unsigned long long)arg4 migrator:(id)arg5 ;
-(unsigned long long)clientVersion;
-(id)_dictionary;
-(BOOL)_shouldMigrateOnUpgrade;
-(id)_loadFromDisk;
-(void)_logCacheStatus;
-(void)_saveAsyncWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)shouldExportJSONSidecar;
-(BOOL)needSave;
-(void)removeObjectForKey:(id)arg1 ;
-(id)_initializeStoreDirectoryWithName:(id)arg1 ;
-(BOOL)boolValueForKey:(id)arg1 ;
-(NSMutableDictionary *)objectsByKey;
-(NSString *)name;
-(void)setOptionsMask:(unsigned long long)arg1 ;
-(id<RCKeyValueStoreMigrating>)migrator;
-(void)setWriteLock:(RCMutexLock *)arg1 ;
-(NSString *)storeDirectory;
-(id)initWithName:(id)arg1 directory:(id)arg2 version:(unsigned long long)arg3 options:(unsigned long long)arg4 ;
-(id)objectForKey:(id)arg1 ;
-(void)setObjectsByKey:(NSMutableDictionary *)arg1 ;
-(void)setOptionBackupEnabled:(BOOL)arg1 ;
-(void)removeAllObjects;
-(void)setShouldExportJSONSidecar:(BOOL)arg1 ;
-(BOOL)_isBackupEnabled;
-(void)setStoreDirectory:(NSString *)arg1 ;
-(void)setStoreSize:(unsigned long long)arg1 ;
-(void)updateObjectsForKeys:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(RCMutexLock *)writeLock;
-(void)setName:(NSString *)arg1 ;
-(unsigned long long)optionsMask;
-(void)setNeedSave:(BOOL)arg1 ;
-(id)allKeys;
-(void)_queueSave;
-(void)_clearStore;
-(void)addEntriesFromDictionary:(id)arg1 ;
-(void)setClientVersion:(unsigned long long)arg1 ;
-(BOOL)_persistOnlyInMemoryEnabled;
-(void)setObjects:(id)arg1 forKeys:(id)arg2 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(void)addAllEntriesToDictionary:(id)arg1 ;
@end

