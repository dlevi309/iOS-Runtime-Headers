/*
* Generated on Thursday, January 14, 2021 at 2:23:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/

#import <ReminderKit/ReminderKit-Structs.h>
#import <libobjc.A.dylib/REMChangeTrackingProvider.h>

@protocol REMDaemonController;
@class REMStoreContainerToken, _REMInProgressSaveRequestsContainer;

@interface REMStore : NSObject <REMChangeTrackingProvider> {

	BOOL _assertOnMainThreadFetches;
	os_unfair_lock_s _lock;
	REMStoreContainerToken* _storeContainerToken;
	_REMInProgressSaveRequestsContainer* _l_inProgressSaveRequestsContainer;
	id<REMDaemonController> _daemonController;
	unsigned long long _mode;
	REMStore* _nonUserInteractiveStore;

}

@property (nonatomic,readonly) REMStoreContainerToken * storeContainerToken;                                         //@synthesize storeContainerToken=_storeContainerToken - In the implementation block
@property (nonatomic,readonly) _REMInProgressSaveRequestsContainer * l_inProgressSaveRequestsContainer;              //@synthesize l_inProgressSaveRequestsContainer=_l_inProgressSaveRequestsContainer - In the implementation block
@property (nonatomic,readonly) os_unfair_lock_s lock;                                                                //@synthesize lock=_lock - In the implementation block
@property (nonatomic,retain) id<REMDaemonController> daemonController;                                               //@synthesize daemonController=_daemonController - In the implementation block
@property (assign,nonatomic) unsigned long long mode;                                                                //@synthesize mode=_mode - In the implementation block
@property (assign,nonatomic) BOOL assertOnMainThreadFetches;                                                         //@synthesize assertOnMainThreadFetches=_assertOnMainThreadFetches - In the implementation block
@property (nonatomic,retain) REMStore * nonUserInteractiveStore;                                                     //@synthesize nonUserInteractiveStore=_nonUserInteractiveStore - In the implementation block
+(void)initialize;
+(BOOL)destroyIsolatedStoreContainerWithToken:(id)arg1 error:(id*)arg2 ;
+(id)storeDidChangeNotificationName;
+(id)createIsolatedStoreContainerWithError:(id*)arg1 ;
+(BOOL)notificationsEnabled;
+(BOOL)_shouldNotifyReminddOfInteractionWithPeople;
+(BOOL)isEventKitSyncEnabledForReminderKit;
+(BOOL)siriShouldRouteIntentsToNewRemindersApp;
+(BOOL)dataaccessDaemonStopSyncingReminders;
+(void)notifyOfInteractionWithPeople:(id)arg1 ;
-(unsigned long long)mode;
-(id)fetchRemindersWithExternalIdentifiers:(id)arg1 inList:(id)arg2 error:(id*)arg3 ;
-(_REMInProgressSaveRequestsContainer *)l_inProgressSaveRequestsContainer;
-(id)fetchRemindersWithDACalendarItemUniqueIdentifiers:(id)arg1 inList:(id)arg2 error:(id*)arg3 ;
-(id)fetchReminderWithObjectID:(id)arg1 error:(id*)arg2 ;
-(void)setDaemonController:(id<REMDaemonController>)arg1 ;
-(unsigned long long)storeGeneration;
-(id)fetchSmartListWithSmartListTag:(id)arg1 reminderIDs:(id)arg2 createIfNeeded:(BOOL)arg3 error:(id*)arg4 ;
-(id)resultFromPerformingSwiftInvocation:(id)arg1 parametersData:(id)arg2 storages:(id)arg3 error:(id*)arg4 ;
-(id)init;
-(id)compressedDistributedEvaluationDataWithOptions:(id)arg1 error:(id*)arg2 ;
-(id)fetchRemindersWithParentReminderIDs:(id)arg1 error:(id*)arg2 ;
-(id)fetchAccountWithExternalIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)fetchReminderWithDACalendarItemUniqueIdentifier:(id)arg1 inList:(id)arg2 error:(id*)arg3 ;
-(id)provideChangeTrackingForAccountID:(id)arg1 clientName:(id)arg2 ;
-(BOOL)everConnectedToCar;
-(void)requestToDeleteLocalDataWithCompletion:(/*^block*/id)arg1 ;
-(id)fetchAllListsWithExternalIdentifier:(id)arg1 error:(id*)arg2 ;
-(BOOL)saveSaveRequest:(id)arg1 accountChangeItems:(id)arg2 listChangeItems:(id)arg3 smartListChangeItems:(id)arg4 reminderChangeItems:(id)arg5 author:(id)arg6 replicaManagerProvider:(id)arg7 error:(id*)arg8 ;
-(id)fetchReplicaManagerForAccountID:(id)arg1 error:(id*)arg2 ;
-(id)createShareForListWithID:(id)arg1 error:(id*)arg2 ;
-(void)triggerSyncForDataAccessAccountsWithAccountIDs:(id)arg1 ;
-(id)fetchAllRemindersWithExternalIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)debugDescription;
-(id)refreshAccount:(id)arg1 ;
-(void)removeOrphanedAccountsWithCompletion:(/*^block*/id)arg1 ;
-(os_unfair_lock_s)lock;
-(id)fetchSiriFoundInAppsListWithError:(id*)arg1 ;
-(void)updateAccountsAndSync:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(id)fetchAccountsWithError:(id*)arg1 ;
-(id)fetchReplicaManagersForAccountID:(id)arg1 bundleID:(id)arg2 error:(id*)arg3 ;
-(void)_incrementStoreGeneration;
-(void)setMode:(unsigned long long)arg1 ;
-(id)initUserInteractive:(BOOL)arg1 ;
-(void)_saveAccountChangeItems:(id)arg1 listChangeItems:(id)arg2 smartListChangeItems:(id)arg3 reminderChangeItems:(id)arg4 author:(id)arg5 replicaManagerProvider:(id)arg6 synchronously:(BOOL)arg7 syncToCloudKit:(BOOL)arg8 performer:(id)arg9 completion:(/*^block*/id)arg10 ;
-(id)fetchRemindersMatchingTitle:(id)arg1 dueAfter:(id)arg2 dueBefore:(id)arg3 isCompleted:(id)arg4 hasLocation:(id)arg5 location:(id)arg6 error:(id*)arg7 ;
-(void)stopShare:(id)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)fetchListIncludingSpecialContainerWithObjectID:(id)arg1 error:(id*)arg2 ;
-(void)acceptShareWithMetadata:(id)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)enumerateAllListsWithBlock:(/*^block*/id)arg1 ;
-(void)updateAccountWithAccountID:(id)arg1 restartDA:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(id)fetchDefaultListWithError:(id*)arg1 ;
-(id)resultsIndexedByObjectIDFromExecutingFetchRequest:(id)arg1 error:(id*)arg2 ;
-(id)optimisticallyMaterializeReminderChangeItem:(id)arg1 ;
-(id)description;
-(id)initWithStoreContainerToken:(id)arg1 ;
-(void)saveSaveRequest:(id)arg1 accountChangeItems:(id)arg2 listChangeItems:(id)arg3 smartListChangeItems:(id)arg4 reminderChangeItems:(id)arg5 author:(id)arg6 replicaManagerProvider:(id)arg7 queue:(id)arg8 completion:(/*^block*/id)arg9 ;
-(unsigned long long)countForFetchRequest:(id)arg1 error:(id*)arg2 ;
-(id)fetchRemindersForEventKitBridgingWithListIDs:(id)arg1 error:(id*)arg2 ;
-(void)rejectCalDAVSharedList:(id)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)enumerateAllRemindersWithBlock:(/*^block*/id)arg1 ;
-(id)fetchListsIncludingSpecialContainersInAccount:(id)arg1 error:(id*)arg2 ;
-(id)fetchShareForListWithID:(id)arg1 error:(id*)arg2 ;
-(id)fetchCompletedRemindersForEventKitBridgingWithCompletionDateFrom:(id)arg1 to:(id)arg2 withListIDs:(id)arg3 error:(id*)arg4 ;
-(id)fetchResultByExecutingFetchRequest:(id)arg1 error:(id*)arg2 ;
-(BOOL)_isUserInteractiveStore;
-(id)fetchAccountsWithExternalIdentifiers:(id)arg1 error:(id*)arg2 ;
-(id)MCIsManagedAccountWithObjectID:(id)arg1 error:(id*)arg2 ;
-(void)setNonUserInteractiveStore:(REMStore *)arg1 ;
-(id)fetchRemindersMatchingPredicateDescriptor:(id)arg1 sortDescriptors:(id)arg2 options:(id)arg3 error:(id*)arg4 ;
-(id)fetchAccountsForDumpingWithError:(id*)arg1 ;
-(void)requestToDeleteSyncDataWithAccountIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)notifyOfInteractionWithPeople:(id)arg1 force:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(id<REMDaemonController>)daemonController;
-(id)fetchRemindersWithObjectIDs:(id)arg1 error:(id*)arg2 ;
-(id)resultFromPerformingInvocation:(id)arg1 error:(id*)arg2 ;
-(id)fetchListsForEventKitBridgingWithError:(id*)arg1 ;
-(id)initWithDaemonController:(id)arg1 ;
-(void)enumerateAllGroupsAndListsWithBlock:(/*^block*/id)arg1 ;
-(id)refreshList:(id)arg1 ;
-(id)provideAnonymousChangeTrackingWithTransactionAuthorKeysToExclude:(id)arg1 ;
-(void)invalidate;
-(void)updateShare:(id)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)_xpcSyncStorePerformerWithReason:(id)arg1 errorHandler:(/*^block*/id)arg2 ;
-(void)setAssertOnMainThreadFetches:(BOOL)arg1 ;
-(id)fetchAssignmentsWithObjectIDs:(id)arg1 includeLazyDeleteObjects:(BOOL)arg2 error:(id*)arg3 ;
-(id)fetchIncompleteRemindersForEventKitBridgingWithDueDateFrom:(id)arg1 to:(id)arg2 withListIDs:(id)arg3 error:(id*)arg4 ;
-(id)fetchAccountsIncludingInactive:(BOOL)arg1 error:(id*)arg2 ;
-(id)fetchEligibleDefaultListsWithError:(id*)arg1 ;
-(id)smartListWithSmartListTag:(id)arg1 objectID:(id)arg2 ordering:(id)arg3 error:(id*)arg4 ;
-(void)deleteAccountWithAccountID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)assertOnMainThreadFetches;
-(id)fetchAccountsWithObjectIDs:(id)arg1 error:(id*)arg2 ;
-(id)_withInProgressSaveRequestContainer:(/*^block*/id)arg1 ;
-(void)triggerThrottledSyncWithReason:(id)arg1 discretionary:(BOOL)arg2 WithCompletion:(/*^block*/id)arg3 ;
-(void)acceptCalDAVSharedList:(id)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)fetchListIncludingMarkedForDeleteWithObjectID:(id)arg1 error:(id*)arg2 ;
-(id)fetchReminderIncludingMarkedForDeleteWithObjectID:(id)arg1 error:(id*)arg2 ;
-(id)initWithDaemonController:(id)arg1 storeContainerToken:(id)arg2 ;
-(id)provideChangeTrackingForAccountID:(id)arg1 clientName:(id)arg2 transactionAuthorKeysToExclude:(id)arg3 ;
-(void)updateAccountsAndFetchMigrationState:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(REMStore *)nonUserInteractiveStore;
-(id)executeFetchRequest:(id)arg1 error:(id*)arg2 ;
-(id)fetchDefaultAccountWithError:(id*)arg1 ;
-(void)nukeDatabase;
-(void)_triggerSyncWithReason:(id)arg1 forcingCloudKitReload:(BOOL)arg2 discretionary:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(REMStoreContainerToken *)storeContainerToken;
-(void)_respondToCalDAVSharedList:(id)arg1 withResponse:(long long)arg2 queue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)refreshReminder:(id)arg1 ;
-(void)_enumerateAllListsIncludingGroups:(BOOL)arg1 withBlock:(/*^block*/id)arg2 ;
-(id)fetchListsWithObjectIDs:(id)arg1 error:(id*)arg2 ;
-(void)requestToMergeLocalDataIntoSyncDataWithAccountIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)fetchAccountWithObjectID:(id)arg1 error:(id*)arg2 ;
-(id)fetchReminderWithExternalIdentifier:(id)arg1 inList:(id)arg2 error:(id*)arg3 ;
-(void)updateAccountWithAccountID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)fetchListWithObjectID:(id)arg1 error:(id*)arg2 ;
-(id)fetchSmartListWithSmartListTag:(id)arg1 createIfNeeded:(BOOL)arg2 error:(id*)arg3 ;
-(id)replicaManagerProviderForCalDAVSync;
-(id)debugFetchPhantomListsWithError:(id*)arg1 ;
@end

