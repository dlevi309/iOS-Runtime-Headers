/*
* Generated on Monday, March 1, 2021 at 2:34:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UITableViewCell.h>

@protocol HUAlarmTableViewCellDelegate;
@class MTUIAlarmView, UISwitch;

@interface HUAlarmTableViewCell : UITableViewCell {

	BOOL _disabled;
	BOOL _enabled;
	id<HUAlarmTableViewCellDelegate> _delegate;
	MTUIAlarmView* _alarmView;
	UISwitch* _enabledSwitch;

}

@property (nonatomic,retain) MTUIAlarmView * alarmView;                                     //@synthesize alarmView=_alarmView - In the implementation block
@property (nonatomic,retain) UISwitch * enabledSwitch;                                      //@synthesize enabledSwitch=_enabledSwitch - In the implementation block
@property (assign,nonatomic) BOOL enabled;                                                  //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic,__weak) id<HUAlarmTableViewCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isDisabled,nonatomic) BOOL disabled;                               //@synthesize disabled=_disabled - In the implementation block
-(id)init;
-(BOOL)enabled;
-(void)setEnabled:(BOOL)arg1 ;
-(id<HUAlarmTableViewCellDelegate>)delegate;
-(void)setDelegate:(id<HUAlarmTableViewCellDelegate>)arg1 ;
-(BOOL)isDisabled;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setDisabled:(BOOL)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)willTransitionToState:(unsigned long long)arg1 ;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(UISwitch *)enabledSwitch;
-(void)setEnabledSwitch:(UISwitch *)arg1 ;
-(void)refreshUI:(id)arg1 animated:(BOOL)arg2 ;
-(MTUIAlarmView *)alarmView;
-(void)_alarmActiveChanged:(id)arg1 ;
-(void)setAlarmActiveDelegate:(id)arg1 ;
-(void)setAlarmView:(MTUIAlarmView *)arg1 ;
@end

