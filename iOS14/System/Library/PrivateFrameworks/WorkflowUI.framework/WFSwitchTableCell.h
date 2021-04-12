/*
* Generated on Thursday, January 14, 2021 at 2:28:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <UIKitCore/UITableViewCell.h>

@class WFSwitchTableItem, UISwitch;

@interface WFSwitchTableCell : UITableViewCell {

	WFSwitchTableItem* _tableItem;
	UISwitch* _switchView;

}

@property (assign,nonatomic,__weak) WFSwitchTableItem * tableItem;              //@synthesize tableItem=_tableItem - In the implementation block
@property (nonatomic,readonly) UISwitch * switchView;                           //@synthesize switchView=_switchView - In the implementation block
-(void)switchValueChanged:(id)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(UISwitch *)switchView;
-(void)setTableItem:(WFSwitchTableItem *)arg1 ;
-(WFSwitchTableItem *)tableItem;
@end

