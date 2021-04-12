/*
* Generated on Thursday, January 14, 2021 at 2:28:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <UIKitCore/UITableViewCell.h>

@class UIImageView, UILabel;

@interface VCUIShortcutActionCell : UITableViewCell {

	UIImageView* _iconView;
	UILabel* _titleLabel;

}

@property (nonatomic,readonly) UIImageView * iconView;              //@synthesize iconView=_iconView - In the implementation block
@property (nonatomic,readonly) UILabel * titleLabel;                //@synthesize titleLabel=_titleLabel - In the implementation block
-(UILabel *)titleLabel;
-(UIImageView *)iconView;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
@end

