/*
* Generated on Thursday, January 14, 2021 at 2:26:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SleepDaemon.framework/SleepDaemon
*/

#import <SleepDaemon/SleepDaemon-Structs.h>
#import <Sleep/HKSPPersistentStateMachineState.h>
#import <libobjc.A.dylib/HDSPSleepScheduleStateCoordinatorStateMachineEventHandler.h>

@class HKSPSleepScheduleModel, HDSPSleepScheduleStateCoordinatorStateMachine, NSString;

@interface HDSPSleepScheduleStateCoordinatorStateMachineState : HKSPPersistentStateMachineState <HDSPSleepScheduleStateCoordinatorStateMachineEventHandler> {

	unsigned long long _scheduleState;
	HKSPSleepScheduleModel* _persistedModel;

}

@property (nonatomic,__weak,readonly) HDSPSleepScheduleStateCoordinatorStateMachine * stateMachine; 
@property (nonatomic,readonly) unsigned long long scheduleState;                                                 //@synthesize scheduleState=_scheduleState - In the implementation block
@property (nonatomic,copy) HKSPSleepScheduleModel * persistedModel;                                              //@synthesize persistedModel=_persistedModel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)timeZoneChange;
-(unsigned long long)scheduleState;
-(void)windDownReached;
-(void)wakeUpConfirmed;
-(void)encodeWithCoder:(id)arg1 ;
-(void)scheduleModelChanged;
-(void)windDownSkipped;
-(void)wakeTimeReached;
-(void)updateState;
-(void)significantTimeChange;
-(id)initWithCoder:(id)arg1 ;
-(void)bedtimeDelayed;
-(void)willEnterWithPreviousState:(id)arg1 context:(id)arg2 ;
-(id)equalsBuilderWithObject:(id)arg1 ;
-(void)didEnterWithPreviousState:(id)arg1 context:(id)arg2 ;
-(void)bedtimeSkipped;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)bedtimeReached;
-(BOOL)isAlarmEnabled;
-(BOOL)isSleepScheduleDisabled;
-(void)updateStateWithCheckExpiration:(BOOL)arg1 ;
-(void)setPersistedModel:(HKSPSleepScheduleModel *)arg1 ;
-(id)determineNextStateFromTimeline;
-(id)_timelineForDate:(id)arg1 ;
-(BOOL)significantScheduleChangeOccurred;
-(HKSPSleepScheduleModel *)persistedModel;
@end

