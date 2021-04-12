/*
* Generated on Monday, March 1, 2021 at 2:32:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
*/

#import <MobileTimer/MTStateMachine.h>
#import <libobjc.A.dylib/MTBedtimeDNDStateMachineEventHandler.h>

@class MTBedtimeDNDStateMachineInitialState, MTBedtimeDNDStateMachineOffState, MTBedtimeDNDStateMachineWaitingState, NSString;

@interface MTBedtimeDNDStateMachine : MTStateMachine <MTBedtimeDNDStateMachineEventHandler> {

	MTBedtimeDNDStateMachineInitialState* _initialState;
	MTBedtimeDNDStateMachineOffState* _offState;
	MTBedtimeDNDStateMachineWaitingState* _waitingState;

}

@property (nonatomic,readonly) MTBedtimeDNDStateMachineInitialState * initialState;              //@synthesize initialState=_initialState - In the implementation block
@property (nonatomic,readonly) MTBedtimeDNDStateMachineOffState * offState;                      //@synthesize offState=_offState - In the implementation block
@property (nonatomic,readonly) MTBedtimeDNDStateMachineWaitingState * waitingState;              //@synthesize waitingState=_waitingState - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)updateState:(BOOL)arg1 ;
-(MTBedtimeDNDStateMachineInitialState *)initialState;
-(id)currentDate;
-(id)sleepAlarm;
-(void)userWokeUp;
-(id)keepOffUntilDate;
-(BOOL)stateMachine:(id)arg1 disengageBedtimeDNDUserRequested:(BOOL)arg2 ;
-(BOOL)inUserDefinedSleepWindow;
-(void)stateMachine:(id)arg1 keepBedtimeDNDOffUntilDate:(id)arg2 ;
-(id)initWithDelegate:(id)arg1 infoProvider:(id)arg2 ;
-(BOOL)isBedtimeDNDEnabled:(BOOL*)arg1 ;
-(void)bedtimeDNDEnabled:(BOOL)arg1 userRequested:(BOOL)arg2 date:(id)arg3 ;
-(BOOL)stateMachine:(id)arg1 engageBedtimeDNDUntilDate:(id)arg2 userEngaged:(BOOL)arg3 ;
-(void)stateMachineClearKeepBedtimeDNDOff:(id)arg1 ;
-(void)stateMachine:(id)arg1 scheduleUpdateForSecondsFromNow:(double)arg2 ;
-(id)onStateWithBedtimeDNDEndDate:(id)arg1 ;
-(id)userRequestedOffStateWithKeepOffUntilDate:(id)arg1 ;
-(id)stateMachineLog;
-(MTBedtimeDNDStateMachineOffState *)offState;
-(MTBedtimeDNDStateMachineWaitingState *)waitingState;
@end

