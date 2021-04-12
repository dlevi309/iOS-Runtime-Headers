/*
* Generated on Monday, March 1, 2021 at 2:32:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
*/

#import <libobjc.A.dylib/MTAlarmObserver.h>
#import <libobjc.A.dylib/MTScheduledListDelegate.h>
#import <libobjc.A.dylib/MTAgentDiagnosticDelegate.h>
#import <libobjc.A.dylib/MTAgentNotificationListener.h>

@protocol MTAlarmScheduleDelegate, MTAlarmStorage, NAScheduler, MTNotificationCenter, MTSchedulingDelegate, MTTaskScheduler, MTPersistence;
@class MTScheduledList, NSString;

@interface MTAlarmScheduler : NSObject <MTAlarmObserver, MTScheduledListDelegate, MTAgentDiagnosticDelegate, MTAgentNotificationListener> {

	id<MTAlarmScheduleDelegate> _delegate;
	id<MTAlarmStorage> _storage;
	MTScheduledList* _scheduledAlarms;
	id<NAScheduler> _serializer;
	id<MTNotificationCenter> _notificationCenter;
	/*^block*/id _currentDateProvider;
	id<MTSchedulingDelegate> _schedulingDelegate;
	id<MTTaskScheduler> _taskScheduler;
	id<MTPersistence> _defaults;

}

@property (nonatomic,readonly) id<MTAlarmStorage> storage;                               //@synthesize storage=_storage - In the implementation block
@property (nonatomic,readonly) MTScheduledList * scheduledAlarms;                        //@synthesize scheduledAlarms=_scheduledAlarms - In the implementation block
@property (nonatomic,readonly) id<NAScheduler> serializer;                               //@synthesize serializer=_serializer - In the implementation block
@property (nonatomic,readonly) id<MTNotificationCenter> notificationCenter;              //@synthesize notificationCenter=_notificationCenter - In the implementation block
@property (nonatomic,copy,readonly) id currentDateProvider;                              //@synthesize currentDateProvider=_currentDateProvider - In the implementation block
@property (nonatomic,readonly) id<MTSchedulingDelegate> schedulingDelegate;              //@synthesize schedulingDelegate=_schedulingDelegate - In the implementation block
@property (nonatomic,readonly) id<MTTaskScheduler> taskScheduler;                        //@synthesize taskScheduler=_taskScheduler - In the implementation block
@property (nonatomic,retain) id<MTPersistence> defaults;                                 //@synthesize defaults=_defaults - In the implementation block
@property (assign,nonatomic,__weak) id<MTAlarmScheduleDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_intervalToCheckForAlarmsToFireBeforeDate:(id)arg1 ;
-(id<MTAlarmStorage>)storage;
-(id<MTAlarmScheduleDelegate>)delegate;
-(void)setDelegate:(id<MTAlarmScheduleDelegate>)arg1 ;
-(id<MTPersistence>)defaults;
-(void)setDefaults:(id<MTPersistence>)arg1 ;
-(id<MTNotificationCenter>)notificationCenter;
-(id)sourceIdentifier;
-(id)nextTriggerDate;
-(id<NAScheduler>)serializer;
-(BOOL)handlesNotification:(id)arg1 ofType:(long long)arg2 ;
-(void)handleNotification:(id)arg1 ofType:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)scheduledListDidChange:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)printDiagnostics;
-(id)gatherDiagnostics;
-(id)currentDateProvider;
-(void)source:(id)arg1 didAddAlarms:(id)arg2 ;
-(void)source:(id)arg1 didUpdateAlarms:(id)arg2 ;
-(void)source:(id)arg1 didRemoveAlarms:(id)arg2 ;
-(void)source:(id)arg1 didSnoozeAlarm:(id)arg2 snoozeAction:(unsigned long long)arg3 ;
-(void)source:(id)arg1 didFireAlarm:(id)arg2 triggerType:(unsigned long long)arg3 ;
-(void)source:(id)arg1 didDismissAlarm:(id)arg2 dismissAction:(unsigned long long)arg3 ;
-(void)source:(id)arg1 didChangeNextAlarm:(id)arg2 ;
-(void)cleanDeliveredNotifications;
-(id)nextAlarm;
-(void)rescheduleAlarmsWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithStorage:(id)arg1 notificationCenter:(id)arg2 scheduler:(id)arg3 defaults:(id)arg4 ;
-(id)initWithStorage:(id)arg1 notificationCenter:(id)arg2 scheduler:(id)arg3 defaults:(id)arg4 schedulingDelegate:(id)arg5 taskScheduler:(id)arg6 currentDateProvider:(/*^block*/id)arg7 ;
-(void)_rescheduleAlarmsWithCompletion:(/*^block*/id)arg1 ;
-(void)_scheduleAlarms:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)_lastAlarmTriggerDate;
-(void)_setLastAlarmTriggerDate:(id)arg1 ;
-(MTScheduledList *)scheduledAlarms;
-(void)_unscheduleAlarms:(id)arg1 ;
-(void)_queue_updateNextAlarmTimerWithCompletion:(/*^block*/id)arg1 ;
-(id)_nextTriggerDateForScheduling;
-(void)_queue_fireTriggeredAlarmsWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)_queue_unregisterTimer;
-(BOOL)_shouldPostNotificationForScheduledAlarm:(id)arg1 ;
-(void)_fireScheduledAlarm:(id)arg1 firedDate:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(id)nextAlarmIncludingBedtimeNotification:(BOOL)arg1 ;
-(id)nextScheduledAlarmIncludingBedtimeNotification:(BOOL)arg1 ;
-(id)nextTriggerDateIncludingBedtimeNotification:(BOOL)arg1 ;
-(id)_nextScheduledAlertIncludingBedtimeNotification:(BOOL)arg1 ;
-(void)scheduleAlarms:(id)arg1 ;
-(void)unscheduleAlarms:(id)arg1 ;
-(void)_queue_triggerDidFireForAlarmWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)initWithStorage:(id)arg1 notificationCenter:(id)arg2 ;
-(id<MTSchedulingDelegate>)schedulingDelegate;
-(id<MTTaskScheduler>)taskScheduler;
@end

