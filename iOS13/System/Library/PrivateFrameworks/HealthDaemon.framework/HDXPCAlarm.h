/*
* Generated on Monday, March 1, 2021 at 2:34:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(void)invalidate;
-(NSString *)eventName;
-(id)eventHandler;
-(void)setEventHandler:(id)arg1 ;
-(void)unschedule;
-(HDXPCAlarmScheduler *)scheduler;
-(void)beginReceivingEventsWithHandler:(/*^block*/id)arg1 ;
-(id)initWithDaemon:(id)arg1 eventName:(id)arg2 eventHandlerQueue:(id)arg3 ;
-(id)unitTest_schedulerObserver;
-(NSObject*<OS_dispatch_queue>)eventHandlerQueue;
-(id)initWithProfile:(id)arg1 eventName:(id)arg2 eventHandlerQueue:(id)arg3 ;
-(void)setNextFireDate:(id)arg1 isUserVisible:(BOOL)arg2 ;
-(void)eventDidFire:(id)arg1 ;
-(void)unitTest_fireEventImmediatelyWithDate:(id)arg1 isUserVisible:(BOOL)arg2 ;
-(void)setUnitTest_schedulerObserver:(id)arg1 ;
@end

