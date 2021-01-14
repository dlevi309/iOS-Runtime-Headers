/*
* Generated on Thursday, January 14, 2021 at 2:26:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SleepDaemon.framework/SleepDaemon
*/

#import <Sleep/HKSPPersistentStateMachine.h>
#import <libobjc.A.dylib/HDSPSleepScheduleStateCoordinatorStateMachineDelegate.h>
#import <libobjc.A.dylib/HDSPSleepScheduleStateCoordinatorStateMachineInfoProvider.h>
#import <libobjc.A.dylib/HDSPSleepScheduleStateCoordinatorStateMachineEventHandler.h>

@class HDSPSleepScheduleStateCoordinatorDisabledState, HDSPSleepScheduleStateCoordinatorWakeUpState, HDSPSleepScheduleStateCoordinatorBedtimeState, HDSPSleepScheduleStateCoordinatorWindDownState, HDSPSleepScheduleStateCoordinatorDelayedWakeUpState, HDSPSleepScheduleStateCoordinatorSkippedBedtimeState, HDSPSleepScheduleStateCoordinatorInitialState, NSString, HKSPSleepScheduleModel, HKSPSleepScheduleOccurrence, NSDate;

@interface HDSPSleepScheduleStateCoordinatorStateMachine : HKSPPersistentStateMachine <HDSPSleepScheduleStateCoordinatorStateMachineDelegate, HDSPSleepScheduleStateCoordinatorStateMachineInfoProvider, HDSPSleepScheduleStateCoordinatorStateMachineEventHandler> {

	HDSPSleepScheduleStateCoordinatorDisabledState* _disabledState;
	HDSPSleepScheduleStateCoordinatorWakeUpState* _wakeUpState;
	HDSPSleepScheduleStateCoordinatorBedtimeState* _bedtimeState;
	HDSPSleepScheduleStateCoordinatorWindDownState* _windDownState;
	HDSPSleepScheduleStateCoordinatorDelayedWakeUpState* _delayedWakeUpState;
	HDSPSleepScheduleStateCoordinatorSkippedBedtimeState* _skippedBedtimeState;
	HDSPSleepScheduleStateCoordinatorInitialState* _initialState;

}

@property (nonatomic,__weak,readonly) id<HDSPSleepScheduleStateCoordinatorStateMachineDelegate> delegate; 
@property (nonatomic,__weak,readonly) id<HDSPSleepScheduleStateCoordinatorStateMachineInfoProvider> infoProvider; 
@property (nonatomic,readonly) HDSPSleepScheduleStateCoordinatorDisabledState * disabledState;                                 //@synthesize disabledState=_disabledState - In the implementation block
@property (nonatomic,readonly) HDSPSleepScheduleStateCoordinatorWakeUpState * wakeUpState;                                     //@synthesize wakeUpState=_wakeUpState - In the implementation block
@property (nonatomic,readonly) HDSPSleepScheduleStateCoordinatorBedtimeState * bedtimeState;                                   //@synthesize bedtimeState=_bedtimeState - In the implementation block
@property (nonatomic,readonly) HDSPSleepScheduleStateCoordinatorWindDownState * windDownState;                                 //@synthesize windDownState=_windDownState - In the implementation block
@property (nonatomic,readonly) HDSPSleepScheduleStateCoordinatorDelayedWakeUpState * delayedWakeUpState;                       //@synthesize delayedWakeUpState=_delayedWakeUpState - In the implementation block
@property (nonatomic,readonly) HDSPSleepScheduleStateCoordinatorSkippedBedtimeState * skippedBedtimeState;                     //@synthesize skippedBedtimeState=_skippedBedtimeState - In the implementation block
@property (nonatomic,readonly) HDSPSleepScheduleStateCoordinatorInitialState * initialState;                                   //@synthesize initialState=_initialState - In the implementation block
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
-(HDSPSleepScheduleStateCoordinatorInitialState *)initialState;
-(void)snoozeFireDateShouldBeReset;
-(void)timeZoneChange;
-(NSDate *)currentDate;
-(HDSPSleepScheduleStateCoordinatorSkippedBedtimeState *)skippedBedtimeState;
-(void)windDownReached;
-(id)stateMachineLog;
-(HKSPSleepScheduleModel *)sleepScheduleModel;
-(HKSPSleepScheduleOccurrence *)previousOccurrence;
-(void)wakeUpConfirmed;
-(void)scheduleModelChanged;
-(void)windDownSkipped;
-(void)wakeTimeReached;
-(HDSPSleepScheduleStateCoordinatorDisabledState *)disabledState;
-(HDSPSleepScheduleStateCoordinatorDelayedWakeUpState *)delayedWakeUpState;
-(HDSPSleepScheduleStateCoordinatorWakeUpState *)wakeUpState;
-(void)sleepScheduleStateDidChange:(unsigned long long)arg1 previousState:(unsigned long long)arg2 reason:(unsigned long long)arg3 ;
-(void)significantTimeChange;
-(BOOL)isAppleWatch;
-(HDSPSleepScheduleStateCoordinatorWindDownState *)windDownState;
-(void)bedtimeDelayed;
-(HDSPSleepScheduleStateCoordinatorBedtimeState *)bedtimeState;
-(void)bedtimeSkipped;
-(BOOL)sleepFeaturesEnabled;
-(id)initWithIdentifier:(id)arg1 persistence:(id)arg2 delegate:(id)arg3 infoProvider:(id)arg4 currentDateProvider:(/*^block*/id)arg5 ;
-(void)bedtimeReached;
@end

