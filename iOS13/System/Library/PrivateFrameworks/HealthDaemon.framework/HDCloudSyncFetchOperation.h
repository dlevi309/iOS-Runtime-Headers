/*
* Generated on Monday, March 1, 2021 at 2:34:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <libobjc.A.dylib/NSProgressReporting.h>

@protocol OS_dispatch_queue;
@class HDCloudSyncOperationConfiguration, NSObject, NSUUID, NSDate, NSString, NSSet, CKShareParticipant, NSMutableDictionary, NSMutableArray, NSMutableSet, HDCloudSyncZone, NSProgress;

@interface HDCloudSyncFetchOperation : NSObject <NSProgressReporting> {

	HDCloudSyncOperationConfiguration* _configuration;
	NSObject*<OS_dispatch_queue> _queue;
	NSUUID* _operationIdentifier;
	NSDate* _startTime;
	NSString* _cloudKitIdentifier;
	BOOL _queue_hasStarted;
	long long _options;
	/*^block*/id _completion;
	NSSet* _allContainers;
	NSSet* _allOwnerIdentifiers;
	double _timeIntervalBeforeOwnershipTransfer;
	CKShareParticipant* _sourceParticipant;
	NSMutableDictionary* _zonesByIdentifier;
	NSMutableArray* _zonesPendingDeletion;
	NSMutableSet* _zonesRequiringRemoval;
	HDCloudSyncZone* _primaryPushZone;
	NSMutableArray* _pendingFetchDatabaseChangesOperations;
	NSMutableArray* _pendingFetchRecordsOperations;
	NSMutableArray* _zonesPendingPushSequenceValidation;
	NSProgress* _progress;

}

@property (nonatomic,readonly) NSProgress * progress;               //@synthesize progress=_progress - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSProgress *)progress;
-(void)startWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithConfiguration:(id)arg1 options:(long long)arg2 ;
-(void)_queue_finishWithStatus:(long long)arg1 error:(id)arg2 ;
-(void)_queue_fetchSyncZones;
-(BOOL)_queue_hasFinished;
-(void)_queue_checkForZoneFetchCompletion;
-(id)_queue_zoneForIdentifier:(id)arg1 container:(id)arg2 scope:(long long)arg3 ;
-(void)_queue_startZoneFetchForContainer:(id)arg1 database:(id)arg2 ;
-(void)_queue_startZoneFetchForContainer:(id)arg1 ;
-(void)_queue_fetchHeaderRecords;
-(long long)_queue_processFetchedRecord:(id)arg1 recordClass:(Class)arg2 zone:(id)arg3 error:(id*)arg4 ;
-(long long)_queue_processFetchedRecord:(id)arg1 container:(id)arg2 scope:(long long)arg3 error:(id*)arg4 ;
-(void)_queue_fetchHeaderRecordsByZoneForZones:(id)arg1 container:(id)arg2 scope:(long long)arg3 ;
-(void)_queue_handleLostManateeIdentitiesForPartialError:(id)arg1 container:(id)arg2 scope:(long long)arg3 ;
-(BOOL)_canIgnorePartialFailureError:(id)arg1 error:(id*)arg2 ;
-(void)_queue_processFetchedRecords:(id)arg1 container:(id)arg2 scope:(long long)arg3 ;
-(void)_queue_checkForHeaderRecordFetchCompletion;
-(void)_queue_startHeaderRecordFetchForZones:(id)arg1 container:(id)arg2 scope:(long long)arg3 ;
-(id)_fetchRecordsOperationForZones:(id)arg1 container:(id)arg2 scope:(long long)arg3 ;
-(void)_queue_startHeaderRecordFetchForContainer:(id)arg1 scope:(long long)arg2 ;
-(void)_queue_validateFetchedZones;
-(long long)_queue_requestOwnershipChangeWithReason:(id)arg1 error:(id*)arg2 ;
-(void)_queue_scheduleZoneForDeletion:(id)arg1 ;
-(void)_persistState:(id)arg1 syncStore:(id)arg2 ;
-(long long)_queue_validateAnchorRangesForPushZone:(id)arg1 sequenceRecord:(id)arg2 error:(id*)arg3 ;
-(void)_queue_checkForHeaderValidationCompletion;
-(void)_verifySequenceForPushStore:(id)arg1 inContainer:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)_queue_storeForZone:(id)arg1 error:(id*)arg2 ;
-(long long)_queue_validateStoreRecordForPushZone:(id)arg1 error:(id*)arg2 ;
-(long long)_queue_validateAnchorRangesForPushZone:(id)arg1 error:(id*)arg2 ;
-(long long)_queue_checkForExpiredEmptyZonesWithStore:(id)arg1 pushZone:(id)arg2 state:(id)arg3 error:(id*)arg4 ;
-(void)_queue_verifySequenceForPushZone:(id)arg1 container:(id)arg2 store:(id)arg3 ;
-(BOOL)_queue_checkForOrphanedSequenceRecords;
-(void)_queue_discardInvalidSharedZones;
-(long long)_queue_findPushZonesWithError:(id*)arg1 ;
-(void)_queue_discardRemovedZones;
-(long long)_queue_validatePushZone:(id)arg1 inContainer:(id)arg2 error:(id*)arg3 ;
-(void)_queue_performCleanupAndFinishFetch;
-(BOOL)_orderedChangeRecordSequenceRequiresRebase:(id)arg1 ;
-(BOOL)_isRelevantChangeRecord:(id)arg1 forStoreRecord:(id)arg2 ;
-(BOOL)_queue_updateExpectedSyncAnchorsForZone:(id)arg1 sequenceHeader:(id)arg2 error:(id*)arg3 ;
-(void)_queue_updateFrozenAnchorsForPushZone:(id)arg1 ;
-(BOOL)_queue_updateExpectedSyncAnchorsForZone:(id)arg1 error:(id*)arg2 ;
-(void)_deleteRecordZones:(id)arg1 container:(id)arg2 ;
-(void)_queue_markOwnedZonesAsSeized;
-(long long)_queue_checkForOwnershipTakeover;
-(long long)_queue_checkForOwnershipLoss;
-(void)_queue_garbageCollectZones;
-(BOOL)_queue_populateSyncStoresWithError:(id*)arg1 ;
-(BOOL)_queue_updateFrozenAndExpectedSyncAnchorsWithError:(id*)arg1 ;
-(id)_queue_findAbandonedZones;
-(long long)_typeForZoneIdentifier:(id)arg1 ;
-(id)_queue_zoneForIdentifier:(id)arg1 ;
-(void)_queue_deleteZonesForLostManateeIdentitiesForPartialError:(id)arg1 container:(id)arg2 ;
-(void)_queue_leaveSharesForLostManateeIdentitiesForPartialError:(id)arg1 container:(id)arg2 ;
@end

