/*
* Generated on Thursday, January 14, 2021 at 2:26:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SleepDaemon.framework/SleepDaemon
*/

@class HKSPSleepScheduleModel, HKSPSleepScheduleOccurrence, NSDate;


@protocol HDSPSleepScheduleStateCoordinatorStateMachineInfoProvider <HKSPStateMachineInfoProvider>
@property (nonatomic,readonly) BOOL isAppleWatch; 
@property (nonatomic,readonly) BOOL sleepFeaturesEnabled; 
@property (nonatomic,readonly) HKSPSleepScheduleModel * sleepScheduleModel; 
@property (nonatomic,readonly) HKSPSleepScheduleOccurrence * previousOccurrence; 
@property (nonatomic,readonly) NSDate * currentDate; 
@required
-(NSDate *)currentDate;
-(HKSPSleepScheduleModel *)sleepScheduleModel;
-(HKSPSleepScheduleOccurrence *)previousOccurrence;
-(BOOL)isAppleWatch;
-(BOOL)sleepFeaturesEnabled;

@end

