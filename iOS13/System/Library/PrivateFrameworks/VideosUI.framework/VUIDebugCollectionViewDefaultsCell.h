/*
* Generated on Monday, March 1, 2021 at 2:35:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <VideosUI/VUIListCollectionViewCell.h>
#import <UIKit/UITextFieldDelegate.h>

@class VUITextLayout, VUILabel, UISwitch, UITextField, VUIDebugViewDefaults, VUISeparatorView, NSString;

@interface VUIDebugCollectionViewDefaultsCell : VUIListCollectionViewCell <UITextFieldDelegate> {

	VUITextLayout* _titleLayout;
	VUILabel* _titleLabel;
	VUITextLayout* _subtitleLayout;
	VUILabel* _subtitleLabel;
	UISwitch* _defaultsSwitch;
	UITextField* _textField;
	VUIDebugViewDefaults* _defaults;
	VUISeparatorView* _separatorView;

}

@property (nonatomic,retain) VUITextLayout * titleLayout;                   //@synthesize titleLayout=_titleLayout - In the implementation block
@property (nonatomic,retain) VUILabel * titleLabel;                         //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) VUITextLayout * subtitleLayout;                //@synthesize subtitleLayout=_subtitleLayout - In the implementation block
@property (nonatomic,retain) VUILabel * subtitleLabel;                      //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,retain) UISwitch * defaultsSwitch;                     //@synthesize defaultsSwitch=_defaultsSwitch - In the implementation block
@property (nonatomic,retain) UITextField * textField;                       //@synthesize textField=_textField - In the implementation block
@property (nonatomic,retain) VUIDebugViewDefaults * defaults;               //@synthesize defaults=_defaults - In the implementation block
@property (nonatomic,retain) VUISeparatorView * separatorView;              //@synthesize separatorView=_separatorView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(VUIDebugViewDefaults *)defaults;
-(void)setDefaults:(VUIDebugViewDefaults *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(VUILabel *)titleLabel;
-(void)layoutSubviews;
-(UITextField *)textField;
-(VUISeparatorView *)separatorView;
-(void)setTitleLabel:(VUILabel *)arg1 ;
-(void)setSeparatorView:(VUISeparatorView *)arg1 ;
-(void)setSubtitleLabel:(VUILabel *)arg1 ;
-(VUILabel *)subtitleLabel;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(void)setTextField:(UITextField *)arg1 ;
-(VUITextLayout *)titleLayout;
-(void)setTitleLayout:(VUITextLayout *)arg1 ;
-(VUITextLayout *)subtitleLayout;
-(void)setSubtitleLayout:(VUITextLayout *)arg1 ;
-(void)_defaultsSwitchPressed:(id)arg1 ;
-(void)configureCellWithDefaults:(id)arg1 ;
-(UISwitch *)defaultsSwitch;
-(void)setDefaultsSwitch:(UISwitch *)arg1 ;
@end

