/*
* Generated on Thursday, January 14, 2021 at 2:23:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
*/

#import <MobileTimer/MTStateMachineState.h>
#import <libobjc.A.dylib/MTSleepCoordinatorStateMachineEventHandler.h>

@class NSString;

@interface MTSleepCoordinatorStateMachineState : MTStateMachineState <MTSleepCoordinatorStateMachineEventHandler>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)updateState;
-(void)updateStateForSleepAlarm:(id)arg1 ;
-(id)determineNextStateForSleepAlarm:(id)arg1 ;
-(void)userWentToBed;
-(void)userWokeUp;
-(void)userBedTimeReached:(id)arg1 ;
-(void)userWakeTimeReached:(id)arg1 ;
-(void)userWakeUpAlarmFired;
-(void)wakeUpAlarmTimedOut;
@end

