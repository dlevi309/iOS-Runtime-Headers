/*
* Generated on Thursday, January 14, 2021 at 2:26:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SleepDaemon.framework/SleepDaemon
*/

#import <SleepDaemon/SleepDaemon-Structs.h>
#import <libobjc.A.dylib/HDSPGoodMorningAlertStateMachineInfoProvider.h>
#import <libobjc.A.dylib/HDSPGoodMorningAlertStateMachineDelegate.h>
#import <libobjc.A.dylib/HDSPDiagnosticsProvider.h>
#import <libobjc.A.dylib/HDSPEnvironmentAware.h>
#import <libobjc.A.dylib/HDSPSleepScheduleModelObserver.h>
#import <libobjc.A.dylib/HDSPSleepScheduleStateObserver.h>
#import <libobjc.A.dylib/HDSPTimeChangeObserver.h>
#import <libobjc.A.dylib/HDSPSleepActionObserver.h>

@class HDSPEnvironment, HDSPGoodMorningAlertStateMachine, HKSPObserverSet, NSDate, HKSPSleepScheduleModel, NSString;

@interface HDSPGoodMorningAlertManager : NSObject <HDSPGoodMorningAlertStateMachineInfoProvider, HDSPGoodMorningAlertStateMachineDelegate, HDSPDiagnosticsProvider, HDSPEnvironmentAware, HDSPSleepScheduleModelObserver, HDSPSleepScheduleStateObserver, HDSPTimeChangeObserver, HDSPSleepActionObserver> {

	os_unfair_lock_s _goodMorningAlertLock;
	HDSPEnvironment* _environment;
	HDSPGoodMorningAlertStateMachine* _stateMachine;
	HKSPObserverSet* _goodMorningAlertObservers;

}

@property (nonatomic,readonly) os_unfair_lock_s goodMorningAlertLock;                        //@synthesize goodMorningAlertLock=_goodMorningAlertLock - In the implementation block
@property (nonatomic,readonly) HDSPGoodMorningAlertStateMachine * stateMachine;              //@synthesize stateMachine=_stateMachine - In the implementation block
@property (nonatomic,readonly) HKSPObserverSet * goodMorningAlertObservers;                  //@synthesize goodMorningAlertObservers=_goodMorningAlertObservers - In the implementation block
@property (nonatomic,readonly) NSDate * currentDate; 
@property (nonatomic,readonly) BOOL goodMorningAlertEnabled; 
@property (nonatomic,readonly) HKSPSleepScheduleModel * sleepScheduleModel; 
@property (nonatomic,readonly) unsigned long long sleepScheduleState; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<NAScheduler> callbackScheduler; 
@property (nonatomic,__weak,readonly) HDSPEnvironment * environment;                         //@synthesize environment=_environment - In the implementation block
-(id)diagnosticInfo;
-(void)addObserver:(id)arg1 ;
-(void)presentAlertForGoodMorning;
-(BOOL)goodMorningAlertEnabled;
-(id)_currentState;
-(void)environmentDidBecomeReady:(id)arg1 ;
-(void)dismissAlertForGoodMorning;
-(void)goodMorningWasDismissed:(id)arg1 ;
-(void)environmentWillBecomeReady:(id)arg1 ;
-(NSDate *)currentDate;
-(HKSPSleepScheduleModel *)sleepScheduleModel;
-(void)_withLock:(/*^block*/id)arg1 ;
-(os_unfair_lock_s)goodMorningAlertLock;
-(void)sleepScheduleModelManager:(id)arg1 source:(id)arg2 didUpdateSleepScheduleModel:(id)arg3 ;
-(unsigned long long)sleepScheduleState;
-(void)significantTimeChangeDetected:(id)arg1 ;
-(void)sleepScheduleStateDidChange:(unsigned long long)arg1 previousState:(unsigned long long)arg2 reason:(unsigned long long)arg3 ;
-(id)initWithEnvironment:(id)arg1 ;
-(void)updateState;
-(id)diagnosticDescription;
-(HDSPGoodMorningAlertStateMachine *)stateMachine;
-(void)removeObserver:(id)arg1 ;
-(HDSPEnvironment *)environment;
-(HKSPObserverSet *)goodMorningAlertObservers;
@end

