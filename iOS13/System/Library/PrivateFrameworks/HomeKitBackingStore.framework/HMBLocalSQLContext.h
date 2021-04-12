/*
* Generated on Monday, March 1, 2021 at 2:33:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
*/

#import <HomeKitBackingStore/HomeKitBackingStore-Structs.h>
#import <HomeKitBackingStore/HMBSQLContext.h>

@class NSDictionary, NSMapTable, NSMutableDictionary, HMBSQLQueryStatement;

@interface HMBLocalSQLContext : HMBSQLContext {

	sqlite3_stmtRef insertStore;
	sqlite3_stmtRef deleteStore;
	sqlite3_stmtRef selectStore;
	sqlite3_stmtRef selectStores;
	sqlite3_stmtRef updateStoreReplicationData;
	sqlite3_stmtRef insertBlock;
	sqlite3_stmtRef selectBlock;
	sqlite3_stmtRef deleteBlock;
	sqlite3_stmtRef deleteBlocksStore;
	sqlite3_stmtRef updateBlock;
	sqlite3_stmtRef selectReadyBlocks;
	sqlite3_stmtRef selectReadyInputBlocks;
	sqlite3_stmtRef deleteNullBlocks;
	sqlite3_stmtRef insertItem;
	sqlite3_stmtRef insertDeletionItemsForRecordsOfType;
	sqlite3_stmtRef insertDeletionItemsForRecordWithUUID;
	sqlite3_stmtRef insertDeletionItemsForRecordsWithParentUUID;
	sqlite3_stmtRef updateItem;
	sqlite3_stmtRef deleteItem;
	sqlite3_stmtRef deleteItemsBlock;
	sqlite3_stmtRef deleteItemsStore;
	sqlite3_stmtRef deleteItemStoreExternal;
	sqlite3_stmtRef selectItemBlockExteral;
	sqlite3_stmtRef selectItemsBlock;
	sqlite3_stmtRef selectItemsBlockLimit;
	sqlite3_stmtRef deleteNullItems;
	sqlite3_stmtRef deleteNullItemsType;
	sqlite3_stmtRef insertRecord;
	sqlite3_stmtRef updateRecord;
	sqlite3_stmtRef updateRecordExternal;
	sqlite3_stmtRef updateRecordExternalExternal;
	sqlite3_stmtRef updateRecordExternalUUID;
	sqlite3_stmtRef updateRecordPush;
	sqlite3_stmtRef updateRecordPushUUID;
	sqlite3_stmtRef updateRecordClearPushExpected;
	sqlite3_stmtRef updateRecordsClearPush;
	sqlite3_stmtRef updateRecordType;
	sqlite3_stmtRef deleteRecord;
	sqlite3_stmtRef deleteRecordBlock;
	sqlite3_stmtRef deleteRecordUUID;
	sqlite3_stmtRef deleteRecordExternal;
	sqlite3_stmtRef deleteRecordsStore;
	sqlite3_stmtRef deleteZombieRecords;
	sqlite3_stmtRef selectRecord;
	sqlite3_stmtRef selectRecordUUIDExternal;
	sqlite3_stmtRef selectRecordUUID;
	sqlite3_stmtRef selectRecordExternal;
	sqlite3_stmtRef selectRecordsPushBlock;
	sqlite3_stmtRef selectRecordsParentUUID;
	sqlite3_stmtRef selectRecordsParentUUIDType;
	sqlite3_stmtRef selectRecordsOfType;
	sqlite3_stmtRef selectRecords;
	sqlite3_stmtRef insertIndexSentinel;
	sqlite3_stmtRef deleteIndexSentinels;
	sqlite3_stmtRef deleteIndexSentinelsStore;
	sqlite3_stmtRef selectIndexSentinel;
	NSDictionary* _queryTables;
	NSMapTable* _queryContextsByClass;
	NSMutableDictionary* _queryContextsByModelType;
	HMBSQLQueryStatement* _selectAllRecordRows;
	HMBSQLQueryStatement* _selectAllRecordTypeRows;

}

@property (retain) NSDictionary * queryTables;                                            //@synthesize queryTables=_queryTables - In the implementation block
@property (retain) NSMapTable * queryContextsByClass;                                     //@synthesize queryContextsByClass=_queryContextsByClass - In the implementation block
@property (retain) NSMutableDictionary * queryContextsByModelType;                        //@synthesize queryContextsByModelType=_queryContextsByModelType - In the implementation block
@property (nonatomic,retain) HMBSQLQueryStatement * selectAllRecordRows;                  //@synthesize selectAllRecordRows=_selectAllRecordRows - In the implementation block
@property (nonatomic,retain) HMBSQLQueryStatement * selectAllRecordTypeRows;              //@synthesize selectAllRecordTypeRows=_selectAllRecordTypeRows - In the implementation block
+(id)logCategory;
+(id)openWithURL:(id)arg1 readOnly:(BOOL)arg2 error:(id*)arg3 ;
+(void)unlinkDatastoreAt:(id)arg1 everything:(BOOL)arg2 ;
-(id)initialize;
-(void)finalize;
-(id)prepare;
-(id)flush:(BOOL)arg1 ;
-(id)sqlBlockWithActivity:(id)arg1 block:(/*^block*/id)arg2 ;
-(id)_selectReadyBlocksWithZoneRow:(unsigned long long)arg1 error:(id*)arg2 ;
-(BOOL)_deleteNullItemsWithZoneRow:(unsigned long long)arg1 error:(id*)arg2 ;
-(BOOL)_deleteNullBlocksWithZoneRow:(unsigned long long)arg1 error:(id*)arg2 ;
-(BOOL)_deleteZombieRecordsWithZoneRow:(unsigned long long)arg1 error:(id*)arg2 ;
-(id)_selectBlockWithRow:(unsigned long long)arg1 error:(id*)arg2 ;
-(BOOL)sqlBlockWithActivity:(id)arg1 error:(id*)arg2 block:(/*^block*/id)arg3 ;
-(unsigned long long)_insertBlockWithZoneRow:(unsigned long long)arg1 type:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)_selectItemsWithBlockRow:(unsigned long long)arg1 rowGreaterThan:(unsigned long long)arg2 limit:(unsigned long long)arg3 returning:(unsigned long long)arg4 error:(id*)arg5 ;
-(id)_selectRecordModelIDWithZoneRow:(unsigned long long)arg1 externalID:(id)arg2 error:(id*)arg3 ;
-(BOOL)_deleteItemWithRow:(unsigned long long)arg1 error:(id*)arg2 ;
-(NSMapTable *)queryContextsByClass;
-(BOOL)_deleteRecordWithRow:(unsigned long long)arg1 error:(id*)arg2 ;
-(BOOL)_updateRecordWithRow:(unsigned long long)arg1 modelEncoding:(unsigned long long)arg2 modelData:(id)arg3 modelSchema:(id)arg4 error:(id*)arg5 ;
-(BOOL)_updateRecordWithRow:(unsigned long long)arg1 pushBlockRow:(unsigned long long)arg2 pushData:(id)arg3 pushEncoding:(unsigned long long)arg4 error:(id*)arg5 ;
-(BOOL)_updateRecordWithRow:(unsigned long long)arg1 externalID:(id)arg2 externalData:(id)arg3 error:(id*)arg4 ;
-(BOOL)_updateRecordWithRow:(unsigned long long)arg1 modelType:(id)arg2 modelSchema:(id)arg3 error:(id*)arg4 ;
-(unsigned long long)_insertRecordWithZoneRow:(unsigned long long)arg1 externalID:(id)arg2 externalData:(id)arg3 modelID:(id)arg4 parentModelID:(id)arg5 modelType:(id)arg6 modelEncoding:(unsigned long long)arg7 modelData:(id)arg8 modelSchema:(id)arg9 pushEncoding:(unsigned long long)arg10 pushData:(id)arg11 pushBlockRow:(unsigned long long)arg12 error:(id*)arg13 ;
-(id)sqlTransactionWithActivity:(id)arg1 block:(/*^block*/id)arg2 ;
-(unsigned long long)_insertBlockWithZoneRow:(unsigned long long)arg1 type:(unsigned long long)arg2 options:(id)arg3 items:(id)arg4 error:(id*)arg5 ;
-(BOOL)_updateBlockWithRow:(unsigned long long)arg1 options:(id)arg2 error:(id*)arg3 ;
-(BOOL)_updateRecordsClearPushWithPushBlockRow:(unsigned long long)arg1 error:(id*)arg2 ;
-(id)_selectRecordWithZoneRow:(unsigned long long)arg1 modelID:(id)arg2 returning:(unsigned long long)arg3 error:(id*)arg4 ;
-(unsigned long long)_insertItemWithZoneRow:(unsigned long long)arg1 blockRow:(unsigned long long)arg2 type:(unsigned long long)arg3 externalID:(id)arg4 externalData:(id)arg5 modelEncoding:(unsigned long long)arg6 modelData:(id)arg7 error:(id*)arg8 ;
-(BOOL)_updateItemWithZoneRow:(unsigned long long)arg1 blockRow:(unsigned long long)arg2 type:(unsigned long long)arg3 externalID:(id)arg4 externalData:(id)arg5 modelEncoding:(unsigned long long)arg6 modelData:(id)arg7 error:(id*)arg8 ;
-(BOOL)_deleteItemsWithBlockRow:(unsigned long long)arg1 error:(id*)arg2 ;
-(BOOL)_deleteBlockWithRow:(unsigned long long)arg1 error:(id*)arg2 ;
-(NSDictionary *)queryTables;
-(BOOL)_updateRecordWithZoneRow:(unsigned long long)arg1 modelID:(id)arg2 externalData:(id)arg3 error:(id*)arg4 ;
-(BOOL)_updateRecordWithZoneRow:(unsigned long long)arg1 externalID:(id)arg2 externalData:(id)arg3 error:(id*)arg4 ;
-(BOOL)_deleteZoneWithRow:(unsigned long long)arg1 error:(id*)arg2 ;
-(BOOL)sqlTransactionWithActivity:(id)arg1 error:(id*)arg2 block:(/*^block*/id)arg3 ;
-(HMBSQLQueryStatement *)selectAllRecordTypeRows;
-(id)_fetchAllZones:(id*)arg1 ;
-(unsigned long long)_insertZoneWithIdentification:(id)arg1 name:(id)arg2 error:(id*)arg3 ;
-(NSMutableDictionary *)queryContextsByModelType;
-(id)_selectRecordsWithBlockRow:(unsigned long long)arg1 returning:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)_resetOutputForRecordsWithBlockRow:(unsigned long long)arg1 error:(id*)arg2 ;
-(unsigned long long)_deleteRecordWithRow:(unsigned long long)arg1 expectedOutputBlockRow:(unsigned long long)arg2 error:(id*)arg3 ;
-(unsigned long long)_clearPushForRecordRow:(unsigned long long)arg1 expectedOutputBlockRow:(unsigned long long)arg2 error:(id*)arg3 ;
-(HMBSQLQueryStatement *)selectAllRecordRows;
-(id)_selectIndexSentinelForZoneRow:(unsigned long long)arg1 modelType:(id)arg2 error:(id*)arg3 ;
-(BOOL)_insertIndexSentinelWithZoneRow:(unsigned long long)arg1 modelType:(id)arg2 error:(id*)arg3 ;
-(BOOL)_updateRecordWithZoneRow:(unsigned long long)arg1 modelID:(id)arg2 pushEncoding:(unsigned long long)arg3 pushData:(id)arg4 pushBlockRow:(unsigned long long)arg5 error:(id*)arg6 ;
-(void)reloadSQLQueryMetadata;
-(long long)verifyTables;
-(void)prepareTables;
-(void)setQueryTables:(NSDictionary *)arg1 ;
-(unsigned long long)_insertDeletionItemsWithZoneRow:(unsigned long long)arg1 blockRow:(unsigned long long)arg2 type:(unsigned long long)arg3 modelType:(id)arg4 error:(id*)arg5 ;
-(unsigned long long)_insertDeletionItemWithZoneRow:(unsigned long long)arg1 blockRow:(unsigned long long)arg2 type:(unsigned long long)arg3 modelID:(id)arg4 error:(id*)arg5 ;
-(unsigned long long)_insertDeletionItemsWithZoneRow:(unsigned long long)arg1 blockRow:(unsigned long long)arg2 type:(unsigned long long)arg3 parentModelID:(id)arg4 error:(id*)arg5 ;
-(id)_selectReadyBlocksWithZoneRow:(unsigned long long)arg1 type:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)_selectItemsWithBlockRow:(unsigned long long)arg1 returning:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)_deleteRecordWithZoneRow:(unsigned long long)arg1 modelID:(id)arg2 error:(id*)arg3 ;
-(id)initWithURL:(id)arg1 readOnly:(BOOL)arg2 ;
-(long long)migrateFromSchemaVersion:(long long)arg1 error:(id*)arg2 ;
-(id)_selectRecordWithRow:(unsigned long long)arg1 returning:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)_selectRecordWithZoneRow:(unsigned long long)arg1 externalID:(id)arg2 returning:(unsigned long long)arg3 error:(id*)arg4 ;
-(id)selectAllRecordsWithZoneRow:(unsigned long long)arg1 returning:(unsigned long long)arg2 ;
-(BOOL)_deleteRecordsWithZoneRow:(unsigned long long)arg1 error:(id*)arg2 ;
-(BOOL)_deleteItemWithZoneRow:(unsigned long long)arg1 error:(id*)arg2 ;
-(BOOL)_deleteBlocksWithZoneRow:(unsigned long long)arg1 error:(id*)arg2 ;
-(BOOL)_deleteIndexSentinelsWithZoneRow:(unsigned long long)arg1 error:(id*)arg2 ;
-(id)_selectRecordWithZoneRow:(unsigned long long)arg1 parentModelID:(id)arg2 modelType:(id)arg3 returning:(unsigned long long)arg4 error:(id*)arg5 ;
-(id)_selectRecordWithZoneRow:(unsigned long long)arg1 parentModelID:(id)arg2 returning:(unsigned long long)arg3 error:(id*)arg4 ;
-(id)_selectRecordsWithZoneRow:(unsigned long long)arg1 returning:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)_selectRecordsWithZoneRow:(unsigned long long)arg1 modelType:(id)arg2 returning:(unsigned long long)arg3 error:(id*)arg4 ;
-(BOOL)_selectRecordsWithZoneRow:(unsigned long long)arg1 modelType:(id)arg2 returning:(unsigned long long)arg3 error:(id*)arg4 handler:(/*^block*/id)arg5 ;
-(long long)migrateToSchema01WithError:(id*)arg1 ;
-(id)_selectZoneWithRow:(unsigned long long)arg1 error:(id*)arg2 ;
-(BOOL)_updateZoneWithRow:(unsigned long long)arg1 replication:(id)arg2 error:(id*)arg3 ;
-(unsigned long long)_insertItemWithZoneRow:(unsigned long long)arg1 blockRow:(unsigned long long)arg2 type:(unsigned long long)arg3 modelType:(id)arg4 error:(id*)arg5 ;
-(BOOL)_deleteItemWithZoneRow:(unsigned long long)arg1 type:(unsigned long long)arg2 externalID:(id)arg3 error:(id*)arg4 ;
-(id)_selectItemWithZoneRow:(unsigned long long)arg1 type:(unsigned long long)arg2 externalID:(id)arg3 returning:(unsigned long long)arg4 error:(id*)arg5 ;
-(BOOL)_deleteNullItemsWithZoneRow:(unsigned long long)arg1 type:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)_deleteIndexSentinelsWithModelType:(id)arg1 error:(id*)arg2 ;
-(void)setQueryContextsByClass:(NSMapTable *)arg1 ;
-(void)setQueryContextsByModelType:(NSMutableDictionary *)arg1 ;
-(void)setSelectAllRecordRows:(HMBSQLQueryStatement *)arg1 ;
-(void)setSelectAllRecordTypeRows:(HMBSQLQueryStatement *)arg1 ;
-(BOOL)_deleteRecordWithZoneRow:(unsigned long long)arg1 externalID:(id)arg2 error:(id*)arg3 ;
@end

