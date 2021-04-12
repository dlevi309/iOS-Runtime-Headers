/*
* Generated on Monday, March 1, 2021 at 2:34:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <libobjc.A.dylib/HDDataObserver.h>
#import <libobjc.A.dylib/HDDatabaseProtectedDataObserver.h>

@protocol OS_dispatch_queue;
@class HDProfile, HDSQLitePredicate, _HKFilter, HDActivitySummaryBuilder, NSMutableDictionary, NSObject, NSString;

@interface HDActivitySummaryQueryHelper : NSObject <HDDataObserver, HDDatabaseProtectedDataObserver> {

	HDProfile* _profile;
	HDSQLitePredicate* _predicate;
	_HKFilter* _filter;
	HDActivitySummaryBuilder* _activitySummaryBuilder;
	BOOL _initialResultsSent;
	BOOL _needsUpdateAfterUnlock;
	BOOL _shouldBatchSummaries;
	NSMutableDictionary* _previousActivityCachesByCacheIndex;
	long long _lastProcessedAnchor;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _clientQueue;
	/*^block*/id _initialResultsHandler;
	/*^block*/id _updateHandler;
	/*^block*/id _batchedInitialResultsHandler;
	/*^block*/id _batchedUpdateHandler;
	long long _enumeratedSummaryCount;

}

@property (setter=_setEnumeratedSummaryCount:) long long enumeratedSummaryCount;              //@synthesize enumeratedSummaryCount=_enumeratedSummaryCount - In the implementation block
@property (nonatomic,copy,readonly) id initialResultsHandler;                                 //@synthesize initialResultsHandler=_initialResultsHandler - In the implementation block
@property (nonatomic,copy,readonly) id updateHandler;                                         //@synthesize updateHandler=_updateHandler - In the implementation block
@property (nonatomic,copy,readonly) id batchedInitialResultsHandler;                          //@synthesize batchedInitialResultsHandler=_batchedInitialResultsHandler - In the implementation block
@property (nonatomic,copy,readonly) id batchedUpdateHandler;                                  //@synthesize batchedUpdateHandler=_batchedUpdateHandler - In the implementation block
@property (assign) BOOL shouldIncludePrivateProperties; 
@property (assign) BOOL shouldIncludeStatistics; 
@property (assign,nonatomic) BOOL orderByDateAscending; 
@property (assign,nonatomic) unsigned long long limit; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)pause;
-(void)stop;
-(void)start;
-(unsigned long long)limit;
-(void)setLimit:(unsigned long long)arg1 ;
-(id)updateHandler;
-(BOOL)orderByDateAscending;
-(void)setOrderByDateAscending:(BOOL)arg1 ;
-(id)initialResultsHandler;
-(BOOL)_shouldStopProcessing;
-(void)samplesAdded:(id)arg1 anchor:(id)arg2 ;
-(void)database:(id)arg1 protectedDataDidBecomeAvailable:(BOOL)arg2 ;
-(void)_queue_start;
-(void)_queue_stop;
-(void)setShouldIncludePrivateProperties:(BOOL)arg1 ;
-(id)initWithProfile:(id)arg1 filter:(id)arg2 initialResultsHandler:(/*^block*/id)arg3 updateHandler:(/*^block*/id)arg4 ;
-(void)setShouldIncludeStatistics:(BOOL)arg1 ;
-(void)_queue_deliverUpdates;
-(BOOL)shouldIncludePrivateProperties;
-(BOOL)shouldIncludeStatistics;
-(long long)enumeratedSummaryCount;
-(void)_queue_deliverErrorToClient:(id)arg1 ;
-(void)_queue_deliverActivitySummariesToClient:(id)arg1 isFinalBatch:(BOOL)arg2 clearPendingBatches:(BOOL)arg3 ;
-(id)initWithProfile:(id)arg1 filter:(id)arg2 batchedInitialResultsHandler:(/*^block*/id)arg3 batchedUpdateHandler:(/*^block*/id)arg4 ;
-(void)_queue_deliverInitialResults;
-(id)_fetchActivityCacheIndicesWithAnchor:(long long)arg1 predicate:(id)arg2 error:(id*)arg3 ;
-(void)_queue_deliverActivitySummariesMatchingPredicate:(id)arg1 ;
-(void)_queue_updatePreviousActivityCachesWithNewCaches:(id)arg1 ;
-(void)_setEnumeratedSummaryCount:(long long)arg1 ;
-(id)_queue_addActivityCacheToCachedSamples:(id)arg1 ;
-(id)_queue_filterActivityCaches:(id)arg1 ;
-(void)_queue_updateActivitySummariesWithNewActivityCaches:(id)arg1 anchor:(id)arg2 ;
-(id)batchedInitialResultsHandler;
-(id)batchedUpdateHandler;
@end

