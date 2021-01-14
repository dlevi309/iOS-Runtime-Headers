/*
* Generated on Thursday, January 14, 2021 at 2:26:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SleepDaemon.framework/SleepDaemon
*/

#import <SleepDaemon/HDSPTimeAsleepTrackerStateMachineState.h>

@interface HDSPTimeAsleepTrackerWaitingState : HDSPTimeAsleepTrackerStateMachineState
-(id)stateName;
-(void)didExitWithNextState:(id)arg1 context:(id)arg2 ;
-(void)willEnterWithPreviousState:(id)arg1 context:(id)arg2 ;
-(void)didEnterWithPreviousState:(id)arg1 context:(id)arg2 ;
-(void)bedtimeOccurred;
-(void)sleepTrackingEventDue;
-(void)userEngagedSleepMode;
-(void)startWakeDetectionOccurred;
-(BOOL)isSleepTrackingSchedulingState;
@end

