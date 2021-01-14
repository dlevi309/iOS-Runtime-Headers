/*
* Generated on Thursday, January 14, 2021 at 2:24:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/


@class HKInteractiveChartOverlayViewController, NSMutableArray;

@interface _HKInteractiveChartOverlayWaitForCacheData : NSObject {

	HKInteractiveChartOverlayViewController* _overlayController;
	NSMutableArray* _waitForDataSources;

}

@property (assign,nonatomic,__weak) HKInteractiveChartOverlayViewController * overlayController;              //@synthesize overlayController=_overlayController - In the implementation block
@property (nonatomic,retain) NSMutableArray * waitForDataSources;                                             //@synthesize waitForDataSources=_waitForDataSources - In the implementation block
-(HKInteractiveChartOverlayViewController *)overlayController;
-(void)setOverlayController:(HKInteractiveChartOverlayViewController *)arg1 ;
-(id)initWithOverlayController:(id)arg1 ;
-(void)addWaitForDataSource:(id)arg1 graphSeriesContext:(id)arg2 timeScope:(long long)arg3 startDate:(id)arg4 endDate:(id)arg5 priorityDelegate:(id)arg6 completion:(/*^block*/id)arg7 ;
-(id)_findDataSource:(id)arg1 ;
-(NSMutableArray *)waitForDataSources;
-(void)removeWaitForDataSource:(id)arg1 ;
-(void)setWaitForDataSources:(NSMutableArray *)arg1 ;
@end

