/*
* Generated on Thursday, January 14, 2021 at 2:26:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SleepDaemon.framework/SleepDaemon
*/


@protocol HDSPWakeUpResultsNotificationStateMachineEventHandler <HKSPStateMachineEventHandler>
@required
-(void)wakeUpDidOccur;
-(void)retryAttemptEventDue;
-(void)protectedHealthDataDidBecomeAvailable;
-(void)queryDidComplete;
-(void)queryDidFailWithError:(id)arg1;
-(void)didPostResultsNotification;
-(void)trackingDelayEventDue;

@end

