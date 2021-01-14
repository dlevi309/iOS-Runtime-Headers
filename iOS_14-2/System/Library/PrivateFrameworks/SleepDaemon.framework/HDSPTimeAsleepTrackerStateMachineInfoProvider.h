/*
* Generated on Thursday, January 14, 2021 at 2:26:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SleepDaemon.framework/SleepDaemon
*/

@class NSDate, HKSPSleepScheduleModel;


@protocol HDSPTimeAsleepTrackerStateMachineInfoProvider <HKSPStateMachineInfoProvider>
@property (nonatomic,readonly) NSDate * currentDate; 
@property (nonatomic,readonly) HKSPSleepScheduleModel * sleepScheduleModel; 
@property (nonatomic,readonly) BOOL isCharging; 
@property (nonatomic,readonly) BOOL inUserRequestedSleepMode; 
@property (nonatomic,readonly) BOOL inWakeDetectionWindow; 
@property (nonatomic,readonly) unsigned long long sleepScheduleState; 
@required
-(NSDate *)currentDate;
-(HKSPSleepScheduleModel *)sleepScheduleModel;
-(unsigned long long)sleepScheduleState;
-(BOOL)inUserRequestedSleepMode;
-(BOOL)isCharging;
-(id)trackingWindowAfterDate:(id)arg1;
-(BOOL)inWakeDetectionWindow;

@end

