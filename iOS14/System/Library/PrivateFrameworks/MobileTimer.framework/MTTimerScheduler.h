/*
* Generated on Thursday, January 14, 2021 at 2:23:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
*/

#import <libobjc.A.dylib/MTTimerObserver.h>
#import <libobjc.A.dylib/MTScheduledListDelegate.h>
#import <libobjc.A.dylib/MTAgentDiagnosticDelegate.h>
#import <libobjc.A.dylib/MTAgentNotificationListener.h>

@protocol MTTimerSchedulerDelegate, MTTimerStorage, MTNotificationCenter, NAScheduler, MTSchedulingDelegate, MTTaskScheduler, MTPersistence;
@class MTScheduledList, NSString;

@interface MTTimerScheduler : NSObject <MTTimerObserver, MTScheduledListDelegate, MTAgentDiagnosticDelegate, MTAgentNotificationListener> {

	id<MTTimerSchedulerDelegate> _delegate;
	id<MTTimerStorage> _storage;
	id<MTNotificationCenter> _notificationCenter;
	MTScheduledList* _scheduledTimers;
	id<NAScheduler> _serializer;
	/*^block*/id _currentDateProvider;
	id<MTSchedulingDelegate> _schedulingDelegate;
	id<MTTaskScheduler> _taskScheduler;
	id<MTPersistence> _defaults;

}

@property (nonatomic,retain) id<MTTimerStorage> storage;                                 //@synthesize storage=_storage - In the implementation block
@property (nonatomic,retain) id<MTNotificationCenter> notificationCenter;                //@synthesize notificationCenter=_notificationCenter - In the implementation block
@property (nonatomic,readonly) MTScheduledList * scheduledTimers;                        //@synthesize scheduledTimers=_scheduledTimers - In the implementation block
@property (nonatomic,retain) id<NAScheduler> serializer;                                 //@synthesize serializer=_serializer - In the implementation block
@property (nonatomic,copy,readonly) id currentDateProvider;                              //@synthesize currentDateProvider=_currentDateProvider - In the implementation block
@property (nonatomic,readonly) id<MTSchedulingDelegate> schedulingDelegate;              //@synthesize schedulingDelegate=_schedulingDelegate - In the implementation block
@property (nonatomic,readonly) id<MTTaskScheduler> taskScheduler;                        //@synthesize taskScheduler=_taskScheduler - In the implementation block
@property (nonatomic,retain) id<MTPersistence> defaults;                                 //@synthesize defaults=_defaults - In the implementation block
@property (assign,nonatomic,__weak) id<MTTimerSchedulerDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_intervalToCheckForTimersToFireBeforeDate:(id)arg1 ;
-(void)setSerializer:(id<NAScheduler>)arg1 ;
-(void)setDefaults:(id<MTPersistence>)arg1 ;
-(void)nextTimerDidChange:(id)arg1 ;
-(BOOL)handlesNotification:(id)arg1 ofType:(long long)arg2 ;
-(void)source:(id)arg1 didAddTimers:(id)arg2 ;
-(id<MTTaskScheduler>)taskScheduler;
-(void)source:(id)arg1 didUpdateTimers:(id)arg2 ;
-(void)setStorage:(id<MTTimerStorage>)arg1 ;
-(void)setNotificationCenter:(id<MTNotificationCenter>)arg1 ;
-(id)nextTimer;
-(id<MTPersistence>)defaults;
-(id)gatherDiagnostics;
-(void)printDiagnostics;
-(void)_queue_updatePersistentTimerForNextTimerWithCompletion:(/*^block*/id)arg1 ;
-(void)_fireScheduledTimer:(id)arg1 firedDate:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(id)nextTriggerDate;
-(void)_queue_setLastTimerTriggerDate:(id)arg1 ;
-(id<MTNotificationCenter>)notificationCenter;
-(id<MTTimerSchedulerDelegate>)delegate;
-(id)_queue_lastTimerTriggerDate;
-(id<MTTimerStorage>)storage;
-(id<NAScheduler>)serializer;
-(id)initWithStorage:(id)arg1 notificationCenter:(id)arg2 scheduler:(id)arg3 defaults:(id)arg4 schedulingDelegate:(id)arg5 taskScheduler:(id)arg6 currentDateProvider:(/*^block*/id)arg7 ;
-(void)source:(id)arg1 didFireTimer:(id)arg2 ;
-(void)handleNotification:(id)arg1 ofType:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)source:(id)arg1 didRemoveTimers:(id)arg2 ;
-(id)currentDateProvider;
-(void)_queue_fireTriggeredTimersWithCompletionBlock:(/*^block*/id)arg1 ;
-(MTScheduledList *)scheduledTimers;
-(void)unscheduleTimers:(id)arg1 ;
-(id)_queue_nextTimer;
-(void)_queue_unscheduleTimers:(id)arg1 ;
-(void)_queue_unregisterTimer;
-(void)setDelegate:(id<MTTimerSchedulerDelegate>)arg1 ;
-(void)scheduleTimers:(id)arg1 ;
-(void)scheduledListDidChange:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)rescheduleTimers;
-(void)_queue_triggerDidFireForTimerWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)rescheduleTimersWithCompletion:(/*^block*/id)arg1 ;
-(void)_queue_rescheduleTimersWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithStorage:(id)arg1 notificationCenter:(id)arg2 ;
-(id)initWithStorage:(id)arg1 notificationCenter:(id)arg2 scheduler:(id)arg3 defaults:(id)arg4 ;
-(id<MTSchedulingDelegate>)schedulingDelegate;
-(void)source:(id)arg1 didDismissTimer:(id)arg2 ;
-(id)_queue_nextScheduledTimer;
-(id)sourceIdentifier;
-(void)_queue_scheduleTimers:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
@end

