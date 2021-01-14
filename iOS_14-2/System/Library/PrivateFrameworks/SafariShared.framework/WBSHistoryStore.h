/*
* Generated on Thursday, January 14, 2021 at 2:23:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/


@protocol WBSHistoryStore <WBSHistoryLoader>
@property (assign,nonatomic,__weak) id<WBSHistoryStoreDelegate> delegate; 
@property (assign,nonatomic) double historyAgeLimit; 
@property (nonatomic,readonly) BOOL isUsingInMemoryDatabase; 
@required
-(void)vacuumHistoryWithCompletionHandler:(/*^block*/id)arg1;
-(void)replayAndAddTombstones:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)enumerateSubsequentVisitsInRedirectChainOnDatabaseQueue:(id)arg1 items:(id)arg2 enumerationBlock:(/*^block*/id)arg3;
-(void)fetchTopicsFromStartDate:(id)arg1 toEndDate:(id)arg2 limit:(unsigned long long)arg3 minimumItemCount:(unsigned long long)arg4 sortOrder:(long long)arg5 completionHandler:(/*^block*/id)arg6;
-(void)getServerChangeTokenDataWithCompletion:(/*^block*/id)arg1;
-(void)performMaintenance:(/*^block*/id)arg1;
-(void)pruneTombstonesWithEndDatePriorToDate:(id)arg1;
-(void)fetchTopicsFromStartDate:(id)arg1 toEndDate:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)visitsWereModified:(id)arg1;
-(void)getVisitsAndTombstonesNeedingSyncWithVisitSyncWindow:(double)arg1 completion:(/*^block*/id)arg2;
-(void)getAllTombstonesWithCompletion:(/*^block*/id)arg1;
-(id<WBSHistoryStoreDelegate>)delegate;
-(void)enumerateLastVisitForItemsOnDatabaseQueue:(id)arg1 ignoringVisits:(id)arg2 enumerationBlock:(/*^block*/id)arg3;
-(void)visitIdentifiersMatchingExistingVisits:(id)arg1 populateAssociatedVisits:(BOOL)arg2 completion:(/*^block*/id)arg3;
-(void)itemWasReplaced:(id)arg1 byItem:(id)arg2;
-(void)itemsWereModified:(id)arg1 byUserInitiatedAction:(BOOL)arg2;
-(void)getAutocompleteTriggersForItem:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)updateHistoryAfterSuccessfulPersistedLongLivedSaveOperationWithGeneration:(long long)arg1 completion:(/*^block*/id)arg2;
-(void)closeWithCompletionHandler:(/*^block*/id)arg1;
-(void)itemsWereAdded:(id)arg1 byUserInitiatedAction:(BOOL)arg2;
-(BOOL)isUsingInMemoryDatabase;
-(void)clearHistoryWithCompletionHandler:(/*^block*/id)arg1;
-(void)setDelegate:(id)arg1;
-(void)checkIfLocalVisitExistsInAnyOfItems:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)visitTitleWasUpdated:(id)arg1;
-(double)historyAgeLimit;
-(void)enumeratePriorVisitsInRedirectChainOnDatabaseQueue:(id)arg1 items:(id)arg2 enumerationBlock:(/*^block*/id)arg3;
-(void)setServerChangeTokenData:(id)arg1;
-(id)lastSeenDateForCloudClientVersion:(unsigned long long)arg1;
-(void)setHistoryAgeLimit:(double)arg1;
-(void)removePastHistoryVisitsForItem:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)getVisitsCreatedAfterDate:(id)arg1 beforeDate:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)addAutocompleteTrigger:(id)arg1 forItem:(id)arg2;
-(void)tagsWithIdentifiers:(id)arg1 type:(unsigned long long)arg2 level:(long long)arg3 creatingIfNecessary:(BOOL)arg4 withTitles:(id)arg5 completionHandler:(/*^block*/id)arg6;
-(void)addOrUpdateItemsOnDatabaseQueue:(id)arg1;
-(void)setLastSeenDate:(id)arg1 forCloudClientVersion:(unsigned long long)arg2;
-(void)visitsWereAdded:(id)arg1;
-(void)setTitle:(id)arg1 ofTag:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)clearHistoryVisitsAddedAfterDate:(id)arg1 beforeDate:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(id)allVisitsForItemsOnDatabaseQueue:(id)arg1;
-(void)assignHistoryItem:(id)arg1 toTopicTags:(id)arg2 completionHandler:(/*^block*/id)arg3;

@end

