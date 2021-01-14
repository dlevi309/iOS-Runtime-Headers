/*
* Generated on Thursday, January 14, 2021 at 2:24:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <libobjc.A.dylib/HKGraphSeriesDataSourceDelegate.h>

@protocol HKGraphSeriesDataSourceDelegate;
@class HKGraphSeriesDataSource, HKInteractiveChartOverlayViewController, _HKInteractiveChartOverlayWaitForCacheData, NSMutableArray, NSString;

@interface _HKInteractiveChartOverlayWaitForDataSource : NSObject <HKGraphSeriesDataSourceDelegate> {

	HKGraphSeriesDataSource* _dataSource;
	HKInteractiveChartOverlayViewController* _overlayController;
	_HKInteractiveChartOverlayWaitForCacheData* _parent;
	id<HKGraphSeriesDataSourceDelegate> _previousDelegate;
	NSMutableArray* _deliveries;

}

@property (assign,nonatomic,__weak) HKInteractiveChartOverlayViewController * overlayController;              //@synthesize overlayController=_overlayController - In the implementation block
@property (assign,nonatomic,__weak) _HKInteractiveChartOverlayWaitForCacheData * parent;                      //@synthesize parent=_parent - In the implementation block
@property (nonatomic,retain) id<HKGraphSeriesDataSourceDelegate> previousDelegate;                            //@synthesize previousDelegate=_previousDelegate - In the implementation block
@property (nonatomic,retain) NSMutableArray * deliveries;                                                     //@synthesize deliveries=_deliveries - In the implementation block
@property (nonatomic,readonly) HKGraphSeriesDataSource * dataSource;                                          //@synthesize dataSource=_dataSource - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(_HKInteractiveChartOverlayWaitForCacheData *)parent;
-(HKGraphSeriesDataSource *)dataSource;
-(void)setParent:(_HKInteractiveChartOverlayWaitForCacheData *)arg1 ;
-(HKInteractiveChartOverlayViewController *)overlayController;
-(void)setOverlayController:(HKInteractiveChartOverlayViewController *)arg1 ;
-(void)dataSourceDidUpdateCache:(id)arg1 ;
-(id)initWithOverlayController:(id)arg1 dataSource:(id)arg2 parent:(id)arg3 ;
-(void)addWaitForDataGraphSeriesContext:(id)arg1 timeScope:(long long)arg2 startDate:(id)arg3 endDate:(id)arg4 priorityDelegate:(id)arg5 completion:(/*^block*/id)arg6 ;
-(void)setDeliveries:(NSMutableArray *)arg1 ;
-(void)setPreviousDelegate:(id<HKGraphSeriesDataSourceDelegate>)arg1 ;
-(NSMutableArray *)deliveries;
-(void)_requestDataForTimeScope:(long long)arg1 startDate:(id)arg2 endDate:(id)arg3 priorityDelegate:(id)arg4 ;
-(id<HKGraphSeriesDataSourceDelegate>)previousDelegate;
@end

