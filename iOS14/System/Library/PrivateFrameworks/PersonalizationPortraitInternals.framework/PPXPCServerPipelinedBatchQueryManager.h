/*
* Generated on Thursday, January 14, 2021 at 2:25:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)sendBatchedResultForQueryWithName:(id)arg1 queryId:(unsigned long long)arg2 batchGenerator:(/*^block*/id)arg3 sendError:(/*^block*/id)arg4 sendBatch:(/*^block*/id)arg5 ;
-(id)initWithPipelineDepth:(long long)arg1 pipelinedCallTimeoutNsec:(unsigned long long)arg2 maxConcurrentRequestsPerConnection:(unsigned long long)arg3 ;
-(void)runConcurrentlyWithRequestThrottle:(/*^block*/id)arg1 ;
-(void)_unblockQueryReplyThrottleSemaphore:(id)arg1 ;
@end

