/*
* Generated on Thursday, January 14, 2021 at 2:25:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)viewWillLayoutSubviews;
-(void)setCompletion:(id)arg1 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(UITableView *)tableView;
-(SKUIReportAConcernDetailsDataSource *)dataSource;
-(id)completion;
-(void)setMetadata:(SKUIReportAConcernMetadata *)arg1 ;
-(id)initWithConfiguration:(id)arg1 ;
-(void)setDataSource:(SKUIReportAConcernDetailsDataSource *)arg1 ;
-(void)_keyboardWillShow:(id)arg1 ;
-(SKUIReportAConcernConfiguration *)configuration;
-(void)viewDidLoad;
-(double)keyboardHeight;
-(void)setKeyboardHeight:(double)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)_keyboardWillHide:(id)arg1 ;
-(void)setTableView:(UITableView *)arg1 ;
-(SKUIReportAConcernMetadata *)metadata;
-(void)dealloc;
-(void)setConfiguration:(SKUIReportAConcernConfiguration *)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)submitPressed:(id)arg1 ;
-(id)_detailsText;
-(double)_detailsCellHeight;
@end

