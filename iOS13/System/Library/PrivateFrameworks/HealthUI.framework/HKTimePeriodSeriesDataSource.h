/*
* Generated on Monday, March 1, 2021 at 2:34:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HKHealthQueryChartCacheDataSource.h>

@class HKSampleType, NSPredicate;

@interface HKTimePeriodSeriesDataSource : HKHealthQueryChartCacheDataSource {

	HKSampleType* _sampleType;
	NSPredicate* _queryPredicate;
	/*^block*/id _userInfoCreationBlock;

}

@property (nonatomic,retain) HKSampleType * sampleType;                 //@synthesize sampleType=_sampleType - In the implementation block
@property (nonatomic,retain) NSPredicate * queryPredicate;              //@synthesize queryPredicate=_queryPredicate - In the implementation block
@property (nonatomic,copy) id userInfoCreationBlock;                    //@synthesize userInfoCreationBlock=_userInfoCreationBlock - In the implementation block
-(HKSampleType *)sampleType;
-(void)setSampleType:(HKSampleType *)arg1 ;
-(void)setQueryPredicate:(NSPredicate *)arg1 ;
-(NSPredicate *)queryPredicate;
-(void)setUserInfoCreationBlock:(id)arg1 ;
-(void)_handleSamples:(id)arg1 blockStart:(id)arg2 blockEnd:(id)arg3 intervalComponents:(id)arg4 completion:(/*^block*/id)arg5 ;
-(id)queriesForStartDate:(id)arg1 endDate:(id)arg2 statisticsInterval:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)userInfoCreationBlock;
-(/*^block*/id)_startOfDayTransform;
-(id)_calculateTotalDurationFromSamples:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 interval:(id)arg4 intervalOut:(id*)arg5 intervelCountsOut:(id*)arg6 ;
@end

