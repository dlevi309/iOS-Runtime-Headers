/*
* Generated on Monday, March 1, 2021 at 2:35:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MobileTimerUI.framework/MobileTimerUI
*/

#import <MobileTimerUI/MTUIBaseTableViewCell.h>

@protocol MTUISwitchTableViewCellDelegate;
@class UISwitch;

@interface MTUISwitchTableViewCell : MTUIBaseTableViewCell {

	id<MTUISwitchTableViewCellDelegate> _delegate;
	UISwitch* _enabledSwitch;

}

@property (nonatomic,retain) UISwitch * enabledSwitch;                                         //@synthesize enabledSwitch=_enabledSwitch - In the implementation block
@property (assign,nonatomic,__weak) id<MTUISwitchTableViewCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<MTUISwitchTableViewCellDelegate>)delegate;
-(void)setDelegate:(id<MTUISwitchTableViewCellDelegate>)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(UISwitch *)enabledSwitch;
-(void)setEnabledSwitch:(UISwitch *)arg1 ;
-(void)switchAction:(id)arg1 ;
-(void)setSwitchStateEnabled:(BOOL)arg1 ;
@end

