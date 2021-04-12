/*
* Generated on Thursday, January 14, 2021 at 2:26:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpotlightDaemon.framework/SpotlightDaemon
*/


@protocol OS_dispatch_queue, OS_dispatch_source, OS_os_transaction;
#import <SpotlightDaemon/SpotlightDaemon-Structs.h>
@class NSMapTable, NSMutableSet, SPCoreSpotlightIndexer, NSObject, NSString, NSMutableArray;

@interface SPConcreteCoreSpotlightIndexer : NSObject {

	AI _maintenanceOperations;
	int* _cancelPtr;
	BOOL _suspended;
	BOOL _softSuspended;
	BOOL _scheduledStringsCleanup;
	NSMapTable* _checkedInClients;
	NSMutableSet* _knownClients;
	NSMutableSet* _reindexAllDelegateBundleIDs;
	double _lastPreheat;
	double _lastTTLPass;
	unsigned long long _createCount;
	SPCoreSpotlightIndexer* _owner;
	SIRef _index;
	SIResultQueueRef _resultQueue;
	NSObject*<OS_dispatch_queue> _indexQueue;
	NSObject*<OS_dispatch_queue> _firstUnlockQueue;
	NSString* _dataclass;
	NSObject*<OS_dispatch_source> _indexIdleTimer;
	double _idleStartTime;
	NSMutableArray* _outstandingMaintenance;
	NSObject*<OS_os_transaction> _dirtyTransaction;

}

@property (assign,nonatomic,__weak) SPCoreSpotlightIndexer * owner;                       //@synthesize owner=_owner - In the implementation block
@property (assign,nonatomic) SIRef index;                                                 //@synthesize index=_index - In the implementation block
@property (assign,nonatomic) SIResultQueueRef resultQueue;                                //@synthesize resultQueue=_resultQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> indexQueue;                     //@synthesize indexQueue=_indexQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> firstUnlockQueue;               //@synthesize firstUnlockQueue=_firstUnlockQueue - In the implementation block
@property (nonatomic,retain) NSString * dataclass;                                        //@synthesize dataclass=_dataclass - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_source> indexIdleTimer;              //@synthesize indexIdleTimer=_indexIdleTimer - In the implementation block
@property (nonatomic,readonly) double idleStartTime;                                      //@synthesize idleStartTime=_idleStartTime - In the implementation block
@property (nonatomic,retain) NSMutableArray * outstandingMaintenance;                     //@synthesize outstandingMaintenance=_outstandingMaintenance - In the implementation block
@property (nonatomic,readonly) NSMutableSet * knownClients;                               //@synthesize knownClients=_knownClients - In the implementation block
@property (nonatomic,readonly) NSMapTable * checkedInClients;                             //@synthesize checkedInClients=_checkedInClients - In the implementation block
@property (nonatomic,retain) NSObject*<OS_os_transaction> dirtyTransaction;               //@synthesize dirtyTransaction=_dirtyTransaction - In the implementation block
+(void)initialize;
+(id)_stateInfoAttributeNameWithClientStateName:(id)arg1 ;
+(id)fetchItemForURL:(id)arg1 ;
+(id)fetchParentsForItemID:(id)arg1 recursively:(BOOL)arg2 timeout:(unsigned long long)arg3 ;
-(void)shrink:(unsigned long long)arg1 ;
-(NSString *)dataclass;
-(void)dirty;
-(BOOL)writeDiagnostic:(id)arg1 bundleID:(id)arg2 identifier:(id)arg3 ;
-(SIRef)index;
-(void)_performXPCActivity:(id)arg1 name:(id)arg2 ;
-(void)setDataclass:(NSString *)arg1 ;
-(void)preheat;
-(void)performIndexerTask:(id)arg1 withIndexDelegatesAndCompletionHandler:(/*^block*/id)arg2 ;
-(void)issueDumpForward:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)deleteAllUserActivities:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)mergeWithCompletionHandler:(/*^block*/id)arg1 ;
-(SPCoreSpotlightIndexer *)owner;
-(NSMutableSet *)knownClients;
-(void)startQueryWithQueryTask:(id)arg1 startHandler:(/*^block*/id)arg2 eventHandler:(/*^block*/id)arg3 resultsHandler:(/*^block*/id)arg4 ;
-(void)updateRankingDates;
-(void)deleteSearchableItemsSinceDate:(id)arg1 forBundleID:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)dirty:(BOOL)arg1 ;
-(id)_indexMaintenanceActivityName;
-(void)setIndex:(SIRef)arg1 ;
-(void)indexSearchableItems:(id)arg1 deleteSearchableItemsWithIdentifiers:(id)arg2 clientState:(id)arg3 forBundleID:(id)arg4 options:(long long)arg5 completionHandler:(/*^block*/id)arg6 ;
-(void)deleteSearchableItemsWithDomainIdentifiers:(id)arg1 forBundleID:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setOutstandingMaintenance:(NSMutableArray *)arg1 ;
-(void)fetchAllCompletedBundleIDsForIndexerTask:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithQueue:(id)arg1 protectionClass:(id)arg2 cancelPtr:(int*)arg3 ;
-(void)deleteItemsForQuery:(id)arg1 bundleID:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)coolDown:(id)arg1 ;
-(BOOL)reindexAllStarted;
-(void)readyIndex:(BOOL)arg1 ;
-(NSObject*<OS_os_transaction>)dirtyTransaction;
-(SIResultQueueRef)resultQueue;
-(void)fixupPathTimeouts;
-(void)fetchLastClientStateForBundleID:(id)arg1 clientStateName:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)startReindexAll;
-(void)clientDidCheckin:(id)arg1 service:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(NSObject*<OS_dispatch_queue>)indexQueue;
-(void)scheduleMaintenance:(/*^block*/id)arg1 description:(id)arg2 forDarkWake:(BOOL)arg3 ;
-(void)resumeIndex;
-(void)_scheduleStringsCleanupForBundleID:(id)arg1 ;
-(void)addClients:(id)arg1 ;
-(void)performIndexerTask:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)issueConsistencyCheck;
-(NSMapTable *)checkedInClients;
-(void)_setClientState:(id)arg1 clientStateName:(id)arg2 forBundleID:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)zombifyAllContactItems:(id)arg1 ;
-(void)suspendIndexForDeviceLock;
-(void)_deleteSearchableItemsMatchingQuery:(id)arg1 forBundleIds:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)issueDuplicateOidCheck;
-(void)changeStateOfSearchableItemsWithUIDs:(id)arg1 toState:(long long)arg2 forBundleID:(id)arg3 ;
-(void)finishReindexAll;
-(void)issueDumpReverse:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)cleanupStringsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)deleteSearchableItemsWithPersonaIds:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)indexFromBundle:(id)arg1 personaID:(id)arg2 options:(long long)arg3 items:(id)arg4 itemsText:(id)arg5 clientState:(id)arg6 clientStateName:(id)arg7 deletes:(id)arg8 completionHandler:(/*^block*/id)arg9 ;
-(void)setDirtyTransaction:(NSObject*<OS_os_transaction>)arg1 ;
-(void)_saveCorruptIndexWithPath:(id)arg1 ;
-(void)setResultQueue:(SIResultQueueRef)arg1 ;
-(void)cleanupStringsWithActivity:(id)arg1 group:(id)arg2 shouldDefer:(BOOL*)arg3 flags:(int)arg4 ;
-(void)setIndexQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)issueSplit;
-(void)setOwner:(SPCoreSpotlightIndexer *)arg1 ;
-(BOOL)_startInternalQueryWithIndex:(SIRef)arg1 query:(id)arg2 fetchAttributes:(id)arg3 forBundleIds:(id)arg4 resultsHandler:(/*^block*/id)arg5 ;
-(void)dumpAllRankingDiagnosticInformationForQuery:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)revokeExpiredItems:(id)arg1 ;
-(void)issueDefrag:(id)arg1 ;
-(void)_fetchAccumulatedStorageSizeForBundleId:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_startQueryWithQueryTask:(id)arg1 eventHandler:(/*^block*/id)arg2 resultsHandler:(/*^block*/id)arg3 ;
-(void)_addNewClientWithBundleID:(id)arg1 ;
-(void)performQueryForCountOfItemsInCategory:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)removeExpiredItemsForBundleId:(id)arg1 group:(id)arg2 ;
-(id)_cancelIdleTimer;
-(void)fetchAttributes:(id)arg1 bundleID:(id)arg2 identifiers:(id)arg3 includeParents:(BOOL)arg4 completionHandler:(/*^block*/id)arg5 ;
-(id)getPropertyForKey:(id)arg1 ;
-(void)deleteAllInteractionsWithBundleID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)mergeWithGroup:(id)arg1 ;
-(void)commitUpdates:(id)arg1 ;
-(int)openIndex:(BOOL)arg1 shouldReindexAll:(BOOL)arg2 ;
-(void)checkInWithBundleID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)powerStateChanged;
-(void)ensureOpenIndexFiles;
-(id)_indexPath;
-(void)indexFinishedDrainingJournal;
-(void)deleteActionsWithIdentifiers:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)issueRepair;
-(NSObject*<OS_dispatch_source>)indexIdleTimer;
-(void)willModifySearchableItemsWithIdentifiers:(id)arg1 forBundleID:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)indexSearchableItems:(id)arg1 deleteSearchableItemsWithIdentifiers:(id)arg2 clientState:(id)arg3 clientStateName:(id)arg4 forBundleID:(id)arg5 options:(long long)arg6 completionHandler:(/*^block*/id)arg7 ;
-(void)deleteActionsBeforeTime:(double)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)deleteItemsForEnumerator:(id)arg1 traceID:(long long)arg2 bundleID:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(int)openIndex:(BOOL)arg1 ;
-(void)_backgroundDeleteItems:(id)arg1 bundleID:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)closeIndex;
-(void)setFirstUnlockQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)addCompletedBundleIDs:(id)arg1 forIndexerTask:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)firstUnlockQueue;
-(void)_expireCorruptIndexFilesWithPath:(id)arg1 keepLatest:(BOOL)arg2 ;
-(void)fetchAttributes:(id)arg1 bundleID:(id)arg2 identifiers:(id)arg3 includeParents:(BOOL)arg4 completion:(/*^block*/id)arg5 ;
-(void)_appendRervseInfo:(id)arg1 dictionary:(id)arg2 key:(id)arg3 level:(unsigned long long)arg4 ;
-(void)indexFinishedDrainingJournal:(id)arg1 ;
-(double)idleStartTime;
-(void)setProperty:(id)arg1 forKey:(id)arg2 sync:(BOOL)arg3 ;
-(NSMutableArray *)outstandingMaintenance;
-(void)dealloc;
-(void)deleteAllSearchableItemsForBundleID:(id)arg1 shouldGC:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)attributesForBundleId:(id)arg1 identifier:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

