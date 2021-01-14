/*
* Generated on Thursday, January 14, 2021 at 2:26:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SleepDaemon.framework/SleepDaemon
*/

#import <Sleep/HKSPPersistentStateMachineState.h>
#import <libobjc.A.dylib/HDSPSleepLockScreenStateMachineEventHandler.h>

@class HDSPSleepLockScreenStateMachine, NSString;

@interface HDSPSleepLockScreenStateMachineState : HKSPPersistentStateMachineState <HDSPSleepLockScreenStateMachineEventHandler>

@property (nonatomic,__weak,readonly) HDSPSleepLockScreenStateMachine * stateMachine; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)presentAlertForGoodMorning;
-(void)dismissAlertForGoodMorning;
-(void)environmentDidBecomeReady;
-(void)updateState;
-(void)sleepModeDidChange:(long long)arg1 reason:(unsigned long long)arg2 ;
-(void)didEnterWithPreviousState:(id)arg1 context:(id)arg2 ;
-(long long)sleepLockScreenState;
-(void)_updateStateForSleepMode:(long long)arg1 reason:(unsigned long long)arg2 context:(id)arg3 ;
-(BOOL)isSleepLockScreenDisabled;
@end

