/*
* Generated on Monday, March 1, 2021 at 2:35:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/


@protocol OS_dispatch_queue;
@class NSObject, NUJobQueue, NSMutableSet, NUScheduledQueue;

@interface NUScheduler : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NUJobQueue* _prepareQueue;
	NUJobQueue* _renderQueue;
	NUJobQueue* _completeQueue;
	NSMutableSet* _scheduledContextWakeups;
	NUScheduledQueue* _rateLimiterQueue;

}
+(id)sharedScheduler;
-(id)init;
-(id)debugDescription;
-(void)submitRequests:(id)arg1 withGroup:(id)arg2 ;
-(id)_queueForStage:(long long)arg1 ;
-(void)_enqueueJobsForRequests:(id)arg1 withGroup:(id)arg2 ;
-(void)_wakeupRateLimitJobForContext:(id)arg1 ;
-(void)_scheduleRateLimitWakeupForContext:(id)arg1 ;
-(void)_observeRenderJob:(id)arg1 withGroup:(id)arg2 ;
-(void)_enqueueDependentJobsForRenderJob:(id)arg1 ;
-(void)_resumeRenderJob:(id)arg1 ;
-(void)_enqueueRenderJob:(id)arg1 toStage:(long long)arg2 ;
-(void)cancelJobsForRenderContext:(id)arg1 ;
-(BOOL)_prepareNewJob:(id)arg1 at:(unsigned long long)arg2 ;
-(BOOL)_coalesceJobs:(id)arg1 ;
@end

