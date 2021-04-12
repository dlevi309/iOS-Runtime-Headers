/*
* Generated on Thursday, January 14, 2021 at 2:25:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id<AAUISwitchTableViewCellDelegate>)delegate;
-(UISwitch *)control;
-(void)setDelegate:(id<AAUISwitchTableViewCellDelegate>)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)_delegate_switchTableViewCellDidUpdateValue;
-(void)_controlValueChanged:(id)arg1 ;
@end

