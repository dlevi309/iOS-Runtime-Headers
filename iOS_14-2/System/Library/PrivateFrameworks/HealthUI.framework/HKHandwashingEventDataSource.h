/*
* Generated on Thursday, January 14, 2021 at 2:24:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HKHealthQueryChartCacheDataSource.h>

@interface HKHandwashingEventDataSource : HKHealthQueryChartCacheDataSource {

	/*^block*/id _userInfoCreationBlock;
	long long _timeScope;

}

@property (nonatomic,copy) id userInfoCreationBlock;              //@synthesize userInfoCreationBlock=_userInfoCreationBlock - In the implementation block
@property (assign,nonatomic) long long timeScope;                 //@synthesize timeScope=_timeScope - In the implementation block
+(double)durationForCompleteSample;
-(void)setTimeScope:(long long)arg1 ;
-(long long)timeScope;
-(id)queryDescription;
-(void)setUserInfoCreationBlock:(id)arg1 ;
-(id)initWithDisplayType:(id)arg1 healthStore:(id)arg2 timeScope:(long long)arg3 ;
-(id)userInfoCreationBlock;
-(id)queriesForStartDate:(id)arg1 endDate:(id)arg2 statisticsInterval:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_handleSamples:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 statisticsInterval:(id)arg4 completion:(/*^block*/id)arg5 ;
-(id)chartPointsForSamples:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 statisticsInterval:(id)arg4 ;
-(id)_dailyAverageChartPointForObjects:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 averageInterval:(unsigned long long)arg4 ;
-(id)_averageDurationChartPointForObjects:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 ;
-(double)durationForObject:(id)arg1 ;
-(BOOL)doesDurationMeetGoal:(double)arg1 ;
@end

