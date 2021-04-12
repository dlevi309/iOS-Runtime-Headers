/*
* Generated on Thursday, January 14, 2021 at 2:26:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SleepHealthUI.framework/SleepHealthUI
*/

#import <HealthUI/HKInteractiveChartDataFormatter.h>

@class HKHealthStore;

@interface HKSHSleepChartFormatter : HKInteractiveChartDataFormatter {

	HKHealthStore* _healthStore;

}

@property (nonatomic,retain) HKHealthStore * healthStore;              //@synthesize healthStore=_healthStore - In the implementation block
-(HKHealthStore *)healthStore;
-(id)initWithHealthStore:(id)arg1 ;
-(void)setHealthStore:(HKHealthStore *)arg1 ;
-(id)formattedSelectedRangeLabelDataWithChartData:(id)arg1 context:(long long)arg2 ;
-(id)_firstCalendarForSummaries:(id)arg1 ;
-(id)_firstDateForSummaries:(id)arg1 ;
-(id)_rangeDataForInBedDuration:(id)arg1 sleepDuration:(id)arg2 summaryCount:(long long)arg3 valueFont:(id)arg4 unitFont:(id)arg5 ;
-(id)_rangeDataForAverageBedtime:(id)arg1 averageWakeTime:(id)arg2 averageSleepStartTime:(id)arg3 averageSleepEndTime:(id)arg4 calendar:(id)arg5 firstDayStart:(id)arg6 timeFont:(id)arg7 amPmFont:(id)arg8 ;
-(id)_rangeDataForSleepScheduleWithSleepDaySummaries:(id)arg1 timeFont:(id)arg2 amPmFont:(id)arg3 ;
-(id)_rangeDataForDurationGoalWithSleepDaySummaries:(id)arg1 valueFont:(id)arg2 unitFont:(id)arg3 ;
-(id)_lastSleepGoalForSummaries:(id)arg1 ;
-(id)_attributedValueString:(id)arg1 valueFont:(id)arg2 ;
-(id)_localizedSchedulesFromSummaries:(id)arg1 timeFont:(id)arg2 amPmFont:(id)arg3 ;
@end

