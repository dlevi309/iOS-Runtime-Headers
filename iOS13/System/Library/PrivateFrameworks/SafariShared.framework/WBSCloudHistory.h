/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/

#import <SafariShared/SafariShared-Structs.h>
#import <libobjc.A.dylib/WBSCloudKitThrottlerDataStore.h>

@protocol OS_dispatch_queue, NSObject, WBSCloudHistoryDataStore, WBSCloudKitContainerManateeObserving;
@class NSObject, WBSHistory, WBSCloudHistoryConfiguration, WBSCloudKitThrottler, WBSOneShotTimer, WBSCloudHistoryPushAgentProxy, NSMutableDictionary, NSMutableArray, NSString;

@interface WBSCloudHistory : NSObject <WBSCloudKitThrottlerDataStore> {

	NSObject*<OS_dispatch_queue> _cloudHistoryQueue;
	WBSHistory* _history;
	BOOL _cloudHistoryEnabled;
	BOOL _saveChangesWhenHistoryLoads;
	BOOL _fetchChangesWhenHistoryLoads;
	id<NSObject> _historyWasLoadedObserver;
	unique_ptr<SafariShared::SuddenTerminationDisabler, std::__1::default_delete<SafariShared::SuddenTerminationDisabler> >* _saveOperationSuddenTerminationDisabler;
	unique_ptr<SafariShared::SuddenTerminationDisabler, std::__1::default_delete<SafariShared::SuddenTerminationDisabler> >* _fetchOperationSuddenTerminationDisabler;
	unique_ptr<SafariShared::SuddenTerminationDisabler, std::__1::default_delete<SafariShared::SuddenTerminationDisabler> >* _replayLongLivedSaveOperationSuddenTerminationDisabler;
	BOOL _replayLongLivedSaveOperationHasBeenPerformed;
	WBSCloudHistoryConfiguration* _configuration;
	id<WBSCloudHistoryDataStore> _store;
	WBSCloudKitThrottler* _saveChangesThrottler;
	WBSCloudKitThrottler* _fetchChangesThrottler;
	WBSCloudKitThrottler* _syncCircleSizeRetrievalThrottler;
	WBSOneShotTimer* _serverBackoffTimer;
	BOOL _saveChangesWhenBackoffTimerFires;
	BOOL _fetchChangesWhenBackoffTimerFires;
	WBSCloudHistoryPushAgentProxy* _pushAgent;
	WBSOneShotTimer* _pushNotificationFetchTimer;
	unsigned long long _numberOfDevicesInSyncCircle;
	NSMutableDictionary* _syncCircleSizeRetrievalCompletionHandlersByOperation;
	/*^block*/id _fetchCompletionHandler;
	/*^block*/id _saveCompletionHandler;
	id<WBSCloudKitContainerManateeObserving> _containerManateeObserver;
	NSMutableArray* _storeDeterminationCompletionBlocks;
	long long _currentManateeState;
	BOOL _manateeStateNeedsUpdate;
	BOOL _isWaitingForPCSIdentityUpdate;
	BOOL _determiningStoreType;
	BOOL _removedHistoryItemsArePendingSave;

}

@property (assign,nonatomic) unsigned long long numberOfDevicesInSyncCircle;                     //@synthesize numberOfDevicesInSyncCircle=_numberOfDevicesInSyncCircle - In the implementation block
@property (assign,getter=isCloudHistoryEnabled,nonatomic) BOOL cloudHistoryEnabled; 
@property (assign,nonatomic) BOOL removedHistoryItemsArePendingSave;                             //@synthesize removedHistoryItemsArePendingSave=_removedHistoryItemsArePendingSave - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)_historyItemsWereRemoved:(id)arg1 ;
-(id)recordOfPastOperationsForThrottler:(id)arg1 ;
-(void)setRecordOfPastOperations:(id)arg1 forThrottler:(id)arg2 ;
-(id)initWithHistory:(id)arg1 configuration:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)_determineCloudHistoryStoreWithCompletion:(/*^block*/id)arg1 ;
-(id)_currentSaveChangesThrottlerPolicyString;
-(id)_currentFetchChangesThrottlerPolicyString;
-(id)_currentSyncCircleSizeRetrievalThrottlerPolicyString;
-(void)_replayPersistedLongLivedSaveOperationIfNecessary;
-(void)_pruneTombstonesThatCanNoLongerMatchVisitsFetchedFromCloud;
-(void)_initializePushNotificationSupport;
-(void)_performBlockAsynchronouslyOnCloudHistoryQueueAfterHistoryHasLoaded:(/*^block*/id)arg1 ;
-(void)_cloudHistoryConfigurationChanged:(id)arg1 ;
-(void)_pushNotificationReceived:(id)arg1 ;
-(void)_transitionCloudHistoryStoreToManateeState:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)saveChangesBypassingThrottler:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_postSaveChangesAttemptCompletedNotificationWithAllPendingDataSaved:(BOOL)arg1 ;
-(void)_callAndResetSaveCompletionHandlerWithError:(id)arg1 ;
-(BOOL)isCloudHistoryEnabled;
-(void)_registerSaveCompletionHandler:(/*^block*/id)arg1 ;
-(void)_determineNumberOfDevicesInSyncCircleForOperation:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_persistLongLivedSaveOperationDictionaryWithOperationID:(id)arg1 databaseGeneration:(long long)arg2 ;
-(void)_removePersistedLongLivedSaveOperationDictionary;
-(void)_handleManateeErrorIfNeeded:(id)arg1 ;
-(void)_resetForAccountChangeWithCompletionHandler:(/*^block*/id)arg1 ;
-(double)_backoffTimeIntervalFromError:(id)arg1 ;
-(void)_backOffWithInterval:(double)arg1 ;
-(void)_saveVisits:(id)arg1 tombstones:(id)arg2 toCloudHistoryBypassingThrottler:(BOOL)arg3 longLivedOperationPersistenceCompletion:(/*^block*/id)arg4 withCallback:(/*^block*/id)arg5 ;
-(void)getVisitsAndTombstonesNeedingSyncWithVisitSyncWindow:(double)arg1 completion:(/*^block*/id)arg2 ;
-(long long)_priorityForSaveWithVisits:(id)arg1 tombstones:(id)arg2 bypassingThrottler:(BOOL)arg3 ;
-(long long)_resultFromError:(id)arg1 ;
-(long long)_estimatedPriorityForPotentialSaveAttempt;
-(void)fetchAndMergeChangesBypassingThrottler:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_registerFetchCompletionHandler:(/*^block*/id)arg1 ;
-(void)_callAndResetFetchCompletionHandlerWithError:(id)arg1 ;
-(void)_fetchAndMergeChangesWithServerChangeTokenData:(id)arg1 withPriority:(long long)arg2 ;
-(void)_getServerChangeTokenDataWithCompletion:(/*^block*/id)arg1 ;
-(void)fetchAndMergeChanges;
-(void)saveChangesToCloudHistoryStore;
-(id)_manateeErrorCode:(id)arg1 ;
-(void)_deleteAllCloudHistoryAndSaveAgain;
-(void)_pcsIdentitiesChangedNotification:(id)arg1 ;
-(void)_setServerChangeToken:(id)arg1 ;
-(void)_processPendingPushNotifications;
-(void)_persistedLongLivedSaveOperationID:(id*)arg1 databaseGeneration:(long long*)arg2 ;
-(void)_updateHistoryAfterSuccessfulPersistedLongLivedSaveOperationWithGeneration:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)_setPushNotificationAreInitialized:(BOOL)arg1 ;
-(void)_pushNotificationsAreInitializedWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_updateDeviceCountInResponseToPushNotification;
-(void)_fetchChangesInResponseToPushNotification:(id)arg1 ;
-(unsigned long long)_cachedNumberOfDevicesInSyncCircle;
-(void)setNumberOfDevicesInSyncCircle:(unsigned long long)arg1 ;
-(void)_registerForHistoryWasLoadedNotificationIfNecessary;
-(void)_historyWasLoaded:(id)arg1 ;
-(void)_serverBackoffTimerFired:(id)arg1 ;
-(void)_updateThrottlerPolicies;
-(void)_setCachedNumberOfDevicesInSyncCircle:(unsigned long long)arg1 ;
-(void)_resetCloudHistoryDataWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithHistory:(id)arg1 configuration:(id)arg2 ;
-(void)setCloudHistoryEnabled:(BOOL)arg1 ;
-(void)saveChangesToCloudHistoryStoreBypassingThrottler;
-(id)dateOfNextPermittedSaveChangesAttempt;
-(void)fetchAndMergeChangesBypassingThrottler;
-(void)_saveChangesWhenHistoryLoads;
-(void)_fetchChangesWhenHistoryLoads;
-(void)resetForAccountChange;
-(BOOL)removedHistoryItemsArePendingSave;
-(void)setRemovedHistoryItemsArePendingSave:(BOOL)arg1 ;
-(unsigned long long)numberOfDevicesInSyncCircle;
@end

