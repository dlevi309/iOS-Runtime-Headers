/*
* Generated on Thursday, January 14, 2021 at 2:26:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/BusinessChat.framework/BusinessChat
*/

#import <BusinessChat/BusinessChat-Structs.h>
#import <UIKitCore/UIControl.h>

@class UILabel, UIImageView, UIView;

@interface BCChatButton : UIControl {

	BOOL _isInverted;
	long long _style;
	UILabel* _label;
	UILabel* _smallLabel;
	UIImageView* _iconImageView;
	UIView* _centeredView;

}

@property (assign,nonatomic) long long style;                          //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) BOOL isInverted;                          //@synthesize isInverted=_isInverted - In the implementation block
@property (nonatomic,retain) UILabel * label;                          //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) UILabel * smallLabel;                     //@synthesize smallLabel=_smallLabel - In the implementation block
@property (nonatomic,retain) UIImageView * iconImageView;              //@synthesize iconImageView=_iconImageView - In the implementation block
@property (nonatomic,retain) UIView * centeredView;                    //@synthesize centeredView=_centeredView - In the implementation block
-(UIImageView *)iconImageView;
-(void)_setStyle:(long long)arg1 ;
-(void)setup;
-(void)_populateArchivedSubviews:(id)arg1 ;
-(id)viewForLastBaselineLayout;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)viewForFirstBaselineLayout;
-(id)initWithStyle:(long long)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(id)color:(BCColor)arg1 ;
-(void)layoutSubviews;
-(void)setFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)createSubviews;
-(void)setIconImageView:(UIImageView *)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)setStyle:(long long)arg1 ;
-(void)sizeToFit;
-(void)setLabel:(UILabel *)arg1 ;
-(UILabel *)label;
-(long long)style;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setCenteredView:(UIView *)arg1 ;
-(UILabel *)smallLabel;
-(void)setSmallLabel:(UILabel *)arg1 ;
-(UIView *)centeredView;
-(void)setIsInverted:(BOOL)arg1 ;
-(void)updateAppearanceForState:(long long)arg1 ;
-(void)setAccessibilityValues;
-(CGSize)calculateButtonLayout;
-(void)updateButtonLayout;
-(BOOL)isInverted;
-(void)setTextForLabel:(id)arg1 label:(id)arg2 ;
-(void)setOpacityForView:(id)arg1 opacity:(double)arg2 ;
@end

