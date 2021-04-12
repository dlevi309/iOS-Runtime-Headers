/*
* Generated on Monday, March 1, 2021 at 2:34:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/


@protocol HKChartCacheDataSource <NSObject>
@required
-(unsigned long long)calendarUnitForTimeScope:(long long)arg1 displayType:(id)arg2;
-(id)statisticsIntervalForTimeScope:(long long)arg1 displayType:(id)arg2;
-(id)operationForIdentifier:(id)arg1 completion:(/*^block*/id)arg2;
-(/*^block*/id)mappingFunctionForContext:(id)arg1;

@end

