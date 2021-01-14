/*
* Generated on Thursday, January 14, 2021 at 2:25:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <libobjc.A.dylib/HDDiagnosticObject.h>

@protocol OS_dispatch_queue;
@class NSObject, HDRestorableAlarmScheduler, NSMutableSet, NSString, HDXPCAlarm;

@interface HDRestorableAlarm : NSObject <HDDiagnosticObject> {

	os_unfair_lock_s _lock;
	NSObject*<OS_dispatch_queue> _eventHandlerQueue;
	HDRestorableAlarmScheduler* _scheduler;
	/*^block*/id _eventsHandler;
	NSMutableSet* _outstandingEventIdentifiers;
	NSString* _clientIdentifier;

}

@property (nonatomic,readonly) HDXPCAlarm * systemScheduler; 
@property (nonatomic,copy,readonly) NSString * clientIdentifier;              //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(HDXPCAlarm *)systemScheduler;
-(BOOL)scheduleEvents:(id)arg1 error:(id*)arg2 ;
-(id)allScheduledEventsWithError:(id*)arg1 ;
-(id)eventWithIdentifier:(id)arg1 dueDate:(id)arg2 eventOptions:(unsigned long long)arg3 ;
-(BOOL)removeEvents:(id)arg1 error:(id*)arg2 ;
-(NSString *)description;
-(void)eventsDidFire:(id)arg1 ;
-(id)diagnosticDescription;
-(id)eventWithIdentifier:(id)arg1 dueDateComponents:(id)arg2 eventOptions:(unsigned long long)arg3 ;
-(BOOL)replaceAllScheduledEventsWithEvents:(id)arg1 error:(id*)arg2 ;
-(void)beginReceivingEventsWithHandler:(/*^block*/id)arg1 ;
-(void)invalidate;
-(NSString *)clientIdentifier;
-(id)initWithProfile:(id)arg1 clientIdentifier:(id)arg2 eventHandlerQueue:(id)arg3 ;
-(BOOL)removeAllEventsWithError:(id*)arg1 ;
-(void)checkForDueEventsWithCompletion:(/*^block*/id)arg1 ;
@end

