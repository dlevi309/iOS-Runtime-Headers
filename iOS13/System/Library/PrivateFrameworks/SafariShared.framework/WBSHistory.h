/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/

#import <libobjc.A.dylib/WBSHistoryStoreDelegate.h>

@protocol OS_dispatch_queue, WBSHistoryStore;
@class NSObject, NSMutableDictionary, NSCountedSet, WBSHistoryTagMap, NSArray, NSData, NSString;

@interface WBSHistory : NSObject <WBSHistoryStoreDelegate> {

	NSObject*<OS_dispatch_queue> _entriesByURLStringAccessQueue;
	NSMutableDictionary* _entriesByURLString;
	NSObject*<OS_dispatch_queue> _hostnameToHistoryItemCountAccessQueue;
	NSCountedSet* _hostnameToHistoryItemCount;
	NSCountedSet* _stringsForUserTypedDomainExpansion;
	double _historyAgeLimit;
	BOOL _hasStartedLoadingHistory;
	NSObject*<OS_dispatch_queue> _waitUntilHistoryHasLoadedQueue;
	id<WBSHistoryStore> _historyStore;
	WBSHistoryTagMap* _historyTagMap;

}

@property (readonly) NSArray * allItems; 
@property (nonatomic,readonly) BOOL hasAnyHistoryItems; 
@property (nonatomic,readonly) unsigned long long numberOfHistoryItems; 
@property (nonatomic,readonly) unsigned long long numberOfHistoryItemsOnHistoryQueue; 
@property (assign,nonatomic) double historyAgeLimit;                                               //@synthesize historyAgeLimit=_historyAgeLimit - In the implementation block
@property (nonatomic,readonly) WBSHistoryTagMap * historyTagMap;                                   //@synthesize historyTagMap=_historyTagMap - In the implementation block
@property (nonatomic,copy) NSData * pushThrottlerData; 
@property (nonatomic,copy) NSData * fetchThrottlerData; 
@property (nonatomic,copy) NSData * syncCircleSizeRetrievalThrottlerData; 
@property (nonatomic,copy) NSData * longLivedSaveOperationData; 
@property (assign,nonatomic) unsigned long long cachedNumberOfDevicesInSyncCircle; 
@property (assign,nonatomic) BOOL pushNotificationsAreInitialized; 
@property (assign,nonatomic) BOOL syncsWithManateeContainer; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)clearExistingSharedHistory;
+(id)existingSharedHistory;
+(id)historyDatabaseURL;
+(id)historyPropertyListURL;
+(id)historyDatabaseWriteAheadLogURL;
-(id)init;
-(void)close;
-(void)closeWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)enumerateItemsUsingBlock:(/*^block*/id)arg1 ;
-(void)clearHistory;
-(id)itemForURL:(id)arg1 ;
-(id)itemForURLString:(id)arg1 ;
-(NSArray *)allItems;
-(void)_removeAllVisitedLinks;
-(void)_startLoading;
-(void)performBlockAfterHistoryHasLoaded:(/*^block*/id)arg1 ;
-(void)checkIfLocalVisitExistsInAnyOfItems:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)performMaintenance;
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
-(id)itemRedirectedFrom:(id)arg1 to:(id)arg2 origin:(long long)arg3 date:(id)arg4 ;
-(void)updateTitle:(id)arg1 forVisit:(id)arg2 ;
-(id)itemVisitedAtURLString:(id)arg1 title:(id)arg2 timeOfVisit:(double)arg3 wasHTTPNonGet:(BOOL)arg4 wasFailure:(BOOL)arg5 increaseVisitCount:(BOOL)arg6 origin:(long long)arg7 ;
-(void)waitUntilHistoryHasLoaded;
-(id)itemForURLString:(id)arg1 createIfNeeded:(BOOL)arg2 ;
-(Class)_historyItemClass;
-(void)_removeItemsInResponseToUserAction:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_waitUntilHistoryHasLoadedMainThread;
-(id)_removeItemForURLString:(id)arg1 ;
-(void)_addItemToStringsForUserTypedDomainExpansion:(id)arg1 ;
-(void)_removeItemFromStringsForUserTypedDomainExpansion:(id)arg1 ;
-(unsigned long long)numberOfHistoryItems;
-(unsigned long long)numberOfHistoryItemsOnHistoryQueue;
-(void)setHistoryAgeLimit:(double)arg1 ;
-(id)lastSeenDateForCloudClientVersion:(unsigned long long)arg1 ;
-(id)itemVisitedAtURLString:(id)arg1 title:(id)arg2 timeOfVisit:(double)arg3 wasHTTPNonGet:(BOOL)arg4 wasFailure:(BOOL)arg5 increaseVisitCount:(BOOL)arg6 origin:(long long)arg7 attributes:(unsigned long long)arg8 ;
-(void)_loadHistoryAsynchronouslyIfNeeded;
-(void)_dispatchHistoryItemWillChange:(id)arg1 ;
-(void)_dispatchHistoryVisitAdded:(id)arg1 ;
-(void)_dispatchHistoryItemsAdded:(id)arg1 byUserInitiatedAction:(BOOL)arg2 ;
-(void)_dispatchHistoryItemDidChange:(id)arg1 byUserInitiatedAction:(BOOL)arg2 ;
-(BOOL)canRecordRedirectFromVisit:(id)arg1 to:(id)arg2 ;
-(void)getVisitsCreatedAfterDate:(id)arg1 beforeDate:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_setAttributes:(unsigned long long)arg1 forVisit:(id)arg2 ;
-(void)fetchTopicsFromStartDate:(id)arg1 toEndDate:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)fetchTopicsFromStartDate:(id)arg1 toEndDate:(id)arg2 limit:(unsigned long long)arg3 minimumItemCount:(unsigned long long)arg4 sortOrder:(long long)arg5 completionHandler:(/*^block*/id)arg6 ;
-(void)setTitle:(id)arg1 ofTag:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)clearHistoryVisitsAddedAfterDate:(id)arg1 beforeDate:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)clearHistoryWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_dispatchHistoryCleared:(id)arg1 ;
-(void)vacuumHistoryWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_dispatchDidRemoveHostnames:(id)arg1 ;
-(void)performMaintenance:(/*^block*/id)arg1 ;
-(void)_loadHistory;
-(id)_createHistoryStore;
-(void)_addItem:(id)arg1 addToStringsForUserTypedDomainExpansions:(BOOL)arg2 ;
-(void)_dispatchHistoryItemsLoaded:(id)arg1 ;
-(void)_dispatchHistoryItemsRemovedDuringLoading:(id)arg1 ;
-(void)_dispatchHistoryLoaded;
-(void)_dispatchHistoryItemsRemoved:(id)arg1 ;
-(id)_updateHostnameCountWithDeletedHistoryItems:(id)arg1 ;
-(void)_updateHostnameCountWithAddedHistoryItems:(id)arg1 ;
-(void)_sendNotification:(id)arg1 withItems:(id)arg2 ;
-(void)_addVisitedLinksForItemsIfNeeded:(id)arg1 ;
-(void)_clearHostnameCount;
-(void)historyLoader:(id)arg1 didLoadItems:(id)arg2 discardedItems:(id)arg3 stringsForUserTypeDomainExpansion:(id)arg4 ;
-(void)historyLoaderDidFinishLoading:(id)arg1 ;
-(void)historyStore:(id)arg1 didPrepareToDeleteWithDeletionPlan:(id)arg2 ;
-(BOOL)historyStoreShouldCheckDatabaseIntegrity:(id)arg1 ;
-(void)historyStoreDidFailDatabaseIntegrityCheck:(id)arg1 ;
-(void)historyStore:(id)arg1 didAddVisits:(id)arg2 ;
-(void)historyStore:(id)arg1 didRemoveItems:(id)arg2 ;
-(void)historyStore:(id)arg1 didRemoveVisits:(id)arg2 ;
-(void)removeItemsInResponseToUserAction:(id)arg1 ;
-(void)_removeHistoryItemsInResponseToUserAction:(id)arg1 ;
-(void)addAutocompleteTrigger:(id)arg1 forURLString:(id)arg2 ;
-(BOOL)_isStringForUserTypedDomainExpansionInHistory:(id)arg1 ;
-(BOOL)hasAnyHistoryItems;
-(void)enumerateItemsAsynchronouslyUsingBlock:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)itemVisitedAtURLString:(id)arg1 title:(id)arg2 wasHTTPNonGet:(BOOL)arg3 wasFailure:(BOOL)arg4 increaseVisitCount:(BOOL)arg5 ;
-(void)getHighLevelHTTPFamilyDomainsVisitedAfterDate:(id)arg1 beforeDate:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)addAttributes:(unsigned long long)arg1 toVisit:(id)arg2 ;
-(void)removeAttributes:(unsigned long long)arg1 fromVisit:(id)arg2 ;
-(void)addTagWithIdentifier:(id)arg1 title:(id)arg2 toItemAtURL:(id)arg3 level:(long long)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)clearHistoryVisitsAddedAfterDate:(id)arg1 beforeDate:(id)arg2 ;
-(void)savePendingChangesBeforeTerminationWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_unload;
-(double)historyAgeLimit;
-(WBSHistoryTagMap *)historyTagMap;
@end

