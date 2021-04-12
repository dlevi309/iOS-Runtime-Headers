/*
* Generated on Monday, March 1, 2021 at 2:34:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HeartRhythmUI.framework/HeartRhythmUI
*/

#import <HeartRhythmUI/HROnboardingBaseViewController.h>
#import <libobjc.A.dylib/HRStackedButtonViewDelegate.h>

@class UIView, UILabel, HRStackedButtonView, NSLayoutConstraint, NSString;

@interface HROnboardingHeroExplanationViewController : HROnboardingBaseViewController <HRStackedButtonViewDelegate> {

	long long _textAlignment;
	UIView* _heroView;
	UILabel* _titleLabel;
	UILabel* _bodyLabel;
	HRStackedButtonView* _stackedButtonView;
	NSLayoutConstraint* _contentViewBottomConstraint;

}

@property (nonatomic,retain) UIView * heroView;                                             //@synthesize heroView=_heroView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                          //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * bodyLabel;                                           //@synthesize bodyLabel=_bodyLabel - In the implementation block
@property (nonatomic,retain) HRStackedButtonView * stackedButtonView;                       //@synthesize stackedButtonView=_stackedButtonView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * contentViewBottomConstraint;              //@synthesize contentViewBottomConstraint=_contentViewBottomConstraint - In the implementation block
@property (nonatomic,readonly) NSString * titleString; 
@property (nonatomic,readonly) NSString * bodyString; 
@property (nonatomic,readonly) NSString * buttonTitleString; 
@property (assign,nonatomic) long long textAlignment;                                       //@synthesize textAlignment=_textAlignment - In the implementation block
-(void)setTextAlignment:(long long)arg1 ;
-(UILabel *)titleLabel;
-(void)viewDidLoad;
-(id)_titleFont;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)viewDidLayoutSubviews;
-(NSLayoutConstraint *)contentViewBottomConstraint;
-(void)setContentViewBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(long long)textAlignment;
-(UILabel *)bodyLabel;
-(void)setBodyLabel:(UILabel *)arg1 ;
-(NSString *)titleString;
-(void)setUpConstraints;
-(void)setHeroView:(UIView *)arg1 ;
-(NSString *)bodyString;
-(UIView *)heroView;
-(id)_titleFontTextStyle;
-(id)_bodyFont;
-(id)createHeroView;
-(NSString *)buttonTitleString;
-(void)setUpUI;
-(void)stackedButtonView:(id)arg1 didTapButtonAtIndex:(long long)arg2 ;
-(void)_setUpButtonFooterView;
-(void)_adjustButtonFooterViewLocationForViewContentHeight;
-(void)setStackedButtonView:(HRStackedButtonView *)arg1 ;
-(HRStackedButtonView *)stackedButtonView;
-(double)_titleLastBaselineToBodyTop;
-(long long)stackedButtonViewLastButtonMode;
-(double)_titleTopToFirstBaselineLeading;
-(id)_bodyFontTextStyle;
-(double)_titleTopToFirstBaseline;
@end

