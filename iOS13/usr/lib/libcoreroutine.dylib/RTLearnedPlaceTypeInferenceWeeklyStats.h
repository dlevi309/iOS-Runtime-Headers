/*
* Generated on Monday, March 1, 2021 at 2:34:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libcoreroutine.dylib
*/


@interface RTLearnedPlaceTypeInferenceWeeklyStats : NSObject {

	double _dailyAggregateDwellTimeBetweenDateRangeAverage;
	double _dailyAggregateDwellTimeBetweenDateRangeStandardDeviation;
	long long _totalDailyVisitCount;
	long long _daysWithNonZeroDwellTime;

}

@property (nonatomic,readonly) double dailyAggregateDwellTimeBetweenDateRangeAverage;                        //@synthesize dailyAggregateDwellTimeBetweenDateRangeAverage=_dailyAggregateDwellTimeBetweenDateRangeAverage - In the implementation block
@property (nonatomic,readonly) double dailyAggregateDwellTimeBetweenDateRangeStandardDeviation;              //@synthesize dailyAggregateDwellTimeBetweenDateRangeStandardDeviation=_dailyAggregateDwellTimeBetweenDateRangeStandardDeviation - In the implementation block
@property (nonatomic,readonly) long long totalDailyVisitCount;                                               //@synthesize totalDailyVisitCount=_totalDailyVisitCount - In the implementation block
@property (nonatomic,readonly) long long daysWithNonZeroDwellTime;                                           //@synthesize daysWithNonZeroDwellTime=_daysWithNonZeroDwellTime - In the implementation block
-(id)description;
-(long long)daysWithNonZeroDwellTime;
-(long long)totalDailyVisitCount;
-(double)dailyAggregateDwellTimeBetweenDateRangeAverage;
-(double)dailyAggregateDwellTimeBetweenDateRangeStandardDeviation;
-(id)initWithDailyStats:(id)arg1 ;
@end

