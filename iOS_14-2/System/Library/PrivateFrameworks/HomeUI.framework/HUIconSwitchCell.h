/*
* Generated on Thursday, January 14, 2021 at 2:24:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HUTitleDescriptionCell.h>

@protocol HUIconSwitchCellDelegate;
@class UISwitch;

@interface HUIconSwitchCell : HUTitleDescriptionCell {

	id<HUIconSwitchCellDelegate> _delegate;
	UISwitch* _switchView;

}

@property (nonatomic,retain) UISwitch * switchView;                                     //@synthesize switchView=_switchView - In the implementation block
@property (assign,getter=isOn,nonatomic) BOOL on; 
@property (assign,nonatomic,__weak) id<HUIconSwitchCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setOn:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)isOn;
-(id<HUIconSwitchCellDelegate>)delegate;
-(void)setOn:(BOOL)arg1 ;
-(void)updateUIWithAnimation:(BOOL)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(void)prepareForReuse;
-(void)setDelegate:(id<HUIconSwitchCellDelegate>)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(UISwitch *)switchView;
-(void)_toggleOn:(id)arg1 ;
-(void)setSwitchView:(UISwitch *)arg1 ;
@end

