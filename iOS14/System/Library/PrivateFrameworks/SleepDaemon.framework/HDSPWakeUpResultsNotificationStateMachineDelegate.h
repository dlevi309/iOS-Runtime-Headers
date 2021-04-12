/*
* Generated on Thursday, January 14, 2021 at 2:26:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SleepDaemon.framework/SleepDaemon
*/


@protocol HDSPWakeUpResultsNotificationStateMachineDelegate <HKSPStateMachineDelegate>
@required
-(void)unscheduleTrackingDelay;
-(void)executeQuery;
-(void)stopObservingProtectedHealthDataAvailability;
-(void)scheduleTrackingDelay;
-(void)startObservingProtectedHealthDataAvailability;
-(void)postResultsNotification;
-(void)scheduleRetryAttempt;
-(void)unscheduleRetryAttempt;

@end

