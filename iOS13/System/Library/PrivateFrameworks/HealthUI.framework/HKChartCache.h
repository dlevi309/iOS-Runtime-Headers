/*
* Generated on Monday, March 1, 2021 at 2:34:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/


@protocol HKChartCacheDataSource;
@class NSHashTable, NSMutableDictionary, _HKChartCachePendingFetchOperationManager, NSArray, HKOutstandingFetchOperationManager;

@interface HKChartCache : NSObject {

	NSHashTable* _observers;
	NSMutableDictionary* _cachedResultsByIdentifier;
	_HKChartCachePendingFetchOperationManager* _pendingFetchOperationsManager;
	NSMutableDictionary* _resultsLoadedByIdentifier;
	NSArray* _bufferedIdentifiers;
	BOOL _shouldBufferFetchOperations;
	id<HKChartCacheDataSource> _dataSource;
	HKOutstandingFetchOperationManager* _operationManager;
	long long _maxRetryCount;

}

@property (nonatomic,retain) id<HKChartCacheDataSource> dataSource;                              //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,readonly) id dataSourceRespectingType; 
@property (nonatomic,retain) HKOutstandingFetchOperationManager * operationManager;              //@synthesize operationManager=_operationManager - In the implementation block
@property (assign,nonatomic) BOOL shouldBufferFetchOperations;                                   //@synthesize shouldBufferFetchOperations=_shouldBufferFetchOperations - In the implementation block
@property (assign,nonatomic) long long maxRetryCount;                                            //@synthesize maxRetryCount=_maxRetryCount - In the implementation block
-(id)init;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)invalidateCache;
-(id<HKChartCacheDataSource>)dataSource;
-(void)setDataSource:(id<HKChartCacheDataSource>)arg1 ;
-(void)setMaxRetryCount:(long long)arg1 ;
-(long long)maxRetryCount;
-(void)setOperationManager:(HKOutstandingFetchOperationManager *)arg1 ;
-(HKOutstandingFetchOperationManager *)operationManager;
-(id)cachedResultsForIdentifier:(id)arg1 ;
-(id)dataSourceRespectingType;
-(void)fetchResultsForIdentifiers:(id)arg1 ;
-(unsigned long long)stateForIdentifier:(id)arg1 ;
-(void)setShouldBufferFetchOperations:(BOOL)arg1 ;
-(void)invalidateResultsForIdentifiers:(id)arg1 ;
-(void)_addFetchOperationsForIdentifiers:(id)arg1 ;
-(id)_operationForIdentifier:(id)arg1 ;
-(void)_alertObserversDidUpdateResults;
-(void)_handleOperationCompletionWithOperation:(id)arg1 identifier:(id)arg2 results:(id)arg3 error:(id)arg4 ;
-(void)_removeFetchOperationsForIdentifiers:(id)arg1 ;
-(BOOL)shouldBufferFetchOperations;
@end

