/*
* Generated on Monday, March 1, 2021 at 2:34:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)loadView;
-(UITableView *)tableView;
-(void)viewDidLoad;
-(void)willMoveToParentViewController:(id)arg1 ;
-(void)setTableView:(UITableView *)arg1 ;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setDataProvider:(HKQuantitySeriesDataProvider *)arg1 ;
-(HKQuantitySeriesDataProvider *)dataProvider;
@end

