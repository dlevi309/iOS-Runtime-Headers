/*
* Generated on Monday, March 1, 2021 at 2:33:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/


@protocol OS_dispatch_semaphore;
@class NSObject, NSMutableDictionary;

@interface PPXPCServerPipelinedBatchQueryManager : NSObject {

	long long _pipelineDepth;
	unsigned long long _pipelinedCallTimeoutNsec;
	NSObject*<OS_dispatch_semaphore> _concurrentRequestSem;
	NSMutableDictionary* _queryReplyThrottleSemaphores;
	AB _isInterrupted;

}
-(void)unblockPendingQueries;
-(id)initWithPipelineDepth:(long long)arg1 pipelinedCallTimeoutNsec:(unsigned long long)arg2 maxConcurrentRequestsPerConnection:(unsigned long long)arg3 ;
-(void)_unblockQueryReplyThrottleSemaphore:(id)arg1 ;
-(void)runConcurrentlyWithRequestThrottle:(/*^block*/id)arg1 ;
-(void)sendBatchedResultForQueryWithName:(id)arg1 queryId:(unsigned long long)arg2 batchGenerator:(/*^block*/id)arg3 sendError:(/*^block*/id)arg4 sendBatch:(/*^block*/id)arg5 ;
@end

