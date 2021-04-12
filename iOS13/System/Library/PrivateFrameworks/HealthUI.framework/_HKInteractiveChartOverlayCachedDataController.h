/*
* Generated on Monday, March 1, 2021 at 2:34:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <libobjc.A.dylib/HKGraphSeriesDataSourceDelegate.h>

@class HKInteractiveChartOverlayViewController, HKGraphSeriesDataSource, NSDate, NSString;

@interface _HKInteractiveChartOverlayCachedDataController : NSObject <HKGraphSeriesDataSourceDelegate> {

	HKInteractiveChartOverlayViewController* _overlayViewController;
	HKGraphSeriesDataSource* _dataSource;
	long long _timeScope;
	NSDate* _startDate;
	NSDate* _endDate;
	/*^block*/id _completion;

}

@property (assign,nonatomic,__weak) HKInteractiveChartOverlayViewController * overlayViewController;              //@synthesize overlayViewController=_overlayViewController - In the implementation block
@property (nonatomic,retain) HKGraphSeriesDataSource * dataSource;                                                //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic) long long timeScope;                                                                 //@synthesize timeScope=_timeScope - In the implementation block
@property (nonatomic,retain) NSDate * startDate;                                                                  //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,retain) NSDate * endDate;                                                                    //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,copy) id completion;                                                                         //@synthesize completion=_completion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSDate *)startDate;
-(NSDate *)endDate;
-(void)setStartDate:(NSDate *)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(void)setCompletion:(id)arg1 ;
-(id)completion;
-(HKGraphSeriesDataSource *)dataSource;
-(void)setDataSource:(HKGraphSeriesDataSource *)arg1 ;
-(HKInteractiveChartOverlayViewController *)overlayViewController;
-(void)setTimeScope:(long long)arg1 ;
-(long long)timeScope;
-(void)setOverlayViewController:(HKInteractiveChartOverlayViewController *)arg1 ;
-(void)dataSourceDidUpdateCache:(id)arg1 ;
-(id)initWithOverlayViewController:(id)arg1 dataSource:(id)arg2 timeScope:(long long)arg3 startDate:(id)arg4 endDate:(id)arg5 completion:(/*^block*/id)arg6 ;
-(void)requestAndWaitForData;
@end

