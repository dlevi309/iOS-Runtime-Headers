/*
* Generated on Monday, March 1, 2021 at 2:32:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/

#import <ARKit/ARKit-Structs.h>
#import <UIKitCore/UIControl.h>

@class UIFont, UIImage, ARCoachingWrappedButton, ARCoachingControlBlurredBackgroundView, UIColor, NSString;

@interface ARCoachingButton : UIControl {

	UIFont* _regularFont;
	UIFont* _boldFont;
	long long _controlStyle;
	UIImage* _image;
	ARCoachingWrappedButton* _button;
	ARCoachingControlBlurredBackgroundView* _blurredBackgroundView;
	long long _buttonStyle;
	long long _textStyle;
	UIColor* _white35PercentColor;
	UIColor* _white100PercentColor;
	UIColor* _white70PercentColor;
	UIColor* _black35PercentColor;
	UIColor* _black70PercentColor;
	UIColor* _blue100PercentColor;
	UIColor* _blue50PercentColor;
	long long _currentStyle;
	UIColor* _white75PercentColor;
	UIColor* _white52PercentColor;
	UIColor* _white26PercentColor;
	UIEdgeInsets _largeImageInsets;

}

@property (nonatomic,retain) ARCoachingWrappedButton * button;                                            //@synthesize button=_button - In the implementation block
@property (nonatomic,retain) ARCoachingControlBlurredBackgroundView * blurredBackgroundView;              //@synthesize blurredBackgroundView=_blurredBackgroundView - In the implementation block
@property (assign,nonatomic) long long buttonStyle;                                                       //@synthesize buttonStyle=_buttonStyle - In the implementation block
@property (assign,nonatomic) long long textStyle;                                                         //@synthesize textStyle=_textStyle - In the implementation block
@property (nonatomic,retain) UIFont * regularFont;                                                        //@synthesize regularFont=_regularFont - In the implementation block
@property (nonatomic,retain) UIFont * boldFont;                                                           //@synthesize boldFont=_boldFont - In the implementation block
@property (nonatomic,retain) UIColor * white35PercentColor;                                               //@synthesize white35PercentColor=_white35PercentColor - In the implementation block
@property (nonatomic,retain) UIColor * white100PercentColor;                                              //@synthesize white100PercentColor=_white100PercentColor - In the implementation block
@property (nonatomic,retain) UIColor * white70PercentColor;                                               //@synthesize white70PercentColor=_white70PercentColor - In the implementation block
@property (nonatomic,retain) UIColor * black35PercentColor;                                               //@synthesize black35PercentColor=_black35PercentColor - In the implementation block
@property (nonatomic,retain) UIColor * black70PercentColor;                                               //@synthesize black70PercentColor=_black70PercentColor - In the implementation block
@property (nonatomic,retain) UIColor * blue100PercentColor;                                               //@synthesize blue100PercentColor=_blue100PercentColor - In the implementation block
@property (nonatomic,retain) UIColor * blue50PercentColor;                                                //@synthesize blue50PercentColor=_blue50PercentColor - In the implementation block
@property (assign,nonatomic) long long currentStyle;                                                      //@synthesize currentStyle=_currentStyle - In the implementation block
@property (nonatomic,retain) UIColor * white75PercentColor;                                               //@synthesize white75PercentColor=_white75PercentColor - In the implementation block
@property (nonatomic,retain) UIColor * white52PercentColor;                                               //@synthesize white52PercentColor=_white52PercentColor - In the implementation block
@property (nonatomic,retain) UIColor * white26PercentColor;                                               //@synthesize white26PercentColor=_white26PercentColor - In the implementation block
@property (assign,nonatomic) long long controlStyle;                                                      //@synthesize controlStyle=_controlStyle - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentEdgeInsets; 
@property (assign,nonatomic) UIEdgeInsets largeImageInsets;                                               //@synthesize largeImageInsets=_largeImageInsets - In the implementation block
@property (nonatomic,retain) NSString * title; 
@property (nonatomic,retain) UIImage * image;                                                             //@synthesize image=_image - In the implementation block
-(void)setEnabled:(BOOL)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(void)setTextStyle:(long long)arg1 ;
-(long long)textStyle;
-(CGSize)intrinsicContentSize;
-(ARCoachingWrappedButton *)button;
-(void)addTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned long long)arg3 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg1 ;
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 ;
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3 ;
-(void)setSelected:(BOOL)arg1 ;
-(void)setContentEdgeInsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)contentEdgeInsets;
-(void)setButton:(ARCoachingWrappedButton *)arg1 ;
-(void)setCurrentStyle:(long long)arg1 ;
-(long long)currentStyle;
-(long long)controlStyle;
-(void)setControlStyle:(long long)arg1 ;
-(long long)buttonStyle;
-(void)setButtonStyle:(long long)arg1 ;
-(id)initWithTitle:(id)arg1 buttonStyle:(long long)arg2 textStyle:(long long)arg3 controlStyle:(long long)arg4 adjustsFontForContentSizeCategory:(BOOL)arg5 ;
-(void)_didUpdateDarkenColorsSetting:(id)arg1 ;
-(void)_didUpdateContentSizeCategory:(id)arg1 ;
-(id)initWithButton:(id)arg1 buttonStyle:(long long)arg2 textStyle:(long long)arg3 controlStyle:(long long)arg4 largeImageInsets:(UIEdgeInsets)arg5 ;
-(void)_updateTitleStyleForButton:(id)arg1 withControlStyle:(long long)arg2 ;
-(UIFont *)regularFont;
-(ARCoachingControlBlurredBackgroundView *)blurredBackgroundView;
-(UIFont *)boldFont;
-(UIColor *)white100PercentColor;
-(UIColor *)white70PercentColor;
-(UIColor *)white35PercentColor;
-(UIColor *)white75PercentColor;
-(UIColor *)white52PercentColor;
-(UIColor *)white26PercentColor;
-(UIColor *)blue100PercentColor;
-(UIColor *)blue50PercentColor;
-(UIColor *)black70PercentColor;
-(UIColor *)black35PercentColor;
-(id)_colorDarkenedIfNeededForColor:(id)arg1 ;
-(void)updateCurrentAppearanceIfNeeded;
-(id)initWithTitle:(id)arg1 buttonStyle:(long long)arg2 textStyle:(long long)arg3 controlStyle:(long long)arg4 ;
-(UIEdgeInsets)largeImageInsets;
-(void)setLargeImageInsets:(UIEdgeInsets)arg1 ;
-(void)setBlurredBackgroundView:(ARCoachingControlBlurredBackgroundView *)arg1 ;
-(void)setRegularFont:(UIFont *)arg1 ;
-(void)setBoldFont:(UIFont *)arg1 ;
-(void)setWhite35PercentColor:(UIColor *)arg1 ;
-(void)setWhite100PercentColor:(UIColor *)arg1 ;
-(void)setWhite70PercentColor:(UIColor *)arg1 ;
-(void)setBlack35PercentColor:(UIColor *)arg1 ;
-(void)setBlack70PercentColor:(UIColor *)arg1 ;
-(void)setBlue100PercentColor:(UIColor *)arg1 ;
-(void)setBlue50PercentColor:(UIColor *)arg1 ;
-(void)setWhite75PercentColor:(UIColor *)arg1 ;
-(void)setWhite52PercentColor:(UIColor *)arg1 ;
-(void)setWhite26PercentColor:(UIColor *)arg1 ;
@end

