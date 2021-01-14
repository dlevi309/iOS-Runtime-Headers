/*
* Generated on Thursday, January 14, 2021 at 2:26:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SleepDaemon.framework/SleepDaemon
*/

@class NSDate, HKSPSleepScheduleModel;


@protocol HDSPSleepModeStateMachineInfoProvider <HKSPStateMachineInfoProvider>
@property (nonatomic,readonly) NSDate * currentDate; 
@property (nonatomic,readonly) HKSPSleepScheduleModel * sleepScheduleModel; 
@property (nonatomic,readonly) unsigned long long sleepScheduleState; 
@property (nonatomic,readonly) BOOL isInDemoMode; 
@required
-(NSDate *)currentDate;
-(HKSPSleepScheduleModel *)sleepScheduleModel;
-(BOOL)isInDemoMode;
-(unsigned long long)sleepScheduleState;

@end

