/*
* Generated on Thursday, January 14, 2021 at 2:25:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)viewWillLayoutSubviews;
-(void)setCompletion:(id)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(UITableView *)tableView;
-(SKUIReportAConcernReasonDataSource *)dataSource;
-(id)completion;
-(id)initWithConfiguration:(id)arg1 ;
-(void)setDataSource:(SKUIReportAConcernReasonDataSource *)arg1 ;
-(SKUIReportAConcernConfiguration *)configuration;
-(void)viewDidLoad;
-(void)cancelPressed:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setTableView:(UITableView *)arg1 ;
-(void)setConfiguration:(SKUIReportAConcernConfiguration *)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end

