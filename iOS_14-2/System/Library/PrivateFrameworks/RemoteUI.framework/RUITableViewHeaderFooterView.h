/*
* Generated on Thursday, January 14, 2021 at 2:28:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
*/

#import <RemoteUI/RemoteUI-Structs.h>
#import <UIKitCore/UITableViewHeaderFooterView.h>

@class UITableView;

@interface RUITableViewHeaderFooterView : UITableViewHeaderFooterView {

	UITableView* _tableView;

}

@property (__weak) UITableView * tableView;              //@synthesize tableView=_tableView - In the implementation block
-(UITableView *)tableView;
-(void)layoutSubviews;
-(void)setTableView:(UITableView *)arg1 ;
-(UIEdgeInsets)insetsForHeaderFooter;
@end

