/*
* Generated on Monday, March 1, 2021 at 2:34:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <libobjc.A.dylib/HKChartCacheDataSource.h>

@class HKHealthStore, HKDisplayType, NSString;

@interface HKHealthQueryChartCacheDataSource : NSObject <HKChartCacheDataSource> {

	HKHealthStore* _healthStore;
	HKDisplayType* _displayType;

}

@property (nonatomic,readonly) HKDisplayType * displayType;              //@synthesize displayType=_displayType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(HKDisplayType *)displayType;
-(id)initWithDisplayType:(id)arg1 healthStore:(id)arg2 ;
-(id)queriesForStartDate:(id)arg1 endDate:(id)arg2 statisticsInterval:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(unsigned long long)calendarUnitForTimeScope:(long long)arg1 displayType:(id)arg2 ;
-(id)statisticsIntervalForTimeScope:(long long)arg1 displayType:(id)arg2 ;
-(id)operationForIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(/*^block*/id)mappingFunctionForContext:(id)arg1 ;
@end

