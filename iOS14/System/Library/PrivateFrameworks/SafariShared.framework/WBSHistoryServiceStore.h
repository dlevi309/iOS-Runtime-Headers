/*
* Generated on Thursday, January 14, 2021 at 2:23:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/

#import <SafariShared/SafariShared-Structs.h>
#import <libobjc.A.dylib/WBSHistoryConnectionProxyDelegate.h>
#import <libobjc.A.dylib/WBSHistoryStore.h>
#import <libobjc.A.dylib/WBSHistoryServiceDatabaseDelegate.h>

@protocol WBSHistoryConnectionProxy, OS_dispatch_queue, WBSHistoryServiceDatabaseProtocol, OS_dispatch_source, WBSHistoryStoreDelegate;
@class NSObject, NSURL, WBSHistoryObjectCache, NSMutableDictionary, NSDate, WBSPeriodicActivityScheduler, NSMutableSet, WBSHistoryCrypto, NSString;

@interface WBSHistoryServiceStore : NSObject <WBSHistoryConnectionProxyDelegate, WBSHistoryStore, WBSHistoryServiceDatabaseDelegate> {

	Class _historyItemClass;
	unsigned long long _itemCountLimit;
	atomic<WBSHistoryServiceStoreState> _state;
	id<WBSHistoryConnectionProxy> _connection;
	NSObject*<OS_dispatch_queue> _databaseQueue;
	NSURL* _databaseURL;
	id<WBSHistoryServiceDatabaseProtocol> _database;
	WBSHistoryObjectCache* _cache;
	long long _nextTemporaryDatabaseID;
	long long _lastTemporaryDatabaseID;
	/*^block*/id _loadCompletionBlock;
	NSMutableDictionary* _clientVersions;
	long long _currentGeneration;
	long long _lastSyncedGeneration;
	BOOL _commitGenerationValuesOnNextWrite;
	NSDate* _lastMaintenanceDate;
	BOOL _writeLastMaintenanceDateOnNextWrite;
	WBSPeriodicActivityScheduler* _maintenanceScheduler;
	NSObject*<OS_dispatch_source> _sendDeltaToServiceTimer;
	unique_ptr<SafariShared::SuddenTerminationDisabler, std::__1::default_delete<SafariShared::SuddenTerminationDisabler> >* _suddenTerminationDisabler;
	NSMutableSet* _pendingAddsOrUpdates;
	id<WBSHistoryStoreDelegate> _delegate;
	double _historyAgeLimit;
	WBSHistoryCrypto* _crypto;

}

@property (assign,nonatomic,__weak) id<WBSHistoryStoreDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) double historyAgeLimit;                                   //@synthesize historyAgeLimit=_historyAgeLimit - In the implementation block
@property (nonatomic,readonly) WBSHistoryCrypto * crypto;                              //@synthesize crypto=_crypto - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL isUsingInMemoryDatabase; 
-(WBSHistoryCrypto *)crypto;
-(void)vacuumHistoryWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)replayAndAddTombstones:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)computeFrequentlyVisitedSites:(unsigned long long)arg1 minimalVisitCountScore:(unsigned long long)arg2 disallowList:(id)arg3 allowList:(id)arg4 options:(unsigned long long)arg5 currentTime:(double)arg6 completionHandler:(/*^block*/id)arg7 ;
-(void)_waitForDatabase:(/*^block*/id)arg1 ;
-(void)enumerateSubsequentVisitsInRedirectChainOnDatabaseQueue:(id)arg1 items:(id)arg2 enumerationBlock:(/*^block*/id)arg3 ;
-(void)fetchTopicsFromStartDate:(id)arg1 toEndDate:(id)arg2 limit:(unsigned long long)arg3 minimumItemCount:(unsigned long long)arg4 sortOrder:(long long)arg5 completionHandler:(/*^block*/id)arg6 ;
-(void)getServerChangeTokenDataWithCompletion:(/*^block*/id)arg1 ;
-(void)_evaluateWithOptionsOnDatabaseQueue:(unsigned long long)arg1 predicate:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)performMaintenance:(/*^block*/id)arg1 ;
-(void)pruneTombstonesWithEndDatePriorToDate:(id)arg1 ;
-(void)fetchTopicsFromStartDate:(id)arg1 toEndDate:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)visitsWereModified:(id)arg1 ;
-(void)getVisitsAndTombstonesNeedingSyncWithVisitSyncWindow:(double)arg1 completion:(/*^block*/id)arg2 ;
-(void)_enumerateVisitsGroupedByItem:(id)arg1 enumerationBlock:(/*^block*/id)arg2 ;
-(void)startLoading;
-(void)getAllTombstonesWithCompletion:(/*^block*/id)arg1 ;
-(id<WBSHistoryStoreDelegate>)delegate;
-(void)_updateDatabaseAfterSuccessfulSyncWithGeneration:(long long)arg1 convertTombstonesToSecureFormat:(BOOL)arg2 ;
-(void)enumerateLastVisitForItemsOnDatabaseQueue:(id)arg1 ignoringVisits:(id)arg2 enumerationBlock:(/*^block*/id)arg3 ;
-(id)_connectOptions;
-(void)visitIdentifiersMatchingExistingVisits:(id)arg1 populateAssociatedVisits:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)_setLastSyncedGeneration:(unsigned long long)arg1 ;
-(void)_processPendingWrites:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)itemWasReplaced:(id)arg1 byItem:(id)arg2 ;
-(void)initializeCloudHistoryWithConfiguration:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_createTagsForIdentifiers:(id)arg1 withTitles:(id)arg2 type:(unsigned long long)arg3 level:(long long)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)itemsWereModified:(id)arg1 byUserInitiatedAction:(BOOL)arg2 ;
-(void)_addOrUpdateItemsOnDatabaseQueue:(id)arg1 userInitiated:(BOOL)arg2 ;
-(void)_incrementCurrentGeneration;
-(void)getAutocompleteTriggersForItem:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)reportSevereError:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithURL:(id)arg1 itemCountLimit:(unsigned long long)arg2 historyAgeLimit:(double)arg3 historyItemClass:(Class)arg4 ;
-(void)_scheduleMaintenance;
-(void)updateHistoryAfterSuccessfulPersistedLongLivedSaveOperationWithGeneration:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)closeWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_processPendingWrites;
-(void)itemsWereAdded:(id)arg1 byUserInitiatedAction:(BOOL)arg2 ;
-(BOOL)isUsingInMemoryDatabase;
-(void)searchForUserTypedString:(id)arg1 options:(unsigned long long)arg2 currentTime:(double)arg3 enumerationBlock:(/*^block*/id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)_fetchWithOptions:(unsigned long long)arg1 predicate:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)clearHistoryWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)waitForLoadingToComplete;
-(void)_convertTombstoneWithGenerationToSecureFormat:(long long)arg1 ;
-(void)_scheduleImmediateDeltaToService;
-(void)setDelegate:(id<WBSHistoryStoreDelegate>)arg1 ;
-(BOOL)_shouldEmitLegacyTombstones;
-(void)checkIfLocalVisitExistsInAnyOfItems:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)visitTitleWasUpdated:(id)arg1 ;
-(void)handleEvent:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(double)historyAgeLimit;
-(void)releaseCloudHistory:(/*^block*/id)arg1 ;
-(void)enumeratePriorVisitsInRedirectChainOnDatabaseQueue:(id)arg1 items:(id)arg2 enumerationBlock:(/*^block*/id)arg3 ;
-(void)connectionProxyConnectionWasInterrupted:(id)arg1 ;
-(void)_recomputeDerivedVisitCountScores;
-(void)_connectWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(long long)_generateTemporaryDatabaseID;
-(void)_fetchTags:(unsigned long long)arg1 fromStartDate:(id)arg2 toEndDate:(id)arg3 withIdentifiers:(id)arg4 limit:(unsigned long long)arg5 minimumItemCount:(unsigned long long)arg6 sortOrder:(long long)arg7 completionHandler:(/*^block*/id)arg8 ;
-(void)setServerChangeTokenData:(id)arg1 ;
-(BOOL)_ensureItemHasID:(id)arg1 ;
-(BOOL)_ensureVisitHasID:(id)arg1 ;
-(id)lastSeenDateForCloudClientVersion:(unsigned long long)arg1 ;
-(void)_updateGenerationForVisits:(id)arg1 ;
-(id)_fetchGroupedVisitsOnDatabaseQueue:(unsigned long long)arg1 predicate:(id)arg2 enumerationBlock:(/*^block*/id)arg3 ;
-(void)_setMetadataValue:(id)arg1 forKey:(id)arg2 group:(id)arg3 ;
-(void)_expireOldVisits;
-(void)setHistoryAgeLimit:(double)arg1 ;
-(void)removePastHistoryVisitsForItem:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)getVisitsCreatedAfterDate:(id)arg1 beforeDate:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)_lastSeenDateForCloudClientVersionOnDatabaseQueue:(unsigned long long)arg1 ;
-(void)addAutocompleteTrigger:(id)arg1 forItem:(id)arg2 ;
-(void)tagsWithIdentifiers:(id)arg1 type:(unsigned long long)arg2 level:(long long)arg3 creatingIfNecessary:(BOOL)arg4 withTitles:(id)arg5 completionHandler:(/*^block*/id)arg6 ;
-(void)addOrUpdateItemsOnDatabaseQueue:(id)arg1 ;
-(void)_performMaintenance:(/*^block*/id)arg1 ;
-(BOOL)shouldEmitLegacyTombstones;
-(void)_fetchWithOptionsOnDatabaseQueue:(unsigned long long)arg1 predicate:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setLastSeenDate:(id)arg1 forCloudClientVersion:(unsigned long long)arg2 ;
-(void)visitsWereAdded:(id)arg1 ;
-(void)_databaseFetchWithOptions:(unsigned long long)arg1 predicate:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_load;
-(void)_scheduleSendDeltaToService;
-(void)reportPermanentIDsForItems:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setTitle:(id)arg1 ofTag:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)_fetchVisitsOnDatabaseQueue:(unsigned long long)arg1 predicate:(id)arg2 error:(id*)arg3 ;
-(void)clearHistoryVisitsAddedAfterDate:(id)arg1 beforeDate:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)_loadOnDatabaseQueue:(unsigned long long)arg1 readHandle:(id)arg2 ;
-(void)_fetchHistoryItemsForTopics:(id)arg1 fromStartDate:(id)arg2 toEndDate:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)allVisitsForItemsOnDatabaseQueue:(id)arg1 ;
-(void)reportPermanentIDsForVisits:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)assignHistoryItem:(id)arg1 toTopicTags:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)dealloc;
-(double)_ageLimitSinceReferenceDate;
-(id)initWithURL:(id)arg1 itemCountLimit:(unsigned long long)arg2 historyAgeLimit:(double)arg3 historyItemClass:(Class)arg4 connectionProxy:(id)arg5 ;
@end

