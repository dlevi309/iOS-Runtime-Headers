/*
* Generated on Thursday, January 14, 2021 at 2:25:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@protocol OS_dispatch_queue;
#import <HealthDaemon/HealthDaemon-Structs.h>
@class NSString, HDXPCAlarmScheduler, NSObject;

@interface HDXPCAlarm : NSObject {

	os_unfair_lock_s _lock;
	NSString* _eventName;
	HDXPCAlarmScheduler* _scheduler;
	NSObject*<OS_dispatch_queue> _eventHandlerQueue;
	/*^block*/id _eventHandler;
	/*^block*/id _unitTest_schedulerObserver;

}

@property (nonatomic,readonly) HDXPCAlarmScheduler * scheduler;                             //@synthesize scheduler=_scheduler - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> eventHandlerQueue;              //@synthesize eventHandlerQueue=_eventHandlerQueue - In the implementation block
@property (nonatomic,copy) id eventHandler;                                                 //@synthesize eventHandler=_eventHandler - In the implementation block
@property (nonatomic,copy) id unitTest_schedulerObserver;                                   //@synthesize unitTest_schedulerObserver=_unitTest_schedulerObserver - In the implementation block
@property (nonatomic,copy,readonly) NSString * eventName;                                   //@synthesize eventName=_eventName - In the implementation block
-(id)eventHandler;
-(void)setEventHandler:(id)arg1 ;
-(NSString *)eventName;
-(void)eventDidFire:(id)arg1 ;
-(id)description;
-(id)unitTest_schedulerObserver;
-(void)setUnitTest_schedulerObserver:(id)arg1 ;
-(void)setNextFireDate:(id)arg1 isUserVisible:(BOOL)arg2 ;
-(void)beginReceivingEventsWithHandler:(/*^block*/id)arg1 ;
-(id)initWithDaemon:(id)arg1 eventName:(id)arg2 eventHandlerQueue:(id)arg3 ;
-(void)invalidate;
-(void)unitTest_fireEventImmediatelyWithDate:(id)arg1 isUserVisible:(BOOL)arg2 ;
-(void)unschedule;
-(NSObject*<OS_dispatch_queue>)eventHandlerQueue;
-(id)initWithProfile:(id)arg1 eventName:(id)arg2 eventHandlerQueue:(id)arg3 ;
-(HDXPCAlarmScheduler *)scheduler;
@end

