/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/


#import <PersonalizationPortraitInternals/PersonalizationPortraitInternals-Structs.h>
@class PPSQLDatabase, PPDKStorage, PPRecordStorageHelper;

@interface PPNamedEntityStorage : NSObject {

	PPSQLDatabase* _db;
	PPDKStorage* _dkStorage;
	id _deletionObserver;
	PPRecordStorageHelper* _storageHelper;

}
+(double)_scoreEntityWithInitialScore:(double)arg1 decayRate:(double)arg2 extractionDate:(id)arg3 scoringDate:(id)arg4 ;
+(id)_loadTrieFromLocalAsset:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)initWithDatabase:(id)arg1 ;
-(BOOL)clearWithError:(id*)arg1 deletedCount:(unsigned long long*)arg2 ;
-(BOOL)iterNamedEntityRecordsWithQuery:(id)arg1 error:(id*)arg2 block:(/*^block*/id)arg3 ;
-(id)initWithDatabase:(id)arg1 maxRecords:(unsigned)arg2 dkStorage:(id)arg3 loadEmptyDatabaseFromDK:(BOOL)arg4 ;
-(id)_createRecordWithStatement:(id)arg1 ;
-(BOOL)_shouldSuppressRepeatedImpressions:(id)arg1 ;
-(id)_updatePreexistingEntitiesMatchingEntities:(id)arg1 source:(id)arg2 algorithm:(unsigned long long)arg3 txnWitness:(id)arg4 ;
-(PASDBIterAction_)_populateUpdates:(id)arg1 statement:(id)arg2 source:(id)arg3 weightMultiplier:(double)arg4 entityToScoredEntityMap:(id)arg5 ;
-(BOOL)donateNamedEntities:(id)arg1 source:(id)arg2 algorithm:(unsigned long long)arg3 cloudSync:(BOOL)arg4 decayRate:(double)arg5 sentimentScore:(double)arg6 error:(id*)arg7 ;
-(BOOL)_donateNamedEntities:(id)arg1 source:(id)arg2 algorithm:(unsigned long long)arg3 cloudSync:(BOOL)arg4 decayRate:(double)arg5 sentimentScore:(double)arg6 txnWitness:(id)arg7 ;
-(void)_prepareDonationStatement:(id)arg1 scoredNamedEntity:(id)arg2 algorithm:(unsigned long long)arg3 cloudSync:(BOOL)arg4 decayRate:(double)arg5 sentimentScore:(double)arg6 occurrencesInSource:(unsigned short)arg7 weightMultiplier:(double)arg8 sourceRowId:(long long)arg9 ;
-(BOOL)deleteAllNamedEntitiesOlderThanDate:(id)arg1 atLeastOneNamedEntityRemoved:(BOOL*)arg2 deletedCount:(unsigned long long*)arg3 error:(id*)arg4 ;
-(BOOL)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)arg1 documentIds:(id)arg2 atLeastOneNamedEntityRemoved:(BOOL*)arg3 deletedCount:(unsigned long long*)arg4 error:(id*)arg5 ;
-(BOOL)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)arg1 groupIds:(id)arg2 atLeastOneNamedEntityRemoved:(BOOL*)arg3 deletedCount:(unsigned long long*)arg4 error:(id*)arg5 ;
-(BOOL)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)arg1 atLeastOneNamedEntityRemoved:(BOOL*)arg2 deletedCount:(unsigned long long*)arg3 error:(id*)arg4 ;
-(BOOL)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)arg1 groupId:(id)arg2 olderThanDate:(id)arg3 atLeastOneNamedEntityRemoved:(BOOL*)arg4 deletedCount:(unsigned long long*)arg5 error:(id*)arg6 ;
-(id)_deletionQueue;
-(void)_asyncProcessNewDKEventDeletions;
-(void)processNewDKEventDeletions;
-(void)_truncateRecordsByDroppingOldestMakingRoomForCount:(unsigned)arg1 txnWitness:(id)arg2 ;
-(void)importRemotelyGeneratedNamedEntityDKEventsWithLimit:(unsigned)arg1 isComplete:(BOOL*)arg2 ;
-(void)_asyncPopulateDatabaseFromDKEventsIfNecessary;
-(void)_importDKEventsWithLimit:(unsigned)arg1 remoteEventsOnly:(BOOL)arg2 isComplete:(BOOL*)arg3 ;
-(void)_dkEventImportToDatabaseWithEvent:(id)arg1 eventUUIDBlob:(id)arg2 txnWitness:(id)arg3 ;
-(void)exportLocallyGeneratedNamedEntityRecordsToDKWithLimit:(unsigned)arg1 isComplete:(BOOL*)arg2 ;
-(void)_exportNamedEntityRecordsToDKWithLimit:(unsigned)arg1 isComplete:(BOOL*)arg2 txnWitness:(id)arg3 ;
-(void)clearRemotelyGeneratedNamedEntityRecordsMissingInDuet;
-(void)fixupNamedEntityDKEventsWithBatchSize:(unsigned)arg1 isComplete:(BOOL*)arg2 ;
-(PASDBIterAction_)_populateEvents:(id)arg1 statement:(id)arg2 txnWitness:(id)arg3 ;
-(void)disableSyncForBundleIds:(id)arg1 ;
-(unsigned)duetReadBatchSize;
-(unsigned)duetWriteBatchSize;
-(double)duetWriteBatchInterval;
-(id)tempTableForSourceIdsExcludedAlgorithms:(id)arg1 txnWitness:(id)arg2 ;
@end

