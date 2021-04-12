/*
* Generated on Thursday, January 14, 2021 at 2:26:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SleepDaemon.framework/SleepDaemon
*/

#import <Sleep/HKSPPersistentStateMachineState.h>
#import <libobjc.A.dylib/HDSPDoNotDisturbStateMachineEventHandler.h>

@class HDSPDoNotDisturbStateMachine, NSString;

@interface HDSPDoNotDisturbStateMachineState : HKSPPersistentStateMachineState <HDSPDoNotDisturbStateMachineEventHandler>

@property (nonatomic,__weak,readonly) HDSPDoNotDisturbStateMachine * stateMachine; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)userTurnedOffDoNotDisturb;
-(void)updateState;
-(id)determineNextState;
@end

