/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
*/

#import <MobileTimer/MTStateMachine.h>
#import <libobjc.A.dylib/MTSleepCoordinatorStateMachineEventHandler.h>

@class MTSleepCoordinatorStateMachineAsleepState, MTSleepCoordinatorStateMachineAwakeState, MTSleepCoordinatorStateMachineDisabledState, NSString;

@interface MTSleepCoordinatorStateMachine : MTStateMachine <MTSleepCoordinatorStateMachineEventHandler> {

	MTSleepCoordinatorStateMachineAsleepState* _asleepState;
	MTSleepCoordinatorStateMachineAwakeState* _awakeState;
	MTSleepCoordinatorStateMachineDisabledState* _disabledState;

}

@property (nonatomic,retain) MTSleepCoordinatorStateMachineAsleepState * asleepState;                  //@synthesize asleepState=_asleepState - In the implementation block
@property (nonatomic,retain) MTSleepCoordinatorStateMachineAwakeState * awakeState;                    //@synthesize awakeState=_awakeState - In the implementation block
@property (nonatomic,retain) MTSleepCoordinatorStateMachineDisabledState * disabledState;              //@synthesize disabledState=_disabledState - In the implementation block
@property (nonatomic,readonly) BOOL inUserDefinedSleepWindow; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)updateState;
-(id)currentDate;
-(MTSleepCoordinatorStateMachineDisabledState *)disabledState;
-(void)stateMachineUserWentToBed:(id)arg1 ;
-(id)sleepAlarm;
-(MTSleepCoordinatorStateMachineAsleepState *)asleepState;
-(MTSleepCoordinatorStateMachineAwakeState *)awakeState;
-(void)stateMachine:(id)arg1 dismissWakeUpAlarm:(id)arg2 dismissAction:(unsigned long long)arg3 ;
-(unsigned long long)sleepTimeOutMinutes;
-(void)stateMachine:(id)arg1 shouldScheduleAlarmTimeoutForSecondsFromNow:(double)arg2 ;
-(void)userWentToBed;
-(void)userWokeUp;
-(void)userBedTimeReached:(id)arg1 ;
-(void)userWakeTimeReached:(id)arg1 ;
-(void)userWakeUpAlarmFired;
-(void)wakeUpAlarmTimedOut;
-(BOOL)inUserDefinedSleepWindow;
-(id)initWithDelegate:(id)arg1 infoProvider:(id)arg2 ;
-(id)stateMachineLog;
-(void)stateMachineUserWokeUp:(id)arg1 ;
-(void)setAsleepState:(MTSleepCoordinatorStateMachineAsleepState *)arg1 ;
-(void)setAwakeState:(MTSleepCoordinatorStateMachineAwakeState *)arg1 ;
-(void)setDisabledState:(MTSleepCoordinatorStateMachineDisabledState *)arg1 ;
@end

