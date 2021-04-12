/*
* Generated on Thursday, January 14, 2021 at 2:27:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/KeyboardServices.framework/KeyboardServices
*/


@protocol OS_dispatch_queue, OS_xpc_object;
@class NSString, NSObject;

@interface _KSSystemTask : NSObject {

	unsigned long long _periodSeconds;
	NSString* _name;
	/*^block*/id _handler;
	double _maxRunTime;
	double _checkInTime;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_xpc_object> _executionCriteria;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                      //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_xpc_object> executionCriteria;              //@synthesize executionCriteria=_executionCriteria - In the implementation block
@property (nonatomic,readonly) unsigned long long periodSeconds;                        //@synthesize periodSeconds=_periodSeconds - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                                    //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) id handler;                                              //@synthesize handler=_handler - In the implementation block
@property (assign,nonatomic) double maxRunTime;                                         //@synthesize maxRunTime=_maxRunTime - In the implementation block
@property (assign,nonatomic) double checkInTime;                                        //@synthesize checkInTime=_checkInTime - In the implementation block
-(id)initWithName:(id)arg1 delay:(unsigned long long)arg2 handler:(/*^block*/id)arg3 ;
-(unsigned long long)periodSeconds;
-(void)setCheckInTime:(double)arg1 ;
-(id)init;
-(double)maxRunTime;
-(NSString *)name;
-(double)checkInTime;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)initWithName:(id)arg1 isPeriodic:(BOOL)arg2 period:(unsigned long long)arg3 handler:(/*^block*/id)arg4 ;
-(void)setMaxRunTime:(double)arg1 ;
-(id)handler;
-(NSObject*<OS_xpc_object>)executionCriteria;
@end

