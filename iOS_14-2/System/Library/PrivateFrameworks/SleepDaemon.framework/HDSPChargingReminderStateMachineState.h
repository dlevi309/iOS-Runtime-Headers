/*
* Generated on Thursday, January 14, 2021 at 2:26:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SleepDaemon.framework/SleepDaemon
*/

#import <Sleep/HKSPPersistentStateMachineState.h>
#import <libobjc.A.dylib/HDSPChargingReminderStateMachineEventHandler.h>

@class HDSPChargingReminderStateMachine, NSString;

@interface HDSPChargingReminderStateMachineState : HKSPPersistentStateMachineState <HDSPChargingReminderStateMachineEventHandler>

@property (nonatomic,__weak,readonly) HDSPChargingReminderStateMachine * stateMachine; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)updateState;
-(id)determineNextState;
-(void)batteryMonitoringEventDue;
-(void)batteryLevelChanged:(float)arg1 ;
-(BOOL)isChargingReminderDisabled;
-(BOOL)_inMonitoringWindow;
@end

