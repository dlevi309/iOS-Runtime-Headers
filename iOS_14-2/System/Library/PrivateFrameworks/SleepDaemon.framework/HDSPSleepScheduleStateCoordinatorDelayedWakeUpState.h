/*
* Generated on Thursday, January 14, 2021 at 2:26:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SleepDaemon.framework/SleepDaemon
*/

#import <SleepDaemon/HDSPSleepScheduleStateCoordinatorStateMachineState.h>

@interface HDSPSleepScheduleStateCoordinatorDelayedWakeUpState : HDSPSleepScheduleStateCoordinatorStateMachineState
-(unsigned long long)scheduleState;
-(void)windDownReached;
-(void)wakeUpConfirmed;
-(id)stateName;
-(void)didExitWithNextState:(id)arg1 context:(id)arg2 ;
-(id)determineExpirationDateForCurrentDate:(id)arg1 ;
-(void)bedtimeReached;
-(void)updateStateWithCheckExpiration:(BOOL)arg1 ;
@end

