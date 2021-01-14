/*
* Generated on Thursday, January 14, 2021 at 2:23:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/

#import <SafariShared/SafariShared-Structs.h>
#import <libobjc.A.dylib/WBSSQLiteDatabaseDelegate.h>
#import <libobjc.A.dylib/WBSHistoryServiceDatabaseProtocol.h>

@protocol OS_dispatch_queue;
@class NSObject, WBSHistoryCrypto, WBSSQLiteDatabase, NSDictionary, WBSSQLiteStatementCache, NSMapTable, NSMutableSet, NSMutableArray, NSURL, WBSHistoryTagDatabaseController, NSString, WBSHistoryServiceURLCompletion;

@interface WBSHistoryServiceDatabase : NSObject <WBSSQLiteDatabaseDelegate, WBSHistoryServiceDatabaseProtocol> {

	NSObject*<OS_dispatch_queue> _queue;
	unsigned long long _currentRangeForTemporaryID;
	WBSHistoryCrypto* _crypto;
	WBSSQLiteDatabase* _database;
	NSDictionary* _databaseOptions;
	WBSSQLiteStatementCache* _statements;
	NSMapTable* _delegates;
	NSMapTable* _listeners;
	NSMutableSet* _registeredListeners;
	LatestVisitInformationMap* _latestVisitMap;
	BOOL _hasComputedLatestVisit;
	unordered_map<long long, long long, std::__1::hash<long long>, std::__1::equal_to<long long>, std::__1::allocator<std::__1::pair<const long long, long long> > >* _temporaryIDToItem;
	unordered_map<long long, long long, std::__1::hash<long long>, std::__1::equal_to<long long>, std::__1::allocator<std::__1::pair<const long long, long long> > >* _visitForTemporaryID;
	NSMutableArray* _pendingVisits;
	atomic<bool> _integrityCheckPending;
	NSURL* _clearHistoryInProgressFileURL;
	/*^block*/id _pendingVisitsTimeout;
	WBSHistoryTagDatabaseController* _tagController;
	NSString* _databaseID;
	NSURL* _databaseURL;
	WBSHistoryServiceURLCompletion* _urlCompletion;

}

@property (nonatomic,copy,readonly) NSString * databaseID;                                  //@synthesize databaseID=_databaseID - In the implementation block
@property (nonatomic,readonly) NSURL * databaseURL;                                         //@synthesize databaseURL=_databaseURL - In the implementation block
@property (nonatomic,readonly) WBSHistoryServiceURLCompletion * urlCompletion;              //@synthesize urlCompletion=_urlCompletion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)fetchWithOptions:(unsigned long long)arg1 predicate:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)assignHistoryItemWithID:(long long)arg1 toTopicTagsWithIDs:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)vacuumHistoryWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)replayAndAddTombstones:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)performMaintenanceWithAgeLimit:(double)arg1 itemCountLimit:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)updateDatabaseAfterSuccessfulSyncWithGeneration:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)lastSeenDateForCloudClientVersion:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)dispatchEvent:(id)arg1 listenersToIgnore:(id)arg2 persistForDelayedDispatching:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)setMetadataValue:(id)arg1 forKey:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setLastSeenDate:(id)arg1 forCloudClientVersion:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)pruneTombstonesWithEndDatePriorToDate:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)fetchAllTombstonesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)updateWithType:(unsigned long long)arg1 addOrModifyObjects:(id)arg2 updateCurrentGeneration:(id)arg3 updateLastSyncGeneration:(id)arg4 updateLastMaintenance:(id)arg5 completionHandler:(/*^block*/id)arg6 ;
-(void)recordVisitWithIdentifier:(id)arg1 sourceVisit:(id)arg2 title:(id)arg3 wasHTTPNonGet:(BOOL)arg4 loadSuccessful:(BOOL)arg5 origin:(long long)arg6 attributes:(unsigned long long)arg7 completionHandler:(/*^block*/id)arg8 ;
-(void)resetCloudHistoryDataWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)updateVisitWithIdentifier:(id)arg1 removeAttributes:(unsigned long long)arg2 addAttributes:(unsigned long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)visitsAndTombstonesNeedingSyncWithVisitSyncWindow:(double)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)finishClearingHistoryIfNecessaryWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)clearHistoryItems:(id)arg1 afterDate:(id)arg2 beforeDate:(id)arg3 tombstoneMode:(unsigned long long)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)clearAllHistoryInsertingTombstoneUpToDate:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setTitle:(id)arg1 ofTagWithID:(long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)updateVisitWithIdentifier:(id)arg1 title:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)fetchCloudClientVersionTable:(/*^block*/id)arg1 ;
-(void)visitIdentifiersMatchingExistingVisits:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)computeFrequentlyVisitedSites:(unsigned long long)arg1 minimalVisitCountScore:(unsigned long long)arg2 disallowList:(id)arg3 allowList:(id)arg4 options:(unsigned long long)arg5 currentTime:(double)arg6 completionHandler:(/*^block*/id)arg7 ;
-(void)expireOldVisits:(double)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)convertTombstoneWithGenerationToSecureFormat:(long long)arg1 lastSyncedGeneration:(long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)fetchDomainExpansions:(/*^block*/id)arg1 ;
-(void)flushWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)addAutocompleteTrigger:(id)arg1 forURL:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)_clearHistoryItems:(id)arg1 afterDate:(id)arg2 beforeDate:(id)arg3 tombstoneMode:(unsigned long long)arg4 ;
-(void)clearHistoryVisitsAddedAfterDate:(id)arg1 beforeDate:(id)arg2 tombstoneMode:(unsigned long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)fetchEventsForListener:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)createTagsForIdentifiers:(id)arg1 withTitles:(id)arg2 type:(unsigned long long)arg3 level:(long long)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)searchForUserTypedString:(id)arg1 options:(unsigned long long)arg2 currentTime:(double)arg3 writeHandle:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)checkIfLocalVisitExistsForDatabaseIDs:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)markEventsAsReceivedByListener:(id)arg1 eventIDs:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)fetchMetadataForKeys:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)fetchAutocompleteTriggersForURLString:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)fetchDatabaseURL:(/*^block*/id)arg1 ;
-(void)recomputeItemScoresWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)_fetchTagsWithOptions:(unsigned long long)arg1 predicate:(id)arg2 writeDescriptor:(int)arg3 ;
-(void)warmUp;
-(id)_convertTombstoneWithGenerationToSecureFormat:(long long)arg1 lastSyncedGeneration:(long long)arg2 ;
-(void)_clearWBSHistorySQLiteStoreClearHistoryKeys;
-(id)_ensureLatestVisitsAreComputed;
-(id)_dateForMetadataKey:(id)arg1 error:(id*)arg2 ;
-(id)_setMetadataValue:(id)arg1 forKey:(id)arg2 ;
-(id)init;
-(double)_oldestLatestVisit;
-(void)deletionPlanForItemsToDelete:(id)arg1 visitsToDelete:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(long long)allocateTemporaryIDRange:(long long*)arg1 ;
-(id)_generateUpdatedLastVisit:(const unordered_map<long long, long long, std::__1::hash<long long>, std::__1::equal_to<long long>, std::__1::allocator<std::__1::pair<const long long, long long> > >*)arg1 ;
-(id)_fetchVisitsWithOptions:(unsigned long long)arg1 predicate:(id)arg2 writeDescriptor:(int)arg3 ;
-(BOOL)_commitPendingItems:(id)arg1 ;
-(BOOL)isOpen;
-(void)close;
-(long long)_lastSyncedGeneration;
-(id)_addOrModifyObjects:(id)arg1 ;
-(id)_findObsoleteItemsForPlan:(DeletionPlan*)arg1 ;
-(id)_preparePlan:(DeletionPlan*)arg1 itemsToDelete:(const unordered_set<long long, std::__1::hash<long long>, std::__1::equal_to<long long>, std::__1::allocator<long long> >*)arg2 visitsToDelete:(const unordered_set<long long, std::__1::hash<long long>, std::__1::equal_to<long long>, std::__1::allocator<long long> >*)arg3 afterDate:(id)arg4 beforeDate:(id)arg5 ;
-(id)_fetchObjectToTagMappingsWithOptions:(unsigned long long)arg1 predicate:(id)arg2 writeDescriptor:(int)arg3 ;
-(void)addDelegate:(id)arg1 listenerName:(id)arg2 forConnection:(id)arg3 ;
-(WBSHistoryServiceURLCompletion *)urlCompletion;
-(void)_updateVisitWithIdentifier:(id)arg1 removeAttributes:(unsigned long long)arg2 addAttributes:(unsigned long long)arg3 pendingVisit:(id)arg4 ;
-(int)_migrateToCurrentSchemaVersionIfNeeded;
-(void)_closeTagController;
-(void)_removeLegacyHistoryDatabaseIfNeeded;
-(id)_insertVisit:(id)arg1 ;
-(void)_registerHistoryTagFrecencyScoringFunction;
-(id)_updateItem:(id)arg1 ;
-(void)_commitPendingUpdates;
-(BOOL)_shouldEmitLegacyTombstones;
-(void)_dispatchEvent:(id)arg1 listenersToIgnore:(id)arg2 persistForDelayedDispatching:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_queuePendingUpdates;
-(id)_recomputeItemScores:(unordered_set<long long, std::__1::hash<long long>, std::__1::equal_to<long long>, std::__1::allocator<long long> >*)arg1 ;
-(id)_fetchTombstonesWithOptions:(unsigned long long)arg1 predicate:(id)arg2 writeDescriptor:(int)arg3 ;
-(id)_generateItemsDictionary:(const unordered_map<long long, long long, std::__1::hash<long long>, std::__1::equal_to<long long>, std::__1::allocator<std::__1::pair<const long long, long long> > >*)arg1 ;
-(long long)_currentGeneration;
-(id)_findAllRelatedVisitsToItems:(const unordered_set<long long, std::__1::hash<long long>, std::__1::equal_to<long long>, std::__1::allocator<long long> >*)arg1 forPlan:(DeletionPlan*)arg2 ;
-(id)_insertItem:(id)arg1 ;
-(id)_lastSeenDateForCloudClientVersion:(unsigned long long)arg1 ;
-(id)_findItemIDsForPendingVisitsWithError:(id*)arg1 ;
-(void)_updateItem:(long long)arg1 visitCountScore:(long long)arg2 dailyVisitCounts:(id)arg3 weeklyVisitCounts:(id)arg4 shouldRecomputeDerivedVisitCounts:(BOOL)arg5 ;
-(id)_fetchListenerNamesFromDatabase:(id*)arg1 ;
-(id)_fetchEventsForListener:(id)arg1 error:(id*)arg2 ;
-(void)ensureLatestVisitsAreComputed:(/*^block*/id)arg1 ;
-(void)_ensureDatabaseIsSynced;
-(id)_updateListenerRegistration:(id)arg1 lastSeen:(double)arg2 ;
-(void)database:(id)arg1 hadSevereError:(id)arg2 ;
-(unsigned long long)_countOfItems;
-(long long)_permanentIDsForVisitIfAvailable:(long long)arg1 ;
-(BOOL)_reopenDatabase:(id*)arg1 ;
-(id)_expireOldVisits:(double)arg1 ;
-(void)_checkpointWriteAheadLog;
-(id)_collectDeletedURLsForPlan:(DeletionPlan*)arg1 ;
-(id)_generateVisitsDictionary:(const unordered_map<long long, long long, std::__1::hash<long long>, std::__1::equal_to<long long>, std::__1::allocator<std::__1::pair<const long long, long long> > >*)arg1 ;
-(id)_metadataForKey:(id)arg1 error:(id*)arg2 ;
-(void)_startingClearHistoryOperationForStartDate:(id)arg1 endDate:(id)arg2 ;
-(id)_deleteOldestItems:(unsigned long long)arg1 forPlan:(DeletionPlan*)arg2 ;
-(id)initWithID:(id)arg1 url:(id)arg2 options:(id)arg3 error:(id*)arg4 ;
-(NSURL *)databaseURL;
-(id)_markEventsAsReceivedByListener:(id)arg1 eventIDs:(id)arg2 ;
-(id)_executePlan:(DeletionPlan*)arg1 outDeletedItemCount:(unsigned long long*)arg2 outDeletedVisitCount:(unsigned long long*)arg3 ;
-(BOOL)_prepareDatabase:(id*)arg1 ;
-(id)_updateVisit:(id)arg1 ;
-(long long)_writeEventToDatabase:(id)arg1 listeners:(id)arg2 error:(id*)arg3 ;
-(id)_recomputeVisitScores:(unordered_set<long long, std::__1::hash<long long>, std::__1::equal_to<long long>, std::__1::allocator<long long> >*)arg1 ;
-(NSString *)databaseID;
-(id)_collectDeletedHostnamesForPlan:(DeletionPlan*)arg1 ;
-(id)_updateByAddingOrModifyObjects:(id)arg1 updateCurrentGeneration:(id)arg2 updateLastSyncGeneration:(id)arg3 updateLastMaintenance:(id)arg4 ;
-(void)_notifyExecutionOfPlan:(DeletionPlan*)arg1 ;
-(id)_generateDisposedVisitsForPlan:(DeletionPlan*)arg1 ;
-(id)_insertTombstonesForURLs:(id)arg1 afterDate:(id)arg2 beforeDate:(id)arg3 tombstoneMode:(unsigned long long)arg4 ;
-(id)_preparePlan:(DeletionPlan*)arg1 ageLimit:(double)arg2 itemCountLimit:(unsigned long long)arg3 ;
-(BOOL)_commitPendingVisits:(id)arg1 ;
-(id)_updateVisitRedirectRelationships:(id)arg1 ;
-(void)_notifyDelegatesOfVisitIDs;
-(id)_clearHistoryVisitsAddedAfterDate:(id)arg1 beforeDate:(id)arg2 tombstoneMode:(unsigned long long)arg3 ;
-(id)_insertTombstone:(id)arg1 ;
-(BOOL)_addAutocompleteTrigger:(id)arg1 forURL:(id)arg2 error:(id*)arg3 ;
-(long long)_permanentIDsForItemIfAvailable:(long long)arg1 ;
-(id)_findAllRelatedVisits:(const unordered_set<long long, std::__1::hash<long long>, std::__1::equal_to<long long>, std::__1::allocator<long long> >*)arg1 forPlan:(DeletionPlan*)arg2 afterDate:(id)arg3 beforeDate:(id)arg4 ;
-(unsigned long long)_pruneTombstonesOnDatabaseQueueWithEndDatePriorToDate:(id)arg1 error:(id*)arg2 ;
-(void)_finishedClearingHistory;
-(unordered_map<long long, long long, std::__1::hash<long long>, std::__1::equal_to<long long>, std::__1::allocator<std::__1::pair<const long long, long long> > >*)_recomputeLatestVisitsForItems:(const unordered_set<long long, std::__1::hash<long long>, std::__1::equal_to<long long>, std::__1::allocator<long long> >*)arg1 error:(id*)arg2 ;
-(void)deletionPlanForAgeLimit:(double)arg1 itemCountLimit:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_notifyDelegatesOfItemIDs;
-(id)_clearAllHistoryInsertingTombstoneUpToDate:(id)arg1 ;
@end

