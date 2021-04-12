/*
* Generated on Monday, March 1, 2021 at 2:34:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HKHealthQueryChartCacheDataSource.h>

@interface HKSampleTypeCountDataSource : HKHealthQueryChartCacheDataSource {

	/*^block*/id _userInfoCreationBlock;

}

@property (nonatomic,copy) id userInfoCreationBlock;              //@synthesize userInfoCreationBlock=_userInfoCreationBlock - In the implementation block
-(void)setUserInfoCreationBlock:(id)arg1 ;
-(id)queriesForStartDate:(id)arg1 endDate:(id)arg2 statisticsInterval:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)userInfoCreationBlock;
-(void)_handleCounts:(id)arg1 blockStart:(id)arg2 blockEnd:(id)arg3 completion:(/*^block*/id)arg4 ;
@end

