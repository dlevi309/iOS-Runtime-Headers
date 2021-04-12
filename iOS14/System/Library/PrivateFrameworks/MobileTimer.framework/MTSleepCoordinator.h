/*
* Generated on Thursday, January 14, 2021 at 2:23:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
*/

#import <libobjc.A.dylib/MTSource.h>
#import <libobjc.A.dylib/MTSleepCoordinatorStateMachineDelegate.h>
#import <libobjc.A.dylib/MTSleepCoordinatorStateMachineInfoProvider.h>
#import <libobjc.A.dylib/MTAlarmObserver.h>
#import <libobjc.A.dylib/MTTimeObserver.h>
#import <libobjc.A.dylib/MTAgentDiagnosticDelegate.h>

@protocol NAScheduler, MTAlarmStorage;
@class MTAlarm, NSDate, MTSleepCoordinatorStateMachine, NAFuture, MTObserverStore, MTXPCScheduler, MTSleepModeMonitor, NSString;

@interface MTSleepCoordinator : NSObject <MTSource, MTSleepCoordinatorStateMachineDelegate, MTSleepCoordinatorStateMachineInfoProvider, MTAlarmObserver, MTTimeObserver, MTAgentDiagnosticDelegate> {

	MTSleepCoordinatorStateMachine* _stateMachine;
	MTAlarm* _cachedSleepAlarm;
	id<NAScheduler> _serializer;
	NAFuture* _sleepStateResolved;
	MTObserverStore* _observers;
	id<MTAlarmStorage> _alarmStorage;
	MTXPCScheduler* _alarmTimeoutScheduler;
	MTSleepModeMonitor* _sleepModeMonitor;
	/*^block*/id _currentDateProvider;

}

@property (nonatomic,retain) MTSleepCoordinatorStateMachine * stateMachine;              //@synthesize stateMachine=_stateMachine - In the implementation block
@property (nonatomic,retain) MTAlarm * cachedSleepAlarm;                                 //@synthesize cachedSleepAlarm=_cachedSleepAlarm - In the implementation block
@property (nonatomic,retain) id<NAScheduler> serializer;                                 //@synthesize serializer=_serializer - In the implementation block
@property (nonatomic,retain) NAFuture * sleepStateResolved;                              //@synthesize sleepStateResolved=_sleepStateResolved - In the implementation block
@property (nonatomic,retain) MTObserverStore * observers;                                //@synthesize observers=_observers - In the implementation block
@property (nonatomic,copy) id<MTAlarmStorage> alarmStorage;                              //@synthesize alarmStorage=_alarmStorage - In the implementation block
@property (nonatomic,retain) MTXPCScheduler * alarmTimeoutScheduler;                     //@synthesize alarmTimeoutScheduler=_alarmTimeoutScheduler - In the implementation block
@property (nonatomic,retain) MTSleepModeMonitor * sleepModeMonitor;                      //@synthesize sleepModeMonitor=_sleepModeMonitor - In the implementation block
@property (nonatomic,copy) id currentDateProvider;                                       //@synthesize currentDateProvider=_currentDateProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) MTAlarm * sleepAlarm; 
@property (nonatomic,readonly) NSDate * currentDate; 
@property (nonatomic,readonly) unsigned long long sleepTimeOutMinutes; 
-(void)setSerializer:(id<NAScheduler>)arg1 ;
-(void)source:(id)arg1 didUpdateAlarms:(id)arg2 ;
-(BOOL)handlesNotification:(id)arg1 ofType:(long long)arg2 ;
-(void)source:(id)arg1 didRemoveAlarms:(id)arg2 ;
-(void)source:(id)arg1 didAddAlarms:(id)arg2 ;
-(void)source:(id)arg1 didSnoozeAlarm:(id)arg2 snoozeAction:(unsigned long long)arg3 ;
-(void)source:(id)arg1 didDismissAlarm:(id)arg2 dismissAction:(unsigned long long)arg3 ;
-(id)gatherDiagnostics;
-(void)source:(id)arg1 didFireAlarm:(id)arg2 triggerType:(unsigned long long)arg3 ;
-(MTAlarm *)sleepAlarm;
-(void)registerObserver:(id)arg1 ;
-(void)printDiagnostics;
-(void)source:(id)arg1 didChangeNextAlarm:(id)arg2 ;
-(void)setCurrentDateProvider:(id)arg1 ;
-(id<MTAlarmStorage>)alarmStorage;
-(MTObserverStore *)observers;
-(NSDate *)currentDate;
-(id<NAScheduler>)serializer;
-(void)setStateMachine:(MTSleepCoordinatorStateMachine *)arg1 ;
-(void)handleNotification:(id)arg1 ofType:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(id)currentDateProvider;
-(void)stateMachineUserWentToBed:(id)arg1 ;
-(id)initWithAlarmStorage:(id)arg1 ;
-(MTSleepModeMonitor *)sleepModeMonitor;
-(void)sleepSessionTracker:(id)arg1 sessionDidComplete:(id)arg2 ;
-(id)initWithAlarmStorage:(id)arg1 currentDateProvider:(/*^block*/id)arg2 ;
-(MTSleepCoordinatorStateMachine *)stateMachine;
-(void)setObservers:(MTObserverStore *)arg1 ;
-(void)updateSleepStateWithSleepAlarm:(id)arg1 ;
-(void)notifyObserversForSleepAlarmChange:(id)arg1 ;
-(void)notifyObserversForSleepAlarmChangeIfNecessary:(id)arg1 ;
-(void)_notifyObserversForSleepAlarmChange:(id)arg1 ;
-(void)handleBedtimeForAlarm:(id)arg1 date:(id)arg2 ;
-(void)handleBedtimeReminderForAlarm:(id)arg1 date:(id)arg2 ;
-(void)handleWakeUpAlarmForAlarm:(id)arg1 date:(id)arg2 ;
-(void)handleWakeUpTimeForAlarm:(id)arg1 date:(id)arg2 ;
-(void)handleSnoozeOfGoToBedNotificationForAlarm:(id)arg1 date:(id)arg2 ;
-(void)handleSnoozeForAlarm:(id)arg1 date:(id)arg2 ;
-(void)handleConfirmationOfGoToBedNotificationForAlarm:(id)arg1 date:(id)arg2 ;
-(void)updateSleepState;
-(void)handleDismissForAlarm:(id)arg1 dismissAction:(unsigned long long)arg2 date:(id)arg3 ;
-(void)handleSleepSessionEndedForAlarm:(id)arg1 date:(id)arg2 reason:(unsigned long long)arg3 ;
-(void)stateMachineUserWokeUp:(id)arg1 ;
-(BOOL)isSleepModeOn;
-(void)pairedDevicePreferencesChanged:(id)arg1 ;
-(MTAlarm *)cachedSleepAlarm;
-(void)setCachedSleepAlarm:(MTAlarm *)arg1 ;
-(NAFuture *)sleepStateResolved;
-(void)setSleepStateResolved:(NAFuture *)arg1 ;
-(MTXPCScheduler *)alarmTimeoutScheduler;
-(void)setAlarmTimeoutScheduler:(MTXPCScheduler *)arg1 ;
-(void)timeListener:(id)arg1 didDetectSignificantTimeChangeWithCompletionBlock:(/*^block*/id)arg2 ;
-(void)setSleepModeMonitor:(MTSleepModeMonitor *)arg1 ;
-(void)stateMachine:(id)arg1 dismissWakeUpAlarm:(id)arg2 dismissAction:(unsigned long long)arg3 ;
-(unsigned long long)sleepTimeOutMinutes;
-(void)stateMachine:(id)arg1 shouldScheduleAlarmTimeoutForSecondsFromNow:(double)arg2 ;
-(BOOL)isUserAsleep;
-(void)setAlarmStorage:(id<MTAlarmStorage>)arg1 ;
-(id)sourceIdentifier;
@end

