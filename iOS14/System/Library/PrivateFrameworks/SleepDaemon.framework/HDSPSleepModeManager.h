/*
* Generated on Thursday, January 14, 2021 at 2:26:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SleepDaemon.framework/SleepDaemon
*/

#import <SleepDaemon/SleepDaemon-Structs.h>
#import <libobjc.A.dylib/HDSPSleepModeStateMachineDelegate.h>
#import <libobjc.A.dylib/HDSPSleepModeStateMachineInfoProvider.h>
#import <libobjc.A.dylib/HDSPDiagnosticsProvider.h>
#import <libobjc.A.dylib/HDSPEnvironmentAware.h>
#import <libobjc.A.dylib/HDSPSleepScheduleModelObserver.h>
#import <libobjc.A.dylib/HDSPTimeChangeObserver.h>
#import <libobjc.A.dylib/HDSPSleepScheduleStateObserver.h>

@class HDSPEnvironment, HDSPSleepModeStateMachine, HKSPObserverSet, NSString, NSDate, HKSPSleepScheduleModel;

@interface HDSPSleepModeManager : NSObject <HDSPSleepModeStateMachineDelegate, HDSPSleepModeStateMachineInfoProvider, HDSPDiagnosticsProvider, HDSPEnvironmentAware, HDSPSleepScheduleModelObserver, HDSPTimeChangeObserver, HDSPSleepScheduleStateObserver> {

	os_unfair_lock_s _sleepModeLock;
	HDSPEnvironment* _environment;
	HDSPSleepModeStateMachine* _stateMachine;
	HKSPObserverSet* _sleepModeObservers;

}

@property (nonatomic,readonly) os_unfair_lock_s sleepModeLock;                           //@synthesize sleepModeLock=_sleepModeLock - In the implementation block
@property (nonatomic,readonly) HDSPSleepModeStateMachine * stateMachine;                 //@synthesize stateMachine=_stateMachine - In the implementation block
@property (nonatomic,readonly) HKSPObserverSet * sleepModeObservers;                     //@synthesize sleepModeObservers=_sleepModeObservers - In the implementation block
@property (assign,nonatomic) long long sleepMode; 
@property (nonatomic,readonly) id<NAScheduler> callbackScheduler; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSDate * currentDate; 
@property (nonatomic,readonly) HKSPSleepScheduleModel * sleepScheduleModel; 
@property (nonatomic,readonly) unsigned long long sleepScheduleState; 
@property (nonatomic,readonly) BOOL isInDemoMode; 
@property (nonatomic,__weak,readonly) HDSPEnvironment * environment;                     //@synthesize environment=_environment - In the implementation block
-(id)diagnosticInfo;
-(void)addObserver:(id)arg1 ;
-(void)environmentDidBecomeReady:(id)arg1 ;
-(void)environmentWillBecomeReady:(id)arg1 ;
-(NSDate *)currentDate;
-(void)setSleepMode:(long long)arg1 ;
-(id)currentState;
-(HKSPSleepScheduleModel *)sleepScheduleModel;
-(void)_withLock:(/*^block*/id)arg1 ;
-(void)_userDisengagedCurrentMode;
-(os_unfair_lock_s)sleepModeLock;
-(void)sleepScheduleModelManager:(id)arg1 source:(id)arg2 didUpdateSleepScheduleModel:(id)arg3 ;
-(BOOL)isInDemoMode;
-(void)scheduledEventIsDue;
-(void)sleepModeDidChange:(long long)arg1 previousMode:(long long)arg2 reason:(unsigned long long)arg3 ;
-(void)_userEngagedBedtimeMode;
-(unsigned long long)sleepScheduleState;
-(void)significantTimeChangeDetected:(id)arg1 ;
-(void)sleepScheduleStateDidChange:(unsigned long long)arg1 previousState:(unsigned long long)arg2 reason:(unsigned long long)arg3 ;
-(long long)sleepMode;
-(id)initWithEnvironment:(id)arg1 ;
-(void)updateState;
-(id)diagnosticDescription;
-(HDSPSleepModeStateMachine *)stateMachine;
-(void)removeObserver:(id)arg1 ;
-(HDSPEnvironment *)environment;
-(void)_enableSleepModeControlCenterModuleIfNeeded;
-(BOOL)inUserRequestedSleepMode;
-(HKSPObserverSet *)sleepModeObservers;
-(void)_powerLogSleepMode:(BOOL)arg1 ;
@end

