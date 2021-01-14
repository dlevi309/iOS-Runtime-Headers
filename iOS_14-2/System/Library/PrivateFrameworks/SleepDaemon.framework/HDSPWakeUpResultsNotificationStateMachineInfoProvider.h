/*
* Generated on Thursday, January 14, 2021 at 2:26:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SleepDaemon.framework/SleepDaemon
*/

@class NSDate;


@protocol HDSPWakeUpResultsNotificationStateMachineInfoProvider <HKSPStateMachineInfoProvider>
@property (nonatomic,readonly) NSDate * currentDate; 
@property (nonatomic,readonly) BOOL isWakeUpResultsNotificationEnabled; 
@required
-(NSDate *)currentDate;
-(BOOL)isWakeUpResultsNotificationEnabled;
-(id)notificationAttemptWindowForWakeUpBeforeDate:(id)arg1;

@end

