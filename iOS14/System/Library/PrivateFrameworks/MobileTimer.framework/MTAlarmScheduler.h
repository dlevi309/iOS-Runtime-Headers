/*
* Generated on Thursday, January 14, 2021 at 2:23:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)source:(id)arg1 didUpdateAlarms:(id)arg2 ;
-(void)setDefaults:(id<MTPersistence>)arg1 ;
-(BOOL)handlesNotification:(id)arg1 ofType:(long long)arg2 ;
-(void)source:(id)arg1 didRemoveAlarms:(id)arg2 ;
-(id<MTTaskScheduler>)taskScheduler;
-(id<MTPersistence>)defaults;
-(void)source:(id)arg1 didAddAlarms:(id)arg2 ;
-(void)source:(id)arg1 didSnoozeAlarm:(id)arg2 snoozeAction:(unsigned long long)arg3 ;
-(void)source:(id)arg1 didDismissAlarm:(id)arg2 dismissAction:(unsigned long long)arg3 ;
-(id)gatherDiagnostics;
-(void)source:(id)arg1 didFireAlarm:(id)arg2 triggerType:(unsigned long long)arg3 ;
-(id)nextAlarm;
-(void)printDiagnostics;
-(void)source:(id)arg1 didChangeNextAlarm:(id)arg2 ;
-(id)nextTriggerDate;
-(id<MTNotificationCenter>)notificationCenter;
-(id)_lastAlarmTriggerDate;
-(id<MTAlarmScheduleDelegate>)delegate;
-(id<MTAlarmStorage>)storage;
-(id)_nextTriggerDateForScheduling;
-(id<NAScheduler>)serializer;
-(void)_rescheduleAlarmsWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithStorage:(id)arg1 notificationCenter:(id)arg2 scheduler:(id)arg3 defaults:(id)arg4 schedulingDelegate:(id)arg5 taskScheduler:(id)arg6 currentDateProvider:(/*^block*/id)arg7 ;
-(void)_queue_triggerDidFireForAlarmWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)_unscheduleAlarms:(id)arg1 ;
-(void)handleNotification:(id)arg1 ofType:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)cleanDeliveredNotifications;
-(BOOL)_shouldPostNotificationForScheduledAlarm:(id)arg1 ;
-(id)currentDateProvider;
-(id)_nextScheduledAlertIncludingBedtimeNotification:(BOOL)arg1 ;
-(void)_queue_unregisterTimer;
-(void)setDelegate:(id<MTAlarmScheduleDelegate>)arg1 ;
-(void)_fireScheduledAlarm:(id)arg1 firedDate:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)scheduledListDidChange:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(MTScheduledList *)scheduledAlarms;
-(void)_setLastAlarmTriggerDate:(id)arg1 ;
-(void)rescheduleAlarmsWithCompletion:(/*^block*/id)arg1 ;
-(void)_scheduleAlarms:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)nextScheduledAlarmIncludingBedtimeNotification:(BOOL)arg1 ;
-(void)unscheduleAlarms:(id)arg1 ;
-(id)initWithStorage:(id)arg1 notificationCenter:(id)arg2 ;
-(void)scheduleAlarms:(id)arg1 ;
-(id)nextTriggerDateIncludingBedtimeNotification:(BOOL)arg1 ;
-(id)initWithStorage:(id)arg1 notificationCenter:(id)arg2 scheduler:(id)arg3 defaults:(id)arg4 ;
-(id<MTSchedulingDelegate>)schedulingDelegate;
-(id)nextAlarmIncludingBedtimeNotification:(BOOL)arg1 ;
-(void)_queue_updateNextAlarmTimerWithCompletion:(/*^block*/id)arg1 ;
-(id)_additionalAlarmsToScheduleForAlarms:(id)arg1 ;
-(void)_queue_fireTriggeredAlarmsWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)sourceIdentifier;
@end

