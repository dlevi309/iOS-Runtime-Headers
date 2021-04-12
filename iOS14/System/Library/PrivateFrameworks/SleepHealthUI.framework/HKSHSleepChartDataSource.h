/*
* Generated on Thursday, January 14, 2021 at 2:26:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SleepHealthUI.framework/SleepHealthUI
*/

#import <HealthUI/HKHealthQueryChartCacheDataSource.h>

@class NSCalendar;

@interface HKSHSleepChartDataSource : HKHealthQueryChartCacheDataSource {

	NSCalendar* _calendar;

}

@property (nonatomic,retain) NSCalendar * calendar;              //@synthesize calendar=_calendar - In the implementation block
-(void)setCalendar:(NSCalendar *)arg1 ;
-(NSCalendar *)calendar;
-(id)queryDescription;
-(/*^block*/id)_mappingFunctionForDurationChartWithContext:(id)arg1 ;
-(/*^block*/id)_mappingFunctionForConsistencyChartWithContext:(id)arg1 ;
-(id)queriesForStartDate:(id)arg1 endDate:(id)arg2 statisticsInterval:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(/*^block*/id)mappingFunctionForContext:(id)arg1 ;
-(id)initWithHealthStore:(id)arg1 representativeDisplayType:(id)arg2 calendar:(id)arg3 ;
-(id)_sleepDurationGoalFromQuantity:(id)arg1 ;
-(id)_sleepScheduleForSummary:(id)arg1 ;
-(id)_secondsFromStartDate:(id)arg1 dateComponents:(id)arg2 ;
@end

