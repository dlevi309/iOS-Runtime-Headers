/*
* Generated on Thursday, January 14, 2021 at 2:27:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HeartRhythmUI.framework/HeartRhythmUI
*/

#import <UIKitCore/UIView.h>

@protocol HRStackedButtonViewDelegate;
@class NSArray, NSString, UILabel, UIBlurEffect, UIView, NSLayoutConstraint, NSLayoutYAxisAnchor;

@interface HRStackedButtonView : UIView {

	BOOL _fixedBottomButtonSpacing;
	BOOL _blurHidden;
	NSArray* _buttons;
	long long _lastButtonMode;
	NSArray* _titles;
	NSArray* _styles;
	long long _buttonMode;
	NSString* _footerText;
	NSString* _boldFooterText;
	long long _footerTextAlignment;
	UILabel* _footerTextLabel;
	UIBlurEffect* _backgroundBlurEffect;
	UIView* _backgroundBlurView;
	NSLayoutConstraint* _backgroundBlurViewLeadingConstraint;
	NSLayoutConstraint* _backgroundBlurViewTrailingConstraint;
	NSLayoutYAxisAnchor* _firstTopAnchor;
	double _firstTopConstant;
	NSLayoutConstraint* _bottomConstraint;
	id<HRStackedButtonViewDelegate> _delegate;

}

@property (nonatomic,copy) NSArray * titles;                                                         //@synthesize titles=_titles - In the implementation block
@property (nonatomic,copy) NSArray * styles;                                                         //@synthesize styles=_styles - In the implementation block
@property (assign,nonatomic) long long buttonMode;                                                   //@synthesize buttonMode=_buttonMode - In the implementation block
@property (nonatomic,copy) NSString * footerText;                                                    //@synthesize footerText=_footerText - In the implementation block
@property (nonatomic,copy) NSString * boldFooterText;                                                //@synthesize boldFooterText=_boldFooterText - In the implementation block
@property (assign,nonatomic) long long footerTextAlignment;                                          //@synthesize footerTextAlignment=_footerTextAlignment - In the implementation block
@property (nonatomic,retain) UILabel * footerTextLabel;                                              //@synthesize footerTextLabel=_footerTextLabel - In the implementation block
@property (nonatomic,retain) NSArray * buttons;                                                      //@synthesize buttons=_buttons - In the implementation block
@property (nonatomic,retain) UIBlurEffect * backgroundBlurEffect;                                    //@synthesize backgroundBlurEffect=_backgroundBlurEffect - In the implementation block
@property (nonatomic,retain) UIView * backgroundBlurView;                                            //@synthesize backgroundBlurView=_backgroundBlurView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * backgroundBlurViewLeadingConstraint;               //@synthesize backgroundBlurViewLeadingConstraint=_backgroundBlurViewLeadingConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * backgroundBlurViewTrailingConstraint;              //@synthesize backgroundBlurViewTrailingConstraint=_backgroundBlurViewTrailingConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutYAxisAnchor * firstTopAnchor;                                   //@synthesize firstTopAnchor=_firstTopAnchor - In the implementation block
@property (assign,nonatomic) double firstTopConstant;                                                //@synthesize firstTopConstant=_firstTopConstant - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * bottomConstraint;                                  //@synthesize bottomConstraint=_bottomConstraint - In the implementation block
@property (assign,nonatomic,__weak) id<HRStackedButtonViewDelegate> delegate;                        //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long lastButtonMode;                                               //@synthesize lastButtonMode=_lastButtonMode - In the implementation block
@property (assign,nonatomic) BOOL fixedBottomButtonSpacing;                                          //@synthesize fixedBottomButtonSpacing=_fixedBottomButtonSpacing - In the implementation block
@property (assign,getter=isBlurHidden,nonatomic) BOOL blurHidden;                                    //@synthesize blurHidden=_blurHidden - In the implementation block
+(double)topPadding;
+(id)buddyStackedButtonViewWithTitles:(id)arg1 footerText:(id)arg2 boldFooterText:(id)arg3 footerTextAlignment:(long long)arg4 delegate:(id)arg5 ;
+(double)_footerTextSpacingForValue:(double)arg1 ;
+(double)_buttonSpacingForValue:(double)arg1 ;
+(id)_footerFontTextStyle;
+(id)_footerTextFont;
+(id)buddyStackedButtonViewWithTitles:(id)arg1 footerText:(id)arg2 boldFooterText:(id)arg3 delegate:(id)arg4 ;
+(id)_footerTextBoldFont;
-(void)setFooterText:(NSString *)arg1 ;
-(id<HRStackedButtonViewDelegate>)delegate;
-(NSLayoutConstraint *)bottomConstraint;
-(NSArray *)buttons;
-(void)setStyles:(NSArray *)arg1 ;
-(void)setButtonMode:(long long)arg1 ;
-(id)firstBaselineAnchor;
-(void)setTitles:(NSArray *)arg1 ;
-(void)setDelegate:(id<HRStackedButtonViewDelegate>)arg1 ;
-(UIView *)backgroundBlurView;
-(NSArray *)styles;
-(void)_updateForCurrentSizeCategory;
-(void)setBackgroundBlurView:(UIView *)arg1 ;
-(NSString *)footerText;
-(UIBlurEffect *)backgroundBlurEffect;
-(NSArray *)titles;
-(id)lastBaselineAnchor;
-(void)setBackgroundBlurEffect:(UIBlurEffect *)arg1 ;
-(void)setBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setButtons:(NSArray *)arg1 ;
-(long long)buttonMode;
-(void)_setUpBlurEffect;
-(void)_setUpButtons;
-(id)initWithButtonTitles:(id)arg1 styles:(id)arg2 footerText:(id)arg3 boldFooterText:(id)arg4 footerTextAlignment:(long long)arg5 delegate:(id)arg6 ;
-(void)_updateBottomConstraint;
-(NSLayoutConstraint *)backgroundBlurViewLeadingConstraint;
-(void)setBackgroundBlurViewLeadingConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)backgroundBlurViewTrailingConstraint;
-(void)setBackgroundBlurViewTrailingConstraint:(NSLayoutConstraint *)arg1 ;
-(id)_createButtons;
-(void)_setUpFooterText;
-(void)_assignConstraintsForButtons;
-(void)_createViewBottomConstraint;
-(void)alignBlurViewHorizontalConstraintsWithView:(id)arg1 ;
-(void)setBlurHidden:(BOOL)arg1 ;
-(void)actionButtonTapped:(id)arg1 ;
-(void)setFirstTopAnchor:(NSLayoutYAxisAnchor *)arg1 ;
-(void)setFirstTopConstant:(double)arg1 ;
-(void)setFooterTextLabel:(UILabel *)arg1 ;
-(id)_attributedFooterText;
-(UILabel *)footerTextLabel;
-(long long)footerTextAlignment;
-(double)firstTopConstant;
-(NSLayoutYAxisAnchor *)firstTopAnchor;
-(long long)lastButtonMode;
-(NSString *)boldFooterText;
-(void)setLastButtonMode:(long long)arg1 ;
-(BOOL)isBlurHidden;
-(void)setBoldFooterText:(NSString *)arg1 ;
-(void)setFooterTextAlignment:(long long)arg1 ;
-(void)setFixedBottomButtonSpacing:(BOOL)arg1 ;
-(BOOL)fixedBottomButtonSpacing;
@end
