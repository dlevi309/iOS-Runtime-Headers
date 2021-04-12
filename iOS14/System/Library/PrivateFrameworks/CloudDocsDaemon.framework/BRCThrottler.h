/*
* Generated on Thursday, January 14, 2021 at 2:26:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)suspend;
-(void)reset;
-(void)cancel;
-(void)resume;
-(void)scheduleNextEvent;
-(id)initWithName:(id)arg1 throttleParameters:(id)arg2 queue:(id)arg3 handler:(/*^block*/id)arg4 ;
@end

