/*
* Generated on Thursday, January 14, 2021 at 2:24:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
*/

#import <CloudPhotoLibrary/CPLEngineSyncTask.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString, CPLScopeFilter;

@interface CPLMinglePulledChangesTask : CPLEngineSyncTask {

	NSObject*<OS_dispatch_queue> _lock;
	NSString* _clientCacheIdentifier;
	BOOL _hasPreparedForMingling;
	NSObject*<OS_dispatch_queue> _notifyQueue;
	BOOL _didNotifySchedulerPullQueueIsFullOnce;
	BOOL _needsToNotifySchedulerPullQueueIsFull;
	CPLScopeFilter* _scopeFilter;

}

@property (nonatomic,retain) CPLScopeFilter * scopeFilter;              //@synthesize scopeFilter=_scopeFilter - In the implementation block
+(BOOL)mingleBatch:(id)arg1 forStore:(id)arg2 putBatchesInPullQueue:(BOOL*)arg3 error:(id*)arg4 ;
-(void)launch;
-(void)_launch;
-(id)taskIdentifier;
-(void)cancel;
-(id)initWithEngineLibrary:(id)arg1 session:(id)arg2 ;
-(void)_reallyNotifySchedulerPullQueueIsFull;
-(void)_notifySchedulerPullQueueIsFull;
-(void)_notifySchedulerPullQueueIsFullNowIfNecessary;
-(BOOL)_checkContinueMinglingInTransaction:(id)arg1 ;
-(void)_taskDidFinishWithError:(id)arg1 ;
-(void)_processNextBatch;
-(void)taskDidFinishWithError:(id)arg1 ;
-(CPLScopeFilter *)scopeFilter;
-(void)setScopeFilter:(CPLScopeFilter *)arg1 ;
@end

