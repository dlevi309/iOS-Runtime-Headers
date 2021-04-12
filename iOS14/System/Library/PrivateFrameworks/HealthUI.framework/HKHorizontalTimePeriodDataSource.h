/*
* Generated on Thursday, January 14, 2021 at 2:24:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HKHealthQueryChartCacheDataSource.h>

@class HKSampleType, NSArray;

@interface HKHorizontalTimePeriodDataSource : HKHealthQueryChartCacheDataSource {

	HKSampleType* _sampleType;
	/*^block*/id _userInfoCreationBlock;
	NSArray* _valueOrder;

}

@property (nonatomic,retain) HKSampleType * sampleType;              //@synthesize sampleType=_sampleType - In the implementation block
@property (nonatomic,copy) id userInfoCreationBlock;                 //@synthesize userInfoCreationBlock=_userInfoCreationBlock - In the implementation block
@property (nonatomic,retain) NSArray * valueOrder;                   //@synthesize valueOrder=_valueOrder - In the implementation block
-(id)queryDescription;
-(HKSampleType *)sampleType;
-(void)setSampleType:(HKSampleType *)arg1 ;
-(void)setUserInfoCreationBlock:(id)arg1 ;
-(void)setValueOrder:(NSArray *)arg1 ;
-(id)userInfoCreationBlock;
-(id)queriesForStartDate:(id)arg1 endDate:(id)arg2 statisticsInterval:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_handleSamples:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_organizeSamplesByValueAndDateInterval:(id)arg1 ;
-(NSArray *)valueOrder;
@end

