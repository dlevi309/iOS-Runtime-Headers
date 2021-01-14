/*
* Generated on Thursday, January 14, 2021 at 2:26:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SleepDaemon.framework/SleepDaemon
*/

@class NSDate, HKSPSleepScheduleModel;


@protocol HDSPDoNotDisturbStateMachineInfoProvider <HKSPStateMachineInfoProvider>
@property (nonatomic,readonly) NSDate * currentDate; 
@property (nonatomic,readonly) HKSPSleepScheduleModel * sleepScheduleModel; 
@property (nonatomic,readonly) long long sleepMode; 
@property (nonatomic,readonly) unsigned long long sleepScheduleState; 
@required
-(NSDate *)currentDate;
-(HKSPSleepScheduleModel *)sleepScheduleModel;
-(unsigned long long)sleepScheduleState;
-(long long)sleepMode;

@end

