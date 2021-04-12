/*
* Generated on Monday, March 1, 2021 at 2:32:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IDSKVStore.framework/IDSKVStore
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSString, CSDBThreadedRecordStore;

@interface IDSKVStore : NSObject {

	NSObject*<OS_dispatch_queue> _ivarQueue;
	NSObject*<OS_dispatch_source> _databaseCloseTimer;
	double _databaseLastUpdateTime;
	unsigned _dataProtectionClass;
	NSString* _storeName;
	NSString* _path;
	CSDBThreadedRecordStore* _messageStore;

}

@property (nonatomic,copy) NSString * storeName;                                  //@synthesize storeName=_storeName - In the implementation block
@property (nonatomic,copy) NSString * path;                                       //@synthesize path=_path - In the implementation block
@property (nonatomic,retain) CSDBThreadedRecordStore * messageStore;              //@synthesize messageStore=_messageStore - In the implementation block
@property (assign,nonatomic) unsigned dataProtectionClass;                        //@synthesize dataProtectionClass=_dataProtectionClass - In the implementation block
+(void)_invalidateCachesForMessageStore:(id)arg1 ;
+(void)_initializeMessageStoreIfNeeded:(id)arg1 path:(id)arg2 dataProtectionClass:(unsigned)arg3 ;
-(void)setStoreName:(NSString *)arg1 ;
-(NSString *)path;
-(void)setPath:(NSString *)arg1 ;
-(NSString *)storeName;
-(void)deleteDatabase;
-(unsigned)dataProtectionClass;
-(void)setDataProtectionClass:(unsigned)arg1 ;
-(CSDBThreadedRecordStore *)messageStore;
-(void)setMessageStore:(CSDBThreadedRecordStore *)arg1 ;
-(void)_performInitialHousekeepingOnIvarQueue;
-(void)_onIvarQueue_deleteSerializedValueForKey:(id)arg1 valueType:(char)arg2 ;
-(void)_onIvarQueue_performBlock:(/*^block*/id)arg1 initializeStore:(BOOL)arg2 ;
-(void)_onIvarQueue_performBlock:(/*^block*/id)arg1 initializeStore:(BOOL)arg2 waitUntilDone:(BOOL)arg3 ;
-(void)_onIvarQueue_persistSerializedValue:(id)arg1 forKey:(id)arg2 valueType:(char)arg3 ;
-(id)_onIvarQueue_serializedValueForKey:(id)arg1 valueType:(char)arg2 ;
-(id)_onIvarQueue_serializedValuesUpToLimit:(unsigned long long)arg1 valueType:(char)arg2 deleteContext:(id*)arg3 ;
-(void)_onIvarQueue_deleteDatesBefore:(id)arg1 after:(id)arg2 ;
-(void)_onIvarQueue_deleteUpToRowID:(unsigned long long)arg1 valueType:(char)arg2 ;
-(void)_clearDatabaseCloseTimerOnIvarQueue;
-(void)__closeDatabaseOnIvarQueue;
-(void)closeDatabaseSynchronously:(BOOL)arg1 ;
-(void)_setDatabaseCloseTimerOnIvarQueue;
-(id)initWithPath:(id)arg1 storeName:(id)arg2 dataProtectionClass:(unsigned)arg3 ;
-(BOOL)persistData:(id)arg1 forKey:(id)arg2 error:(id*)arg3 ;
-(id)dataForKey:(id)arg1 error:(id*)arg2 ;
-(id)datasUpToLimit:(unsigned long long)arg1 deleteContext:(id*)arg2 error:(id*)arg3 ;
-(BOOL)deleteEntriesBeforeDate:(id)arg1 afterDate:(id)arg2 error:(id*)arg3 ;
-(BOOL)deleteBatchWithContext:(id)arg1 error:(id*)arg2 ;
@end

