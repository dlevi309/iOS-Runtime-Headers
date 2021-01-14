/*
* Generated on Thursday, January 14, 2021 at 2:26:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SleepDaemon.framework/SleepDaemon
*/

#import <SleepDaemon/HDSPSleepScheduleStateCoordinatorStateMachineState.h>

@interface HDSPSleepScheduleStateCoordinatorBedtimeState : HDSPSleepScheduleStateCoordinatorStateMachineState
-(unsigned long long)scheduleState;
-(void)wakeUpConfirmed;
-(void)wakeTimeReached;
-(id)stateName;
-(void)bedtimeDelayed;
-(id)determineExpirationDateForCurrentDate:(id)arg1 ;
-(void)bedtimeSkipped;
@end

