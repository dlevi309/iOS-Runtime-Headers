/*
* Generated on Thursday, January 14, 2021 at 2:24:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HealthUI-Structs.h>
#import <HealthUI/HKChartAxisDimensionUsingTable.h>

@class HKTimeSinceStartOfDayNumberFormatter;

@interface _HKChartAxisDimensionTableForTimeOfDay : HKChartAxisDimensionUsingTable {

	HKTimeSinceStartOfDayNumberFormatter* _numberFormatter;

}

@property (nonatomic,readonly) HKTimeSinceStartOfDayNumberFormatter * numberFormatter;              //@synthesize numberFormatter=_numberFormatter - In the implementation block
-(HKTimeSinceStartOfDayNumberFormatter *)numberFormatter;
-(id)stringForLocation:(id)arg1 ;
-(id)initWithStepSizeTable:(HKStepSizeTableEntryDefn*)arg1 stepSizeTableSize:(long long)arg2 displayType:(id)arg3 unitController:(id)arg4 ;
@end

