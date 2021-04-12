/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/

#import <SafariShared/SafariShared-Structs.h>
#import <libobjc.A.dylib/WBSHistoryStore.h>
#import <libobjc.A.dylib/WBSHistoryLoader.h>

@protocol OS_dispatch_queue, WBSHistoryStoreDelegate;
@class NSData, NSURL, NSObject, WBSSQLiteStatementCache, NSMutableDictionary, NSMapTable, NSMutableSet, NSArray, NSCountedSet, NSDate, NSTimer, WBSPeriodicActivityScheduler, WBSHistoryTagDatabaseController, WBSSQLiteDatabase, WBSHistoryCrypto, NSString;

@interface WBSHistorySQLiteStore : NSObject <WBSHistoryStore, WBSHistoryLoader> {

	NSURL* _databaseURL;
	unsigned long long _itemCountLimit;
	Class _historyItemClass;
	NSObject*<OS_dispatch_queue> _databaseQueue;
	WBSSQLiteStatementCache* _statements;
	NSMutableDictionary* _clientVersions;
	NSMutableDictionary* _itemsByDatabaseID;
	NSMapTable* _weakVisitsByDatabaseID;
	NSMutableSet* _pendingAddsOrUpdates;
	NSMutableSet* _pendingDeletes;
	NSMutableSet* _pendingVisitDeletes;
	NSMutableSet* _pendingTombstones;
	BOOL _commitGenerationValuesOnNextWrite;
	long long _currentGeneration;
	long long _lastSyncedGeneration;
	NSData* _pushThrottlerData;
	NSData* _fetchThrottlerData;
	NSData* _syncCircleSizeRetrievalThrottlerData;
	long long _cachedNumberOfDevicesInSyncCircle;
	BOOL _loadInProgress;
	NSArray* _loadedItems;
	NSArray* _discardedItems;
	NSCountedSet* _loadedStringsForUserTypedDomainExpansion;
	NSDate* _loadStartTime;
	NSTimer* _writeTimer;
	unique_ptr<SafariShared::SuddenTerminationDisabler, std::__1::default_delete<SafariShared::SuddenTerminationDisabler> >* _suddenTerminationDisabler;
	BOOL _isClosed;
	NSDate* _lastMaintenanceDate;
	BOOL _writeLastMaintenanceDateOnNextWrite;
	BOOL _checkpointWriteAheadLogOnNextWrite;
	WBSPeriodicActivityScheduler* _maintenanceScheduler;
	WBSHistoryTagDatabaseController* _tagController;
	BOOL _pushNotificationsAreInitialized;
	BOOL _syncsWithManateeContainer;
	id<WBSHistoryStoreDelegate> _delegate;
	double _historyAgeLimit;
	WBSSQLiteDatabase* _database;
	WBSHistoryCrypto* _crypto;

}

@property (nonatomic,readonly) WBSSQLiteDatabase * database;                                    //@synthesize database=_database - In the implementation block
@property (nonatomic,readonly) WBSHistoryCrypto * crypto;                                       //@synthesize crypto=_crypto - In the implementation block
@property (assign,nonatomic,__weak) id<WBSHistoryStoreDelegate> delegate;                       //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSData * pushThrottlerData; 
@property (nonatomic,copy) NSData * fetchThrottlerData; 
@property (nonatomic,copy) NSData * syncCircleSizeRetrievalThrottlerData; 
@property (nonatomic,copy) NSData * longLivedSaveOperationData; 
@property (assign,nonatomic) unsigned long long cachedNumberOfDevicesInSyncCircle; 
@property (assign,nonatomic) BOOL pushNotificationsAreInitialized;                              //@synthesize pushNotificationsAreInitialized=_pushNotificationsAreInitialized - In the implementation block
@property (assign,nonatomic) double historyAgeLimit;                                            //@synthesize historyAgeLimit=_historyAgeLimit - In the implementation block
@property (nonatomic,readonly) NSData * salt; 
@property (assign,nonatomic) BOOL syncsWithManateeContainer;                                    //@synthesize syncsWithManateeContainer=_syncsWithManateeContainer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL isUsingInMemoryDatabase; 
-(void)dealloc;
-(id<WBSHistoryStoreDelegate>)delegate;
-(void)setDelegate:(id<WBSHistoryStoreDelegate>)arg1 ;
-(WBSSQLiteDatabase *)database;
-(NSData *)salt;
-(void)startLoading;
-(void)closeWithCompletionHandler:(/*^block*/id)arg1 ;
-(long long)_currentGeneration;
-(void)checkIfLocalVisitExistsInAnyOfItems:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(BOOL)_checkDatabaseIntegrity;
-(int)_migrateToCurrentSchemaVersionIfNeeded;
-(void)setServerChangeTokenData:(id)arg1 ;
-(void)setLongLivedSaveOperationData:(NSData *)arg1 ;
-(void)getVisitsAndTombstonesNeedingSyncWithVisitSyncWindow:(double)arg1 completion:(/*^block*/id)arg2 ;
-(void)getServerChangeTokenDataWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)syncsWithManateeContainer;
-(void)setSyncsWithManateeContainer:(BOOL)arg1 ;
-(void)pruneTombstonesWithEndDatePriorToDate:(id)arg1 ;
-(void)updateHistoryAfterSuccessfulPersistedLongLivedSaveOperationWithGeneration:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(NSData *)longLivedSaveOperationData;
-(BOOL)pushNotificationsAreInitialized;
-(void)setPushNotificationsAreInitialized:(BOOL)arg1 ;
-(NSData *)pushThrottlerData;
-(NSData *)fetchThrottlerData;
-(NSData *)syncCircleSizeRetrievalThrottlerData;
-(void)setPushThrottlerData:(NSData *)arg1 ;
-(void)setFetchThrottlerData:(NSData *)arg1 ;
-(void)setSyncCircleSizeRetrievalThrottlerData:(NSData *)arg1 ;
-(unsigned long long)cachedNumberOfDevicesInSyncCircle;
-(void)setCachedNumberOfDevicesInSyncCircle:(unsigned long long)arg1 ;
-(void)resetCloudHistoryDataWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setLastSeenDate:(id)arg1 forCloudClientVersion:(unsigned long long)arg2 ;
-(void)replayAndAddTombstones:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)getAllTombstonesWithCompletion:(/*^block*/id)arg1 ;
-(void)visitIdentifiersMatchingExistingVisits:(id)arg1 populateAssociatedVisits:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)removePastHistoryVisitsForItem:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)itemWasReplaced:(id)arg1 byItem:(id)arg2 ;
-(void)setHistoryAgeLimit:(double)arg1 ;
-(id)lastSeenDateForCloudClientVersion:(unsigned long long)arg1 ;
-(void)visitsWereAdded:(id)arg1 ;
-(void)visitsWereModified:(id)arg1 ;
-(void)getVisitsCreatedAfterDate:(id)arg1 beforeDate:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)visitTitleWasUpdated:(id)arg1 ;
-(void)fetchTopicsFromStartDate:(id)arg1 toEndDate:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)fetchTopicsFromStartDate:(id)arg1 toEndDate:(id)arg2 limit:(unsigned long long)arg3 minimumItemCount:(unsigned long long)arg4 sortOrder:(long long)arg5 completionHandler:(/*^block*/id)arg6 ;
-(void)assignHistoryItem:(id)arg1 toTopicTags:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)tagsWithIdentifiers:(id)arg1 type:(unsigned long long)arg2 level:(long long)arg3 creatingIfNecessary:(BOOL)arg4 withTitles:(id)arg5 completionHandler:(/*^block*/id)arg6 ;
-(void)setTitle:(id)arg1 ofTag:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)clearHistoryVisitsAddedAfterDate:(id)arg1 beforeDate:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)clearHistoryWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)vacuumHistoryWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)performMaintenance:(/*^block*/id)arg1 ;
-(void)_loadHistory;
-(void)waitForLoadingToComplete;
-(BOOL)isUsingInMemoryDatabase;
-(void)itemsWereAdded:(id)arg1 byUserInitiatedAction:(BOOL)arg2 ;
-(void)itemsWereModified:(id)arg1 byUserInitiatedAction:(BOOL)arg2 ;
-(double)historyAgeLimit;
-(void)removeItemsOnDatabaseQueue:(id)arg1 ;
-(void)removeVisitsOnDatabaseQueue:(id)arg1 ;
-(void)addOrUpdateItemsOnDatabaseQueue:(id)arg1 ;
-(id)allVisitsForItemsOnDatabaseQueue:(id)arg1 ;
-(void)enumerateLastVisitForItemsOnDatabaseQueue:(id)arg1 ignoringVisits:(id)arg2 enumerationBlock:(/*^block*/id)arg3 ;
-(void)enumeratePriorVisitsInRedirectChainOnDatabaseQueue:(id)arg1 items:(id)arg2 enumerationBlock:(/*^block*/id)arg3 ;
-(void)enumerateSubsequentVisitsInRedirectChainOnDatabaseQueue:(id)arg1 items:(id)arg2 enumerationBlock:(/*^block*/id)arg3 ;
-(void)_processPendingWrites;
-(void)_finishLoadingOnMainThreadIfNeeded;
-(void)_updateGenerationForVisits:(id)arg1 ;
-(id)_visitsCreatedAfterDate:(id)arg1 beforeDate:(id)arg2 ;
-(void)_clearHistoryVisitsAddedAfterDate:(id)arg1 beforeDate:(id)arg2 addingTombstone:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(BOOL)_shouldEmitLegacyTombstones;
-(void)_clearHistoryVisitsMatchingURLString:(id)arg1 afterDate:(id)arg2 beforeDate:(id)arg3 addingTombstone:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)_insertTombstone:(id)arg1 ;
-(void)_removeVisitsProvidedByBlockInvokedOnDatabaseQueue:(/*^block*/id)arg1 addingTombstone:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)_visitsCreatedMatchingURLString:(id)arg1 afterDate:(id)arg2 beforeDate:(id)arg3 ;
-(id)_visitsCreatedMatchingURLHash:(id)arg1 salt:(id)arg2 afterDate:(id)arg3 beforeDate:(id)arg4 ;
-(void)_incrementCurrentGeneration;
-(id)_visitsNeedingSyncWithVisitSyncWindow:(double)arg1 ;
-(id)_tombstonesNeedingSync;
-(void)_updateDatabaseAfterSuccessfulSyncWithGeneration:(long long)arg1 convertTombstonesToSecureFormat:(BOOL)arg2 ;
-(long long)_lastSyncedGeneration;
-(void)_convertTombstoneWithGenerationToSecureFormat:(long long)arg1 ;
-(void)_setLastSyncedGeneration:(unsigned long long)arg1 ;
-(id)_visitsFromRows:(id)arg1 predicate:(/*^block*/id)arg2 ;
-(id)visitForRow:(id)arg1 ;
-(id)_metadataDataValueForKey:(id)arg1 ;
-(void)_setMetadataDataValue:(id)arg1 forKey:(id)arg2 ;
-(void)_pruneTombstonesOnDatabaseQueueWithEndDatePriorToDate:(id)arg1 ;
-(void)_setMetadataInt64Value:(long long)arg1 forKey:(id)arg2 ;
-(void)_clearHistoryVisitsMatchingURLHash:(id)arg1 salt:(id)arg2 afterDate:(id)arg3 beforeDate:(id)arg4 addingTombstone:(id)arg5 completionHandler:(/*^block*/id)arg6 ;
-(long long)_metadataInt64ValueForKey:(id)arg1 ;
-(void)_scheduleWrite;
-(id)existingItemFromVisitRow:(id)arg1 ;
-(id)visitForItem:(id)arg1 row:(id)arg2 ;
-(id)_tagsWithIdentifiers:(id)arg1 titles:(id)arg2 ofType:(unsigned long long)arg3 level:(long long)arg4 creatingIfNeeded:(BOOL)arg5 createdTags:(id*)arg6 error:(id*)arg7 ;
-(id)_fetchHistoryTagsWithPredicate:(id)arg1 error:(id*)arg2 ;
-(id)_createHistoryTagsWithIdentifiers:(id)arg1 titles:(id)arg2 type:(unsigned long long)arg3 level:(long long)arg4 error:(id*)arg5 ;
-(Class)_classForHistoryTagType:(unsigned long long)arg1 ;
-(BOOL)_populateHistoryItemsInHistoryTopicTag:(id)arg1 fromStartDate:(id)arg2 toEndDate:(id)arg3 error:(id*)arg4 ;
-(void)_openDatabase:(id)arg1 andCheckIntegrity:(BOOL)arg2 ;
-(void)_finishLoadingOnMainThread;
-(void)_registerHistoryTagFrecencyScoringFunction;
-(void)_loadFromDatabase;
-(void)_loadRedirectVisitsForLoadedItems:(id)arg1 ;
-(double)_ageLimitSinceReferenceDate;
-(unsigned long long)_cachedNumberOfDevicesInSyncCircleOnDatabaseQueue;
-(void)_loadClientVersions;
-(void)_scheduleMaintenance;
-(void)_writeTimerFired;
-(void)_processPendingDeletes;
-(void)_insertItem:(id)arg1 ;
-(void)_updateItem:(id)arg1 ;
-(void)_updateVisitRedirectRelationships:(id)arg1 ;
-(void)_checkpointWriteAheadLog;
-(void)_processPendingVisitDeletes;
-(void)_insertVisit:(id)arg1 ;
-(void)_updateVisit:(id)arg1 ;
-(id)_lastSeenDateForCloudClientVersionOnDatabaseQueue:(unsigned long long)arg1 ;
-(id)_deletionPlanForDeletionOfVisits:(id)arg1 ;
-(void)_performMaintenance:(/*^block*/id)arg1 ;
-(void)_recomputeDerivedVisitCountScores;
-(void)_expireOldVisits;
-(void)_enforceAgeAndItemCountLimits:(/*^block*/id)arg1 ;
-(id)initWithURL:(id)arg1 itemCountLimit:(unsigned long long)arg2 historyAgeLimit:(double)arg3 historyItemClass:(Class)arg4 ;
-(BOOL)_shouldMigrateFromPropertyListWhenLoadingDatabase:(id)arg1 ;
-(int)_setOrigin:(long long)arg1 forVisitsFromOrigin:(long long)arg2 ;
-(id)_visitsWithOrigins:(id)arg1 ;
-(WBSHistoryCrypto *)crypto;
@end

