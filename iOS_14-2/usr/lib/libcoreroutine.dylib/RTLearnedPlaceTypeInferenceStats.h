/*
* Generated on Thursday, January 14, 2021 at 2:26:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libcoreroutine.dylib
*/


@class NSArray;

@interface RTLearnedPlaceTypeInferenceStats : NSObject {

	NSArray* _weeklyStats;
	double _weeklyAggregateDwellTimeBetweenDateRangeAverage;
	double _weeklyAggregateDwellTimeBetweenDateRangeStandardDeviation;
	double _weeklyTotalDailyVisitCountAverage;
	double _weeklyDaysWithNonZeroDwellTimeAverage;
	long long _totalDailyVisitCount;
	long long _weeksWithNonZeroDwellTime;
	double _topMedianDwellTime;

}

@property (nonatomic,readonly) NSArray * weeklyStats;                                                         //@synthesize weeklyStats=_weeklyStats - In the implementation block
@property (nonatomic,readonly) double weeklyAggregateDwellTimeBetweenDateRangeAverage;                        //@synthesize weeklyAggregateDwellTimeBetweenDateRangeAverage=_weeklyAggregateDwellTimeBetweenDateRangeAverage - In the implementation block
@property (nonatomic,readonly) double weeklyAggregateDwellTimeBetweenDateRangeStandardDeviation;              //@synthesize weeklyAggregateDwellTimeBetweenDateRangeStandardDeviation=_weeklyAggregateDwellTimeBetweenDateRangeStandardDeviation - In the implementation block
@property (nonatomic,readonly) double weeklyTotalDailyVisitCountAverage;                                      //@synthesize weeklyTotalDailyVisitCountAverage=_weeklyTotalDailyVisitCountAverage - In the implementation block
@property (nonatomic,readonly) double weeklyDaysWithNonZeroDwellTimeAverage;                                  //@synthesize weeklyDaysWithNonZeroDwellTimeAverage=_weeklyDaysWithNonZeroDwellTimeAverage - In the implementation block
@property (nonatomic,readonly) long long totalDailyVisitCount;                                                //@synthesize totalDailyVisitCount=_totalDailyVisitCount - In the implementation block
@property (nonatomic,readonly) long long weeksWithNonZeroDwellTime;                                           //@synthesize weeksWithNonZeroDwellTime=_weeksWithNonZeroDwellTime - In the implementation block
@property (nonatomic,readonly) double topMedianDwellTime;                                                     //@synthesize topMedianDwellTime=_topMedianDwellTime - In the implementation block
-(id)description;
-(double)weeklyAggregateDwellTimeBetweenDateRangeAverage;
-(double)weeklyTotalDailyVisitCountAverage;
-(double)weeklyDaysWithNonZeroDwellTimeAverage;
-(double)topMedianDwellTime;
-(long long)weeksWithNonZeroDwellTime;
-(long long)totalDailyVisitCount;
-(NSArray *)weeklyStats;
-(double)weeklyAggregateDwellTimeBetweenDateRangeStandardDeviation;
-(id)initWithWeeklyStats:(id)arg1 topMedianDwellTime:(double)arg2 ;
@end

