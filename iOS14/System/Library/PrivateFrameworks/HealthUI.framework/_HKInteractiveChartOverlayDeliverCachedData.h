/*
* Generated on Thursday, January 14, 2021 at 2:24:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/


@class HKInteractiveChartOverlayViewController, HKGraphSeriesDataSource, NSDate;

@interface _HKInteractiveChartOverlayDeliverCachedData : NSObject {

	HKInteractiveChartOverlayViewController* _overlayController;
	HKGraphSeriesDataSource* _dataSource;
	id _graphSeriesContext;
	long long _timeScope;
	NSDate* _startDate;
	NSDate* _endDate;
	/*^block*/id _completion;

}

@property (assign,nonatomic,__weak) HKInteractiveChartOverlayViewController * overlayController;              //@synthesize overlayController=_overlayController - In the implementation block
@property (nonatomic,readonly) HKGraphSeriesDataSource * dataSource;                                          //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,readonly) id graphSeriesContext;                                                         //@synthesize graphSeriesContext=_graphSeriesContext - In the implementation block
@property (nonatomic,readonly) long long timeScope;                                                           //@synthesize timeScope=_timeScope - In the implementation block
@property (nonatomic,readonly) NSDate * startDate;                                                            //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,readonly) NSDate * endDate;                                                              //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,copy) id completion;                                                                     //@synthesize completion=_completion - In the implementation block
-(NSDate *)endDate;
-(void)setCompletion:(id)arg1 ;
-(NSDate *)startDate;
-(long long)timeScope;
-(HKGraphSeriesDataSource *)dataSource;
-(id)completion;
-(HKInteractiveChartOverlayViewController *)overlayController;
-(void)setOverlayController:(HKInteractiveChartOverlayViewController *)arg1 ;
-(id)initWithOverlayController:(id)arg1 dataSource:(id)arg2 graphSeriesContext:(id)arg3 timeScope:(long long)arg4 startDate:(id)arg5 endDate:(id)arg6 completion:(/*^block*/id)arg7 ;
-(BOOL)deliverDataToCompletion;
-(id)graphSeriesContext;
@end

