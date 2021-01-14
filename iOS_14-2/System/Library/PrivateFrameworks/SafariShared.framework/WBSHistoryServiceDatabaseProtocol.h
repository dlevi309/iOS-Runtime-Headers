/*
* Generated on Thursday, January 14, 2021 at 2:23:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/


@protocol WBSHistoryServiceDatabaseProtocol <NSObject>
@required
-(void)fetchWithOptions:(unsigned long long)arg1 predicate:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)assignHistoryItemWithID:(long long)arg1 toTopicTagsWithIDs:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)vacuumHistoryWithCompletionHandler:(/*^block*/id)arg1;
-(void)replayAndAddTombstones:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)performMaintenanceWithAgeLimit:(double)arg1 itemCountLimit:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3;
-(void)updateDatabaseAfterSuccessfulSyncWithGeneration:(long long)arg1 completionHandler:(/*^block*/id)arg2;
-(void)lastSeenDateForCloudClientVersion:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2;
-(void)dispatchEvent:(id)arg1 listenersToIgnore:(id)arg2 persistForDelayedDispatching:(BOOL)arg3 completionHandler:(/*^block*/id)arg4;
-(void)setMetadataValue:(id)arg1 forKey:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)setLastSeenDate:(id)arg1 forCloudClientVersion:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3;
-(void)pruneTombstonesWithEndDatePriorToDate:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)fetchAllTombstonesWithCompletionHandler:(/*^block*/id)arg1;
-(void)updateWithType:(unsigned long long)arg1 addOrModifyObjects:(id)arg2 updateCurrentGeneration:(id)arg3 updateLastSyncGeneration:(id)arg4 updateLastMaintenance:(id)arg5 completionHandler:(/*^block*/id)arg6;
-(void)recordVisitWithIdentifier:(id)arg1 sourceVisit:(id)arg2 title:(id)arg3 wasHTTPNonGet:(BOOL)arg4 loadSuccessful:(BOOL)arg5 origin:(long long)arg6 attributes:(unsigned long long)arg7 completionHandler:(/*^block*/id)arg8;
-(void)resetCloudHistoryDataWithCompletionHandler:(/*^block*/id)arg1;
-(void)updateVisitWithIdentifier:(id)arg1 removeAttributes:(unsigned long long)arg2 addAttributes:(unsigned long long)arg3 completionHandler:(/*^block*/id)arg4;
-(void)visitsAndTombstonesNeedingSyncWithVisitSyncWindow:(double)arg1 completionHandler:(/*^block*/id)arg2;
-(void)finishClearingHistoryIfNecessaryWithCompletionHandler:(/*^block*/id)arg1;
-(void)clearHistoryItems:(id)arg1 afterDate:(id)arg2 beforeDate:(id)arg3 tombstoneMode:(unsigned long long)arg4 completionHandler:(/*^block*/id)arg5;
-(void)clearAllHistoryInsertingTombstoneUpToDate:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)setTitle:(id)arg1 ofTagWithID:(long long)arg2 completionHandler:(/*^block*/id)arg3;
-(void)updateVisitWithIdentifier:(id)arg1 title:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)fetchCloudClientVersionTable:(/*^block*/id)arg1;
-(void)visitIdentifiersMatchingExistingVisits:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)computeFrequentlyVisitedSites:(unsigned long long)arg1 minimalVisitCountScore:(unsigned long long)arg2 disallowList:(id)arg3 allowList:(id)arg4 options:(unsigned long long)arg5 currentTime:(double)arg6 completionHandler:(/*^block*/id)arg7;
-(void)expireOldVisits:(double)arg1 completionHandler:(/*^block*/id)arg2;
-(void)convertTombstoneWithGenerationToSecureFormat:(long long)arg1 lastSyncedGeneration:(long long)arg2 completionHandler:(/*^block*/id)arg3;
-(void)fetchDomainExpansions:(/*^block*/id)arg1;
-(void)flushWithCompletionHandler:(/*^block*/id)arg1;
-(void)addAutocompleteTrigger:(id)arg1 forURL:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)clearHistoryVisitsAddedAfterDate:(id)arg1 beforeDate:(id)arg2 tombstoneMode:(unsigned long long)arg3 completionHandler:(/*^block*/id)arg4;
-(void)fetchEventsForListener:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)createTagsForIdentifiers:(id)arg1 withTitles:(id)arg2 type:(unsigned long long)arg3 level:(long long)arg4 completionHandler:(/*^block*/id)arg5;
-(void)searchForUserTypedString:(id)arg1 options:(unsigned long long)arg2 currentTime:(double)arg3 writeHandle:(id)arg4 completionHandler:(/*^block*/id)arg5;
-(void)checkIfLocalVisitExistsForDatabaseIDs:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)markEventsAsReceivedByListener:(id)arg1 eventIDs:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)fetchMetadataForKeys:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)fetchAutocompleteTriggersForURLString:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)fetchDatabaseURL:(/*^block*/id)arg1;
-(void)recomputeItemScoresWithCompletionHandler:(/*^block*/id)arg1;
-(BOOL)isOpen;
-(void)close;

@end

