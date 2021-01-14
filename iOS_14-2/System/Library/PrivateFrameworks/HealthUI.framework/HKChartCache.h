/*
* Generated on Thursday, January 14, 2021 at 2:24:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/


@protocol HKChartCacheDataSource, HKChartCachePriorityDelegate;
@class NSHashTable, NSMutableDictionary, _HKChartCachePendingFetchOperationManager, HKOutstandingFetchOperationManager, NSArray;

@interface HKChartCache : NSObject {

	NSHashTable* _observers;
	NSMutableDictionary* _cachedResultsByIdentifier;
	_HKChartCachePendingFetchOperationManager* _pendingFetchOperationsManager;
	NSMutableDictionary* _resultsLoadedByIdentifier;
	BOOL _shouldBufferFetchOperations;
	id<HKChartCacheDataSource> _dataSource;
	HKOutstandingFetchOperationManager* _operationManager;
	long long _maxRetryCount;
	NSArray* _bufferedIdentifiers;
	id<HKChartCachePriorityDelegate> _priorityDelegateForBufferedIdentifiers;

}

@property (nonatomic,retain) NSArray * bufferedIdentifiers;                                                               //@synthesize bufferedIdentifiers=_bufferedIdentifiers - In the implementation block
@property (assign,nonatomic,__weak) id<HKChartCachePriorityDelegate> priorityDelegateForBufferedIdentifiers;              //@synthesize priorityDelegateForBufferedIdentifiers=_priorityDelegateForBufferedIdentifiers - In the implementation block
@property (nonatomic,retain) id<HKChartCacheDataSource> dataSource;                                                       //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,readonly) id dataSourceRespectingType; 
@property (nonatomic,retain) HKOutstandingFetchOperationManager * operationManager;                                       //@synthesize operationManager=_operationManager - In the implementation block
@property (assign,nonatomic) BOOL shouldBufferFetchOperations;                                                            //@synthesize shouldBufferFetchOperations=_shouldBufferFetchOperations - In the implementation block
@property (assign,nonatomic) long long maxRetryCount;                                                                     //@synthesize maxRetryCount=_maxRetryCount - In the implementation block
-(void)invalidateCache;
-(void)addObserver:(id)arg1 ;
-(id)init;
-(void)setMaxRetryCount:(long long)arg1 ;
-(id<HKChartCacheDataSource>)dataSource;
-(long long)maxRetryCount;
-(void)setDataSource:(id<HKChartCacheDataSource>)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)setShouldBufferFetchOperations:(BOOL)arg1 ;
-(void)setOperationManager:(HKOutstandingFetchOperationManager *)arg1 ;
-(void)invalidateResultsForIdentifiers:(id)arg1 ;
-(id)cachedResultsForIdentifier:(id)arg1 ;
-(id)dataSourceRespectingType;
-(void)fetchResultsForIdentifiers:(id)arg1 priorityDelegate:(id)arg2 ;
-(unsigned long long)stateForIdentifier:(id)arg1 ;
-(NSArray *)bufferedIdentifiers;
-(void)setBufferedIdentifiers:(NSArray *)arg1 ;
-(void)setPriorityDelegateForBufferedIdentifiers:(id<HKChartCachePriorityDelegate>)arg1 ;
-(void)_addFetchOperationsForIdentifiers:(id)arg1 priorityDelegate:(id)arg2 ;
-(id)_operationForIdentifier:(id)arg1 priorityDelegate:(id)arg2 ;
-(void)_alertObserversDidUpdateResults;
-(void)_handleOperationCompletionWithOperation:(id)arg1 identifier:(id)arg2 priorityDelegate:(id)arg3 results:(id)arg4 error:(id)arg5 ;
-(void)_removeFetchOperationsForIdentifiers:(id)arg1 ;
-(HKOutstandingFetchOperationManager *)operationManager;
-(BOOL)shouldBufferFetchOperations;
-(id<HKChartCachePriorityDelegate>)priorityDelegateForBufferedIdentifiers;
@end

