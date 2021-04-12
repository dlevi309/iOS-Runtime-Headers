/*
* Generated on Thursday, January 14, 2021 at 2:24:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HKHealthQueryChartCacheDataSource.h>

@class HKSampleType;

@interface HKHorizontalSingleLineDataSource : HKHealthQueryChartCacheDataSource {

	HKSampleType* _sampleType;
	/*^block*/id _userInfoCreationBlock;

}

@property (nonatomic,retain) HKSampleType * sampleType;              //@synthesize sampleType=_sampleType - In the implementation block
@property (nonatomic,copy) id userInfoCreationBlock;                 //@synthesize userInfoCreationBlock=_userInfoCreationBlock - In the implementation block
-(id)queryDescription;
-(HKSampleType *)sampleType;
-(void)setSampleType:(HKSampleType *)arg1 ;
-(void)setUserInfoCreationBlock:(id)arg1 ;
-(id)userInfoCreationBlock;
-(id)queriesForStartDate:(id)arg1 endDate:(id)arg2 statisticsInterval:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_handleSamples:(id)arg1 blockStart:(id)arg2 blockEnd:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)applyMarkStyleToPoint:(id)arg1 sample:(id)arg2 ;
@end

