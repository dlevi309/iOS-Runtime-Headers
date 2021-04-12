/*
* Generated on Monday, March 1, 2021 at 2:34:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
*/

#import <HealthUI/HKInteractiveChartViewController.h>

@class HKValueRange;

@interface WDChartExperimentsScalarBarChart : HKInteractiveChartViewController {

	HKValueRange* _requestedAxisRange;
	HKValueRange* _requestedVisibleRange;

}

@property (nonatomic,readonly) HKValueRange * requestedAxisRange;                 //@synthesize requestedAxisRange=_requestedAxisRange - In the implementation block
@property (nonatomic,readonly) HKValueRange * requestedVisibleRange;              //@synthesize requestedVisibleRange=_requestedVisibleRange - In the implementation block
-(void)viewDidLoad;
-(id)_buildSeriesWithColor:(id)arg1 minimumYAxisRange:(id)arg2 ;
-(id)initWithTitle:(id)arg1 unitForYAxis:(id)arg2 data:(id)arg3 axisRange:(id)arg4 visibleRange:(id)arg5 minimumYAxisRange:(id)arg6 color:(id)arg7 profile:(id)arg8 ;
-(HKValueRange *)requestedAxisRange;
-(HKValueRange *)requestedVisibleRange;
@end

