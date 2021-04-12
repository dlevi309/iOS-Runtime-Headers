/*
* Generated on Thursday, January 14, 2021 at 2:26:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SleepDaemon.framework/SleepDaemon
*/

#import <Sleep/HKSPPersistentStateMachineState.h>
#import <libobjc.A.dylib/HDSPWakeUpResultsNotificationStateMachineEventHandler.h>

@class HDSPWakeUpResultsNotificationStateMachine, NSString;

@interface HDSPWakeUpResultsNotificationStateMachineState : HKSPPersistentStateMachineState <HDSPWakeUpResultsNotificationStateMachineEventHandler>

@property (nonatomic,__weak,readonly) HDSPWakeUpResultsNotificationStateMachine * stateMachine; 
@property (nonatomic,readonly) id<HDSPWakeUpResultsNotificationStateMachineInfoProvider> infoProvider; 
@property (getter=isNotificationEnabled,nonatomic,readonly) BOOL notificationEnabled; 
@property (getter=isStateExpired,nonatomic,readonly) BOOL stateExpired; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isNotificationEnabled;
-(void)wakeUpDidOccur;
-(id<HDSPWakeUpResultsNotificationStateMachineInfoProvider>)infoProvider;
-(void)retryAttemptEventDue;
-(void)protectedHealthDataDidBecomeAvailable;
-(void)updateState;
-(void)queryDidComplete;
-(void)queryDidFailWithError:(id)arg1 ;
-(void)didPostResultsNotification;
-(void)trackingDelayEventDue;
-(BOOL)isStateExpired;
@end

