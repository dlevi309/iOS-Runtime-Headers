/*
* Generated on Thursday, January 14, 2021 at 2:26:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SleepDaemon.framework/SleepDaemon
*/

#import <SleepDaemon/SleepDaemon-Structs.h>
#import <libobjc.A.dylib/HDSPChargingReminderStateMachineDelegate.h>
#import <libobjc.A.dylib/HDSPChargingReminderStateMachineInfoProvider.h>
#import <libobjc.A.dylib/HDSPDiagnosticsProvider.h>
#import <libobjc.A.dylib/HDSPEnvironmentAware.h>
#import <libobjc.A.dylib/HDSPSleepScheduleModelObserver.h>
#import <libobjc.A.dylib/HDSPSleepEventHandler.h>
#import <libobjc.A.dylib/HDSPTimeChangeObserver.h>
#import <libobjc.A.dylib/HDSPDevicePowerObserver.h>
#import <libobjc.A.dylib/HDSPSleepEventProvider.h>
#import <libobjc.A.dylib/HDSPSleepScheduleStateObserver.h>

@protocol HDSPSleepEventDelegate, HDSPActivityScheduler;
@class HDSPEnvironment, HDSPChargingReminderStateMachine, NSString, NSDate, HKSPSleepScheduleModel;

@interface HDSPChargingReminderManager : NSObject <HDSPChargingReminderStateMachineDelegate, HDSPChargingReminderStateMachineInfoProvider, HDSPDiagnosticsProvider, HDSPEnvironmentAware, HDSPSleepScheduleModelObserver, HDSPSleepEventHandler, HDSPTimeChangeObserver, HDSPDevicePowerObserver, HDSPSleepEventProvider, HDSPSleepScheduleStateObserver> {

	os_unfair_lock_s _chargingReminderLock;
	HDSPEnvironment* _environment;
	id<HDSPSleepEventDelegate> _sleepEventDelegate;
	HDSPChargingReminderStateMachine* _stateMachine;
	id<HDSPActivityScheduler> _monitoringScheduler;

}

@property (nonatomic,readonly) os_unfair_lock_s chargingReminderLock;                           //@synthesize chargingReminderLock=_chargingReminderLock - In the implementation block
@property (nonatomic,readonly) HDSPChargingReminderStateMachine * stateMachine;                 //@synthesize stateMachine=_stateMachine - In the implementation block
@property (nonatomic,readonly) id<HDSPActivityScheduler> monitoringScheduler;                   //@synthesize monitoringScheduler=_monitoringScheduler - In the implementation block
@property (nonatomic,readonly) id<NAScheduler> callbackScheduler; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSDate * currentDate; 
@property (nonatomic,readonly) BOOL sleepFeaturesEnabled; 
@property (nonatomic,readonly) HKSPSleepScheduleModel * sleepScheduleModel; 
@property (nonatomic,readonly) unsigned long long sleepScheduleState; 
@property (nonatomic,readonly) BOOL isCharging; 
@property (nonatomic,__weak,readonly) HDSPEnvironment * environment;                            //@synthesize environment=_environment - In the implementation block
@property (nonatomic,copy,readonly) NSString * providerIdentifier; 
@property (assign,nonatomic,__weak) id<HDSPSleepEventDelegate> sleepEventDelegate;              //@synthesize sleepEventDelegate=_sleepEventDelegate - In the implementation block
+(id)monitorCriteria;
-(id)diagnosticInfo;
-(id)eventIdentifiers;
-(id<HDSPSleepEventDelegate>)sleepEventDelegate;
-(void)sleepEventIsDue:(id)arg1 ;
-(id)upcomingEventsDueAfterDate:(id)arg1 ;
-(NSString *)providerIdentifier;
-(void)setSleepEventDelegate:(id<HDSPSleepEventDelegate>)arg1 ;
-(id)_currentState;
-(void)environmentDidBecomeReady:(id)arg1 ;
-(id)devicePowerMonitor;
-(void)environmentWillBecomeReady:(id)arg1 ;
-(NSDate *)currentDate;
-(HKSPSleepScheduleModel *)sleepScheduleModel;
-(void)_withLock:(/*^block*/id)arg1 ;
-(void)sleepScheduleModelManager:(id)arg1 source:(id)arg2 didUpdateSleepScheduleModel:(id)arg3 ;
-(unsigned long long)sleepScheduleState;
-(id<NAScheduler>)callbackScheduler;
-(void)significantTimeChangeDetected:(id)arg1 ;
-(void)sleepScheduleStateDidChange:(unsigned long long)arg1 previousState:(unsigned long long)arg2 reason:(unsigned long long)arg3 ;
-(id)initWithEnvironment:(id)arg1 ;
-(void)updateState;
-(id)diagnosticDescription;
-(HDSPChargingReminderStateMachine *)stateMachine;
-(HDSPEnvironment *)environment;
-(BOOL)isCharging;
-(BOOL)sleepFeaturesEnabled;
-(void)postChargingReminderNotification;
-(void)scheduleBatteryMonitoring;
-(void)unscheduleBatteryMonitoring;
-(void)startBatteryMonitoring;
-(void)stopBatteryMonitoring;
-(id)monitoringWindowAfterDate:(id)arg1 ;
-(void)deviceChangedChargingState:(BOOL)arg1 ;
-(id)initWithEnvironment:(id)arg1 monitoringScheduler:(id)arg2 ;
-(void)checkBatteryLevel;
-(BOOL)isWaitingOrMonitoring;
-(os_unfair_lock_s)chargingReminderLock;
-(id<HDSPActivityScheduler>)monitoringScheduler;
@end

