/*
* Generated on Monday, March 1, 2021 at 2:31:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


@protocol OS_dispatch_queue, OS_dispatch_group, OS_dispatch_source, PDCloudStoreContainerDelegate, PDCloudStoreDataSource;
@class NSMutableSet, NSObject, NSMutableOrderedSet, PDCloudStoreRecordsRequest, CKContainer, PDCloudStoreZoneManager, NSError;

@interface PDCloudStoreContainer : NSObject {

	NSMutableSet* _initializationCompletionHandlers;
	NSObject*<OS_dispatch_queue> _backgroundQueue;
	NSObject*<OS_dispatch_group> _batchUpdateGroup;
	BOOL _shouldInvalidateCloudStore;
	BOOL _shouldCancelAllTasks;
	NSObject*<OS_dispatch_source> _timeoutTimer;
	NSMutableOrderedSet* _fetchRequests;
	PDCloudStoreRecordsRequest* _currentRequest;
	BOOL _accountChangedNotificationReceived;
	BOOL _cloudContainerSetupInProgress;
	BOOL _resettingCloudContainer;
	CKContainer* _container;
	id<PDCloudStoreContainerDelegate> _delegate;
	id<PDCloudStoreDataSource> _dataSource;
	PDCloudStoreZoneManager* _zoneManager;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSError* _operationError;
	unsigned long long _nextExpectedState;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workQueue;                       //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,retain) NSError * operationError;                                       //@synthesize operationError=_operationError - In the implementation block
@property (assign,nonatomic) unsigned long long nextExpectedState;                           //@synthesize nextExpectedState=_nextExpectedState - In the implementation block
@property (assign,nonatomic) BOOL accountChangedNotificationReceived;                        //@synthesize accountChangedNotificationReceived=_accountChangedNotificationReceived - In the implementation block
@property (assign,nonatomic) BOOL cloudContainerSetupInProgress;                             //@synthesize cloudContainerSetupInProgress=_cloudContainerSetupInProgress - In the implementation block
@property (assign,nonatomic) BOOL resettingCloudContainer;                                   //@synthesize resettingCloudContainer=_resettingCloudContainer - In the implementation block
@property (nonatomic,retain) CKContainer * container;                                        //@synthesize container=_container - In the implementation block
@property (assign,nonatomic,__weak) id<PDCloudStoreContainerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,__weak,readonly) id<PDCloudStoreDataSource> dataSource;                 //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,readonly) PDCloudStoreZoneManager * zoneManager;                        //@synthesize zoneManager=_zoneManager - In the implementation block
-(id)description;
-(CKContainer *)container;
-(void)setContainer:(CKContainer *)arg1 ;
-(id<PDCloudStoreContainerDelegate>)delegate;
-(void)setDelegate:(id<PDCloudStoreContainerDelegate>)arg1 ;
-(id)errorWithCode:(long long)arg1 description:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(id)initWithDataSource:(id)arg1 ;
-(id<PDCloudStoreDataSource>)dataSource;
-(BOOL)isSetup;
-(void)deleteZone:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSError *)operationError;
-(void)setOperationError:(NSError *)arg1 ;
-(PDCloudStoreZoneManager *)zoneManager;
-(BOOL)canInvalidateContainer;
-(void)invalidateCloudStoreWithOperationGroupNameSuffix:(id)arg1 clearCache:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(id)allRecordNamesAssociatedWithRecordName:(id)arg1 itemType:(unsigned long long)arg2 inZone:(id)arg3 ;
-(BOOL)cloudContainerSetupInProgress;
-(BOOL)accountChangedNotificationReceived;
-(void)setAccountChangedNotificationReceived:(BOOL)arg1 ;
-(unsigned long long)nextExpectedState;
-(void)initialCloudDatabaseSetupWithOperationGroupNameSuffix:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setNextExpectedState:(unsigned long long)arg1 ;
-(void)setContainerState:(unsigned long long)arg1 operationGroupNameSuffix:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)cloudStoreAccountInformationWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)ensureContainerState:(unsigned long long)arg1 ;
-(void)setContainerState:(unsigned long long)arg1 operationGroupNameSuffix:(id)arg2 retryCount:(unsigned long long)arg3 completion:(/*^block*/id)arg4 ;
-(id)cloudStoreSpecificKeysForItem:(id)arg1 ;
-(void)updateCloudStoreWithLocalItems:(id)arg1 recordSpecificKeys:(id)arg2 includeServerData:(BOOL)arg3 groupName:(id)arg4 groupNameSuffix:(id)arg5 qualityOfService:(long long)arg6 completion:(/*^block*/id)arg7 ;
-(void)processResultWithError:(id)arg1 nextExpectedState:(unsigned long long)arg2 operationGroupNameSuffix:(id)arg3 retryCount:(unsigned long long)arg4 shouldRetry:(BOOL)arg5 completion:(/*^block*/id)arg6 ;
-(BOOL)resettingCloudContainer;
-(void)setResettingCloudContainer:(BOOL)arg1 ;
-(void)executeRecordsRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)shouldCreateZoneWithNames:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)invalidateCloudStoreIfPossibleWithOperationGroupNameSuffix:(id)arg1 clearCache:(BOOL)arg2 ;
-(id)recordTypesForCloudStoreItemType:(unsigned long long)arg1 ;
-(void)fetchRecordsWithRecordIDs:(id)arg1 operationGroupName:(id)arg2 operationGroupNameSuffix:(id)arg3 qualityOfService:(long long)arg4 completion:(/*^block*/id)arg5 ;
-(void)fetchRecordsWithQuery:(id)arg1 operationGroupName:(id)arg2 operationGroupNameSuffix:(id)arg3 qualityOfService:(long long)arg4 zone:(id)arg5 completion:(/*^block*/id)arg6 ;
-(void)shouldFetchAndStoreCloudDataAtStartupWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)canInitializeContainer;
-(void)cloudStoreAccountChanged:(id)arg1 ;
-(BOOL)canCoalesceRequest:(id)arg1 withNewRequest:(id)arg2 ;
-(void)coalesceRequest:(id)arg1 withNewRequest:(id)arg2 ;
-(BOOL)shouldContinueWithRequest:(id)arg1 ;
-(void)processFetchedCloudStoreDataWithModifiedRecords:(id)arg1 deletedRecords:(id)arg2 request:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)allItemsOfItemType:(unsigned long long)arg1 storeLocally:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)itemOfItemType:(unsigned long long)arg1 recordName:(id)arg2 qualityOfService:(long long)arg3 completion:(/*^block*/id)arg4 ;
-(void)removeItemsWithRecordNames:(id)arg1 itemType:(unsigned long long)arg2 groupName:(id)arg3 groupNameSuffix:(id)arg4 qualityOfService:(long long)arg5 completion:(/*^block*/id)arg6 ;
-(void)removeRecordWithRecordName:(id)arg1 zoneName:(id)arg2 groupName:(id)arg3 groupNameSuffix:(id)arg4 qualityOfService:(long long)arg5 completion:(/*^block*/id)arg6 ;
-(void)resetContainerWithCompletion:(/*^block*/id)arg1 ;
-(void)invalidateCloudStoreAndClearCache:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)canUpdateAndFetchRecords;
-(void)_cancelCloudStoreInitializationTimer;
-(void)_markEndCloudStoreDatabaseSetupWithSuccess:(BOOL)arg1 error:(id)arg2 ;
-(void)_startCloudStoreInitializationTimer;
-(void)attachToContainer;
-(void)detachFromContainerWithState:(unsigned long long)arg1 ;
-(void)_fetchRecordZonesWithOperationGroupNameSuffix:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_fetchAllSubscriptionsWithOperationGroupNameSuffix:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)createZones:(id)arg1 shouldFetchData:(BOOL)arg2 operationGroupNameSuffix:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)createZoneSubscriptions:(id)arg1 operationGroupNameSuffix:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_deleteAllZonesWithOperationGroupNameSuffix:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_deleteAllZoneSubscriptionsWithOperationGroupNameSuffix:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_retryContainerStateWithError:(id)arg1 operationGroupNameSuffix:(id)arg2 retryCount:(unsigned long long)arg3 completion:(/*^block*/id)arg4 ;
-(void)_keychainSyncFinishedFired;
-(id)_cannotPerformActionErrorWithFailureReason:(id)arg1 ;
-(void)_zoneOperationWithZonesToSave:(id)arg1 zonesIDsToDelete:(id)arg2 operationGroupNameSuffix:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_subscriptionOperationWithSubscriptionsToSave:(id)arg1 subscriptionIDsToDelete:(id)arg2 operationGroupNameSuffix:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_queue_executeNextFecthRequestIfPossible;
-(void)_queue_fetchAllRecordsUsingStoredChangeToken:(BOOL)arg1 changeToken:(id)arg2 shouldSaveToken:(BOOL)arg3 zoneName:(id)arg4 operationGroupName:(id)arg5 operationGroupNameSuffix:(id)arg6 qualityOfService:(long long)arg7 batchHandler:(/*^block*/id)arg8 completion:(/*^block*/id)arg9 ;
-(void)modifyRecordsOperationWithRecordsToSave:(id)arg1 recordIDsToDelete:(id)arg2 operationGroupName:(id)arg3 operationGroupNameSuffix:(id)arg4 qualityOfService:(long long)arg5 completion:(/*^block*/id)arg6 ;
-(void)_addOperation:(id)arg1 ;
-(void)initialCloudDatabaseSetupWithCompletion:(/*^block*/id)arg1 ;
-(void)_fetchRecordsWithQuery:(id)arg1 operationGroupName:(id)arg2 operationGroupNameSuffix:(id)arg3 qualityOfService:(long long)arg4 cursor:(id)arg5 fetchedRecords:(id)arg6 zone:(id)arg7 completion:(/*^block*/id)arg8 ;
-(void)_cancelAllOperations;
-(void)_cloudStoreInitializationTimerFired;
-(id)lastFetchDateForZoneWithName:(id)arg1 ;
-(void)setCloudContainerSetupInProgress:(BOOL)arg1 ;
@end

