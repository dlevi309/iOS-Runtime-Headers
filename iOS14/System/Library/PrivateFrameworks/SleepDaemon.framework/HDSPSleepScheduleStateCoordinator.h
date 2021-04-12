/*
* Generated on Thursday, January 14, 2021 at 2:26:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SleepDaemon.framework/SleepDaemon
*/

#import <SleepDaemon/SleepDaemon-Structs.h>
#import <libobjc.A.dylib/HDSPSleepScheduleStateCoordinatorStateMachineDelegate.h>
#import <libobjc.A.dylib/HDSPSleepScheduleStateCoordinatorStateMachineInfoProvider.h>
#import <libobjc.A.dylib/HDSPEnvironmentAware.h>
#import <libobjc.A.dylib/HDSPSleepEventHandler.h>
#import <libobjc.A.dylib/HDSPSleepScheduleModelObserver.h>
#import <libobjc.A.dylib/HDSPDiagnosticsProvider.h>
#import <libobjc.A.dylib/HDSPSleepActionObserver.h>
#import <libobjc.A.dylib/HDSPSleepAlarmObserver.h>
#import <libobjc.A.dylib/HDSPTimeChangeObserver.h>

@class HKSPSleepScheduleModel, HKSPSleepScheduleOccurrence, NSDate, HDSPEnvironment, HDSPSleepScheduleStateCoordinatorStateMachine, HKSPObserverSet, NSString;

@interface HDSPSleepScheduleStateCoordinator : NSObject <HDSPSleepScheduleStateCoordinatorStateMachineDelegate, HDSPSleepScheduleStateCoordinatorStateMachineInfoProvider, HDSPEnvironmentAware, HDSPSleepEventHandler, HDSPSleepScheduleModelObserver, HDSPDiagnosticsProvider, HDSPSleepActionObserver, HDSPSleepAlarmObserver, HDSPTimeChangeObserver> {

	os_unfair_lock_s _stateMachineLock;
	HDSPEnvironment* _environment;
	HDSPSleepScheduleStateCoordinatorStateMachine* _stateMachine;
	HKSPObserverSet* _observers;

}

@property (nonatomic,readonly) os_unfair_lock_s stateMachineLock;                                         //@synthesize stateMachineLock=_stateMachineLock - In the implementation block
@property (nonatomic,readonly) HDSPSleepScheduleStateCoordinatorStateMachine * stateMachine;              //@synthesize stateMachine=_stateMachine - In the implementation block
@property (nonatomic,readonly) HKSPObserverSet * observers;                                               //@synthesize observers=_observers - In the implementation block
@property (nonatomic,readonly) id<NAScheduler> callbackScheduler; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL isAppleWatch; 
@property (nonatomic,readonly) BOOL sleepFeaturesEnabled; 
@property (nonatomic,readonly) HKSPSleepScheduleModel * sleepScheduleModel; 
@property (nonatomic,readonly) HKSPSleepScheduleOccurrence * previousOccurrence; 
@property (nonatomic,readonly) NSDate * currentDate; 
@property (nonatomic,__weak,readonly) HDSPEnvironment * environment;                                      //@synthesize environment=_environment - In the implementation block
-(id)diagnosticInfo;
-(id)eventIdentifiers;
-(void)snoozeFireDateShouldBeReset;
-(void)sleepEventIsDue:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(void)environmentDidBecomeReady:(id)arg1 ;
-(void)environmentWillBecomeReady:(id)arg1 ;
-(HKSPObserverSet *)observers;
-(NSDate *)currentDate;
-(void)_updateSleepScheduleState;
-(id)currentState;
-(HKSPSleepScheduleModel *)sleepScheduleModel;
-(void)_withLock:(/*^block*/id)arg1 ;
-(void)wakeNotificationWasConfirmed:(id)arg1 ;
-(void)wakeUpAlarmWasDismissed:(id)arg1 ;
-(HKSPSleepScheduleOccurrence *)previousOccurrence;
-(os_unfair_lock_s)stateMachineLock;
-(void)sleepScheduleModelManager:(id)arg1 source:(id)arg2 didUpdateSleepScheduleModel:(id)arg3 ;
-(void)windDownWasSkipped:(id)arg1 ;
-(void)significantTimeChangeDetected:(id)arg1 ;
-(void)sleepScheduleStateDidChange:(unsigned long long)arg1 previousState:(unsigned long long)arg2 reason:(unsigned long long)arg3 ;
-(id)initWithEnvironment:(id)arg1 ;
-(id)diagnosticDescription;
-(HDSPSleepScheduleStateCoordinatorStateMachine *)stateMachine;
-(BOOL)isAppleWatch;
-(void)removeObserver:(id)arg1 ;
-(void)timeZoneChangeDetected:(id)arg1 ;
-(HDSPEnvironment *)environment;
-(unsigned long long)currentSleepScheduleState;
-(void)bedtimeWasSkipped:(id)arg1 ;
-(BOOL)sleepFeaturesEnabled;
-(void)bedtimeWasDelayed:(id)arg1 ;
@end

