/*
* Generated on Thursday, January 14, 2021 at 2:26:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SleepDaemon.framework/SleepDaemon
*/

#import <Sleep/HKSPPersistentStateMachineState.h>
#import <libobjc.A.dylib/HDSPWakeDetectionStateMachineEventHandler.h>

@class HDSPWakeDetectionStateMachine, NSString;

@interface HDSPWakeDetectionStateMachineState : HKSPPersistentStateMachineState <HDSPWakeDetectionStateMachineEventHandler>

@property (nonatomic,__weak,readonly) HDSPWakeDetectionStateMachine * stateMachine; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)updateState;
-(id)determineNextState;
-(BOOL)isWakeDetectionDisabled;
-(BOOL)_inDetectionWindow;
-(void)wakeDetectionEventDue;
-(void)wakeupEventDetected:(id)arg1 ;
@end

