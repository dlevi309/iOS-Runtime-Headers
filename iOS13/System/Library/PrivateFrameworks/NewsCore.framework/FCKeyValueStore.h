/*
* Generated on Monday, March 1, 2021 at 2:32:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <libobjc.A.dylib/FCJSONEncodableObjectProviding.h>

@protocol NFLocking, FCKeyValueStoreMigrating;
@class NSString, NSMutableDictionary, FCKeyValueStoreClassRegistry, NSDictionary;

@interface FCKeyValueStore : NSObject <FCJSONEncodableObjectProviding> {

	BOOL _shouldExportJSONSidecar;
	BOOL _unsafeWaitingOnSave;
	NSString* _name;
	unsigned long long _storeSize;
	NSMutableDictionary* _unsafeObjectsByKey;
	id<NFLocking> _lock;
	NSString* _storeDirectory;
	unsigned long long _clientVersion;
	unsigned long long _optionsMask;
	FCKeyValueStoreClassRegistry* _classRegistry;
	id<FCKeyValueStoreMigrating> _migrator;
	/*^block*/id _objectHandler;
	/*^block*/id _arrayObjectHandler;
	/*^block*/id _dictionaryKeyHandler;
	/*^block*/id _dictionaryValueHandler;

}

@property (nonatomic,retain) NSString * name;                                           //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) unsigned long long storeSize;                              //@synthesize storeSize=_storeSize - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * unsafeObjectsByKey;                  //@synthesize unsafeObjectsByKey=_unsafeObjectsByKey - In the implementation block
@property (assign,nonatomic) BOOL unsafeWaitingOnSave;                                  //@synthesize unsafeWaitingOnSave=_unsafeWaitingOnSave - In the implementation block
@property (nonatomic,retain) id<NFLocking> lock;                                        //@synthesize lock=_lock - In the implementation block
@property (nonatomic,retain) NSString * storeDirectory;                                 //@synthesize storeDirectory=_storeDirectory - In the implementation block
@property (assign,nonatomic) unsigned long long clientVersion;                          //@synthesize clientVersion=_clientVersion - In the implementation block
@property (assign,nonatomic) unsigned long long optionsMask;                            //@synthesize optionsMask=_optionsMask - In the implementation block
@property (nonatomic,retain) FCKeyValueStoreClassRegistry * classRegistry;              //@synthesize classRegistry=_classRegistry - In the implementation block
@property (nonatomic,retain) id<FCKeyValueStoreMigrating> migrator;                     //@synthesize migrator=_migrator - In the implementation block
@property (nonatomic,copy) id objectHandler;                                            //@synthesize objectHandler=_objectHandler - In the implementation block
@property (nonatomic,copy) id arrayObjectHandler;                                       //@synthesize arrayObjectHandler=_arrayObjectHandler - In the implementation block
@property (nonatomic,copy) id dictionaryKeyHandler;                                     //@synthesize dictionaryKeyHandler=_dictionaryKeyHandler - In the implementation block
@property (nonatomic,copy) id dictionaryValueHandler;                                   //@synthesize dictionaryValueHandler=_dictionaryValueHandler - In the implementation block
@property (assign,nonatomic) BOOL shouldExportJSONSidecar;                              //@synthesize shouldExportJSONSidecar=_shouldExportJSONSidecar - In the implementation block
@property (nonatomic,readonly) NSDictionary * asDictionary; 
+(id)persistenceQueue;
+(BOOL)shouldDumpToJSON;
-(id)init;
-(NSString *)name;
-(id)allKeys;
-(void)removeAllObjects;
-(id)objectForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(id<NFLocking>)lock;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(id)keysOfEntriesPassingTest:(/*^block*/id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)addEntriesFromDictionary:(id)arg1 ;
-(void)removeObjectsForKeys:(id)arg1 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(void)setObjects:(id)arg1 forKeys:(id)arg2 ;
-(id)_dictionary;
-(void)save;
-(id)objectsForKeys:(id)arg1 ;
-(void)setLock:(id<NFLocking>)arg1 ;
-(BOOL)containsObjectForKey:(id)arg1 ;
-(void)_save;
-(void)setStoreSize:(unsigned long long)arg1 ;
-(unsigned long long)storeSize;
-(id)_loadFromDisk;
-(FCKeyValueStoreClassRegistry *)classRegistry;
-(void)_clearStore;
-(id<FCKeyValueStoreMigrating>)migrator;
-(void)setMigrator:(id<FCKeyValueStoreMigrating>)arg1 ;
-(BOOL)_threadSafe;
-(unsigned long long)clientVersion;
-(void)setClientVersion:(unsigned long long)arg1 ;
-(void)saveWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSDictionary *)asDictionary;
-(BOOL)_isCloudBackupEnabled;
-(void)setCloudBackupEnabled:(BOOL)arg1 ;
-(id)_initializeStoreDirectoryWithName:(id)arg1 ;
-(NSString *)storeDirectory;
-(BOOL)_shouldMigrateOnUpgrade;
-(BOOL)_persistOnlyInMemoryEnabled;
-(void)_logCacheStatus;
-(void)updateObjectsForKeys:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)setBoolValue:(BOOL)arg1 forKey:(id)arg2 ;
-(BOOL)boolValueForKey:(id)arg1 ;
-(void)addAllEntriesToDictionary:(id)arg1 ;
-(BOOL)shouldExportJSONSidecar;
-(void)setShouldExportJSONSidecar:(BOOL)arg1 ;
-(void)setStoreDirectory:(NSString *)arg1 ;
-(unsigned long long)optionsMask;
-(void)setOptionsMask:(unsigned long long)arg1 ;
-(void)setJSONEncodingHandlersWithObjectHandler:(/*^block*/id)arg1 arrayObjectHandler:(/*^block*/id)arg2 dictionaryKeyHandler:(/*^block*/id)arg3 dictionaryValueHandler:(/*^block*/id)arg4 ;
-(id)jsonEncodableObject;
-(id)initWithName:(id)arg1 directory:(id)arg2 version:(unsigned long long)arg3 options:(unsigned long long)arg4 classRegistry:(id)arg5 ;
-(id)initWithName:(id)arg1 directory:(id)arg2 version:(unsigned long long)arg3 options:(unsigned long long)arg4 classRegistry:(id)arg5 migrator:(id)arg6 ;
-(id)fc_jsonEncodableDictionary;
-(id)fc_jsonString;
-(void)_maybeWriteObjectsByKey:(/*^block*/id)arg1 ;
-(void)_writeObjectsByKey:(/*^block*/id)arg1 ;
-(void)_readObjectsByKey:(/*^block*/id)arg1 ;
-(void)setObjectHandler:(id)arg1 ;
-(void)setArrayObjectHandler:(id)arg1 ;
-(void)setDictionaryKeyHandler:(id)arg1 ;
-(void)setDictionaryValueHandler:(id)arg1 ;
-(NSMutableDictionary *)unsafeObjectsByKey;
-(BOOL)unsafeWaitingOnSave;
-(void)setUnsafeWaitingOnSave:(BOOL)arg1 ;
-(id)fc_jsonStringWithDictionary:(id)arg1 ;
-(void)_maybeSaveJSONRepresentationWithDictionary:(id)arg1 ;
-(id)objectHandler;
-(id)arrayObjectHandler;
-(id)dictionaryKeyHandler;
-(id)dictionaryValueHandler;
-(id)fc_jsonEncodableDictionaryWithDictionary:(id)arg1 ;
-(void)setUnsafeObjectsByKey:(NSMutableDictionary *)arg1 ;
-(void)setClassRegistry:(FCKeyValueStoreClassRegistry *)arg1 ;
@end

