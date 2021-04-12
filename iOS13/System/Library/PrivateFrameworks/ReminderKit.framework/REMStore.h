/*
* Generated on Monday, March 1, 2021 at 2:31:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(BOOL)notificationsEnabled;
+(BOOL)siriShouldRouteIntentsToNewRemindersApp;
+(id)storeDidChangeNotificationName;
+(id)createIsolatedStoreContainerWithError:(id*)arg1 ;
+(BOOL)destroyIsolatedStoreContainerWithToken:(id)arg1 error:(id*)arg2 ;
+(BOOL)_shouldNotifyReminddOfInteractionWithPeople;
+(void)notifyOfInteractionWithPeople:(id)arg1 ;
+(void)notifyOfUserInterestInSiriSuggestedReminder:(id)arg1 ;
+(BOOL)dataaccessDaemonStopSyncingReminders;
+(BOOL)isEventKitSyncEnabledForReminderKit;
-(id)init;
-(id)description;
-(id)debugDescription;
-(void)invalidate;
-(os_unfair_lock_s)lock;
-(void)setMode:(unsigned long long)arg1 ;
-(unsigned long long)mode;
-(id)executeFetchRequest:(id)arg1 error:(id*)arg2 ;
-(unsigned long long)countForFetchRequest:(id)arg1 error:(id*)arg2 ;
-(id<REMDaemonController>)daemonController;
-(id)fetchReplicaManagerForAccountID:(id)arg1 error:(id*)arg2 ;
-(id)initWithStoreContainerToken:(id)arg1 ;
-(id)initWithDaemonController:(id)arg1 storeContainerToken:(id)arg2 ;
-(REMStoreContainerToken *)storeContainerToken;
-(unsigned long long)storeGeneration;
-(_REMInProgressSaveRequestsContainer *)l_inProgressSaveRequestsContainer;
-(void)setDaemonController:(id<REMDaemonController>)arg1 ;
-(id)fetchAccountsWithError:(id*)arg1 ;
-(id)fetchListWithObjectID:(id)arg1 error:(id*)arg2 ;
-(id)_withInProgressSaveRequestContainer:(/*^block*/id)arg1 ;
-(id)fetchAccountWithObjectID:(id)arg1 error:(id*)arg2 ;
-(id)fetchAccountsWithObjectIDs:(id)arg1 error:(id*)arg2 ;
-(id)fetchListsWithObjectIDs:(id)arg1 error:(id*)arg2 ;
-(id)fetchRemindersWithObjectIDs:(id)arg1 error:(id*)arg2 ;
-(id)fetchRemindersWithParentReminderIDs:(id)arg1 error:(id*)arg2 ;
-(id)fetchReminderWithObjectID:(id)arg1 error:(id*)arg2 ;
-(id)_xpcSyncStorePerformerWithReason:(id)arg1 errorHandler:(/*^block*/id)arg2 ;
-(void)_incrementStoreGeneration;
-(void)_saveAccountChangeItems:(id)arg1 listChangeItems:(id)arg2 reminderChangeItems:(id)arg3 author:(id)arg4 replicaManagerProvider:(id)arg5 synchronously:(BOOL)arg6 performer:(id)arg7 completion:(/*^block*/id)arg8 ;
-(id)fetchResultByExecutingFetchRequest:(id)arg1 error:(id*)arg2 ;
-(BOOL)assertOnMainThreadFetches;
-(BOOL)_isUserInteractiveStore;
-(void)enumerateAllListsWithBlock:(/*^block*/id)arg1 ;
-(void)_enumerateAllListsIncludingGroups:(BOOL)arg1 withBlock:(/*^block*/id)arg2 ;
-(id)fetchEligibleDefaultListsWithError:(id*)arg1 ;
-(id)fetchDefaultListWithError:(id*)arg1 ;
-(REMStore *)nonUserInteractiveStore;
-(id)initUserInteractive:(BOOL)arg1 ;
-(id)initWithDaemonController:(id)arg1 ;
-(void)nukeDatabase;
-(id)fetchAccountsIncludingInactive:(BOOL)arg1 error:(id*)arg2 ;
-(id)fetchAccountsForDumpingWithError:(id*)arg1 ;
-(id)fetchSiriFoundInAppsListWithError:(id*)arg1 ;
-(id)refreshAccount:(id)arg1 ;
-(id)refreshList:(id)arg1 ;
-(id)refreshReminder:(id)arg1 ;
-(id)optimisticallyMaterializeReminderChangeItem:(id)arg1 ;
-(id)fetchReplicaManagersForAccountID:(id)arg1 bundleID:(id)arg2 error:(id*)arg3 ;
-(BOOL)saveSaveRequest:(id)arg1 accountChangeItems:(id)arg2 listChangeItems:(id)arg3 reminderChangeItems:(id)arg4 author:(id)arg5 replicaManagerProvider:(id)arg6 error:(id*)arg7 ;
-(void)saveSaveRequest:(id)arg1 accountChangeItems:(id)arg2 listChangeItems:(id)arg3 reminderChangeItems:(id)arg4 author:(id)arg5 replicaManagerProvider:(id)arg6 queue:(id)arg7 completion:(/*^block*/id)arg8 ;
-(id)resultsIndexedByObjectIDFromExecutingFetchRequest:(id)arg1 error:(id*)arg2 ;
-(id)resultFromPerformingInvocation:(id)arg1 error:(id*)arg2 ;
-(id)resultFromPerformingSwiftInvocation:(id)arg1 parametersData:(id)arg2 storages:(id)arg3 error:(id*)arg4 ;
-(void)enumerateAllRemindersWithBlock:(/*^block*/id)arg1 ;
-(void)enumerateAllGroupsAndListsWithBlock:(/*^block*/id)arg1 ;
-(id)fetchShareForListWithID:(id)arg1 error:(id*)arg2 ;
-(id)createShareForListWithID:(id)arg1 error:(id*)arg2 ;
-(void)updateShare:(id)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)stopShare:(id)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)acceptShareWithMetadata:(id)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)everConnectedToCar;
-(id)compressedDistributedEvaluationDataWithOptions:(id)arg1 error:(id*)arg2 ;
-(id)fetchDefaultAccountWithError:(id*)arg1 ;
-(void)setAssertOnMainThreadFetches:(BOOL)arg1 ;
-(void)setNonUserInteractiveStore:(REMStore *)arg1 ;
-(void)_respondToCalDAVSharedList:(id)arg1 withResponse:(long long)arg2 queue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)acceptCalDAVSharedList:(id)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)rejectCalDAVSharedList:(id)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)provideChangeTrackingForAccountID:(id)arg1 clientName:(id)arg2 transactionAuthorKeysToExclude:(id)arg3 ;
-(id)provideChangeTrackingForAccountID:(id)arg1 clientName:(id)arg2 ;
-(id)provideAnonymousChangeTrackingWithTransactionAuthorKeysToExclude:(id)arg1 ;
-(void)notifyOfInteractionWithPeople:(id)arg1 force:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)notifyOfUserInterestInSiriSuggestedReminder:(id)arg1 ;
-(id)fetchAllRemindersWithExternalIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)fetchListsForEventKitBridgingWithError:(id*)arg1 ;
-(id)fetchRemindersForEventKitBridgingWithListIDs:(id)arg1 error:(id*)arg2 ;
-(id)fetchIncompleteRemindersForEventKitBridgingWithDueDateFrom:(id)arg1 to:(id)arg2 withListIDs:(id)arg3 error:(id*)arg4 ;
-(id)fetchCompletedRemindersForEventKitBridgingWithCompletionDateFrom:(id)arg1 to:(id)arg2 withListIDs:(id)arg3 error:(id*)arg4 ;
-(id)fetchRemindersMatchingTitle:(id)arg1 dueAfter:(id)arg2 dueBefore:(id)arg3 isCompleted:(id)arg4 hasLocation:(id)arg5 location:(id)arg6 error:(id*)arg7 ;
-(id)fetchAccountWithExternalIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)fetchAccountsWithExternalIdentifiers:(id)arg1 error:(id*)arg2 ;
-(id)fetchListsIncludingSpecialContainersInAccount:(id)arg1 error:(id*)arg2 ;
-(id)fetchListIncludingMarkedForDeleteWithObjectID:(id)arg1 error:(id*)arg2 ;
-(id)fetchListIncludingSpecialContainerWithObjectID:(id)arg1 error:(id*)arg2 ;
-(id)fetchReminderIncludingMarkedForDeleteWithObjectID:(id)arg1 error:(id*)arg2 ;
-(id)fetchReminderWithExternalIdentifier:(id)arg1 inList:(id)arg2 error:(id*)arg3 ;
-(id)fetchRemindersWithExternalIdentifiers:(id)arg1 inList:(id)arg2 error:(id*)arg3 ;
-(id)fetchReminderWithDACalendarItemUniqueIdentifier:(id)arg1 inList:(id)arg2 error:(id*)arg3 ;
-(id)fetchRemindersWithDACalendarItemUniqueIdentifiers:(id)arg1 inList:(id)arg2 error:(id*)arg3 ;
-(id)fetchAllListsWithExternalIdentifier:(id)arg1 error:(id*)arg2 ;
-(void)_triggerSyncWithReason:(id)arg1 forcingCloudKitReload:(BOOL)arg2 discretionary:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)updateAccountsAndFetchMigrationState:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)updateAccountWithAccountID:(id)arg1 restartDA:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)requestToMergeLocalDataIntoSyncDataWithAccountIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)requestToDeleteSyncDataWithAccountIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)requestToDeleteLocalDataWithCompletion:(/*^block*/id)arg1 ;
-(void)triggerThrottledSyncWithReason:(id)arg1 discretionary:(BOOL)arg2 WithCompletion:(/*^block*/id)arg3 ;
-(void)triggerSyncForDataAccessAccountsWithAccountIDs:(id)arg1 ;
-(void)updateAccountsAndSync:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)updateAccountWithAccountID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)deleteAccountWithAccountID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)removeOrphanedAccountsWithCompletion:(/*^block*/id)arg1 ;
-(id)replicaManagerProviderForCalDAVSync;
@end

