/*
* Generated on Thursday, January 14, 2021 at 2:25:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/


@protocol OS_dispatch_queue;
#import <PersonalizationPortraitInternals/PersonalizationPortraitInternals-Structs.h>
@class PPSQLDatabase, PPDKStorage, PPRecordStorageHelper, PPSourceStorage, NSObject;

@interface PPNamedEntityStorage : NSObject {

	PPSQLDatabase* _db;
	PPDKStorage* _dkStorage;
	id _deletionObserver;
	PPRecordStorageHelper* _storageHelper;
	PPSourceStorage* _sourceStorage;
	NSObject*<OS_dispatch_queue> _populateDatabaseQueue;

}
+(double)_scoreEntityWithInitialScore:(double)arg1 decayRate:(double)arg2 extractionDate:(id)arg3 scoringDate:(id)arg4 ;
+(id)_loadTrieFromLocalAsset:(id)arg1 ;
-(void)_asyncPopulateDatabaseFromDKEventsIfNecessary;
-(id)thirdPartyBundleIdsFromToday;
-(BOOL)clearWithError:(id*)arg1 deletedCount:(unsigned long long*)arg2 ;
-(void)_dkEventImportToDatabaseWithEvent:(id)arg1 eventUUIDBlob:(id)arg2 txnWitness:(id)arg3 filter:(id)arg4 ;
-(id)_updatePreexistingEntitiesMatchingEntities:(id)arg1 source:(id)arg2 algorithm:(unsigned long long)arg3 txnWitness:(id)arg4 ;
-(id)init;
-(PASDBIterAction_)_populateUpdates:(id)arg1 statement:(id)arg2 source:(id)arg3 weightMultiplier:(double)arg4 entityToScoredEntityMap:(id)arg5 ;
-(id)lastDonationTimeForSourcesBeforeDate:(id)arg1 ;
-(id)clusterIdentifiersExistingBeforeDate:(id)arg1 ;
-(void)exportRecordsToDKWithShouldContinueBlock:(/*^block*/id)arg1 ;
-(id)_createRecordWithStatement:(id)arg1 txnWitness:(id)arg2 ;
-(unsigned)uniqueClusterIdentifierCount;
-(BOOL)decayFeedbackCountsWithDecayRate:(double)arg1 shouldContinueBlock:(/*^block*/id)arg2 ;
-(id)_generateExportRowIdsWithBatchSize:(unsigned)arg1 isComplete:(BOOL*)arg2 ;
-(void)disableSyncForBundleIds:(id)arg1 ;
-(BOOL)_shouldSuppressRepeatedImpressions:(id)arg1 ;
-(BOOL)deleteAllNamedEntitiesOlderThanDate:(id)arg1 atLeastOneNamedEntityRemoved:(BOOL*)arg2 deletedCount:(unsigned long long*)arg3 error:(id*)arg4 ;
-(BOOL)_donateNamedEntities:(id)arg1 source:(id)arg2 algorithm:(unsigned long long)arg3 cloudSync:(BOOL)arg4 decayRate:(double)arg5 sentimentScore:(double)arg6 txnWitness:(id)arg7 ;
-(void)_importDKEventsWithLimit:(unsigned)arg1 remoteEventsOnly:(BOOL)arg2 isComplete:(BOOL*)arg3 ;
-(void)fixupDKEventsMetadataWithShouldContinueBlock:(/*^block*/id)arg1 ;
-(BOOL)setNamedEntityFilterLastRunDate:(id)arg1 error:(id*)arg2 ;
-(BOOL)iterNamedEntityRecordsWithQuery:(id)arg1 error:(id*)arg2 block:(/*^block*/id)arg3 ;
-(id)namedEntityFilterLastRecordDate;
-(unsigned)duetWriteBatchSize;
-(id)sourceStatsWithExcludedAlgorithms:(id)arg1 ;
-(id)tempTableForSourceIdsExcludedAlgorithms:(id)arg1 txnWitness:(id)arg2 ;
-(BOOL)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)arg1 groupIds:(id)arg2 atLeastOneNamedEntityRemoved:(BOOL*)arg3 deletedCount:(unsigned long long*)arg4 error:(id*)arg5 ;
-(BOOL)setNamedEntityFilterLastRecordDate:(id)arg1 error:(id*)arg2 ;
-(void)processNewDKEventDeletions;
-(void)_prepareDonationStatement:(id)arg1 scoredNamedEntity:(id)arg2 algorithm:(unsigned long long)arg3 cloudSync:(BOOL)arg4 decayRate:(double)arg5 sentimentScore:(double)arg6 occurrencesInSource:(unsigned short)arg7 weightMultiplier:(double)arg8 sourceRowId:(long long)arg9 ;
-(id)namedEntityFilterLastRunDateWithError:(id*)arg1 ;
-(BOOL)donateNamedEntities:(id)arg1 source:(id)arg2 algorithm:(unsigned long long)arg3 cloudSync:(BOOL)arg4 decayRate:(double)arg5 sentimentScore:(double)arg6 error:(id*)arg7 ;
-(id)decayedFeedbackCountsForClusterIdentifier:(id)arg1 ;
-(BOOL)iterNamedEntityRecordsAndIdsWithQuery:(id)arg1 error:(id*)arg2 block:(/*^block*/id)arg3 ;
-(BOOL)deleteAllNamedEntityFeedbackCountRecordsOlderThanDate:(id)arg1 ;
-(void)_asyncProcessNewDKEventDeletions;
-(BOOL)pruneOrphanedNamedEntityFeedbackCountRecordsWithLimit:(unsigned long long)arg1 rowOffset:(unsigned long long)arg2 deletedCount:(unsigned long long*)arg3 isComplete:(BOOL*)arg4 ;
-(void)importRemotelyGeneratedNamedEntityDKEventsWithLimit:(unsigned)arg1 isComplete:(BOOL*)arg2 shouldContinueBlock:(/*^block*/id)arg3 ;
-(void)_truncateRecordsByDroppingOldestMakingRoomForCount:(unsigned)arg1 txnWitness:(id)arg2 ;
-(BOOL)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)arg1 documentIds:(id)arg2 atLeastOneNamedEntityRemoved:(BOOL*)arg3 deletedCount:(unsigned long long*)arg4 error:(id*)arg5 ;
-(double)duetWriteBatchInterval;
-(id)initWithDatabase:(id)arg1 maxRecords:(unsigned)arg2 dkStorage:(id)arg3 loadEmptyDatabaseFromDK:(BOOL)arg4 ;
-(BOOL)deleteNamedEntitiesMatchingRowIds:(id)arg1 atLeastOneNamedEntityRemoved:(BOOL*)arg2 deletedCount:(unsigned long long*)arg3 error:(id*)arg4 ;
-(BOOL)donateNamedEntityFeedback:(id)arg1 ;
-(void)fixupDKEventsWithShouldContinueBlock:(/*^block*/id)arg1 ;
-(void)_importDKEventsWithShouldContinueBlock:(unsigned)arg1 remoteEventsOnly:(BOOL)arg2 isComplete:(BOOL*)arg3 shouldContinueBlock:(/*^block*/id)arg4 ;
-(id)initWithDatabase:(id)arg1 ;
-(BOOL)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)arg1 groupId:(id)arg2 olderThanDate:(id)arg3 atLeastOneNamedEntityRemoved:(BOOL*)arg4 deletedCount:(unsigned long long*)arg5 error:(id*)arg6 ;
-(PASDBIterAction_)_populateEvents:(id)arg1 statement:(id)arg2 txnWitness:(id)arg3 ;
-(BOOL)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)arg1 atLeastOneNamedEntityRemoved:(BOOL*)arg2 deletedCount:(unsigned long long*)arg3 error:(id*)arg4 ;
-(void)dealloc;
-(unsigned)duetReadBatchSize;
-(void)clearRemoteRecordsMissingFromDuetWithShouldContinueBlock:(/*^block*/id)arg1 ;
-(id)_deletionQueue;
@end

