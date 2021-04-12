/*
* Generated on Monday, March 1, 2021 at 2:30:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/

#import <libobjc.A.dylib/APSConnectionDelegate.h>

@protocol _DKKeyValueStore, _DKSyncRemoteKnowledgeStorageFetchDelegate;
@class _DKThrottledActivity, _DKSyncPeerStatusTracker, _CDPeriodicSchedulerJob, CKContainer, APSConnection, NSMutableDictionary, NSMutableSet, CKServerChangeToken, NSOperation, NSHashTable, NSString;

@interface _DKSyncCloudKitKnowledgeStorage : NSObject <APSConnectionDelegate> {

	BOOL _started;
	id<_DKKeyValueStore> _keyValueStore;
	_DKThrottledActivity* _activityThrottler;
	_DKSyncPeerStatusTracker* _tracker;
	_CDPeriodicSchedulerJob* _updateSourceDeviceIdentifiersPeriodicJob;
	BOOL _cloudSyncAvailablityObserverRegistered;
	CKContainer* _container;
	APSConnection* _connection;
	double _updateSourceDeviceIdentifiersBackoffTimeInterval;
	NSMutableDictionary* _zoneIDsBySourceDeviceID;
	NSMutableDictionary* _recordZonesByZoneID;
	BOOL _databaseChangesExist;
	BOOL _isPrewarmed;
	NSMutableSet* _zoneIDsWithAdditionChanges;
	NSMutableSet* _zoneIDsWithDeletionChanges;
	NSMutableSet* _zoneIDsWithUnrecoverableDecryptionErrors;
	CKServerChangeToken* _fetchDatabaseChangesServerChangeToken;
	NSOperation* _previousDependentOperation;
	NSHashTable* _outstandingOperations;
	BOOL _available;
	id<_DKSyncRemoteKnowledgeStorageFetchDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (retain) id<_DKSyncRemoteKnowledgeStorageFetchDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (getter=isAvailable) BOOL available;                                           //@synthesize available=_available - In the implementation block
+(id)sharedInstance;
+(id)zoneIDWithDeviceID:(id)arg1 ;
+(void)setMySyncZoneID:(id)arg1 ;
+(id)mySyncZoneID;
+(id)deviceIDFromZoneID:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)name;
-(id<_DKSyncRemoteKnowledgeStorageFetchDelegate>)delegate;
-(void)setDelegate:(id<_DKSyncRemoteKnowledgeStorageFetchDelegate>)arg1 ;
-(void)start;
-(BOOL)isAvailable;
-(void)_registerCloudSyncAvailablityObserver;
-(void)_unregisterCloudSyncAvailablityObserver;
-(void)_createPushConnection;
-(void)_destroyPushConnection;
-(void)setFetchDelegate:(id)arg1 ;
-(long long)transportType;
-(void)fetchSourceDeviceIDFromPeer:(id)arg1 highPriority:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)_cloudSyncAvailabilityDidChange:(id)arg1 ;
-(void)updateStorageWithAddedEvents:(id)arg1 deletedEventIDs:(id)arg2 highPriority:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)connection:(id)arg1 didReceivePublicToken:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2 ;
-(void)finishStartBecauseCloudIsAvailable;
-(BOOL)startShouldUpdateSourceDeviceIdentifiers;
-(void)unregisterUpdateSourceDeviceIdentifiersPeriodicJob;
-(void)finishStartOrError:(id)arg1 ;
-(void)registerUpdateSourceDeviceIdentifiersPeriodicJobWithCompletion:(/*^block*/id)arg1 ;
-(void)configureCloudPseudoPeerWithMySyncZoneID:(id)arg1 ;
-(void)_registerDatabaseChangesSubscription;
-(void)setAvailable:(BOOL)arg1 ;
-(BOOL)_queueOperationForPrivateCloudDatabase:(id)arg1 dependent:(BOOL)arg2 policy:(id)arg3 error:(id*)arg4 ;
-(void)setHasAdditionsFlag:(BOOL)arg1 forPeer:(id)arg2 ;
-(void)setHasDeletionsFlag:(BOOL)arg1 forPeer:(id)arg2 ;
-(void)performUpdateSourceDeviceIdentifiersWithCompletion:(/*^block*/id)arg1 ;
-(void)_createZoneWithZoneID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_deleteZoneWithZoneID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_performThrottledUpdateSourceDeviceIdentifiersWithCompletion:(/*^block*/id)arg1 ;
-(id)_handleAnySpecialnessWithOperationError:(id)arg1 ;
-(void)scheduleRetryUpdateSourceDeviceIdentifiers;
-(void)updateSourceDeviceIdentifiersWithRecordZonesByZoneID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)finishUpdatingSourceDeviceIdentifiersWithZoneIDsBySourceDeviceID:(id)arg1 orError:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setZoneIDsBySourceDeviceID:(id)arg1 ;
-(void)configurePeerWithSourceDeviceID:(id)arg1 zoneID:(id)arg2 ;
-(void)_storeZoneIDFromRecords:(id)arg1 orError:(id)arg2 ;
-(void)setHasZoneAdditionChanges:(BOOL)arg1 forZone:(id)arg2 ;
-(void)setHasZoneDeletionChanges:(BOOL)arg1 forZone:(id)arg2 ;
-(void)addSourceDeviceIdentifierWithRecordZoneID:(id)arg1 ;
-(void)removeSourceDeviceIdentifierWithRecordZoneID:(id)arg1 ;
-(void)commitFetchDatabaseChangesServerChangeToken;
-(void)setPrewarmedFlag;
-(void)fastForwardPastDeletionsInNewZone:(id)arg1 sourceDeviceID:(id)arg2 ;
-(void)populateLastSeenDateIfNeededByPeer:(id)arg1 ;
-(void)_setPreviousServerChangeToken:(id)arg1 forRecordZoneID:(id)arg2 ;
-(BOOL)hasZoneAdditionChangesForZone:(id)arg1 ;
-(BOOL)hasZoneDeletionChangesForZone:(id)arg1 ;
-(void)fetchChangedZonesWithCompletion:(/*^block*/id)arg1 ;
-(void)syncDownAdditionsFromCloudWithZoneID:(id)arg1 windows:(id)arg2 streamNames:(id)arg3 limit:(unsigned long long)arg4 fetchOrder:(long long)arg5 completion:(/*^block*/id)arg6 ;
-(void)syncDownDeletionsFromCloudWithZoneID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)syncDownDeletionsFromCloudWithZoneID:(id)arg1 deletedRecordIDsAndTypes:(id)arg2 attempt:(unsigned long long)arg3 completion:(/*^block*/id)arg4 ;
-(id)_previousServerChangeTokenKeyForRecordZoneID:(id)arg1 ;
-(id)_previousServerChangeTokenForRecordZoneID:(id)arg1 ;
-(void)_resetPreviousServerChangeTokenForRecordZoneID:(id)arg1 ;
-(void)fetchEventsFromPeer:(id)arg1 windows:(id)arg2 streamNames:(id)arg3 limit:(unsigned long long)arg4 fetchOrder:(long long)arg5 highPriority:(BOOL)arg6 completion:(/*^block*/id)arg7 ;
-(void)syncUpToCloudWithRecordsToSave:(id)arg1 recordIDsToDelete:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)runUpdateSourceDeviceIdentifiersPeriodicJobWithCompletion:(/*^block*/id)arg1 ;
-(id)executionCriteriaForUpdateSourceDeviceIdentifiersPeriodicJob;
-(void)cancelOutstandingOperations;
-(BOOL)hasAdditionsFlagForPeer:(id)arg1 ;
-(BOOL)hasDeletionsFlagForPeer:(id)arg1 ;
-(void)clearPrewarmedFlag;
-(void)prewarmFetchWithCompletion:(/*^block*/id)arg1 ;
-(void)fetchDeletedEventIDsFromPeer:(id)arg1 sinceDate:(id)arg2 streamNames:(id)arg3 limit:(unsigned long long)arg4 highPriority:(BOOL)arg5 completion:(/*^block*/id)arg6 ;
-(void)fetchAdditionsHighWaterMarkWithPeer:(id)arg1 highPriority:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)fetchDeletionsHighWaterMarkWithPeer:(id)arg1 highPriority:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
@end

