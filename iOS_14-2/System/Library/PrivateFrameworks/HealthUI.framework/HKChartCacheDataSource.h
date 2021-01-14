/*
* Generated on Thursday, January 14, 2021 at 2:24:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/


@protocol HKChartCacheDataSource <NSObject>
@required
-(/*^block*/id)mappingFunctionForContext:(id)arg1;
-(unsigned long long)calendarUnitForTimeScope:(long long)arg1 displayType:(id)arg2;
-(id)statisticsIntervalForTimeScope:(long long)arg1 displayType:(id)arg2;
-(id)operationForIdentifier:(id)arg1 priorityDelegate:(id)arg2 completion:(/*^block*/id)arg3;

@end

