/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
*/

#import <OnBoardingKit/OBWelcomeController.h>

@class UITableView;

@interface OBTableWelcomeController : OBWelcomeController {

	UITableView* _tableView;

}

@property (nonatomic,retain) UITableView * tableView;              //@synthesize tableView=_tableView - In the implementation block
-(UITableView *)tableView;
-(void)setTableView:(UITableView *)arg1 ;
-(id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3 ;
-(id)initWithTitle:(id)arg1 detailText:(id)arg2 symbolName:(id)arg3 ;
-(void)_updateDirectionalLayoutMarginsForTableView;
-(void)updateDirectionalLayoutMargins;
@end

