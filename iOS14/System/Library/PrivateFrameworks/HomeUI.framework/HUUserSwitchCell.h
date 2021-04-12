/*
* Generated on Thursday, January 14, 2021 at 2:24:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HUUserTitleValueCell.h>

@protocol HUUserSwitchCellDelegate;
@class UISwitch, UIActivityIndicatorView;

@interface HUUserSwitchCell : HUUserTitleValueCell {

	BOOL _loading;
	id<HUUserSwitchCellDelegate> _delegate;
	UISwitch* _switchView;
	UIActivityIndicatorView* _activityIndicator;

}

@property (nonatomic,retain) UISwitch * switchView;                                     //@synthesize switchView=_switchView - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * activityIndicator;               //@synthesize activityIndicator=_activityIndicator - In the implementation block
@property (assign,getter=isLoading,nonatomic) BOOL loading;                             //@synthesize loading=_loading - In the implementation block
@property (assign,getter=isOn,nonatomic) BOOL on; 
@property (assign,nonatomic,__weak) id<HUUserSwitchCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(UIActivityIndicatorView *)activityIndicator;
-(void)setDisabled:(BOOL)arg1 ;
-(void)setOn:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setLoading:(BOOL)arg1 ;
-(BOOL)isOn;
-(BOOL)isLoading;
-(id<HUUserSwitchCellDelegate>)delegate;
-(void)setOn:(BOOL)arg1 ;
-(void)updateUIWithAnimation:(BOOL)arg1 ;
-(void)setActivityIndicator:(UIActivityIndicatorView *)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(void)prepareForReuse;
-(void)setDelegate:(id<HUUserSwitchCellDelegate>)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(UISwitch *)switchView;
-(void)_toggleOn:(id)arg1 ;
-(void)setSwitchView:(UISwitch *)arg1 ;
-(double)labelSpacing;
@end

