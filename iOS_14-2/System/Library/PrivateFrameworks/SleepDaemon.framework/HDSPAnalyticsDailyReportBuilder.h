/*
* Generated on Thursday, January 14, 2021 at 2:26:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SleepDaemon.framework/SleepDaemon
*/


#import <SleepDaemon/SleepDaemon-Structs.h>
@class HDSPEnvironment, NSArray;

@interface HDSPAnalyticsDailyReportBuilder : NSObject {

	HDSPEnvironment* _environment;
	NSArray* _daySummaries;
	SCD_Struct_HD2 _morningIndexRange;

}

@property (nonatomic,__weak,readonly) HDSPEnvironment * environment;              //@synthesize environment=_environment - In the implementation block
@property (nonatomic,readonly) NSArray * daySummaries;                            //@synthesize daySummaries=_daySummaries - In the implementation block
@property (nonatomic,readonly) SCD_Struct_HD2 morningIndexRange;                  //@synthesize morningIndexRange=_morningIndexRange - In the implementation block
-(id)healthStore;
-(id)sleepSchedule;
-(id)currentDate;
-(id)_biologicalSex;
-(HDSPEnvironment *)environment;
-(id)analyticsStore;
-(id)sleepSettings;
-(NSArray *)daySummaries;
-(SCD_Struct_HD2)morningIndexRange;
-(id)initWithEnvironment:(id)arg1 daySummaries:(id)arg2 morningIndexRange:(SCD_Struct_HD2)arg3 ;
-(id)buildReports;
-(id)_dailyReportEvent;
-(id)_windDownEvents;
-(id)_userAgeForCurrentDate:(id)arg1 ;
-(id)_weeksSinceOnboardDate:(id)arg1 currentDate:(id)arg2 calendar:(id)arg3 ;
-(BOOL)_didInteractWithWindDownActionsWithinLastTwoDays;
-(BOOL)_changedSchedule:(id)arg1 withinNumberOfDays:(unsigned long long)arg2 currentDate:(id)arg3 calendar:(id)arg4 ;
@end

