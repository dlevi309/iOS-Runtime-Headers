/*
* Generated on Thursday, January 14, 2021 at 2:28:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <UIKitCore/UIButton.h>

@class UIImage, UIImageView, UILabel, NSString;

@interface WFActionDrawerButton : UIButton {

	UIImage* _icon;
	unsigned long long _style;
	UIImageView* _iconView;
	UILabel* _textLabel;

}

@property (assign,nonatomic,__weak) UIImageView * iconView;              //@synthesize iconView=_iconView - In the implementation block
@property (assign,nonatomic,__weak) UILabel * textLabel;                 //@synthesize textLabel=_textLabel - In the implementation block
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,readonly) UIImage * icon;                           //@synthesize icon=_icon - In the implementation block
@property (nonatomic,readonly) unsigned long long style;                 //@synthesize style=_style - In the implementation block
-(id)accessibilityLabel;
-(void)tintColorDidChange;
-(UIImage *)icon;
-(void)setTitle:(NSString *)arg1 ;
-(void)setTextLabel:(UILabel *)arg1 ;
-(void)updateColors;
-(UIImageView *)iconView;
-(void)setIconView:(UIImageView *)arg1 ;
-(UILabel *)textLabel;
-(unsigned long long)style;
-(NSString *)title;
-(id)initWithTitle:(id)arg1 icon:(id)arg2 style:(unsigned long long)arg3 ;
-(id)mainColorForStyle:(unsigned long long)arg1 ;
-(id)accentColorForStyle:(unsigned long long)arg1 ;
@end

