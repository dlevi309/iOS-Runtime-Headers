/*
* Generated on Thursday, January 14, 2021 at 2:24:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PKTableViewCell.h>

@class UIActivityIndicatorView, UISwitch;

@interface PKSettingTableCell : PKTableViewCell {

	UIActivityIndicatorView* _spinner;
	BOOL _showingSpinner;
	id _target;
	SEL _action;
	UISwitch* _settingSwitch;

}

@property (assign,getter=isOn,nonatomic) BOOL on; 
@property (nonatomic,readonly) id target;                           //@synthesize target=_target - In the implementation block
@property (nonatomic,readonly) SEL action;                          //@synthesize action=_action - In the implementation block
@property (nonatomic,retain) UISwitch * settingSwitch;              //@synthesize settingSwitch=_settingSwitch - In the implementation block
-(BOOL)isOn;
-(void)setOn:(BOOL)arg1 ;
-(UISwitch *)settingSwitch;
-(SEL)action;
-(void)prepareForReuse;
-(void)setSettingSwitch:(UISwitch *)arg1 ;
-(void)setTarget:(id)arg1 action:(SEL)arg2 ;
-(void)showSpinner:(BOOL)arg1 ;
-(id)target;
-(id)initWithTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)dealloc;
@end

