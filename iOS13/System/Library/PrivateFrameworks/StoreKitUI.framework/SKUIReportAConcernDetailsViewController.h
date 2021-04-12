/*
* Generated on Monday, March 1, 2021 at 2:31:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UITableViewDelegate.h>

@class SKUIReportAConcernMetadata, SKUIReportAConcernConfiguration, SKUIReportAConcernDetailsDataSource, UITableView, NSString;

@interface SKUIReportAConcernDetailsViewController : UIViewController <UITableViewDelegate> {

	/*^block*/id _completion;
	SKUIReportAConcernMetadata* _metadata;
	SKUIReportAConcernConfiguration* _configuration;
	SKUIReportAConcernDetailsDataSource* _dataSource;
	UITableView* _tableView;
	double _keyboardHeight;

}

@property (nonatomic,retain) SKUIReportAConcernConfiguration * configuration;               //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,retain) SKUIReportAConcernDetailsDataSource * dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) UITableView * tableView;                                       //@synthesize tableView=_tableView - In the implementation block
@property (assign,nonatomic) double keyboardHeight;                                         //@synthesize keyboardHeight=_keyboardHeight - In the implementation block
@property (nonatomic,copy) id completion;                                                   //@synthesize completion=_completion - In the implementation block
@property (nonatomic,retain) SKUIReportAConcernMetadata * metadata;                         //@synthesize metadata=_metadata - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithConfiguration:(id)arg1 ;
-(void)setMetadata:(SKUIReportAConcernMetadata *)arg1 ;
-(SKUIReportAConcernMetadata *)metadata;
-(void)setConfiguration:(SKUIReportAConcernConfiguration *)arg1 ;
-(SKUIReportAConcernConfiguration *)configuration;
-(void)setCompletion:(id)arg1 ;
-(id)completion;
-(SKUIReportAConcernDetailsDataSource *)dataSource;
-(void)setDataSource:(SKUIReportAConcernDetailsDataSource *)arg1 ;
-(UITableView *)tableView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(void)setTableView:(UITableView *)arg1 ;
-(void)_keyboardWillShow:(id)arg1 ;
-(void)_keyboardWillHide:(id)arg1 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)keyboardHeight;
-(void)setKeyboardHeight:(double)arg1 ;
-(void)submitPressed:(id)arg1 ;
-(id)_detailsText;
-(double)_detailsCellHeight;
@end

