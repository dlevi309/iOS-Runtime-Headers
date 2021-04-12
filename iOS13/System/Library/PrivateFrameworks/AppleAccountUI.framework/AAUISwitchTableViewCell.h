/*
* Generated on Monday, March 1, 2021 at 2:32:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
*/

#import <UIKitCore/UITableViewCell.h>

@protocol AAUISwitchTableViewCellDelegate;
@class UISwitch;

@interface AAUISwitchTableViewCell : UITableViewCell {

	UISwitch* _control;
	id<AAUISwitchTableViewCellDelegate> _delegate;

}

@property (nonatomic,readonly) UISwitch * control;                                             //@synthesize control=_control - In the implementation block
@property (assign,nonatomic,__weak) id<AAUISwitchTableViewCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(id<AAUISwitchTableViewCellDelegate>)delegate;
-(void)setDelegate:(id<AAUISwitchTableViewCellDelegate>)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(UISwitch *)control;
-(void)_delegate_switchTableViewCellDidUpdateValue;
-(void)_controlValueChanged:(id)arg1 ;
@end

