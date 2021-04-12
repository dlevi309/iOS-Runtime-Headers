/*
* Generated on Monday, March 1, 2021 at 2:33:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
*/

#import <EmailDaemon/EmailDaemon-Structs.h>
#import <libobjc.A.dylib/CSSearchableIndexDelegate.h>
#import <libobjc.A.dylib/EDSearchableIndexVerifierDataSource.h>
#import <libobjc.A.dylib/EFLoggable.h>
#import <libobjc.A.dylib/EFSignpostable.h>
#import <libobjc.A.dylib/EDSearchableIndexSchedulable.h>
#import <libobjc.A.dylib/EMSearchableIndexInterface.h>

@protocol OS_dispatch_queue, OS_dispatch_source, OS_os_activity, EFScheduler, EDSearchableIndexDataSource, EDSearchableIndexReasonProvider, EDSearchableIndexSchedulableDelegate;
@class NSString, EFCancelationToken, NSObject, NSMutableSet, NSMutableArray, _EMSearchableIndexPendingRemovals, EFLazyCache, CSSearchableIndex, EFFuture, EFObservable;

@interface EDSearchableIndex : NSObject <CSSearchableIndexDelegate, EDSearchableIndexVerifierDataSource, EFLoggable, EFSignpostable, EDSearchableIndexSchedulable, EMSearchableIndexInterface> {

	NSString* _indexName;
	EFCancelationToken* _cancelationToken;
	NSObject*<OS_dispatch_queue> _stateTransitionQueue;
	NSObject*<OS_dispatch_source> _coalescingTimer;
	long long _resumeCount;
	long long _transaction;
	unsigned long long _throttledIndexingBatchSize;
	unsigned long long _throttledDataSourceBatchSize;
	unsigned long long _currentMaximumBatchSize;
	NSObject*<OS_os_activity> _batchIndexingActivity;
	NSMutableSet* _removedIdentifiers;
	NSMutableArray* _preparingItems;
	NSMutableArray* _pendingItems;
	NSMutableArray* _preprocessingItems;
	NSMutableArray* _processingItems;
	NSMutableSet* _pendingDomainRemovals;
	_EMSearchableIndexPendingRemovals* _pendingIdentifierRemovals;
	NSObject*<OS_dispatch_queue> _indexingQueue;
	NSObject*<OS_dispatch_queue> _dataSourceQueue;
	id<EFScheduler> _preprocessingScheduler;
	os_unfair_lock_s _mainThreadAccessibleIvarLock;
	id<EFScheduler> _indexingBatchScheduler;
	EFLazyCache* _searchResultsCache;
	BOOL _isActive;
	BOOL _needsRefresh;
	BOOL _needsVerification;
	BOOL _coalesceTimerFired;
	BOOL _scheduledProcessing;
	BOOL _scheduledRefresh;
	BOOL _scheduledVerification;
	BOOL _indexImmediately;
	Aq _countOfBlocksAffectingDataSourceAndIndex;
	BOOL _dataSourceIndexingPermitted;
	BOOL _persistenceAvailable;
	BOOL _skipIndexExclusionCheck;
	BOOL _clientStateFetched;
	BOOL _enableSpotlightVerification;
	id<EDSearchableIndexDataSource> _dataSource;
	id<EDSearchableIndexReasonProvider> _reasonProvider;
	id<EDSearchableIndexSchedulableDelegate> _schedulableDelegate;
	CSSearchableIndex* _csIndex;
	NSString* _searchableIndexBundleID;
	double _coalescingDelaySeconds;
	double _dataSourceUpdateTimeLimit;
	EFFuture* _delayDataSourceAssignmentFuture;

}

@property (getter=_transaction,readonly) long long transaction; 
@property (nonatomic,retain) CSSearchableIndex * csIndex;                                                                              //@synthesize csIndex=_csIndex - In the implementation block
@property (nonatomic,copy,readonly) NSString * copyDiagnosticInformation; 
@property (assign,nonatomic) BOOL skipIndexExclusionCheck;                                                                             //@synthesize skipIndexExclusionCheck=_skipIndexExclusionCheck - In the implementation block
@property (assign,nonatomic) BOOL clientStateFetched;                                                                                  //@synthesize clientStateFetched=_clientStateFetched - In the implementation block
@property (assign,nonatomic) BOOL enableSpotlightVerification;                                                                         //@synthesize enableSpotlightVerification=_enableSpotlightVerification - In the implementation block
@property (nonatomic,copy) NSString * searchableIndexBundleID;                                                                         //@synthesize searchableIndexBundleID=_searchableIndexBundleID - In the implementation block
@property (assign,nonatomic) double coalescingDelaySeconds;                                                                            //@synthesize coalescingDelaySeconds=_coalescingDelaySeconds - In the implementation block
@property (assign,nonatomic) double dataSourceUpdateTimeLimit;                                                                         //@synthesize dataSourceUpdateTimeLimit=_dataSourceUpdateTimeLimit - In the implementation block
@property (readonly) long long resumeCount; 
@property (getter=isActive,readonly) BOOL active; 
@property (nonatomic,retain) EFFuture * delayDataSourceAssignmentFuture;                                                               //@synthesize delayDataSourceAssignmentFuture=_delayDataSourceAssignmentFuture - In the implementation block
@property (nonatomic,copy,readonly) NSString * indexName; 
@property (assign,nonatomic,__weak) id<EDSearchableIndexDataSource> dataSource;                                                        //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<EDSearchableIndexReasonProvider> reasonProvider;                                                //@synthesize reasonProvider=_reasonProvider - In the implementation block
@property (assign,nonatomic,__weak) id<EDSearchableIndexSchedulableDelegate> schedulableDelegate;                                      //@synthesize schedulableDelegate=_schedulableDelegate - In the implementation block
@property (nonatomic,readonly) unsigned long long pendingIndexItemsCount; 
@property (getter=isPerformingBlockAffectingDataSourceAndIndex,readonly) BOOL performingBlockAffectingDataSourceAndIndex; 
@property (getter=isPersistenceAvailable) BOOL persistenceAvailable;                                                                   //@synthesize persistenceAvailable=_persistenceAvailable - In the implementation block
@property (nonatomic,readonly) EFObservable * powerObservable; 
@property (getter=isPluggedIn,nonatomic,readonly) BOOL pluggedIn; 
@property (nonatomic,readonly) BOOL shouldCancelSearchQuery; 
@property (nonatomic,readonly) BOOL canIndexAttachments; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) unsigned long long signpostID; 
@property (assign,getter=isDataSourceIndexingPermitted,nonatomic) BOOL dataSourceIndexingPermitted;                                    //@synthesize dataSourceIndexingPermitted=_dataSourceIndexingPermitted - In the implementation block
+(id)log;
+(id)signpostLog;
+(BOOL)isIncrementalIndexingType:(long long)arg1 ;
+(id)_localClientStateURL;
+(id)_localClientState;
+(void)_saveLocalClientState:(id)arg1 ;
+(BOOL)isValidTransaction:(long long)arg1 ;
+(id)userHandle;
-(void)dealloc;
-(void)_suspend;
-(void)_resume;
-(BOOL)isActive;
-(void)resume;
-(long long)_transaction;
-(void)removeAllItems;
-(void)suspend;
-(void)_invalidateCache;
-(id<EDSearchableIndexDataSource>)dataSource;
-(void)setDataSource:(id<EDSearchableIndexDataSource>)arg1 ;
-(void)refresh;
-(unsigned long long)signpostID;
-(void)setForeground:(BOOL)arg1 ;
-(void)applicationWillSuspend;
-(NSString *)indexName;
-(void)searchableIndex:(id)arg1 reindexAllSearchableItemsWithAcknowledgementHandler:(/*^block*/id)arg2 ;
-(void)searchableIndex:(id)arg1 reindexSearchableItemsWithIdentifiers:(id)arg2 acknowledgementHandler:(/*^block*/id)arg3 ;
-(BOOL)isPluggedIn;
-(void)removeItemsWithIdentifiers:(id)arg1 ;
-(NSString *)copyDiagnosticInformation;
-(id)identifiersMatchingCriterion:(id)arg1 ;
-(void)applicationWillResume;
-(unsigned long long)pendingIndexItemsCount;
-(void)indexItems:(id)arg1 ;
-(void)setPersistenceAvailable:(BOOL)arg1 ;
-(void)removeItemsForDomainIdentifier:(id)arg1 ;
-(void)reindexSearchableItemsWithIdentifiers:(id)arg1 acknowledgementHandler:(/*^block*/id)arg2 ;
-(void)reindexAllSearchableItemsWithAcknowledgementHandler:(/*^block*/id)arg1 ;
-(void)scheduleRecurringActivity;
-(EFObservable *)powerObservable;
-(id)initWithName:(id)arg1 dataSource:(id)arg2 reasonProvider:(id)arg3 ;
-(void)indexItems:(id)arg1 immediately:(BOOL)arg2 ;
-(void)indexMessages:(id)arg1 includeBody:(BOOL)arg2 indexingType:(long long)arg3 ;
-(BOOL)canIndexAttachments;
-(void)logPowerEventWithIdentifier:(id)arg1 eventData:(id)arg2 ;
-(BOOL)shouldCancelSearchQuery;
-(void)addSearchQueryCancelable:(id)arg1 ;
-(void)removeSearchQueryCancelable:(id)arg1 ;
-(void)setSearchableIndexBundleID:(NSString *)arg1 ;
-(void)setSchedulableDelegate:(id<EDSearchableIndexSchedulableDelegate>)arg1 ;
-(id)dataSourceRefreshReasons;
-(id)purgeReasons;
-(id)exclusionReasons;
-(id)currentReasons;
-(long long)resumeCount;
-(id)messageIDsMatchingQuery:(id)arg1 ;
-(void)_powerStateChanged;
-(void)_registerDistantFutureSpotlightVerification;
-(NSString *)searchableIndexBundleID;
-(id<EDSearchableIndexSchedulableDelegate>)schedulableDelegate;
-(void)_queueRefresh;
-(void)_queueTransitionActive:(BOOL)arg1 fromRefresh:(BOOL)arg2 ;
-(void)_scheduleSpotlightVerificationOnIndexingQueueWithCompletion:(/*^block*/id)arg1 ;
-(void)_handleFailingTransactionIDs:(id)arg1 sampleCount:(unsigned long long)arg2 ;
-(void)_processSpotlightVerificationWithCompletion:(/*^block*/id)arg1 ;
-(void)_transitionWithBudgetTimeUsed:(double)arg1 ;
-(BOOL)enableSpotlightVerification;
-(void)_verifySpotlightIndex;
-(void)_invalidateItemsInTransactions:(id)arg1 ;
-(CSSearchableIndex *)csIndex;
-(void)_dataSourceInvalidateItemsGreaterThanTransaction:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned long long)_countOfItemsInPendingQueues;
-(id)_eventDataForTransitionState:(id)arg1 ;
-(EFFuture *)delayDataSourceAssignmentFuture;
-(void)_dataSourceScheduleWork:(/*^block*/id)arg1 ;
-(void)_dataSourceAssignTransaction:(long long)arg1 updates:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)isPerformingBlockAffectingDataSourceAndIndex;
-(double)dataSourceUpdateTimeLimit;
-(void)removeItemsWithIdentifiers:(id)arg1 reasons:(id)arg2 fromRefresh:(BOOL)arg3 ;
-(void)indexItems:(id)arg1 fromRefresh:(BOOL)arg2 immediately:(BOOL)arg3 ;
-(BOOL)isDataSourceIndexingPermitted;
-(double)_throttleRequestedSize:(unsigned long long*)arg1 targetTime:(double)arg2 action:(/*^block*/id)arg3 ;
-(void)_queueConsumeBudgetElapsedPeriod:(double)arg1 ;
-(id)_pendingIdentifiers;
-(void)_coalescingTimerFired;
-(void)_fetchLastClientState;
-(void)_stopCoalescingTimer;
-(void)_scheduleProcessPendingItemsFromRefresh:(BOOL)arg1 ;
-(void)_startCoalescingTimer;
-(BOOL)_queueContentsAllowsRefresh;
-(void)_scheduleDataSourceRefresh;
-(void)_scheduleSpotlightVerification;
-(void)_logSignpostForIndexingBatchStartWithPendingItemsCount:(id)arg1 ;
-(id)_consumeBatchOfSize:(unsigned long long)arg1 ;
-(void)_getDomainRemovals:(id*)arg1 identifierRemovals:(id*)arg2 ;
-(long long)_nextTransaction;
-(id)_identifiersStringForItems:(id)arg1 maxLength:(unsigned long long)arg2 ;
-(id)_processDomainRemovals:(id)arg1 ;
-(void)_logSignpostForIndexingBatchAssignedDomainRemovalCount:(unsigned long long)arg1 ;
-(BOOL)_processIndexingBatch:(id)arg1 clientState:(id)arg2 itemsNotIndexed:(id)arg3 ;
-(void)_processIdentifierRemovals:(id)arg1 ;
-(void)_logSignpostForIndexingBatchAssignedUpdatesWithItemsIndexedCount:(unsigned long long)arg1 ;
-(void)_noteNeedsLastClientStateFetch;
-(void)_logSignpostForIndexingBatchCompletedWithItemsIndexedCount:(id)arg1 ;
-(void)_processRefreshRequestWithCompletion:(/*^block*/id)arg1 ;
-(void)beginUpdatesAffectingDataSourceAndIndex;
-(void)endUpdatesAffectingDataSourceAndIndex;
-(id)_identifiersForItems:(id)arg1 ;
-(BOOL)skipIndexExclusionCheck;
-(void)_dataSourceRequestNeededUpdatesExcludingIdentifiers:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_dataSourceVerifyRepresentativeSampleWithCompletion:(/*^block*/id)arg1 ;
-(void)_dataSourceAssignTransaction:(long long)arg1 forIdentifiers:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)reindexAllItemsWithOptions:(unsigned long long)arg1 acknowledgementHandler:(/*^block*/id)arg2 ;
-(void)_indexItems:(id)arg1 fromRefresh:(BOOL)arg2 immediately:(BOOL)arg3 ;
-(void)_dataSourcePrepareToIndexItems:(id)arg1 fromRefresh:(BOOL)arg2 withCompletion:(/*^block*/id)arg3 ;
-(BOOL)_preprocessItemIfNecessary:(id)arg1 fromRefresh:(BOOL)arg2 ;
-(void)_queueConsumeBudgetItemCount:(unsigned long long)arg1 ;
-(void)removeAllItemsWithAcknowledgementHandler:(/*^block*/id)arg1 ;
-(id<EDSearchableIndexReasonProvider>)reasonProvider;
-(id)bundleIdentifierForSearchableIndexVerifier:(id)arg1 ;
-(id)dataSamplesForSearchableIndexVerifier:(id)arg1 searchableIndex:(id)arg2 count:(unsigned long long)arg3 ;
-(id)searchableIndexForSearchableIndexVerifier:(id)arg1 ;
-(void)setDataSourceIndexingPermitted:(BOOL)arg1 ;
-(BOOL)isPersistenceAvailable;
-(void)performBlockAffectingDataSourceAndIndex:(/*^block*/id)arg1 ;
-(id)issueDiagnosticsRequestForMessageRowId:(id)arg1 ;
-(id)indexedEmptySubjectIdentifers;
-(void)removeMessages:(id)arg1 ;
-(void)indexAttachmentsForMessageWithIdentifier:(id)arg1 ;
-(void)markMessagesAsPrinted:(id)arg1 ;
-(void)waitForAsynchronousWork;
-(void)setReasonProvider:(id<EDSearchableIndexReasonProvider>)arg1 ;
-(void)setCsIndex:(CSSearchableIndex *)arg1 ;
-(void)setSkipIndexExclusionCheck:(BOOL)arg1 ;
-(BOOL)clientStateFetched;
-(void)setClientStateFetched:(BOOL)arg1 ;
-(void)setEnableSpotlightVerification:(BOOL)arg1 ;
-(double)coalescingDelaySeconds;
-(void)setCoalescingDelaySeconds:(double)arg1 ;
-(void)setDataSourceUpdateTimeLimit:(double)arg1 ;
-(void)setDelayDataSourceAssignmentFuture:(EFFuture *)arg1 ;
@end

