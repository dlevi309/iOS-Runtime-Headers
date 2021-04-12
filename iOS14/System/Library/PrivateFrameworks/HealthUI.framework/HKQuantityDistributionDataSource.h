/*
* Generated on Thursday, January 14, 2021 at 2:24:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HKHealthQueryChartCacheDataSource.h>

@class HKQuantityType, HKUnitPreferenceController, NSPredicate, NSDate;

@interface HKQuantityDistributionDataSource : HKHealthQueryChartCacheDataSource {

	HKQuantityType* _quantityType;
	HKUnitPreferenceController* _unitController;
	double _bucketSize;
	double _bucketAnchor;
	long long _contextStyle;
	NSPredicate* _predicate;
	unsigned long long _options;
	NSDate* _specificStartDate;
	NSDate* _specificEndDate;
	/*^block*/id _userInfoCreationBlock;

}

@property (nonatomic,readonly) HKQuantityType * quantityType;                            //@synthesize quantityType=_quantityType - In the implementation block
@property (nonatomic,readonly) HKUnitPreferenceController * unitController;              //@synthesize unitController=_unitController - In the implementation block
@property (nonatomic,readonly) double bucketSize;                                        //@synthesize bucketSize=_bucketSize - In the implementation block
@property (nonatomic,readonly) double bucketAnchor;                                      //@synthesize bucketAnchor=_bucketAnchor - In the implementation block
@property (nonatomic,readonly) long long contextStyle;                                   //@synthesize contextStyle=_contextStyle - In the implementation block
@property (nonatomic,readonly) NSPredicate * predicate;                                  //@synthesize predicate=_predicate - In the implementation block
@property (nonatomic,readonly) unsigned long long options;                               //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) NSDate * specificStartDate;                               //@synthesize specificStartDate=_specificStartDate - In the implementation block
@property (nonatomic,readonly) NSDate * specificEndDate;                                 //@synthesize specificEndDate=_specificEndDate - In the implementation block
@property (nonatomic,readonly) id userInfoCreationBlock;                                 //@synthesize userInfoCreationBlock=_userInfoCreationBlock - In the implementation block
-(HKUnitPreferenceController *)unitController;
-(NSPredicate *)predicate;
-(HKQuantityType *)quantityType;
-(unsigned long long)options;
-(id)queryDescription;
-(long long)contextStyle;
-(id)initWithQuantityType:(id)arg1 unitController:(id)arg2 healthStore:(id)arg3 contextStyle:(long long)arg4 predicate:(id)arg5 options:(unsigned long long)arg6 baseDisplayType:(id)arg7 specificStartDate:(id)arg8 specificEndDate:(id)arg9 userInfoCreationBlock:(/*^block*/id)arg10 ;
-(id)initWithQuantityType:(id)arg1 unitController:(id)arg2 distributionBucketSize:(id)arg3 distributionAnchor:(id)arg4 healthStore:(id)arg5 contextStyle:(long long)arg6 predicate:(id)arg7 options:(unsigned long long)arg8 baseDisplayType:(id)arg9 specificStartDate:(id)arg10 specificEndDate:(id)arg11 userInfoCreationBlock:(/*^block*/id)arg12 ;
-(id)userInfoCreationBlock;
-(id)queriesForStartDate:(id)arg1 endDate:(id)arg2 statisticsInterval:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)_dataBlockFromHistograms:(id)arg1 ;
-(id)_quickDate:(id)arg1 ;
-(double)bucketSize;
-(double)bucketAnchor;
-(NSDate *)specificStartDate;
-(NSDate *)specificEndDate;
@end

