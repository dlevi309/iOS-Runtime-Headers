/*
* Generated on Thursday, January 14, 2021 at 2:26:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SleepDaemon.framework/SleepDaemon
*/

#import <Sleep/HKSPPersistentStateMachineState.h>
#import <libobjc.A.dylib/HDSPGoodMorningAlertStateMachineEventHandler.h>

@class HDSPGoodMorningAlertStateMachine, NSString;

@interface HDSPGoodMorningAlertStateMachineState : HKSPPersistentStateMachineState <HDSPGoodMorningAlertStateMachineEventHandler>

@property (nonatomic,__weak,readonly) HDSPGoodMorningAlertStateMachine * stateMachine; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)updateState;
-(void)sleepScheduleStateChangedToBedtime;
-(void)sleepScheduleStateChangedToWakeUp;
-(id)determineNextState;
@end

