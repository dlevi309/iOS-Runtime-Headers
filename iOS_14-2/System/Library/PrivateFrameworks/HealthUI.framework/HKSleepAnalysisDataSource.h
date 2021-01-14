/*
* Generated on Thursday, January 14, 2021 at 2:24:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HKHealthQueryChartCacheDataSource.h>

@interface HKSleepAnalysisDataSource : HKHealthQueryChartCacheDataSource {

	/*^block*/id _userInfoCreationBlock;

}

@property (nonatomic,copy) id userInfoCreationBlock;              //@synthesize userInfoCreationBlock=_userInfoCreationBlock - In the implementation block
-(id)queryDescription;
-(void)setUserInfoCreationBlock:(id)arg1 ;
-(/*^block*/id)_mappingFunctionForDurationChartWithContext:(id)arg1 ;
-(/*^block*/id)_mappingFunctionForConsistencyChartWithContext:(id)arg1 ;
-(id)userInfoCreationBlock;
-(id)queriesForStartDate:(id)arg1 endDate:(id)arg2 statisticsInterval:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(/*^block*/id)mappingFunctionForContext:(id)arg1 ;
@end

