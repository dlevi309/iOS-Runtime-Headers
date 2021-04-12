/*
* Generated on Monday, March 1, 2021 at 2:34:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <libobjc.A.dylib/HDDiagnosticObject.h>

@protocol OS_dispatch_queue;
@class NSObject, HDRestorableAlarmScheduler, NSMutableSet, NSString;

@interface HDRestorableAlarm : NSObject <HDDiagnosticObject> {

	os_unfair_lock_s _lock;
	NSObject*<OS_dispatch_queue> _eventHandlerQueue;
	HDRestorableAlarmScheduler* _scheduler;
	/*^block*/id _eventsHandler;
	NSMutableSet* _outstandingEventIdentifiers;
	NSString* _clientIdentifier;

}

@property (nonatomic,copy,readonly) NSString * clientIdentifier;              //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(void)invalidate;
-(id)systemScheduler;
-(NSString *)clientIdentifier;
-(BOOL)removeEvents:(id)arg1 error:(id*)arg2 ;
-(id)diagnosticDescription;
-(id)initWithProfile:(id)arg1 clientIdentifier:(id)arg2 eventHandlerQueue:(id)arg3 ;
-(void)beginReceivingEventsWithHandler:(/*^block*/id)arg1 ;
-(id)allScheduledEventsWithError:(id*)arg1 ;
-(void)checkForDueEventsWithCompletion:(/*^block*/id)arg1 ;
-(id)eventWithIdentifier:(id)arg1 dueDateComponents:(id)arg2 eventOptions:(unsigned long long)arg3 ;
-(BOOL)replaceAllScheduledEventsWithEvents:(id)arg1 error:(id*)arg2 ;
-(BOOL)removeAllEventsWithError:(id*)arg1 ;
-(void)eventsDidFire:(id)arg1 ;
-(BOOL)scheduleEvents:(id)arg1 error:(id*)arg2 ;
-(id)eventWithIdentifier:(id)arg1 dueDate:(id)arg2 eventOptions:(unsigned long long)arg3 ;
@end

