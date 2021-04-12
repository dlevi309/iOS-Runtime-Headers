/*
* Generated on Thursday, January 14, 2021 at 2:23:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
*/

#import <libobjc.A.dylib/DNDModeAssertionUpdateListener.h>
#import <libobjc.A.dylib/MTSleepModeStateMachineInfoProvider.h>
#import <libobjc.A.dylib/MTSleepModeStateMachineDelegate.h>
#import <libobjc.A.dylib/MTSleepObserver.h>
#import <libobjc.A.dylib/MTTimeObserver.h>
#import <libobjc.A.dylib/MTAgentDiagnosticDelegate.h>

@protocol MTAlarmStorage, NAScheduler;
@class MTAlarm, NSDate, MTSleepCoordinator, MTSleepModeStateMachine, DNDModeAssertionService, NSString;

@interface MTSleepModeMonitor : NSObject <DNDModeAssertionUpdateListener, MTSleepModeStateMachineInfoProvider, MTSleepModeStateMachineDelegate, MTSleepObserver, MTTimeObserver, MTAgentDiagnosticDelegate> {

	id<MTAlarmStorage> _alarmStorage;
	MTSleepCoordinator* _sleepCoordinator;
	/*^block*/id _currentDateProvider;
	MTSleepModeStateMachine* _stateMachine;
	DNDModeAssertionService* _assertionService;
	id<NAScheduler> _serializer;

}

@property (nonatomic,retain) id<MTAlarmStorage> alarmStorage;                           //@synthesize alarmStorage=_alarmStorage - In the implementation block
@property (assign,nonatomic,__weak) MTSleepCoordinator * sleepCoordinator;              //@synthesize sleepCoordinator=_sleepCoordinator - In the implementation block
@property (nonatomic,copy) id currentDateProvider;                                      //@synthesize currentDateProvider=_currentDateProvider - In the implementation block
@property (nonatomic,retain) MTSleepModeStateMachine * stateMachine;                    //@synthesize stateMachine=_stateMachine - In the implementation block
@property (nonatomic,retain) DNDModeAssertionService * assertionService;                //@synthesize assertionService=_assertionService - In the implementation block
@property (nonatomic,retain) id<NAScheduler> serializer;                                //@synthesize serializer=_serializer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) MTAlarm * sleepAlarm; 
@property (nonatomic,readonly) NSDate * currentDate; 
@property (nonatomic,readonly) NSDate * keepOffUntilDate; 
@property (nonatomic,readonly) BOOL isUserAsleep; 
-(void)setSerializer:(id<NAScheduler>)arg1 ;
-(id)gatherDiagnostics;
-(MTAlarm *)sleepAlarm;
-(void)printDiagnostics;
-(void)setCurrentDateProvider:(id)arg1 ;
-(NSDate *)keepOffUntilDate;
-(id<MTAlarmStorage>)alarmStorage;
-(NSDate *)currentDate;
-(MTSleepCoordinator *)sleepCoordinator;
-(id<NAScheduler>)serializer;
-(void)setStateMachine:(MTSleepModeStateMachine *)arg1 ;
-(id)currentDateProvider;
-(void)setSleepCoordinator:(MTSleepCoordinator *)arg1 ;
-(MTSleepModeStateMachine *)stateMachine;
-(void)timeListener:(id)arg1 didDetectSignificantTimeChangeWithCompletionBlock:(/*^block*/id)arg2 ;
-(BOOL)isEnabled;
-(BOOL)stateMachine:(id)arg1 disengageSleepModeUserRequested:(BOOL)arg2 ;
-(BOOL)isUserAsleep;
-(void)stateMachine:(id)arg1 keepSleepModeOffUntilDate:(id)arg2 ;
-(id)initWithAlarmStorage:(id)arg1 sleepCoordinator:(id)arg2 currentDateProvider:(/*^block*/id)arg3 ;
-(BOOL)isSleepModeEnabled:(BOOL*)arg1 error:(id*)arg2 ;
-(unsigned long long)sleepModeTimeoutMinutes;
-(void)setAlarmStorage:(id<MTAlarmStorage>)arg1 ;
-(DNDModeAssertionService *)assertionService;
-(BOOL)isSleepModeEnabled:(BOOL*)arg1 ;
-(void)userDisengagedSleepModeOnDate:(id)arg1 ;
-(void)updateMonitorState;
-(void)modeAssertionService:(id)arg1 didReceiveModeAssertionInvalidation:(id)arg2 ;
-(BOOL)stateMachine:(id)arg1 engageSleepModeUntilDate:(id)arg2 userEngaged:(BOOL)arg3 ;
-(void)stateMachineClearKeepSleepModeOff:(id)arg1 ;
-(void)stateMachine:(id)arg1 scheduleUpdateForSecondsFromNow:(double)arg2 ;
-(void)sleepCoordinator:(id)arg1 userWentToBed:(id)arg2 sleepAlarm:(id)arg3 ;
-(void)sleepCoordinator:(id)arg1 userWokeUp:(id)arg2 sleepAlarm:(id)arg3 ;
-(void)sleepCoordinator:(id)arg1 bedtimeReminderDidFire:(id)arg2 sleepAlarm:(id)arg3 ;
-(void)sleepCoordinator:(id)arg1 bedtimeReminderWasConfirmed:(id)arg2 sleepAlarm:(id)arg3 ;
-(void)sleepCoordinator:(id)arg1 bedtimeWasReached:(id)arg2 sleepAlarm:(id)arg3 ;
-(void)sleepCoordinator:(id)arg1 wakeUpAlarmDidFire:(id)arg2 sleepAlarm:(id)arg3 ;
-(void)sleepCoordinator:(id)arg1 sleepAlarmDidChange:(id)arg2 ;
-(BOOL)sleepMode:(id*)arg1 ;
-(void)dealloc;
-(void)sleepCoordinator:(id)arg1 wakeUpAlarmWasSnoozed:(id)arg2 sleepAlarm:(id)arg3 ;
-(id)initWithAlarmStorage:(id)arg1 sleepCoordinator:(id)arg2 ;
-(void)userDisengagedSleepMode;
-(void)setAssertionService:(DNDModeAssertionService *)arg1 ;
@end

