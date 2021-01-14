/*
* Generated on Thursday, January 14, 2021 at 2:24:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

@class HKValueRange;


@protocol HKInteractiveChartRangeProvider
@property (nonatomic,readonly) HKValueRange * actualVisibleRange; 
@property (nonatomic,readonly) HKValueRange * effectiveVisibleRangeCadence; 
@property (nonatomic,readonly) HKValueRange * effectiveVisibleRangeActive; 
@required
-(HKValueRange *)actualVisibleRange;
-(HKValueRange *)effectiveVisibleRangeCadence;
-(HKValueRange *)effectiveVisibleRangeActive;

@end

