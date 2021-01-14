/*
* Generated on Thursday, January 14, 2021 at 2:28:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiKitUI.framework/WiFiKitUI
*/

#import <UIKitCore/UIViewController.h>

@class UITableView;

@interface WFInsetViewController : UIViewController {

	BOOL _sectionContentInsetInitialized;
	UITableView* _tableView;

}

@property (assign,nonatomic,__weak) UITableView * tableView;              //@synthesize tableView=_tableView - In the implementation block
-(UITableView *)tableView;
-(void)setTableView:(UITableView *)arg1 ;
-(void)loadView;
-(BOOL)_isRegularWidth;
-(void)_updateSectionContentInsetWithAnimation:(BOOL)arg1 ;
-(void)viewDidLayoutSubviews;
@end

