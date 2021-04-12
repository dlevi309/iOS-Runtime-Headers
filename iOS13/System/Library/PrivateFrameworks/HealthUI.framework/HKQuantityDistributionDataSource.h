/*
* Generated on Monday, March 1, 2021 at 2:34:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HKHealthQueryChartCacheDataSource.h>

@class HKQuantityType, HKUnit, NSPredicate, NSDate;

@interface HKQuantityDistributionDataSource : HKHealthQueryChartCacheDataSource {

	HKQuantityType* _quantityType;
	HKUnit* _unit;
	long long _contextStyle;
	NSPredicate* _predicate;
	unsigned long long _options;
	NSDate* _specificStartDate;
	NSDate* _specificEndDate;
	/*^block*/id _userInfoCreationBlock;

}

@property (nonatomic,readonly) HKQuantityType * quantityType;              //@synthesize quantityType=_quantityType - In the implementation block
@property (nonatomic,readonly) HKUnit * unit;                              //@synthesize unit=_unit - In the implementation block
@property (nonatomic,readonly) long long contextStyle;                     //@synthesize contextStyle=_contextStyle - In the implementation block
@property (nonatomic,readonly) NSPredicate * predicate;                    //@synthesize predicate=_predicate - In the implementation block
@property (nonatomic,readonly) unsigned long long options;                 //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) NSDate * specificStartDate;                 //@synthesize specificStartDate=_specificStartDate - In the implementation block
@property (nonatomic,readonly) NSDate * specificEndDate;                   //@synthesize specificEndDate=_specificEndDate - In the implementation block
@property (nonatomic,readonly) id userInfoCreationBlock;                   //@synthesize userInfoCreationBlock=_userInfoCreationBlock - In the implementation block
-(unsigned long long)options;
-(NSPredicate *)predicate;
-(HKUnit *)unit;
-(HKQuantityType *)quantityType;
-(long long)contextStyle;
-(id)queriesForStartDate:(id)arg1 endDate:(id)arg2 statisticsInterval:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)userInfoCreationBlock;
-(id)initWithQuantityType:(id)arg1 unit:(id)arg2 healthStore:(id)arg3 contextStyle:(long long)arg4 predicate:(id)arg5 options:(unsigned long long)arg6 baseDisplayType:(id)arg7 specificStartDate:(id)arg8 specificEndDate:(id)arg9 userInfoCreationBlock:(/*^block*/id)arg10 ;
-(id)_quickDate:(id)arg1 ;
-(id)_dataBlockFromHistograms:(id)arg1 ;
-(NSDate *)specificStartDate;
-(NSDate *)specificEndDate;
@end

