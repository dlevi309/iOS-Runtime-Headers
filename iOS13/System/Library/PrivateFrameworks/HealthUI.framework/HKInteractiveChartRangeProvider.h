/*
* Generated on Monday, March 1, 2021 at 2:34:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

@class HKValueRange;


@protocol HKInteractiveChartRangeProvider
@property (nonatomic,readonly) HKValueRange * actualVisibleRange; 
@property (nonatomic,readonly) HKValueRange * effectiveVisibleRangeCadence; 
@property (nonatomic,readonly) HKValueRange * effectiveVisibleRangeActive; 
@required
-(HKValueRange *)actualVisibleRange;
-(HKValueRange *)effectiveVisibleRangeActive;
-(HKValueRange *)effectiveVisibleRangeCadence;

@end

