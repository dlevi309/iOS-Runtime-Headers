/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/


#import <PersonalizationPortraitInternals/PersonalizationPortraitInternals-Structs.h>
@class NSString, PPDKStorage, _DKEventStream;

@interface PPRecordStorageHelper : NSObject {

	NSString* _table;
	NSString* _clusterIdentifierColumn;
	unsigned _maxRecords;
	PPDKStorage* _duetStorage;
	_DKEventStream* _duetStream;
	NSString* _lastDuetImportDateKey;
	NSString* _lastDuetDeletionDateKey;

}
-(id)init;
-(id)initWithName:(id)arg1 table:(id)arg2 clusterIdentifierColumn:(id)arg3 maxRecords:(unsigned)arg4 duetStorage:(id)arg5 duetStream:(id)arg6 ;
-(id)blobFromUUID:(id)arg1 ;
-(id)uuidForStatement:(id)arg1 referencingBlobInColumn:(int)arg2 ;
-(BOOL)clearWithDatabase:(id)arg1 client:(unsigned char)arg2 deletedCount:(unsigned long long*)arg3 error:(id*)arg4 clearExternalTableReferences:(/*^block*/id)arg5 ;
-(void)truncateRecordsByDroppingOldestMakingRoomForCount:(unsigned)arg1 txnWitness:(id)arg2 ;
-(id)createTempRowIdTableForRecordsToDropMakingRoomForCount:(unsigned)arg1 txnWitness:(id)arg2 ;
-(/*^block*/id)duetEventDeletionProcessingBlockWithDatabase:(id)arg1 client:(unsigned char)arg2 ;
-(id)_lastDeletionDateWithTransaction:(id)arg1 ;
-(void)_processTombstoneEventBatch:(id)arg1 database:(id)arg2 client:(unsigned char)arg3 lastTombstoneDate:(id*)arg4 ;
-(void)_cleanDatabaseOfEventsWithUUIDs:(id)arg1 txnWitness:(id)arg2 ;
-(void)importDuetEventsWithLimit:(unsigned)arg1 database:(id)arg2 client:(unsigned char)arg3 remoteEventsOnly:(BOOL)arg4 isComplete:(BOOL*)arg5 eventImportBlock:(/*^block*/id)arg6 ;
-(void)_addEventsSourcedOnLastImportDateToSet:(id)arg1 lastDKImportDate:(id*)arg2 txnWitness:(id)arg3 ;
-(id)_importDuetEventBatch:(id)arg1 lastDKImportDate:(id)arg2 isComplete:(BOOL*)arg3 eventImportBlock:(/*^block*/id)arg4 txnWitness:(id)arg5 ;
-(void)disableSyncForBundleIds:(id)arg1 txnWitness:(id)arg2 ;
-(BOOL)deleteAllRecordsWithClusterIdentifier:(id)arg1 txnWitness:(id)arg2 atLeastOneRecordClusterRemoved:(BOOL*)arg3 deletedCount:(unsigned long long*)arg4 error:(id*)arg5 ;
-(BOOL)deleteAllRecordsWithClusterIdentifier:(id)arg1 algorithm:(unsigned)arg2 txnWitness:(id)arg3 atLeastOneRecordClusterRemoved:(BOOL*)arg4 deletedCount:(unsigned long long*)arg5 error:(id*)arg6 ;
-(BOOL)deleteAllRecordsSourcedFromBundleId:(id)arg1 documentIds:(id)arg2 txnWitness:(id)arg3 atLeastOneRecordClusterRemoved:(BOOL*)arg4 deletedCount:(unsigned long long*)arg5 error:(id*)arg6 ;
-(BOOL)deleteAllRecordsSourcedFromBundleId:(id)arg1 documentIds:(id)arg2 algorithm:(unsigned)arg3 txnWitness:(id)arg4 atLeastOneRecordClusterRemoved:(BOOL*)arg5 deletedCount:(unsigned long long*)arg6 error:(id*)arg7 ;
-(BOOL)deleteAllRecordsSourcedFromBundleId:(id)arg1 groupIds:(id)arg2 txnWitness:(id)arg3 atLeastOneRecordClusterRemoved:(BOOL*)arg4 deletedCount:(unsigned long long*)arg5 error:(id*)arg6 ;
-(BOOL)deleteAllRecordsSourcedFromBundleId:(id)arg1 groupIds:(id)arg2 algorithm:(unsigned)arg3 txnWitness:(id)arg4 atLeastOneRecordClusterRemoved:(BOOL*)arg5 deletedCount:(unsigned long long*)arg6 error:(id*)arg7 ;
-(BOOL)deleteAllRecordsSourcedFromBundleId:(id)arg1 txnWitness:(id)arg2 atLeastOneRecordClusterRemoved:(BOOL*)arg3 deletedCount:(unsigned long long*)arg4 error:(id*)arg5 ;
-(BOOL)deleteAllRecordsSourcedFromBundleId:(id)arg1 algorithm:(unsigned)arg2 txnWitness:(id)arg3 atLeastOneRecordClusterRemoved:(BOOL*)arg4 deletedCount:(unsigned long long*)arg5 error:(id*)arg6 ;
-(BOOL)deleteAllRecordsSourcedFromBundleId:(id)arg1 groupId:(id)arg2 olderThanDate:(id)arg3 txnWitness:(id)arg4 atLeastOneRecordClusterRemoved:(BOOL*)arg5 deletedCount:(unsigned long long*)arg6 error:(id*)arg7 ;
-(BOOL)deleteAllRecordsSourcedFromBundleId:(id)arg1 groupId:(id)arg2 olderThanDate:(id)arg3 algorithm:(unsigned)arg4 txnWitness:(id)arg5 atLeastOneRecordClusterRemoved:(BOOL*)arg6 deletedCount:(unsigned long long*)arg7 error:(id*)arg8 ;
-(void)deleteAllRemotelyGeneratedRecordsMissingInDuetFromDatabase:(id)arg1 withClient:(unsigned char)arg2 ;
-(void)_deleteAllRemotelyGeneratedRecordsMissingInDuetFromDatabase:(id)arg1 withClient:(unsigned char)arg2 tempTableName:(id)arg3 ;
-(id)createTempRowIdTableForRecordsSourcedFromBundleId:(id)arg1 documentIds:(id)arg2 txnWitness:(id)arg3 ;
-(id)createTempRowIdTableForRecordsSourcedFromBundleId:(id)arg1 groupIds:(id)arg2 txnWitness:(id)arg3 ;
-(id)createTempRowIdTableForRecordsSourcedFromBundleId:(id)arg1 txnWitness:(id)arg2 ;
-(id)createTempRowIdTableForRecordsSourcedFromBundleId:(id)arg1 groupId:(id)arg2 olderThanDate:(id)arg3 txnWitness:(id)arg4 ;
-(id)createTempRowIdTableForRecordsOlderThanDate:(id)arg1 txnWitness:(id)arg2 ;
-(id)createTempTableContainingRowsFromQuery:(id)arg1 descriptiveTableName:(id)arg2 txnWitness:(id)arg3 bind:(/*^block*/id)arg4 ;
-(void)deleteRecordsWithRowIdsFromTableWithName:(id)arg1 txnWitness:(id)arg2 atLeastOneRecordClusterRemoved:(BOOL*)arg3 deletedCount:(unsigned long long*)arg4 ;
-(void)_deleteRecordsWithRowIdsFromQuery:(id)arg1 txnWitness:(id)arg2 atLeastOneRecordClusterRemoved:(BOOL*)arg3 deletedCount:(unsigned long long*)arg4 bind:(/*^block*/id)arg5 ;
-(PASDBIterAction_)_processRowForDeletionWithStatement:(id)arg1 handle:(id)arg2 ;
-(void)_deleteDKEventsWithRowIdQuery:(id)arg1 txnWitness:(id)arg2 ;
-(void)fixupDKEventsWithDatabase:(id)arg1 fixup49995922Table:(id)arg2 batchSize:(unsigned)arg3 createRecordWithStatement:(/*^block*/id)arg4 eventForRecord:(/*^block*/id)arg5 isComplete:(BOOL*)arg6 ;
@end

