/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/

@class NSData;


@protocol WBSHistoryStore <WBSHistoryLoader>
@property (assign,nonatomic,__weak) id<WBSHistoryStoreDelegate> delegate; 
@property (assign,nonatomic) double historyAgeLimit; 
@property (nonatomic,copy) NSData * pushThrottlerData; 
@property (nonatomic,copy) NSData * fetchThrottlerData; 
@property (nonatomic,copy) NSData * syncCircleSizeRetrievalThrottlerData; 
@property (nonatomic,copy) NSData * longLivedSaveOperationData; 
@property (assign,nonatomic) unsigned long long cachedNumberOfDevicesInSyncCircle; 
@property (assign,nonatomic) BOOL pushNotificationsAreInitialized; 
@property (assign,nonatomic) BOOL syncsWithManateeContainer; 
@property (nonatomic,readonly) BOOL isUsingInMemoryDatabase; 
@required
-(id<WBSHistoryStoreDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(void)closeWithCompletionHandler:(/*^block*/id)arg1;
-(void)checkIfLocalVisitExistsInAnyOfItems:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)setServerChangeTokenData:(id)arg1;
-(void)setLongLivedSaveOperationData:(id)arg1;
-(void)getVisitsAndTombstonesNeedingSyncWithVisitSyncWindow:(double)arg1 completion:(/*^block*/id)arg2;
-(void)getServerChangeTokenDataWithCompletion:(/*^block*/id)arg1;
-(BOOL)syncsWithManateeContainer;
-(void)setSyncsWithManateeContainer:(BOOL)arg1;
-(void)pruneTombstonesWithEndDatePriorToDate:(id)arg1;
-(void)updateHistoryAfterSuccessfulPersistedLongLivedSaveOperationWithGeneration:(long long)arg1 completion:(/*^block*/id)arg2;
-(NSData *)longLivedSaveOperationData;
-(BOOL)pushNotificationsAreInitialized;
-(void)setPushNotificationsAreInitialized:(BOOL)arg1;
-(NSData *)pushThrottlerData;
-(NSData *)fetchThrottlerData;
-(NSData *)syncCircleSizeRetrievalThrottlerData;
-(void)setPushThrottlerData:(id)arg1;
-(void)setFetchThrottlerData:(id)arg1;
-(void)setSyncCircleSizeRetrievalThrottlerData:(id)arg1;
-(unsigned long long)cachedNumberOfDevicesInSyncCircle;
-(void)setCachedNumberOfDevicesInSyncCircle:(unsigned long long)arg1;
-(void)resetCloudHistoryDataWithCompletionHandler:(/*^block*/id)arg1;
-(void)setLastSeenDate:(id)arg1 forCloudClientVersion:(unsigned long long)arg2;
-(void)replayAndAddTombstones:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)getAllTombstonesWithCompletion:(/*^block*/id)arg1;
-(void)visitIdentifiersMatchingExistingVisits:(id)arg1 populateAssociatedVisits:(BOOL)arg2 completion:(/*^block*/id)arg3;
-(void)removePastHistoryVisitsForItem:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)itemWasReplaced:(id)arg1 byItem:(id)arg2;
-(void)setHistoryAgeLimit:(double)arg1;
-(id)lastSeenDateForCloudClientVersion:(unsigned long long)arg1;
-(void)visitsWereAdded:(id)arg1;
-(void)visitsWereModified:(id)arg1;
-(void)getVisitsCreatedAfterDate:(id)arg1 beforeDate:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)visitTitleWasUpdated:(id)arg1;
-(void)fetchTopicsFromStartDate:(id)arg1 toEndDate:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)fetchTopicsFromStartDate:(id)arg1 toEndDate:(id)arg2 limit:(unsigned long long)arg3 minimumItemCount:(unsigned long long)arg4 sortOrder:(long long)arg5 completionHandler:(/*^block*/id)arg6;
-(void)assignHistoryItem:(id)arg1 toTopicTags:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)tagsWithIdentifiers:(id)arg1 type:(unsigned long long)arg2 level:(long long)arg3 creatingIfNecessary:(BOOL)arg4 withTitles:(id)arg5 completionHandler:(/*^block*/id)arg6;
-(void)setTitle:(id)arg1 ofTag:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)clearHistoryVisitsAddedAfterDate:(id)arg1 beforeDate:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)clearHistoryWithCompletionHandler:(/*^block*/id)arg1;
-(void)vacuumHistoryWithCompletionHandler:(/*^block*/id)arg1;
-(void)performMaintenance:(/*^block*/id)arg1;
-(BOOL)isUsingInMemoryDatabase;
-(void)itemsWereAdded:(id)arg1 byUserInitiatedAction:(BOOL)arg2;
-(void)itemsWereModified:(id)arg1 byUserInitiatedAction:(BOOL)arg2;
-(double)historyAgeLimit;
-(void)removeItemsOnDatabaseQueue:(id)arg1;
-(void)removeVisitsOnDatabaseQueue:(id)arg1;
-(void)addOrUpdateItemsOnDatabaseQueue:(id)arg1;
-(id)allVisitsForItemsOnDatabaseQueue:(id)arg1;
-(void)enumerateLastVisitForItemsOnDatabaseQueue:(id)arg1 ignoringVisits:(id)arg2 enumerationBlock:(/*^block*/id)arg3;
-(void)enumeratePriorVisitsInRedirectChainOnDatabaseQueue:(id)arg1 items:(id)arg2 enumerationBlock:(/*^block*/id)arg3;
-(void)enumerateSubsequentVisitsInRedirectChainOnDatabaseQueue:(id)arg1 items:(id)arg2 enumerationBlock:(/*^block*/id)arg3;

@end

