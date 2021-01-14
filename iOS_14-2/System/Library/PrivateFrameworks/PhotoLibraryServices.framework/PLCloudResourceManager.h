/*
* Generated on Thursday, January 14, 2021 at 2:22:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@protocol OS_dispatch_queue;
@class NSObject, PLCloudResourcePrefetchManager, PLCloudResourcePruneManager, NSDate;

@interface PLCloudResourceManager : NSObject {

	NSObject*<OS_dispatch_queue> _workQueue;
	PLCloudResourcePrefetchManager* _prefetchManager;
	PLCloudResourcePruneManager* _pruneManager;
	NSDate* _lastOperationDate;
	BOOL _enqueuedOperation;

}
-(id)init;
-(void)stop;
-(double)_minimumIntervalBetweenOperations;
-(id)statusForDebug:(BOOL)arg1 ;
-(void)_runOnWorkQueueWithTransaction:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)startAutomaticPrefetchAndPruneWithTimeout:(BOOL)arg1 ;
-(void)updateCacheDeletePurgeableAmount;
-(void)handleOptimizeModeChange;
-(id)initWithCPLManager:(id)arg1 library:(id)arg2 ;
-(void)clearPrefetchState;
-(void)invalidate;
@end

