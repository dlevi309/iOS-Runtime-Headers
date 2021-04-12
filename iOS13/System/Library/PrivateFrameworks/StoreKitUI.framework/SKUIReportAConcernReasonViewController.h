/*
* Generated on Monday, March 1, 2021 at 2:31:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UITableViewDelegate.h>

@class SKUIReportAConcernConfiguration, SKUIReportAConcernReasonDataSource, UITableView, NSString;

@interface SKUIReportAConcernReasonViewController : UIViewController <UITableViewDelegate> {

	/*^block*/id _completion;
	SKUIReportAConcernConfiguration* _configuration;
	SKUIReportAConcernReasonDataSource* _dataSource;
	UITableView* _tableView;

}

@property (nonatomic,retain) SKUIReportAConcernConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,retain) SKUIReportAConcernReasonDataSource * dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) UITableView * tableView;                                      //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,copy) id completion;                                                  //@synthesize completion=_completion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithCoder:(id)arg1 ;
-(id)initWithConfiguration:(id)arg1 ;
-(void)setConfiguration:(SKUIReportAConcernConfiguration *)arg1 ;
-(SKUIReportAConcernConfiguration *)configuration;
-(void)setCompletion:(id)arg1 ;
-(id)completion;
-(SKUIReportAConcernReasonDataSource *)dataSource;
-(void)setDataSource:(SKUIReportAConcernReasonDataSource *)arg1 ;
-(UITableView *)tableView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(void)setTableView:(UITableView *)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)cancelPressed:(id)arg1 ;
@end

