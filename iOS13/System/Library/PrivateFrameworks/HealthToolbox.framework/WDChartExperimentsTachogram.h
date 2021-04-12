/*
* Generated on Monday, March 1, 2021 at 2:34:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
*/

#import <HealthToolbox/HealthToolbox-Structs.h>
#import <HealthUI/HKInteractiveChartViewController.h>

@class HKValueRange;

@interface WDChartExperimentsTachogram : HKInteractiveChartViewController {

	HKValueRange* _computedAxisRange;
	HKValueRange* _requestedVisibleRange;

}

@property (nonatomic,readonly) HKValueRange * computedAxisRange;                  //@synthesize computedAxisRange=_computedAxisRange - In the implementation block
@property (nonatomic,readonly) HKValueRange * requestedVisibleRange;              //@synthesize requestedVisibleRange=_requestedVisibleRange - In the implementation block
-(void)viewDidLoad;
-(HKValueRange *)requestedVisibleRange;
-(CGSize)extentOfData:(id)arg1 ;
-(id)tachogramSeriesWithData:(id)arg1 unit:(id)arg2 maximumY:(double)arg3 axis:(id)arg4 irregularBeatStyle:(BOOL)arg5 ;
-(id)initWithIrregularBeatData:(id)arg1 normalData:(id)arg2 visibleRange:(id)arg3 profile:(id)arg4 ;
-(HKValueRange *)computedAxisRange;
@end

