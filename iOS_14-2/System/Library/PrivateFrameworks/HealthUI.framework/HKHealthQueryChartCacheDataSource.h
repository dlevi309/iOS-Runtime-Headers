/*
* Generated on Thursday, January 14, 2021 at 2:24:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)queryDescription;
-(id)initWithDisplayType:(id)arg1 healthStore:(id)arg2 ;
-(id)queriesForStartDate:(id)arg1 endDate:(id)arg2 statisticsInterval:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(/*^block*/id)mappingFunctionForContext:(id)arg1 ;
-(unsigned long long)calendarUnitForTimeScope:(long long)arg1 displayType:(id)arg2 ;
-(id)statisticsIntervalForTimeScope:(long long)arg1 displayType:(id)arg2 ;
-(id)_buildDescriptionFromStartDate:(id)arg1 endDate:(id)arg2 statisticsInterval:(id)arg3 ;
-(id)operationForIdentifier:(id)arg1 priorityDelegate:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

