/*
* Generated on Monday, March 1, 2021 at 2:30:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/


@protocol CKSyncEngineDataSource, OS_dispatch_queue;
@class CKDatabase, CKSyncEngineMetadata, CKNotificationListener, NSOperationQueue, NSObject;

@interface CKSyncEngine : NSObject {

	BOOL _ignoringSystemConditions;
	BOOL _waitingForIdentityUpdate;
	BOOL _waitingForHSA2;
	BOOL _useUniqueActivityIdentifiers;
	BOOL _skipRetryOnOperationError;
	BOOL _automaticSyncingDisabled;
	id<CKSyncEngineDataSource> _dataSource;
	CKDatabase* _database;
	CKSyncEngineMetadata* _metadata;
	unsigned long long _lastNotifiedMetadataChangeCount;
	CKNotificationListener* _notificationListener;
	NSOperationQueue* _operationQueue;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _batchCreationQueue;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	unsigned long long _maxRecordCountPerBatch;
	unsigned long long _maxRecordBytesPerBatch;
	unsigned long long _maxZoneCountPerBatch;
	long long _lastKnownAccountStatus;
	long long _priorityForFetches;
	long long _priorityForModifications;

}

@property (nonatomic,retain) CKDatabase * database;                                                        //@synthesize database=_database - In the implementation block
@property (nonatomic,retain) CKSyncEngineMetadata * metadata;                                              //@synthesize metadata=_metadata - In the implementation block
@property (assign,nonatomic) unsigned long long lastNotifiedMetadataChangeCount;                           //@synthesize lastNotifiedMetadataChangeCount=_lastNotifiedMetadataChangeCount - In the implementation block
@property (nonatomic,retain) CKNotificationListener * notificationListener;                                //@synthesize notificationListener=_notificationListener - In the implementation block
@property (nonatomic,retain) NSOperationQueue * operationQueue;                                            //@synthesize operationQueue=_operationQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                           //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> batchCreationQueue;                              //@synthesize batchCreationQueue=_batchCreationQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> callbackQueue;                                   //@synthesize callbackQueue=_callbackQueue - In the implementation block
@property (assign,nonatomic) unsigned long long maxRecordCountPerBatch;                                    //@synthesize maxRecordCountPerBatch=_maxRecordCountPerBatch - In the implementation block
@property (assign,nonatomic) unsigned long long maxRecordBytesPerBatch;                                    //@synthesize maxRecordBytesPerBatch=_maxRecordBytesPerBatch - In the implementation block
@property (assign,nonatomic) unsigned long long maxZoneCountPerBatch;                                      //@synthesize maxZoneCountPerBatch=_maxZoneCountPerBatch - In the implementation block
@property (assign,getter=isWaitingForIdentityUpdate,nonatomic) BOOL waitingForIdentityUpdate;              //@synthesize waitingForIdentityUpdate=_waitingForIdentityUpdate - In the implementation block
@property (assign,getter=isWaitingForHSA2,nonatomic) BOOL waitingForHSA2;                                  //@synthesize waitingForHSA2=_waitingForHSA2 - In the implementation block
@property (assign,nonatomic) long long lastKnownAccountStatus;                                             //@synthesize lastKnownAccountStatus=_lastKnownAccountStatus - In the implementation block
@property (assign,nonatomic) BOOL useUniqueActivityIdentifiers;                                            //@synthesize useUniqueActivityIdentifiers=_useUniqueActivityIdentifiers - In the implementation block
@property (nonatomic,readonly) BOOL ignoringSystemConditions;                                              //@synthesize ignoringSystemConditions=_ignoringSystemConditions - In the implementation block
@property (assign,nonatomic) long long priorityForFetches;                                                 //@synthesize priorityForFetches=_priorityForFetches - In the implementation block
@property (assign,nonatomic) long long priorityForModifications;                                           //@synthesize priorityForModifications=_priorityForModifications - In the implementation block
@property (assign,nonatomic) BOOL skipRetryOnOperationError;                                               //@synthesize skipRetryOnOperationError=_skipRetryOnOperationError - In the implementation block
@property (assign,getter=isAutomaticSyncingDisabled,nonatomic) BOOL automaticSyncingDisabled;              //@synthesize automaticSyncingDisabled=_automaticSyncingDisabled - In the implementation block
@property (nonatomic,__weak,readonly) id<CKSyncEngineDataSource> dataSource;                               //@synthesize dataSource=_dataSource - In the implementation block
+(id)supportedDatabaseScopes;
+(id)activityIdentifierWithName:(id)arg1 database:(id)arg2 ignoringSystemConditions:(BOOL)arg3 uniquenessPointer:(id)arg4 ;
+(id)earliestStartDateAfterError:(id)arg1 ;
+(BOOL)fastErrorRetry;
+(id)fetchChangesActivityIdentifierInDatabase:(id)arg1 ignoringSystemConditions:(BOOL)arg2 ;
+(id)modifyPendingChangesActivityIdentifierInDatabase:(id)arg1 ignoringSystemConditions:(BOOL)arg2 ;
+(id)saveSubscriptionActivityIdentifierInDatabase:(id)arg1 ignoringSystemConditions:(BOOL)arg2 ;
+(void)unregisterActivitiesWithDatabase:(id)arg1 ignoringSystemConditions:(BOOL)arg2 ;
+(BOOL)shouldDeferAfterError:(id)arg1 ;
+(void)setFastErrorRetry:(BOOL)arg1 ;
-(id)init;
-(void)dealloc;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(NSOperationQueue *)operationQueue;
-(void)setOperationQueue:(NSOperationQueue *)arg1 ;
-(void)setDatabase:(CKDatabase *)arg1 ;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(CKDatabase *)database;
-(void)setMetadata:(CKSyncEngineMetadata *)arg1 ;
-(CKSyncEngineMetadata *)metadata;
-(void)setCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id<CKSyncEngineDataSource>)dataSource;
-(id)databaseSubscription;
-(CKNotificationListener *)notificationListener;
-(void)setNotificationListener:(CKNotificationListener *)arg1 ;
-(id)initWithDatabase:(id)arg1 dataSource:(id)arg2 metadata:(id)arg3 machServiceName:(id)arg4 ;
-(id)initWithDatabase:(id)arg1 dataSource:(id)arg2 metadata:(id)arg3 machServiceName:(id)arg4 priorityForFetches:(long long)arg5 priorityForModifications:(long long)arg6 ;
-(void)commonInitWithDatabase:(id)arg1 dataSource:(id)arg2 metadata:(id)arg3 machServiceName:(id)arg4 useUniqueActivityIdentifiers:(BOOL)arg5 disableAutomaticSyncing:(BOOL)arg6 priorityForFetches:(long long)arg7 priorityForModifications:(long long)arg8 ;
-(id)initWithDatabase:(id)arg1 dataSource:(id)arg2 metadata:(id)arg3 machServiceName:(id)arg4 ignoringSystemConditions:(BOOL)arg5 useUniqueActivityIdentifiers:(BOOL)arg6 disableAutomaticSyncing:(BOOL)arg7 ;
-(void)registerSchedulerActivities;
-(void)registerForSubscriptions;
-(void)accountChangedNotification:(id)arg1 ;
-(void)scheduleInitialWorkIfNecessary;
-(BOOL)ignoringSystemConditions;
-(BOOL)useUniqueActivityIdentifiers;
-(id)activityIdentifierWithName:(id)arg1 ;
-(unsigned long long)lastNotifiedMetadataChangeCount;
-(void)setLastNotifiedMetadataChangeCount:(unsigned long long)arg1 ;
-(void)scheduleModifyPendingChangesIfNecessaryWithEarliestStartDate:(id)arg1 ;
-(void)notifyDataSourceForUnserializedMetadataIfNecessary;
-(id)defaultOperationConfiguration;
-(void)_modifyPendingChangesWithOperationGroup:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)__modifyPendingChangesWithOperationGroup:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)ensureAccountAvailableWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)addOperationsToModifyZonesIfNecessaryInOperationGroup:(id)arg1 ;
-(id)existingOperationsToModifyZones;
-(id)existingOperationToModifyRecordBatchesIncludingExecutingOperations:(BOOL)arg1 ;
-(id)newOperationToModifyRecordBatchesWithOperationGroup:(id)arg1 ;
-(id)existingOperationToFetchChangesIncludingExecutingOperations:(BOOL)arg1 ;
-(id)nextBatchOfRecordsToModify;
-(void)modifyRecordBatchesOperation:(id)arg1 perRecordProgressForRecord:(id)arg2 progress:(double)arg3 ;
-(void)modifyRecordBatchesOperation:(id)arg1 perRecordSaveCompletionForRecord:(id)arg2 inBatch:(id)arg3 error:(id)arg4 ;
-(void)modifyRecordBatchesOperation:(id)arg1 completedBatch:(id)arg2 withSavedRecords:(id)arg3 deletedRecordIDs:(id)arg4 error:(id)arg5 ;
-(void)modifyRecordBatchesOperation:(id)arg1 completedWithError:(id)arg2 ;
-(BOOL)shouldRetryAfterError:(id)arg1 ;
-(void)modifyRecordBatchesOperation:(id)arg1 perDeleteRecordIDCompletion:(id)arg2 inBatch:(id)arg3 error:(id)arg4 ;
-(void)updateReadinessStateFromError:(id)arg1 ;
-(BOOL)_hasPendingModifications;
-(unsigned long long)maxZoneCountPerBatch;
-(id)newOperationToModifyZonesToSave:(id)arg1 zoneIDsToDelete:(id)arg2 inOperationGroup:(id)arg3 ;
-(NSObject*<OS_dispatch_queue>)batchCreationQueue;
-(id)nextBatchOfRecordsToModifyWithCustomBatching;
-(id)nextBatchOfRecordsToModifyDefaultBehavior;
-(unsigned long long)maxRecordBytesPerBatch;
-(unsigned long long)maxRecordCountPerBatch;
-(void)_fetchChangesWithOperationGroup:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)__fetchChangesWithOperationGroup:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)newOperationToFetchChangesWithOperationGroup:(id)arg1 ;
-(void)fetchChangesOperation:(id)arg1 recordZoneWithIDChanged:(id)arg2 ;
-(void)fetchChangesOperation:(id)arg1 recordZoneWithIDWasPurged:(id)arg2 ;
-(void)fetchChangesOperation:(id)arg1 recordZoneWithIDWasDeleted:(id)arg2 ;
-(void)fetchChangesOperation:(id)arg1 databaseChangeTokenUpdated:(id)arg2 ;
-(void)fetchChangesOperation:(id)arg1 completedFetchingDatabaseChangesWithError:(id)arg2 ;
-(BOOL)shouldFetchChangesForZoneID:(id)arg1 ;
-(void)fetchChangesOperation:(id)arg1 recordChanged:(id)arg2 ;
-(void)fetchChangesOperation:(id)arg1 recordWithIDWasDeleted:(id)arg2 recordType:(id)arg3 ;
-(void)fetchChangesOperation:(id)arg1 updatedServerChangeToken:(id)arg2 clientChangeToken:(id)arg3 forRecordZoneID:(id)arg4 ;
-(void)fetchChangesOperation:(id)arg1 completedFetchingChangesForRecordZoneID:(id)arg2 serverChangeToken:(id)arg3 clientChangeToken:(id)arg4 error:(id)arg5 ;
-(void)fetchChangesOperation:(id)arg1 completedWithError:(id)arg2 ;
-(void)scheduleFetchChangesIfNecessaryWithEarliestStartDate:(id)arg1 ;
-(void)didReceiveDatabaseNotification:(id)arg1 ;
-(void)saveSubscriptionIfNecessaryWithOperationGroup:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_saveSubscriptionIfNecessaryWithOperationGroup:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)scheduleSaveSubscriptionIfNecessaryWithEarliestStartDate:(id)arg1 ;
-(id)fetchChangesActivityIdentifier;
-(void)performFetchChangesActivity:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)modifyPendingChangesActivityIdentifier;
-(void)performModifyPendingChangesActivity:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)saveSubscriptionActivityIdentifier;
-(void)performSaveSubscriptionActivity:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)isAutomaticSyncingDisabled;
-(BOOL)isWaitingForIdentityUpdate;
-(BOOL)isWaitingForHSA2;
-(long long)lastKnownAccountStatus;
-(BOOL)isReadyToSubmitSchedulerActivity;
-(long long)priorityForModifications;
-(void)submitActivityIfNecessaryWithIdentifier:(id)arg1 earliestStartDate:(id)arg2 priority:(long long)arg3 ;
-(long long)priorityForFetches;
-(void)updateAccountInfoAndScheduleWorkIfNecessaryWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)skipRetryOnOperationError;
-(void)setLastKnownAccountStatus:(long long)arg1 ;
-(void)startWaitingForIdentityUpdateIfNecessary;
-(void)startWaitingForHSA2IfNecessary;
-(void)setWaitingForIdentityUpdate:(BOOL)arg1 ;
-(void)identityUpdateNotification:(id)arg1 ;
-(void)setWaitingForHSA2:(BOOL)arg1 ;
-(void)updateAccountInfoWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithDatabase:(id)arg1 dataSource:(id)arg2 metadata:(id)arg3 ;
-(id)initWithDatabase:(id)arg1 dataSource:(id)arg2 metadata:(id)arg3 useUniqueActivityIdentifiers:(BOOL)arg4 disableAutomaticSyncing:(BOOL)arg5 ;
-(void)setAutomaticSyncingDisabled:(BOOL)arg1 ;
-(void)addRecordIDsToSave:(id)arg1 recordIDsToDelete:(id)arg2 ;
-(void)addRecordZonesToSave:(id)arg1 recordZoneIDsToDelete:(id)arg2 ;
-(void)modifyPendingChangesWithCompletionHandler:(/*^block*/id)arg1 ;
-(unsigned long long)numberOfModifyPendingRecordsOperations;
-(BOOL)hasPendingModifications;
-(void)fetchChangesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)saveSubscriptionIfNecessaryWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)unregisterActivities;
-(BOOL)hasSchedulerActivityWithIdentifier:(id)arg1 ;
-(void)setBatchCreationQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setMaxRecordCountPerBatch:(unsigned long long)arg1 ;
-(void)setMaxRecordBytesPerBatch:(unsigned long long)arg1 ;
-(void)setMaxZoneCountPerBatch:(unsigned long long)arg1 ;
-(void)setUseUniqueActivityIdentifiers:(BOOL)arg1 ;
-(void)setPriorityForFetches:(long long)arg1 ;
-(void)setPriorityForModifications:(long long)arg1 ;
-(void)setSkipRetryOnOperationError:(BOOL)arg1 ;
@end

