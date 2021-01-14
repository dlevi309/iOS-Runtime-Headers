/*
* Generated on Thursday, January 14, 2021 at 2:26:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SleepDaemon.framework/SleepDaemon
*/

#import <Sleep/HKSPPersistentStateMachineState.h>
#import <libobjc.A.dylib/HDSPSleepModeStateMachineEventHandler.h>

@class HDSPSleepModeStateMachine, NSString;

@interface HDSPSleepModeStateMachineState : HKSPPersistentStateMachineState <HDSPSleepModeStateMachineEventHandler>

@property (nonatomic,__weak,readonly) HDSPSleepModeStateMachine * stateMachine; 
@property (nonatomic,readonly) long long sleepMode; 
@property (nonatomic,readonly) BOOL isUserRequested; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)userEngagedBedtimeMode;
-(void)sleepScheduleStateChangedToDisabledFromState:(unsigned long long)arg1 ;
-(void)sleepScheduleStateChangedToWakeUp:(unsigned long long)arg1 ;
-(void)userDisengagedCurrentMode;
-(long long)sleepMode;
-(void)updateState;
-(BOOL)isUserRequested;
-(void)sleepScheduleStateChangedToBedtimeFromState:(unsigned long long)arg1 ;
-(void)didEnterWithPreviousState:(id)arg1 context:(id)arg2 ;
-(void)sleepScheduleStateChangedToWindDownFromState:(unsigned long long)arg1 ;
-(id)determineNextState;
-(BOOL)isScheduledSleepModeEnabled;
-(BOOL)isSleepModeDuringWindDownEnabled;
@end

