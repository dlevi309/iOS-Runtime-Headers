/*
* Generated on Monday, March 1, 2021 at 2:34:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
*/


@protocol HKInteractiveChartViewObserver <NSObject>
@optional
-(void)didUpdateFromDateZoom:(long long)arg1 toDateZoom:(long long)arg2 newVisibleRange:(id)arg3;
-(void)didUpdateVisibleValueRange:(id)arg1 changeContext:(long long)arg2;
-(void)configureDisplayTypes:(id)arg1 timeScope:(long long)arg2 stackOffset:(long long)arg3;
-(void)newDataArrivedWithValueRange:(id)arg1;

@end

