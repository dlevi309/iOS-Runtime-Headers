/*
* Generated on Monday, March 1, 2021 at 2:34:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
*/

#import <HealthToolbox/WDTableViewSection.h>

@class NSMutableArray, HKHeartbeatSequenceChartViewController, HKInteractiveChartOverlayViewController, WDActivityQueryTestController, HKHealthChartFactory;

@interface WDChartExperimentsChartSection : WDTableViewSection {

	NSMutableArray* _viewControllers;
	HKHeartbeatSequenceChartViewController* _heartbeatSequenceForUpdate;
	HKInteractiveChartOverlayViewController* _heartRateController;
	WDActivityQueryTestController* _activityQueryTestController;
	HKHealthChartFactory* _healthChartFactory;

}

@property (nonatomic,retain) NSMutableArray * viewControllers;                                                 //@synthesize viewControllers=_viewControllers - In the implementation block
@property (nonatomic,retain) HKHeartbeatSequenceChartViewController * heartbeatSequenceForUpdate;              //@synthesize heartbeatSequenceForUpdate=_heartbeatSequenceForUpdate - In the implementation block
@property (nonatomic,retain) HKInteractiveChartOverlayViewController * heartRateController;                    //@synthesize heartRateController=_heartRateController - In the implementation block
@property (nonatomic,retain) WDActivityQueryTestController * activityQueryTestController;                      //@synthesize activityQueryTestController=_activityQueryTestController - In the implementation block
@property (nonatomic,retain) HKHealthChartFactory * healthChartFactory;                                        //@synthesize healthChartFactory=_healthChartFactory - In the implementation block
-(id)_dateFormatter;
-(unsigned long long)numberOfRows;
-(NSMutableArray *)viewControllers;
-(void)setViewControllers:(NSMutableArray *)arg1 ;
-(id)titleForHeader;
-(void)setUpWithTableViewController:(id)arg1 ;
-(id)cellForRow:(unsigned long long)arg1 table:(id)arg2 ;
-(id)_buildHeartSequenceDataFromString:(id)arg1 ;
-(id)_localDateFromString:(id)arg1 ;
-(void)updateTachogram:(id)arg1 ;
-(id)_audiogramSampleForDate:(id)arg1 sensitivityData:(id)arg2 ;
-(void)activityQueryTest:(id)arg1 ;
-(HKHeartbeatSequenceChartViewController *)heartbeatSequenceForUpdate;
-(void)setHeartbeatSequenceForUpdate:(HKHeartbeatSequenceChartViewController *)arg1 ;
-(HKInteractiveChartOverlayViewController *)heartRateController;
-(void)setHeartRateController:(HKInteractiveChartOverlayViewController *)arg1 ;
-(WDActivityQueryTestController *)activityQueryTestController;
-(void)setActivityQueryTestController:(WDActivityQueryTestController *)arg1 ;
-(HKHealthChartFactory *)healthChartFactory;
-(void)setHealthChartFactory:(HKHealthChartFactory *)arg1 ;
@end

