/*
* Generated on Thursday, January 14, 2021 at 2:23:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
*/

#import <libobjc.A.dylib/ICStateHandlerProvider.h>

@protocol ICCloudContextDelegate, ICCloudAnalyticsDelegate, OS_dispatch_queue;
@class NSOperationQueue, NSObject, NSMutableSet, NSTimer, NSMutableDictionary, ICSelectorDelayer, NSDictionary, NSString;

@interface ICCloudContext : NSObject <ICStateHandlerProvider> {

	BOOL _fetchOperationsPending;
	BOOL _needsToUpdateSubscriptions;
	BOOL _enableLongLivedOperations;
	BOOL _disableAutomaticallyRetryNetworkFailures;
	BOOL _disableRetryTimer;
	BOOL _syncOnlyIfReachable;
	BOOL _disabled;
	BOOL _disabledInternal;
	BOOL _needsToProcessAllObjects;
	BOOL _didAddObservers;
	BOOL _fetchingEnabled;
	BOOL _syncDisabledByServer;
	BOOL _didCheckForLongLivedOperations;
	id<ICCloudContextDelegate> _cloudContextDelegate;
	id<ICCloudAnalyticsDelegate> _cloudAnalyticsDelegate;
	long long _qualityOfService;
	unsigned long long _discretionaryNetworkBehavior;
	NSOperationQueue* _operationQueue;
	NSObject*<OS_dispatch_queue> _processingQueue;
	NSObject*<OS_dispatch_queue> _containersCreationQueue;
	NSMutableSet* _objectIDsToRetry;
	NSTimer* _retryTimer;
	NSMutableDictionary* _retryCountsByOperationType;
	NSMutableSet* _objectIDsToProcess;
	ICSelectorDelayer* _processingSelectorDelayer;
	ICSelectorDelayer* _syncSelectorDelayer;
	NSDictionary* _containersByAccountID;
	NSMutableDictionary* _accountZoneIDsNeedingFetchChanges;
	NSMutableDictionary* _accountZoneIDsFetchingChanges;
	NSMutableDictionary* _accountZoneIDsNeedingToBeSaved;
	NSMutableSet* _subscribedSubscriptionIDs;

}

@property (nonatomic,retain) NSOperationQueue * operationQueue;                                       //@synthesize operationQueue=_operationQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> processingQueue;                            //@synthesize processingQueue=_processingQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> containersCreationQueue;                    //@synthesize containersCreationQueue=_containersCreationQueue - In the implementation block
@property (nonatomic,retain) NSMutableSet * objectIDsToRetry;                                         //@synthesize objectIDsToRetry=_objectIDsToRetry - In the implementation block
@property (retain) NSTimer * retryTimer;                                                              //@synthesize retryTimer=_retryTimer - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * retryCountsByOperationType;                        //@synthesize retryCountsByOperationType=_retryCountsByOperationType - In the implementation block
@property (assign,nonatomic) long long accountStatus; 
@property (getter=isDisabledInternal) BOOL disabledInternal;                                          //@synthesize disabledInternal=_disabledInternal - In the implementation block
@property (nonatomic,readonly) NSDictionary * cloudObjectClassesByRecordType; 
@property (assign,nonatomic) BOOL needsToProcessAllObjects;                                           //@synthesize needsToProcessAllObjects=_needsToProcessAllObjects - In the implementation block
@property (nonatomic,retain) NSMutableSet * objectIDsToProcess;                                       //@synthesize objectIDsToProcess=_objectIDsToProcess - In the implementation block
@property (retain) ICSelectorDelayer * processingSelectorDelayer;                                     //@synthesize processingSelectorDelayer=_processingSelectorDelayer - In the implementation block
@property (retain) ICSelectorDelayer * syncSelectorDelayer;                                           //@synthesize syncSelectorDelayer=_syncSelectorDelayer - In the implementation block
@property (assign,nonatomic) BOOL didAddObservers;                                                    //@synthesize didAddObservers=_didAddObservers - In the implementation block
@property (assign,getter=isFetchingEnabled,nonatomic) BOOL fetchingEnabled;                           //@synthesize fetchingEnabled=_fetchingEnabled - In the implementation block
@property (assign,nonatomic) BOOL syncDisabledByServer;                                               //@synthesize syncDisabledByServer=_syncDisabledByServer - In the implementation block
@property (nonatomic,retain) NSDictionary * containersByAccountID;                                    //@synthesize containersByAccountID=_containersByAccountID - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * accountZoneIDsNeedingFetchChanges;                 //@synthesize accountZoneIDsNeedingFetchChanges=_accountZoneIDsNeedingFetchChanges - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * accountZoneIDsFetchingChanges;                     //@synthesize accountZoneIDsFetchingChanges=_accountZoneIDsFetchingChanges - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * accountZoneIDsNeedingToBeSaved;                    //@synthesize accountZoneIDsNeedingToBeSaved=_accountZoneIDsNeedingToBeSaved - In the implementation block
@property (retain) NSMutableSet * subscribedSubscriptionIDs;                                          //@synthesize subscribedSubscriptionIDs=_subscribedSubscriptionIDs - In the implementation block
@property (assign,nonatomic) BOOL didCheckForLongLivedOperations;                                     //@synthesize didCheckForLongLivedOperations=_didCheckForLongLivedOperations - In the implementation block
@property (assign,nonatomic,__weak) id<ICCloudContextDelegate> cloudContextDelegate;                  //@synthesize cloudContextDelegate=_cloudContextDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<ICCloudAnalyticsDelegate> cloudAnalyticsDelegate;              //@synthesize cloudAnalyticsDelegate=_cloudAnalyticsDelegate - In the implementation block
@property (nonatomic,readonly) BOOL fetchOperationsPending;                                           //@synthesize fetchOperationsPending=_fetchOperationsPending - In the implementation block
@property (assign) BOOL needsToUpdateSubscriptions;                                                   //@synthesize needsToUpdateSubscriptions=_needsToUpdateSubscriptions - In the implementation block
@property (assign,nonatomic) long long qualityOfService;                                              //@synthesize qualityOfService=_qualityOfService - In the implementation block
@property (assign,nonatomic) unsigned long long discretionaryNetworkBehavior;                         //@synthesize discretionaryNetworkBehavior=_discretionaryNetworkBehavior - In the implementation block
@property (assign,nonatomic) BOOL enableLongLivedOperations;                                          //@synthesize enableLongLivedOperations=_enableLongLivedOperations - In the implementation block
@property (assign,nonatomic) BOOL disableAutomaticallyRetryNetworkFailures;                           //@synthesize disableAutomaticallyRetryNetworkFailures=_disableAutomaticallyRetryNetworkFailures - In the implementation block
@property (assign,nonatomic) BOOL disableRetryTimer;                                                  //@synthesize disableRetryTimer=_disableRetryTimer - In the implementation block
@property (assign,nonatomic) BOOL syncOnlyIfReachable;                                                //@synthesize syncOnlyIfReachable=_syncOnlyIfReachable - In the implementation block
@property (getter=isDisabled) BOOL disabled;                                                          //@synthesize disabled=_disabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)haveZoneIDsInAccountZoneIDs:(id)arg1 ;
+(void)registerStateHandler;
+(id)allZoneIDsInAccountZoneIDs:(id)arg1 ;
+(id)zoneIDsFromZoneInfos:(id)arg1 ;
+(id)errorFromOperations:(id)arg1 ;
+(id)objectsByDatabaseScope:(id)arg1 ;
+(id)errorFromErrors:(id)arg1 ;
+(void)deleteAllServerChangeTokens;
+(BOOL)isZoneConfigurations:(id)arg1 subsetOfZoneConfigurations:(id)arg2 ;
+(id)deduplicatedRecordsForCloudObjects:(id)arg1 ;
+(id)metadataZoneID;
+(id)zoneInfosFromZoneIDs:(id)arg1 ;
+(id)objectsByAccount:(id)arg1 ;
+(id)newNotesContainerForAccountID:(id)arg1 ;
+(id)notesZoneID;
+(void)batchRecordsToSave:(id)arg1 delete:(id)arg2 maxRecordCountPerBatch:(unsigned long long)arg3 maxRecordSizePerBatch:(unsigned long long)arg4 withBlock:(/*^block*/id)arg5 ;
+(id)errorsFromError:(id)arg1 ;
+(id)errorForWaitingForRetryTimer;
+(id)sharedContext;
+(id)sortedRecords:(id)arg1 ;
+(id)errorCodesToIgnoreForBackoffTimer;
+(id)userRecordNameForContainer:(id)arg1 ;
+(id)errorForDisabledCloudSyncing;
+(id)newNotesContainer;
+(BOOL)shouldIgnoreErrorForBackoffTimer:(id)arg1 ;
-(void)setQualityOfService:(long long)arg1 ;
-(BOOL)isInForeground;
-(void)setOperationQueue:(NSOperationQueue *)arg1 ;
-(void)setDisabled:(BOOL)arg1 ;
-(void)fetchDatabaseChangesOperation:(id)arg1 changeTokenUpdated:(id)arg2 accountID:(id)arg3 ;
-(NSOperationQueue *)operationQueue;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(BOOL)isReadyToSync;
-(void)loadZoneFetchState;
-(NSMutableDictionary *)accountZoneIDsNeedingFetchChanges;
-(void)fetchDatabaseChangesOperation:(id)arg1 finishedWithServerChangeToken:(id)arg2 accountID:(id)arg3 error:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)retryOperationsIfNecessary;
-(id)allCloudObjectsInContext:(id)arg1 ;
-(void)processPendingCloudObjectsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setSyncOnlyIfReachable:(BOOL)arg1 ;
-(void)resetZoneForCloudAccount:(id)arg1 withReason:(id)arg2 ;
-(void)deleteRecordZonesWithZoneIDs:(id)arg1 accountID:(id)arg2 markZonesAsUserPurged:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)init;
-(void)setContainersCreationQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)fetchDatabaseChangesForDatabases:(id)arg1 reason:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)syncDisabledByServer;
-(void)fetchRecordZoneChangesOperation:(id)arg1 completedFetchForZoneID:(id)arg2 serverChangeToken:(id)arg3 error:(id)arg4 ;
-(void)fetchOperation:(id)arg1 fetchedRecord:(id)arg2 recordID:(id)arg3 error:(id)arg4 ;
-(BOOL)disableRetryTimer;
-(void)receivedZoneNotFound:(id)arg1 operation:(id)arg2 ;
-(void)fetchRecordZoneChangesOperation:(id)arg1 recordChanged:(id)arg2 context:(id)arg3 ;
-(void)fetchOperation:(id)arg1 didCompleteWithRecordsByRecordID:(id)arg2 error:(id)arg3 ;
-(id)serverChangeTokenForChangedZonesInDatabase:(id)arg1 accountID:(id)arg2 ;
-(void)recursiveCancelDependentOperations:(id)arg1 ;
-(long long)accountStatus;
-(void)setRetryTimer:(NSTimer *)arg1 ;
-(NSTimer *)retryTimer;
-(BOOL)didAddObservers;
-(unsigned long long)discretionaryNetworkBehavior;
-(NSMutableDictionary *)retryCountsByOperationType;
-(void)setAccountZoneIDsFetchingChanges:(NSMutableDictionary *)arg1 ;
-(id)newOperationToFetchRecordZoneChangesWithZoneConfigurations:(id)arg1 database:(id)arg2 ;
-(NSMutableSet *)objectIDsToRetry;
-(BOOL)partialError:(id)arg1 containsErrorCode:(long long)arg2 ;
-(void)cancelEverythingWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSDictionary *)cloudObjectClassesByRecordType;
-(void)deleteServerChangeTokenForRecordZoneID:(id)arg1 databaseScope:(long long)arg2 accountID:(id)arg3 ;
-(void)updateSubscriptionsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)syncWithReason:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setDiscretionaryNetworkBehavior:(unsigned long long)arg1 ;
-(void)setAccountStatus:(long long)arg1 ;
-(void)setNeedsToUpdateSubscriptions:(BOOL)arg1 ;
-(id)existingCloudObjectForRecordID:(id)arg1 recordType:(id)arg2 accountID:(id)arg3 context:(id)arg4 ;
-(void)setDisableAutomaticallyRetryNetworkFailures:(BOOL)arg1 ;
-(void)incrementOrClearRetryCountForOperationType:(id)arg1 error:(id)arg2 ;
-(void)checkForLongLivedOperations;
-(void)_addModifyRecordsOperationsWithCloudObjectsToSave:(id)arg1 delete:(id)arg2 accountID:(id)arg3 operationGroupName:(id)arg4 waitForDependencies:(BOOL)arg5 completionHandler:(/*^block*/id)arg6 ;
-(void)fetchRecordZoneChangesOperation:(id)arg1 recordWasDeletedWithRecordID:(id)arg2 recordType:(id)arg3 context:(id)arg4 ;
-(void)clearRetryCountForOperationType:(id)arg1 ;
-(void)setSyncDisabledByServer:(BOOL)arg1 ;
-(BOOL)isDisabled;
-(NSMutableDictionary *)accountZoneIDsFetchingChanges;
-(BOOL)syncOnlyIfReachable;
-(void)modifyRecordsOperation:(id)arg1 perDeleteRecordIDCompletion:(id)arg2 rootRecordIDsByShareID:(id)arg3 error:(id)arg4 ;
-(void)fetchRecordZoneChangesOperationDidComplete:(id)arg1 error:(id)arg2 ;
-(BOOL)isFetchingAllRecordZones;
-(void)addOperationToProcessObjectsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)validateAccountZoneIDsNeedingFetchChanges;
-(id<ICCloudContextDelegate>)cloudContextDelegate;
-(id)operationsToFetchRecordIDs:(id)arg1 qualityOfService:(long long)arg2 operationGroupName:(id)arg3 accountID:(id)arg4 ;
-(void)fetchRecordZoneChangesForAccountZoneIDs:(id)arg1 reason:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setAccountZoneIDsNeedingFetchChanges:(NSMutableDictionary *)arg1 ;
-(void)fetchDatabaseChangesOperation:(id)arg1 recordZoneWithIDChanged:(id)arg2 accountID:(id)arg3 ;
-(void)deleteSharesForObjects:(id)arg1 accountID:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)needsToUpdateSubscriptions;
-(id)operationsToFetchRecordZoneChangesForZoneIDs:(id)arg1 accountID:(id)arg2 ;
-(id)containerForAccountID:(id)arg1 ;
-(void)addCallbackBlocksToModifyRecordsOperation:(id)arg1 rootRecordIDsByShareID:(id)arg2 ;
-(void)handleNotification:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setCloudContextDelegate:(id<ICCloudContextDelegate>)arg1 ;
-(id)newPlaceholderObjectForRecordID:(id)arg1 recordType:(id)arg2 accountID:(id)arg3 context:(id)arg4 ;
-(void)fetchCloudObjects:(id)arg1 accountID:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)saveServerChangeToken:(id)arg1 forChangedZonesInDatabase:(id)arg2 accountID:(id)arg3 ;
-(void)syncIfNeeded;
-(BOOL)isInternetReachable;
-(void)modifyRecordsOperation:(id)arg1 perSaveRecordCompletion:(id)arg2 error:(id)arg3 ;
-(void)clearZoneFetchState;
-(id<ICCloudAnalyticsDelegate>)cloudAnalyticsDelegate;
-(void)setCloudAnalyticsDelegate:(id<ICCloudAnalyticsDelegate>)arg1 ;
-(void)fetchUserRecordWithAccountID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)reachabilityChanged:(id)arg1 ;
-(void)clearPendingActivity;
-(double)timeIntervalToRetryAfterFromError:(id)arg1 ;
-(id)operationToFetchRecordZoneChangesForZoneIDs:(id)arg1 database:(id)arg2 ;
-(void)setDisabledInternal:(BOOL)arg1 ;
-(NSMutableDictionary *)accountZoneIDsNeedingToBeSaved;
-(NSObject*<OS_dispatch_queue>)containersCreationQueue;
-(id)operationToSaveZonesIfNecessaryForAccountID:(id)arg1 ;
-(void)setSubscribedSubscriptionIDs:(NSMutableSet *)arg1 ;
-(void)pauseCloudSyncWhileSynchronouslyPerformingBlock:(/*^block*/id)arg1 ;
-(BOOL)fetchOperationsPending;
-(id)readinessLoggingDescription;
-(void)setObjectIDsToProcess:(NSMutableSet *)arg1 ;
-(ICSelectorDelayer *)processingSelectorDelayer;
-(void)contextDidSave:(id)arg1 ;
-(void)addDependenciesForModifyRecordsOperation:(id)arg1 ;
-(NSMutableSet *)objectIDsToProcess;
-(void)fireSyncRequest;
-(void)modifyRecordsOperation:(id)arg1 didCompleteWithSavedRecords:(id)arg2 deletedRecordIDs:(id)arg3 rootRecordIDsByShareID:(id)arg4 error:(id)arg5 ;
-(id)existingCloudObjectForRecordID:(id)arg1 recordType:(id)arg2 accountID:(id)arg3 context:(id)arg4 excludingRecordTypes:(id)arg5 ;
-(void)setObjectIDsToRetry:(NSMutableSet *)arg1 ;
-(id)operationToModifyRecordsToSave:(id)arg1 delete:(id)arg2 rootRecordIDsByShareID:(id)arg3 database:(id)arg4 ;
-(void)fetchDatabaseChangesOperation:(id)arg1 recordZoneWithIDWasDeleted:(id)arg2 accountID:(id)arg3 ;
-(void)addOperationsToFetchRecordZoneChangesForAccountZoneIDs:(id)arg1 reason:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)fetchRecordZoneChangesWithReason:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)incrementRetryCountForOperationType:(id)arg1 ;
-(void)updateConfiguration;
-(void)fetchOperation:(id)arg1 progressWithRecordID:(id)arg2 progress:(double)arg3 ;
-(NSDictionary *)containersByAccountID;
-(void)handleDatabaseNotification:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSObject*<OS_dispatch_queue>)processingQueue;
-(void)startRetryTimerIfNecessaryWithError:(id)arg1 ;
-(id)allZoneIDs;
-(void)processAllCloudObjectsWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSMutableSet *)subscribedSubscriptionIDs;
-(BOOL)hasPendingOperations;
-(void)updateSelectorDelayers;
-(id)operationsToFetchRecordIDs:(id)arg1 database:(id)arg2 qualityOfService:(long long)arg3 ;
-(void)fetchUserRecordWithContainer:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setNeedsToProcessAllObjects:(BOOL)arg1 ;
-(void)updateCloudContextState;
-(BOOL)enableLongLivedOperations;
-(void)printOperationQueue;
-(BOOL)isFetchingEnabled;
-(void)setDidAddObservers:(BOOL)arg1 ;
-(void)fetchRecordZoneChangesForZoneIDs:(id)arg1 accountID:(id)arg2 reason:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)informCloudAnalyticsDelegateForOperationDidEnd:(id)arg1 recordsByRecordID:(id)arg2 operationError:(id)arg3 ;
-(id)operationToSaveZonesForZoneIDs:(id)arg1 accountID:(id)arg2 ;
-(void)deleteSharesForObjects:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)clearContainers;
-(void)setRetryCountsByOperationType:(NSMutableDictionary *)arg1 ;
-(void)deleteServerChangeTokenForChangedZonesInDatabase:(id)arg1 accountID:(id)arg2 ;
-(void)fetchSubscriptionsForDatabase:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)isDisabledInternal;
-(void)didFetchShare:(id)arg1 accountID:(id)arg2 context:(id)arg3 ;
-(void)processPendingCloudObjects;
-(void)fetchRecordZoneChangesOperation:(id)arg1 zoneID:(id)arg2 accountID:(id)arg3 changeTokenUpdated:(id)arg4 ;
-(void)fetchRecordIDs:(id)arg1 accountID:(id)arg2 operationGroupName:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)operationToFetchDatabaseChangesForDatabase:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setEnableLongLivedOperations:(BOOL)arg1 ;
-(void)setFetchingEnabled:(BOOL)arg1 ;
-(void)addFetchOperationsForRecordIDs:(id)arg1 accountID:(id)arg2 qualityOfService:(long long)arg3 operationGroupName:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(BOOL)didCheckForLongLivedOperations;
-(ICSelectorDelayer *)syncSelectorDelayer;
-(void)handleGenericPartialFailuresForError:(id)arg1 operation:(id)arg2 ;
-(void)setProcessingQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(long long)qualityOfService;
-(void)updateAccountStatusWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)addModifyRecordsOperationsWithCloudObjectsToSave:(id)arg1 delete:(id)arg2 accountID:(id)arg3 operationGroupName:(id)arg4 waitForDependencies:(BOOL)arg5 completionHandler:(/*^block*/id)arg6 ;
-(void)clearSubscribedSubscriptionIDs;
-(void)setDidCheckForLongLivedOperations:(BOOL)arg1 ;
-(void)setProcessingSelectorDelayer:(ICSelectorDelayer *)arg1 ;
-(id)operationToFetchRecordIDs:(id)arg1 database:(id)arg2 qualityOfService:(long long)arg3 ;
-(void)setSyncSelectorDelayer:(ICSelectorDelayer *)arg1 ;
-(id)subscriptionForDatabase:(id)arg1 ;
-(BOOL)canRetryImmediatelyAfterError:(id)arg1 ;
-(void)fetchDatabaseChangesWithReason:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)disableAutomaticallyRetryNetworkFailures;
-(void)finishOperationsForRecordID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)existingCloudObjectForRecord:(id)arg1 accountID:(id)arg2 context:(id)arg3 ;
-(void)setDisableRetryTimer:(BOOL)arg1 ;
-(void)setAccountZoneIDsNeedingToBeSaved:(NSMutableDictionary *)arg1 ;
-(id)operationsToModifyRecordsForCloudObjectsToSave:(id)arg1 delete:(id)arg2 deleteShares:(id)arg3 saveUserSpecificRecords:(id)arg4 operationGroupName:(id)arg5 addDependencies:(BOOL)arg6 accountID:(id)arg7 ;
-(void)disableCloudSyncingIfCurrentVersionNotSuppported;
-(void)setContainersByAccountID:(NSDictionary *)arg1 ;
-(id)newCloudObjectForRecord:(id)arg1 accountID:(id)arg2 context:(id)arg3 ;
-(BOOL)isCloudKitAccountAvailable;
-(id)existingCloudObjectForUserSpecificRecordID:(id)arg1 createPlaceholderIfNecessary:(BOOL)arg2 accountID:(id)arg3 context:(id)arg4 ;
-(void)saveZoneFetchState;
-(BOOL)needsToProcessAllObjects;
-(void)pushCloudObjects:(id)arg1 operationGroupName:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)cloudKitAccountChanged:(id)arg1 ;
-(void)processObjectIDs:(id)arg1 operationQueue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)serverChangeTokenForRecordZoneID:(id)arg1 databaseScope:(long long)arg2 accountID:(id)arg3 ;
-(void)dealloc;
-(void)saveServerChangeToken:(id)arg1 forRecordZoneID:(id)arg2 databaseScope:(long long)arg3 accountID:(id)arg4 ;
-(void)saveSubscriptionsForDatabase:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_processCloudObjects:(id)arg1 operationQueue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_syncWithReason:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)operationsToModifyRecordsToSave:(id)arg1 delete:(id)arg2 rootRecordIDsByShareID:(id)arg3 database:(id)arg4 ;
@end

