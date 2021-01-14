/*
* Generated on Thursday, January 14, 2021 at 2:23:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
*/

#import <MobileTimer/MTStateMachine.h>
#import <libobjc.A.dylib/MTSleepModeStateMachineEventHandler.h>

@class MTSleepModeStateMachineInitialState, MTSleepModeStateMachineOffState, MTSleepModeStateMachineWaitingState, NSString;

@interface MTSleepModeStateMachine : MTStateMachine <MTSleepModeStateMachineEventHandler> {

	MTSleepModeStateMachineInitialState* _initialState;
	MTSleepModeStateMachineOffState* _offState;
	MTSleepModeStateMachineWaitingState* _waitingState;

}

@property (nonatomic,readonly) MTSleepModeStateMachineInitialState * initialState;              //@synthesize initialState=_initialState - In the implementation block
@property (nonatomic,readonly) MTSleepModeStateMachineOffState * offState;                      //@synthesize offState=_offState - In the implementation block
@property (nonatomic,readonly) MTSleepModeStateMachineWaitingState * waitingState;              //@synthesize waitingState=_waitingState - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(MTSleepModeStateMachineInitialState *)initialState;
-(MTSleepModeStateMachineOffState *)offState;
-(id)userRequestedOffStateWithKeepOffUntilDate:(id)arg1 ;
-(id)sleepAlarm;
-(void)updateState:(BOOL)arg1 ;
-(id)keepOffUntilDate;
-(id)currentDate;
-(id)stateMachineLog;
-(MTSleepModeStateMachineWaitingState *)waitingState;
-(void)userWokeUp;
-(id)initWithDelegate:(id)arg1 infoProvider:(id)arg2 ;
-(BOOL)stateMachine:(id)arg1 disengageSleepModeUserRequested:(BOOL)arg2 ;
-(BOOL)isUserAsleep;
-(void)stateMachine:(id)arg1 keepSleepModeOffUntilDate:(id)arg2 ;
-(BOOL)isSleepModeEnabled:(BOOL*)arg1 ;
-(void)sleepModeEnabled:(BOOL)arg1 userRequested:(BOOL)arg2 date:(id)arg3 ;
-(BOOL)stateMachine:(id)arg1 engageSleepModeUntilDate:(id)arg2 userEngaged:(BOOL)arg3 ;
-(void)stateMachineClearKeepSleepModeOff:(id)arg1 ;
-(void)stateMachine:(id)arg1 scheduleUpdateForSecondsFromNow:(double)arg2 ;
-(id)onStateWithSleepModeEndDate:(id)arg1 ;
@end

