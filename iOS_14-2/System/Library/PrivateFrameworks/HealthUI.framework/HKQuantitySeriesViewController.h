/*
* Generated on Thursday, January 14, 2021 at 2:24:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <UIKitCore/UIViewController.h>

@class HKQuantitySeriesDataProvider, UITableView;

@interface HKQuantitySeriesViewController : UIViewController {

	HKQuantitySeriesDataProvider* _dataProvider;
	UITableView* _tableView;

}

@property (nonatomic,retain) UITableView * tableView;                                  //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) HKQuantitySeriesDataProvider * dataProvider;              //@synthesize dataProvider=_dataProvider - In the implementation block
-(void)setDataProvider:(HKQuantitySeriesDataProvider *)arg1 ;
-(UITableView *)tableView;
-(void)willMoveToParentViewController:(id)arg1 ;
-(HKQuantitySeriesDataProvider *)dataProvider;
-(void)viewDidLoad;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setTableView:(UITableView *)arg1 ;
-(void)loadView;
@end

