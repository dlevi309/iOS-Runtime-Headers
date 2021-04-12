/*
* Generated on Monday, March 1, 2021 at 2:34:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@protocol OS_dispatch_source, OS_dispatch_queue;
@class NSString, NSObject;

@interface HDFitnessMachineStateTimer : NSObject {

	NSString* _name;
	unsigned long long _duration;
	NSObject*<OS_dispatch_source> _timer;
	/*^block*/id _handler;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,readonly) NSString * name;                                  //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) unsigned long long duration;                      //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_source> timer;              //@synthesize timer=_timer - In the implementation block
@property (nonatomic,copy,readonly) id handler;                                  //@synthesize handler=_handler - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;               //@synthesize queue=_queue - In the implementation block
+(id)_timerWithDuration:(long long)arg1 queue:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)dealloc;
-(NSString *)name;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)handler;
-(BOOL)isValid;
-(void)cancel;
-(unsigned long long)duration;
-(NSObject*<OS_dispatch_source>)timer;
-(void)begin;
-(id)initWithName:(id)arg1 duration:(unsigned long long)arg2 queue:(id)arg3 handler:(/*^block*/id)arg4 ;
@end

