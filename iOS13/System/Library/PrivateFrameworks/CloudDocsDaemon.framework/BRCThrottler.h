/*
* Generated on Monday, March 1, 2021 at 2:34:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class BRCThrottleBase, NSObject;

@interface BRCThrottler : NSObject {

	BRCThrottleBase* _throttle;
	long long _latestRetry;
	unsigned _retryCount;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_source> _source;

}
-(void)cancel;
-(void)resume;
-(void)suspend;
-(void)reset;
-(void)scheduleNextEvent;
-(id)initWithName:(id)arg1 throttleParameters:(id)arg2 queue:(id)arg3 handler:(/*^block*/id)arg4 ;
@end

