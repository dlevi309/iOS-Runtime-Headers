/*
* Generated on Thursday, January 14, 2021 at 2:21:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/


@protocol CKSyncEngineDataSource, OS_dispatch_queue;
@class CKDatabase, CKSyncEngineMetadata, CKNotificationListener, NSOperationQueue, NSObject;

@interface CKSyncEngine : NSObject {

	BOOL _ignoringSystemConditions;
	BOOL _allowMetadataCallbackDeferral;
	BOOL _waitingForIdentityUpdate;
	BOOL _waitingForHSA2;
	BOOL _useUniqueActivityIdentifiers;
	BOOL _skipRetryOnOperationError;
	BOOL _automaticSyncingEnabled;
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
	long long _priority;
	/*^block*/id _updateMetadataBlock;

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
@property (assign,nonatomic) BOOL allowMetadataCallbackDeferral;                                           //@synthesize allowMetadataCallbackDeferral=_allowMetadataCallbackDeferral - In the implementation block
@property (assign,getter=isWaitingForIdentityUpdate,nonatomic) BOOL waitingForIdentityUpdate;              //@synthesize waitingForIdentityUpdate=_waitingForIdentityUpdate - In the implementation block
@property (assign,getter=isWaitingForHSA2,nonatomic) BOOL waitingForHSA2;                                  //@synthesize waitingForHSA2=_waitingForHSA2 - In the implementation block
@property (assign,nonatomic) long long lastKnownAccountStatus;                                             //@synthesize lastKnownAccountStatus=_lastKnownAccountStatus - In the implementation block
@property (assign,nonatomic) BOOL useUniqueActivityIdentifiers;                                            //@synthesize useUniqueActivityIdentifiers=_useUniqueActivityIdentifiers - In the implementation block
@property (nonatomic,readonly) BOOL ignoringSystemConditions;                                              //@synthesize ignoringSystemConditions=_ignoringSystemConditions - In the implementation block
@property (assign,nonatomic) long long priority;                                                           //@synthesize priority=_priority - In the implementation block
@property (nonatomic,copy) id updateMetadataBlock;                                                         //@synthesize updateMetadataBlock=_updateMetadataBlock - In the implementation block
@property (assign,nonatomic) BOOL skipRetryOnOperationError;                                               //@synthesize skipRetryOnOperationError=_skipRetryOnOperationError - In the implementation block
@property (assign,getter=isAutomaticSyncingEnabled,nonatomic) BOOL automaticSyncingEnabled;                //@synthesize automaticSyncingEnabled=_automaticSyncingEnabled - In the implementation block
@property (assign,nonatomic) BOOL useOpportunisticPushTopic; 
@property (nonatomic,__weak,readonly) id<CKSyncEngineDataSource> dataSource;                               //@synthesize dataSource=_dataSource - In the implementation block
+(BOOL)fastErrorRetry;
+(id)userRequestedBackupActivityIdentifierInDatabase:(id)arg1 ignoringSystemConditions:(BOOL)arg2 ;
+(id)syncActivityIdentifierInDatabase:(id)arg1 ignoringSystemConditions:(BOOL)arg2 ;
+(id)errorForAccountStatus:(long long)arg1 ;
+(id)supportedDatabaseScopes;
+(void)unregisterActivitiesWithDatabase:(id)arg1 ignoringSystemConditions:(BOOL)arg2 ;
+(id)earliestStartDateAfterError:(id)arg1 ;
+(id)saveSubscriptionActivityIdentifierInDatabase:(id)arg1 ignoringSystemConditions:(BOOL)arg2 ;
+(BOOL)shouldDeferAfterError:(id)arg1 ;
+(void)setFastErrorRetry:(BOOL)arg1 ;
+(id)activityIdentifierWithName:(id)arg1 database:(id)arg2 ignoringSystemConditions:(BOOL)arg3 uniquenessPointer:(id)arg4 ;
-(void)modifyPendingChangesInZoneIDs:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)addRecordZonesToSave:(id)arg1 recordZoneIDsToDelete:(id)arg2 ;
-(void)setOperationQueue:(NSOperationQueue *)arg1 ;
-(void)setSkipRetryOnOperationError:(BOOL)arg1 ;
-(NSOperationQueue *)operationQueue;
-(void)commonInitWithDatabase:(id)arg1 dataSource:(id)arg2 metadata:(id)arg3 machServiceName:(id)arg4 useUniqueActivityIdentifiers:(BOOL)arg5 automaticSyncingEnabled:(BOOL)arg6 priority:(long long)arg7 ;
-(id)defaultOperationConfiguration;
-(void)setDatabase:(CKDatabase *)arg1 ;
-(BOOL)useOpportunisticPushTopic;
-(BOOL)useUniqueActivityIdentifiers;
-(void)performSyncActivity:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)saveSubscriptionIfNecessaryWithOperationGroup:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)init;
-(void)submitActivityIfNecessaryWithIdentifier:(id)arg1 earliestStartDate:(id)arg2 priority:(long long)arg3 userRequestedBackupTask:(BOOL)arg4 ;
-(BOOL)isAutomaticSyncingEnabled;
-(void)fetchChangesOperation:(id)arg1 recordZoneWithIDWasPurged:(id)arg2 ;
-(void)accountChangedNotification:(id)arg1 ;
-(id)nextBatchOfRecordsToModifyDefaultBehaviorInZoneIDs:(id)arg1 ;
-(void)unregisterActivities;
-(id)activityIdentifierWithName:(id)arg1 ;
-(BOOL)isReadyToSubmitSchedulerActivity;
-(id)initWithDatabase:(id)arg1 dataSource:(id)arg2 metadata:(id)arg3 machServiceName:(id)arg4 ;
-(BOOL)_hasPendingModifications;
-(void)setLastNotifiedMetadataChangeCount:(unsigned long long)arg1 ;
-(void)setMaxRecordBytesPerBatch:(unsigned long long)arg1 ;
-(void)setUpdateMetadataBlock:(id)arg1 ;
-(void)_fetchChangesForZoneIDs:(id)arg1 operationGroup:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)hasSchedulerActivityWithIdentifier:(id)arg1 ;
-(void)_queue_fetchChangesForZoneIDs:(id)arg1 operationGroup:(id)arg2 osActivity:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)updateAccountInfoAndScheduleWorkIfNecessaryWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)startWaitingForIdentityUpdateIfNecessary;
-(void)didReceiveDatabaseNotification:(id)arg1 ;
-(unsigned long long)numberOfModifyPendingRecordsOperations;
-(void)fetchChangesOperation:(id)arg1 recordWithIDWasDeleted:(id)arg2 recordType:(id)arg3 ;
-(id)saveSubscriptionActivityIdentifier;
-(id<CKSyncEngineDataSource>)dataSource;
-(void)setBatchCreationQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)registerSchedulerActivities;
-(id)userRequestedBackupActivityIdentifier;
-(void)setAllowMetadataCallbackDeferral:(BOOL)arg1 ;
-(id)syncActivityIdentifier;
-(id)initWithDatabase:(id)arg1 dataSource:(id)arg2 metadata:(id)arg3 useUniqueActivityIdentifiers:(BOOL)arg4 automaticSyncingEnabled:(BOOL)arg5 ;
-(void)fetchChangesOperation:(id)arg1 completedWithError:(id)arg2 ;
-(void)notifyDataSourceForUnserializedMetadataIfNecessaryWithCoalescing:(BOOL)arg1 ;
-(id)nextBatchOfRecordsToModifyWithCustomBatchingInZoneIDs:(id)arg1 ;
-(CKNotificationListener *)notificationListener;
-(void)setMetadata:(CKSyncEngineMetadata *)arg1 ;
-(BOOL)isWaitingForHSA2;
-(id)databaseSubscription;
-(void)modifyRecordBatchesOperation:(id)arg1 completedWithError:(id)arg2 ;
-(void)updateAccountInfoWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)existingOperationsToModifyAnyZonesInZoneIDs:(id)arg1 ;
-(BOOL)isWaitingForIdentityUpdate;
-(id)newOperationToModifyRecordBatchesInZoneIDs:(id)arg1 operationGroup:(id)arg2 osActivity:(id)arg3 ;
-(BOOL)hasPendingModifications;
-(unsigned long long)lastNotifiedMetadataChangeCount;
-(NSObject*<OS_dispatch_queue>)batchCreationQueue;
-(BOOL)needsToFetchChangesForZoneIDs:(id)arg1 ;
-(void)modifyRecordBatchesOperation:(id)arg1 perRecordProgressForRecord:(id)arg2 progress:(double)arg3 ;
-(void)modifyRecordBatchesOperation:(id)arg1 perDeleteRecordIDCompletion:(id)arg2 inBatch:(id)arg3 error:(id)arg4 ;
-(BOOL)shouldFetchChangesForZoneID:(id)arg1 ;
-(void)setMaxRecordCountPerBatch:(unsigned long long)arg1 ;
-(void)registerForSubscriptions;
-(id)existingOperationToModifyRecordBatchesForZoneIDs:(id)arg1 includingExecutingOperations:(BOOL)arg2 ;
-(void)fetchChangesOperation:(id)arg1 recordZoneWithIDChanged:(id)arg2 ;
-(BOOL)skipRetryOnOperationError;
-(void)fetchChangesOperation:(id)arg1 updatedServerChangeToken:(id)arg2 clientChangeToken:(id)arg3 forRecordZoneID:(id)arg4 ;
-(BOOL)ignoringSystemConditions;
-(BOOL)allowMetadataCallbackDeferral;
-(void)fetchChangesOperation:(id)arg1 databaseChangeTokenUpdated:(id)arg2 ;
-(void)_queue_modifyPendingChangesInZoneIDs:(id)arg1 operationGroup:(id)arg2 osActivity:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)ensureAccountAvailableWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)saveSubscriptionIfNecessaryWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_modifyPendingChangesInZoneIDs:(id)arg1 operationGroup:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)existingOperationToFetchChangesForZoneIDs:(id)arg1 includingExecutingOperations:(BOOL)arg2 ;
-(id)initWithDatabase:(id)arg1 dataSource:(id)arg2 metadata:(id)arg3 machServiceName:(id)arg4 priority:(long long)arg5 ;
-(void)modifyRecordBatchesOperation:(id)arg1 completedBatch:(id)arg2 withSavedRecords:(id)arg3 deletedRecordIDs:(id)arg4 error:(id)arg5 ;
-(void)setNotificationListener:(CKNotificationListener *)arg1 ;
-(void)modifyPendingChangesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)addOperationsToModifyZonesIfNecessaryFilteredByZoneIDs:(id)arg1 operationGroup:(id)arg2 osActivity:(id)arg3 ;
-(void)fetchChangesOperation:(id)arg1 completedFetchingDatabaseChangesWithError:(id)arg2 ;
-(void)modifyRecordBatchesOperation:(id)arg1 perRecordSaveCompletionForRecord:(id)arg2 inBatch:(id)arg3 error:(id)arg4 ;
-(id)updateMetadataBlock;
-(long long)lastKnownAccountStatus;
-(void)scheduleSyncIfNecessaryWithEarliestStartDate:(id)arg1 ;
-(unsigned long long)maxRecordCountPerBatch;
-(id)newOperationToModifyZonesToSave:(id)arg1 zoneIDsToDelete:(id)arg2 inOperationGroup:(id)arg3 osActivity:(id)arg4 ;
-(void)performUserRequestedBackupActivity:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)fetchChangesOperation:(id)arg1 recordChanged:(id)arg2 ;
-(void)_saveSubscriptionIfNecessaryWithOperationGroup:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)shouldRetryAfterError:(id)arg1 ;
-(void)fetchChangesWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)_needsToFetchChangesForZoneIDs:(id)arg1 ;
-(void)setAutomaticSyncingEnabled:(BOOL)arg1 ;
-(id)nextBatchOfRecordsToModifyInZoneIDs:(id)arg1 ;
-(CKDatabase *)database;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(void)performSaveSubscriptionActivity:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)fetchChangesOperation:(id)arg1 recordZoneWithIDWasDeleted:(id)arg2 ;
-(void)startWaitingForHSA2IfNecessary;
-(void)_fetchChangesForZoneIDs:(id)arg1 ifNecessary:(BOOL)arg2 operationGroup:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)newOperationToFetchChangesForZoneIDs:(id)arg1 operationGroup:(id)arg2 osActivity:(id)arg3 ;
-(void)setUseUniqueActivityIdentifiers:(BOOL)arg1 ;
-(void)setMaxZoneCountPerBatch:(unsigned long long)arg1 ;
-(void)modifyPendingChangesInZoneIDs:(id)arg1 operationGroup:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)initWithDatabase:(id)arg1 dataSource:(id)arg2 metadata:(id)arg3 machServiceName:(id)arg4 ignoringSystemConditions:(BOOL)arg5 useUniqueActivityIdentifiers:(BOOL)arg6 automaticSyncingEnabled:(BOOL)arg7 ;
-(unsigned long long)maxRecordBytesPerBatch;
-(CKSyncEngineMetadata *)metadata;
-(unsigned long long)maxZoneCountPerBatch;
-(void)setLastKnownAccountStatus:(long long)arg1 ;
-(void)setUseOpportunisticPushTopic:(BOOL)arg1 ;
-(long long)priority;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)fetchChangesForZoneIDs:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)addRecordIDsToSave:(id)arg1 recordIDsToDelete:(id)arg2 ;
-(void)setCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)initWithDatabase:(id)arg1 dataSource:(id)arg2 metadata:(id)arg3 ;
-(void)setWaitingForHSA2:(BOOL)arg1 ;
-(void)fetchChangesOperation:(id)arg1 completedFetchingChangesForRecordZoneID:(id)arg2 serverChangeToken:(id)arg3 clientChangeToken:(id)arg4 error:(id)arg5 ;
-(void)scheduleUserRequestedBackupActivityIfNecessary;
-(void)scheduleInitialWorkIfNecessary;
-(void)setPriority:(long long)arg1 ;
-(void)fetchChangesForZoneIDs:(id)arg1 ifNecessary:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setWaitingForIdentityUpdate:(BOOL)arg1 ;
-(void)dealloc;
-(void)updateReadinessStateFromError:(id)arg1 ;
-(void)scheduleSaveSubscriptionIfNecessaryWithEarliestStartDate:(id)arg1 ;
-(void)identityUpdateNotification:(id)arg1 ;
@end

