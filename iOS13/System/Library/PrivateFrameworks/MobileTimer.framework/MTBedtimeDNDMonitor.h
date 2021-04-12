/*
* Generated on Monday, March 1, 2021 at 2:32:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
*/

#import <libobjc.A.dylib/DNDModeAssertionUpdateListener.h>
#import <libobjc.A.dylib/MTBedtimeDNDStateMachineInfoProvider.h>
#import <libobjc.A.dylib/MTBedtimeDNDStateMachineDelegate.h>
#import <libobjc.A.dylib/MTSleepObserver.h>
#import <libobjc.A.dylib/MTTimeObserver.h>
#import <libobjc.A.dylib/MTAgentDiagnosticDelegate.h>

@protocol MTAlarmStorage, NAScheduler;
@class MTAlarm, NSDate, MTSleepCoordinator, MTBedtimeDNDStateMachine, DNDModeAssertionService, NSString;

@interface MTBedtimeDNDMonitor : NSObject <DNDModeAssertionUpdateListener, MTBedtimeDNDStateMachineInfoProvider, MTBedtimeDNDStateMachineDelegate, MTSleepObserver, MTTimeObserver, MTAgentDiagnosticDelegate> {

	id<MTAlarmStorage> _alarmStorage;
	MTSleepCoordinator* _sleepCoordinator;
	/*^block*/id _currentDateProvider;
	MTBedtimeDNDStateMachine* _stateMachine;
	DNDModeAssertionService* _assertionService;
	id<NAScheduler> _serializer;

}

@property (nonatomic,retain) id<MTAlarmStorage> alarmStorage;                           //@synthesize alarmStorage=_alarmStorage - In the implementation block
@property (assign,nonatomic,__weak) MTSleepCoordinator * sleepCoordinator;              //@synthesize sleepCoordinator=_sleepCoordinator - In the implementation block
@property (nonatomic,copy) id currentDateProvider;                                      //@synthesize currentDateProvider=_currentDateProvider - In the implementation block
@property (nonatomic,retain) MTBedtimeDNDStateMachine * stateMachine;                   //@synthesize stateMachine=_stateMachine - In the implementation block
@property (nonatomic,retain) DNDModeAssertionService * assertionService;                //@synthesize assertionService=_assertionService - In the implementation block
@property (nonatomic,retain) id<NAScheduler> serializer;                                //@synthesize serializer=_serializer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) MTAlarm * sleepAlarm; 
@property (nonatomic,readonly) NSDate * currentDate; 
@property (nonatomic,readonly) NSDate * keepOffUntilDate; 
@property (nonatomic,readonly) BOOL inUserDefinedSleepWindow; 
-(void)dealloc;
-(BOOL)isEnabled;
-(MTBedtimeDNDStateMachine *)stateMachine;
-(void)setStateMachine:(MTBedtimeDNDStateMachine *)arg1 ;
-(NSDate *)currentDate;
-(id<NAScheduler>)serializer;
-(void)setSerializer:(id<NAScheduler>)arg1 ;
-(void)modeAssertionService:(id)arg1 didReceiveModeAssertionInvalidation:(id)arg2 ;
-(void)printDiagnostics;
-(id)gatherDiagnostics;
-(id)currentDateProvider;
-(MTAlarm *)sleepAlarm;
-(NSDate *)keepOffUntilDate;
-(BOOL)stateMachine:(id)arg1 disengageBedtimeDNDUserRequested:(BOOL)arg2 ;
-(BOOL)inUserDefinedSleepWindow;
-(void)stateMachine:(id)arg1 keepBedtimeDNDOffUntilDate:(id)arg2 ;
-(id)initWithAlarmStorage:(id)arg1 sleepCoordinator:(id)arg2 currentDateProvider:(/*^block*/id)arg3 ;
-(BOOL)isBedtimeDNDEnabled:(BOOL*)arg1 error:(id*)arg2 ;
-(DNDModeAssertionService *)assertionService;
-(unsigned long long)bedtimeDNDTimeoutMinutes;
-(BOOL)isBedtimeDNDEnabled:(BOOL*)arg1 ;
-(void)userDisengagedBedtimeDNDOnDate:(id)arg1 ;
-(void)updateMonitorState;
-(BOOL)stateMachine:(id)arg1 engageBedtimeDNDUntilDate:(id)arg2 userEngaged:(BOOL)arg3 ;
-(void)stateMachineClearKeepBedtimeDNDOff:(id)arg1 ;
-(void)stateMachine:(id)arg1 scheduleUpdateForSecondsFromNow:(double)arg2 ;
-(void)sleepCoordinator:(id)arg1 userWentToBed:(id)arg2 sleepAlarm:(id)arg3 ;
-(void)sleepCoordinator:(id)arg1 userWokeUp:(id)arg2 sleepAlarm:(id)arg3 ;
-(void)sleepCoordinator:(id)arg1 bedtimeReminderDidFire:(id)arg2 sleepAlarm:(id)arg3 ;
-(void)sleepCoordinator:(id)arg1 bedtimeReminderWasConfirmed:(id)arg2 sleepAlarm:(id)arg3 ;
-(void)sleepCoordinator:(id)arg1 bedtimeWasReached:(id)arg2 sleepAlarm:(id)arg3 ;
-(void)sleepCoordinator:(id)arg1 wakeUpAlarmDidFire:(id)arg2 sleepAlarm:(id)arg3 ;
-(void)sleepCoordinator:(id)arg1 wakeUpAlarmWasSnoozed:(id)arg2 sleepAlarm:(id)arg3 ;
-(void)sleepCoordinator:(id)arg1 sleepAlarmDidChange:(id)arg2 ;
-(void)timeListener:(id)arg1 didDetectSignificantTimeChangeWithCompletionBlock:(/*^block*/id)arg2 ;
-(id)initWithAlarmStorage:(id)arg1 sleepCoordinator:(id)arg2 ;
-(BOOL)bedtimeDoNotDisturb:(id*)arg1 ;
-(void)userDisengagedBedtimeDND;
-(id<MTAlarmStorage>)alarmStorage;
-(void)setAlarmStorage:(id<MTAlarmStorage>)arg1 ;
-(MTSleepCoordinator *)sleepCoordinator;
-(void)setSleepCoordinator:(MTSleepCoordinator *)arg1 ;
-(void)setCurrentDateProvider:(id)arg1 ;
-(void)setAssertionService:(DNDModeAssertionService *)arg1 ;
@end

