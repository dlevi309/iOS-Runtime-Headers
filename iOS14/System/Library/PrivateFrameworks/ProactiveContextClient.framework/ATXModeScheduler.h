/*
* Generated on Thursday, January 14, 2021 at 2:28:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveContextClient.framework/ProactiveContextClient
*/


@protocol OS_dispatch_source, OS_dispatch_queue;
@class NSObject, NSDate;

@interface ATXModeScheduler : NSObject {

	NSObject*<OS_dispatch_source> _timer;
	NSObject*<OS_dispatch_queue> _queue;
	/*^block*/id _block;
	double _leewaySeconds;
	NSDate* _scheduledDate;

}
-(id)init;
-(void)cancelPendingOperation;
-(id)initWithQueue:(id)arg1 operationBlock:(/*^block*/id)arg2 andLeeway:(double)arg3 ;
-(id)runAfterDelaySecondsIfNotYetScheduled:(double)arg1 ;
@end

