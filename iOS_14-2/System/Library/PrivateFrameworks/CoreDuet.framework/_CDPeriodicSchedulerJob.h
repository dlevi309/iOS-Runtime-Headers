/*
* Generated on Thursday, January 14, 2021 at 2:20:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/


@protocol OS_dispatch_queue, OS_xpc_object;
@class NSString, NSObject;

@interface _CDPeriodicSchedulerJob : NSObject {

	long long _period;
	double _interval;
	NSString* _jobName;
	NSObject*<OS_dispatch_queue> _queue;
	/*^block*/id _handler;
	NSObject*<OS_xpc_object> _executionCriteria;
	BOOL _isHandlerAsynchronous;
	NSObject*<OS_xpc_object> _activity;

}

@property (readonly) NSObject*<OS_dispatch_queue> queue;                      //@synthesize queue=_queue - In the implementation block
@property (readonly) NSObject*<OS_xpc_object> executionCriteria;              //@synthesize executionCriteria=_executionCriteria - In the implementation block
@property (retain) NSObject*<OS_xpc_object> activity;                         //@synthesize activity=_activity - In the implementation block
@property (readonly) long long period;                                        //@synthesize period=_period - In the implementation block
@property (readonly) double interval;                                         //@synthesize interval=_interval - In the implementation block
@property (readonly) NSString * jobName;                                      //@synthesize jobName=_jobName - In the implementation block
@property (readonly) id handler;                                              //@synthesize handler=_handler - In the implementation block
@property (readonly) BOOL isHandlerAsynchronous;                              //@synthesize isHandlerAsynchronous=_isHandlerAsynchronous - In the implementation block
+(id)jobWithInterval:(double)arg1 schedulerJobName:(id)arg2 handler:(/*^block*/id)arg3 ;
+(id)jobWithInterval:(double)arg1 schedulerJobName:(id)arg2 queue:(id)arg3 asynchronousHandler:(BOOL)arg4 handler:(/*^block*/id)arg5 ;
+(id)jobWithPeriod:(long long)arg1 schedulerJobName:(id)arg2 handler:(/*^block*/id)arg3 ;
-(long long)period;
-(id)init;
-(double)interval;
-(NSObject*<OS_xpc_object>)activity;
-(void)setExecutionCriteria:(NSObject*<OS_xpc_object>)arg1 ;
-(id)initWithPeriod:(long long)arg1 interval:(double)arg2 schedulerJobName:(id)arg3 queue:(id)arg4 asynchronousHandler:(BOOL)arg5 handler:(/*^block*/id)arg6 ;
-(BOOL)isHandlerAsynchronous;
-(void)setActivity:(NSObject*<OS_xpc_object>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(NSString *)jobName;
-(id)handler;
-(NSObject*<OS_xpc_object>)executionCriteria;
@end

