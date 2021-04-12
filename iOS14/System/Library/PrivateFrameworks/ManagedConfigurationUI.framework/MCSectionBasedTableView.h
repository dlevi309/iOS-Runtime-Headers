/*
* Generated on Thursday, January 14, 2021 at 2:26:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
*/

#import <ManagedConfigurationUI/ManagedConfigurationUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UITableView;

@interface MCSectionBasedTableView : UIView {

	UITableView* _tableView;

}

@property (nonatomic,readonly) UITableView * tableView;              //@synthesize tableView=_tableView - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(UITableView *)tableView;
-(void)layoutSubviews;
-(id)_createTableView;
@end

