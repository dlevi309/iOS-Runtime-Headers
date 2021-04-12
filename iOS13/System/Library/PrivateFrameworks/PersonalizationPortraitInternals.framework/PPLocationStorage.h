/*
* Generated on Monday, March 1, 2021 at 2:33:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/


@class PPSQLDatabase, PPDKStorage, PPRecordStorageHelper;

@interface PPLocationStorage : NSObject {

	PPSQLDatabase* _db;
	PPDKStorage* _dkStorage;
	id _deletionObserver;
	PPRecordStorageHelper* _storageHelper;

}
-(id)init;
-(void)dealloc;
-(id)initWithDatabase:(id)arg1 ;
-(BOOL)clearWithError:(id*)arg1 deletedCount:(unsigned long long*)arg2 ;
-(BOOL)donateLocations:(id)arg1 source:(id)arg2 contextualNamedEntities:(id)arg3 algorithm:(unsigned short)arg4 cloudSync:(BOOL)arg5 decayRate:(double)arg6 error:(id*)arg7 ;
-(BOOL)iterLocationRecordsWithQuery:(id)arg1 error:(id*)arg2 block:(/*^block*/id)arg3 ;
-(id)initWithDatabase:(id)arg1 maxRecords:(unsigned)arg2 dkStorage:(id)arg3 loadEmptyDatabaseFromDK:(BOOL)arg4 ;
-(BOOL)_shouldSuppressRepeatedImpressions:(id)arg1 ;
-(void)_truncateRecordsByDroppingOldestMakingRoomForCount:(unsigned)arg1 txnWitness:(id)arg2 ;
-(id)tempTableForSourceIdsExcludedAlgorithms:(id)arg1 txnWitness:(id)arg2 ;
-(id)_areasOfInterestForLocationRecordId:(long long)arg1 txnWitness:(id)arg2 ;
-(id)_contextualNamedEntitiesForLocationRecordId:(long long)arg1 txnWitness:(id)arg2 ;
-(id)_placemarkFromRecordQueryRowWithStatement:(id)arg1 columnMapping:(id)arg2 txnWitness:(id)arg3 ;
-(BOOL)_donateLocations:(id)arg1 source:(id)arg2 contextualNamedEntities:(id)arg3 algorithm:(unsigned short)arg4 cloudSync:(BOOL)arg5 decayRate:(double)arg6 txnWitness:(id)arg7 ;
-(void)_insertContextualNamedEntities:(id)arg1 forLocationWithRowId:(long long)arg2 txnWitness:(id)arg3 ;
-(void)_insertAreasOfInterest:(id)arg1 forLocationWithRowId:(long long)arg2 txnWitness:(id)arg3 ;
-(void)_deleteLocationsWithRowIdTableWithName:(id)arg1 txnWitness:(id)arg2 atLeastOneLocationRemoved:(BOOL*)arg3 deletedCount:(unsigned long long*)arg4 ;
-(BOOL)deleteAllLocationsOlderThanDate:(id)arg1 atLeastOneLocationRemoved:(BOOL*)arg2 deletedCount:(unsigned long long*)arg3 error:(id*)arg4 ;
-(BOOL)deleteAllLocationsFromSourcesWithBundleId:(id)arg1 documentIds:(id)arg2 atLeastOneLocationRemoved:(BOOL*)arg3 deletedCount:(unsigned long long*)arg4 error:(id*)arg5 ;
-(BOOL)deleteAllLocationsFromSourcesWithBundleId:(id)arg1 groupIds:(id)arg2 atLeastOneLocationRemoved:(BOOL*)arg3 deletedCount:(unsigned long long*)arg4 error:(id*)arg5 ;
-(BOOL)deleteAllLocationsFromSourcesWithBundleId:(id)arg1 atLeastOneLocationRemoved:(BOOL*)arg2 deletedCount:(unsigned long long*)arg3 error:(id*)arg4 ;
-(BOOL)deleteAllLocationsFromSourcesWithBundleId:(id)arg1 groupId:(id)arg2 olderThanDate:(id)arg3 atLeastOneLocationRemoved:(BOOL*)arg4 deletedCount:(unsigned long long*)arg5 error:(id*)arg6 ;
@end

