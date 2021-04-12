/*
* Generated on Thursday, January 14, 2021 at 2:25:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <libobjc.A.dylib/HDDiagnosticObject.h>

@protocol OS_dispatch_queue;
@class NSMapTable, NSMutableSet, NSObject, NSString;

@interface HDXPCAlarmScheduler : NSObject <HDDiagnosticObject> {

	NSMapTable* _alarms;
	NSMutableSet* _pendingEvents;
	NSObject*<OS_dispatch_queue> _queue;
	/*^block*/id _unitTest_schedulerObserver;

}

@property (nonatomic,copy) id unitTest_schedulerObserver;              //@synthesize unitTest_schedulerObserver=_unitTest_schedulerObserver - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)removeAlarm:(id)arg1 ;
-(void)addAlarm:(id)arg1 ;
-(id)init;
-(void)unittest_fireEvent:(id)arg1 ;
-(void)_queue_handleEvent:(id)arg1 ;
-(void)_queue_scheduleEvent:(id)arg1 ;
-(id)diagnosticDescription;
-(id)unitTest_schedulerObserver;
-(void)setUnitTest_schedulerObserver:(id)arg1 ;
-(void)_queue_handleXPCEvent:(id)arg1 ;
-(void)scheduleEvent:(id)arg1 ;
-(void)_queue_notifyAlarmsOfPendingEvents;
-(void)unscheduleEventWithName:(id)arg1 ;
-(void)_queue_unscheduleEventWithName:(id)arg1 ;
@end

