/*
* Generated on Thursday, January 14, 2021 at 2:24:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/


@class HKChartCache, HKDisplayType;

@interface _HKCustomCacheDisplayTypeTuple : NSObject {

	HKChartCache* _chartCache;
	HKDisplayType* _displayType;

}

@property (nonatomic,readonly) HKChartCache * chartCache;                //@synthesize chartCache=_chartCache - In the implementation block
@property (nonatomic,readonly) HKDisplayType * displayType;              //@synthesize displayType=_displayType - In the implementation block
-(HKDisplayType *)displayType;
-(HKChartCache *)chartCache;
-(id)initWithCustomCache:(id)arg1 displayType:(id)arg2 ;
@end

