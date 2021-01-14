/*
* Generated on Thursday, January 14, 2021 at 2:24:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UITableViewCell.h>

@protocol HUAlarmTableViewCellDelegate;
@class MTUIAlarmView, UISwitch, UIStackView;

@interface HUAlarmTableViewCell : UITableViewCell {

	BOOL _disabled;
	BOOL _enabled;
	id<HUAlarmTableViewCellDelegate> _delegate;
	MTUIAlarmView* _alarmView;
	UISwitch* _enabledSwitch;
	UIStackView* _stackView;

}

@property (nonatomic,retain) MTUIAlarmView * alarmView;                                     //@synthesize alarmView=_alarmView - In the implementation block
@property (nonatomic,retain) UISwitch * enabledSwitch;                                      //@synthesize enabledSwitch=_enabledSwitch - In the implementation block
@property (nonatomic,retain) UIStackView * stackView;                                       //@synthesize stackView=_stackView - In the implementation block
@property (assign,nonatomic) BOOL enabled;                                                  //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic,__weak) id<HUAlarmTableViewCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isDisabled,nonatomic) BOOL disabled;                               //@synthesize disabled=_disabled - In the implementation block
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_setupConstraints;
-(BOOL)enabled;
-(void)setDisabled:(BOOL)arg1 ;
-(id)init;
-(id<HUAlarmTableViewCellDelegate>)delegate;
-(UISwitch *)enabledSwitch;
-(void)setEnabled:(BOOL)arg1 ;
-(UIStackView *)stackView;
-(void)refreshUI:(id)arg1 accessoryName:(id)arg2 animated:(BOOL)arg3 ;
-(BOOL)isDisabled;
-(void)setDelegate:(id<HUAlarmTableViewCellDelegate>)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)willTransitionToState:(unsigned long long)arg1 ;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setEnabledSwitch:(UISwitch *)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setStackView:(UIStackView *)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)_alarmActiveChanged:(id)arg1 ;
-(id)_alarmBackgroundColor;
-(MTUIAlarmView *)alarmView;
-(void)setAlarmActiveDelegate:(id)arg1 ;
-(void)setAlarmView:(MTUIAlarmView *)arg1 ;
@end

