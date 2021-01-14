/*
* Generated on Thursday, January 14, 2021 at 2:27:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(UISwitch *)enabledSwitch;
-(void)setDelegate:(id<MTUISwitchTableViewCellDelegate>)arg1 ;
-(void)setEnabledSwitch:(UISwitch *)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)switchAction:(id)arg1 ;
-(void)setSwitchStateEnabled:(BOOL)arg1 ;
@end

