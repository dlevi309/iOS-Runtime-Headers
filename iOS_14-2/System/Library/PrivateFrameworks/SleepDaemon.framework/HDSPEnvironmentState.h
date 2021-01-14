/*
* Generated on Thursday, January 14, 2021 at 2:26:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SleepDaemon.framework/SleepDaemon
*/

#import <Sleep/HKSPStateMachineState.h>
#import <libobjc.A.dylib/HDSPEnvironmentStateMachineEventHandler.h>

@class HDSPEnvironmentStateMachine, NSString;

@interface HDSPEnvironmentState : HKSPStateMachineState <HDSPEnvironmentStateMachineEventHandler>

@property (nonatomic,__weak,readonly) HDSPEnvironmentStateMachine * stateMachine; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)systemDidBecomeReady;
-(void)dataMigrationDidComplete;
@end

