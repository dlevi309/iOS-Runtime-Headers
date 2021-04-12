/*
* Generated on Monday, March 1, 2021 at 2:32:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PKTableViewCell.h>

@class UISwitch;

@interface PKSettingTableCell : PKTableViewCell {

	id _target;
	SEL _action;
	UISwitch* _settingSwitch;

}

@property (assign,getter=isOn,nonatomic) BOOL on; 
@property (nonatomic,readonly) id target;                           //@synthesize target=_target - In the implementation block
@property (nonatomic,readonly) SEL action;                          //@synthesize action=_action - In the implementation block
@property (nonatomic,retain) UISwitch * settingSwitch;              //@synthesize settingSwitch=_settingSwitch - In the implementation block
-(void)dealloc;
-(id)target;
-(SEL)action;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setOn:(BOOL)arg1 ;
-(BOOL)isOn;
-(void)setTarget:(id)arg1 action:(SEL)arg2 ;
-(id)initWithTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3 ;
-(UISwitch *)settingSwitch;
-(void)setSettingSwitch:(UISwitch *)arg1 ;
@end

