/*
* Generated on Thursday, January 14, 2021 at 2:25:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/


@class PPSQLDatabase, PPDKStorage, PPRecordStorageHelper, PPSourceStorage;

@interface PPLocationStorage : NSObject {

	PPSQLDatabase* _db;
	PPDKStorage* _dkStorage;
	id _deletionObserver;
	PPRecordStorageHelper* _storageHelper;
	PPSourceStorage* _sourceStorage;

}
-(BOOL)deleteAllLocationFeedbackCountRecordsOlderThanDate:(id)arg1 ;
-(id)thirdPartyBundleIdsFromToday;
-(BOOL)clearWithError:(id*)arg1 deletedCount:(unsigned long long*)arg2 ;
-(BOOL)deleteAllLocationsFromSourcesWithBundleId:(id)arg1 groupId:(id)arg2 olderThanDate:(id)arg3 atLeastOneLocationRemoved:(BOOL*)arg4 deletedCount:(unsigned long long*)arg5 error:(id*)arg6 ;
-(id)init;
-(id)lastDonationTimeForSourcesBeforeDate:(id)arg1 ;
-(id)_contextualNamedEntitiesForLocationRecordId:(long long)arg1 txnWitness:(id)arg2 ;
-(BOOL)deleteAllLocationsFromSourcesWithBundleId:(id)arg1 documentIds:(id)arg2 atLeastOneLocationRemoved:(BOOL*)arg3 deletedCount:(unsigned long long*)arg4 error:(id*)arg5 ;
-(BOOL)decayFeedbackCountsWithDecayRate:(double)arg1 shouldContinueBlock:(/*^block*/id)arg2 ;
-(BOOL)_donateLocations:(id)arg1 source:(id)arg2 contextualNamedEntities:(id)arg3 algorithm:(unsigned short)arg4 cloudSync:(BOOL)arg5 decayRate:(double)arg6 txnWitness:(id)arg7 ;
-(BOOL)donateLocationFeedback:(id)arg1 ;
-(BOOL)_shouldSuppressRepeatedImpressions:(id)arg1 ;
-(BOOL)deleteAllLocationsFromSourcesWithBundleId:(id)arg1 groupIds:(id)arg2 atLeastOneLocationRemoved:(BOOL*)arg3 deletedCount:(unsigned long long*)arg4 error:(id*)arg5 ;
-(id)_areasOfInterestForLocationRecordId:(long long)arg1 txnWitness:(id)arg2 ;
-(id)sourceStatsWithExcludedAlgorithms:(id)arg1 ;
-(id)tempTableForSourceIdsExcludedAlgorithms:(id)arg1 txnWitness:(id)arg2 ;
-(id)decayedFeedbackCountsForClusterIdentifier:(id)arg1 ;
-(void)_insertContextualNamedEntities:(id)arg1 forLocationWithRowId:(long long)arg2 txnWitness:(id)arg3 ;
-(void)_insertAreasOfInterest:(id)arg1 forLocationWithRowId:(long long)arg2 txnWitness:(id)arg3 ;
-(void)_truncateRecordsByDroppingOldestMakingRoomForCount:(unsigned)arg1 txnWitness:(id)arg2 ;
-(id)initWithDatabase:(id)arg1 maxRecords:(unsigned)arg2 dkStorage:(id)arg3 loadEmptyDatabaseFromDK:(BOOL)arg4 ;
-(BOOL)iterLocationRecordsWithQuery:(id)arg1 error:(id*)arg2 block:(/*^block*/id)arg3 ;
-(id)initWithDatabase:(id)arg1 ;
-(id)_placemarkFromRecordQueryRowWithStatement:(id)arg1 columnMapping:(id)arg2 txnWitness:(id)arg3 ;
-(BOOL)deleteAllLocationsFromSourcesWithBundleId:(id)arg1 atLeastOneLocationRemoved:(BOOL*)arg2 deletedCount:(unsigned long long*)arg3 error:(id*)arg4 ;
-(BOOL)deleteAllLocationsOlderThanDate:(id)arg1 atLeastOneLocationRemoved:(BOOL*)arg2 deletedCount:(unsigned long long*)arg3 error:(id*)arg4 ;
-(void)_deleteLocationsWithRowIdTableWithName:(id)arg1 txnWitness:(id)arg2 atLeastOneLocationRemoved:(BOOL*)arg3 deletedCount:(unsigned long long*)arg4 ;
-(void)dealloc;
-(BOOL)pruneOrphanedLocationFeedbackCountRecordsWithLimit:(unsigned long long)arg1 rowOffset:(unsigned long long)arg2 deletedCount:(unsigned long long*)arg3 isComplete:(BOOL*)arg4 ;
-(BOOL)donateLocations:(id)arg1 source:(id)arg2 contextualNamedEntities:(id)arg3 algorithm:(unsigned short)arg4 cloudSync:(BOOL)arg5 decayRate:(double)arg6 error:(id*)arg7 ;
@end

