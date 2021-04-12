/*
* Generated on Thursday, January 14, 2021 at 2:26:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SleepDaemon.framework/SleepDaemon
*/

#import <SleepDaemon/HDSPSleepModeStateMachineState.h>

@interface HDSPSleepModeManualOffState : HDSPSleepModeStateMachineState
-(void)userDisengagedCurrentMode;
-(void)updateState;
-(id)stateName;
-(BOOL)isUserRequested;
-(void)willEnterWithPreviousState:(id)arg1 context:(id)arg2 ;
-(void)sleepScheduleStateChangedToBedtimeFromState:(unsigned long long)arg1 ;
-(id)determineExpirationDateForCurrentDate:(id)arg1 ;
-(void)sleepScheduleStateChangedToWindDownFromState:(unsigned long long)arg1 ;
@end

