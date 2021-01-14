/*
* Generated on Thursday, January 14, 2021 at 2:27:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(id)_titleFont;
-(long long)textAlignment;
-(void)viewDidLoad;
-(NSString *)bodyString;
-(UILabel *)bodyLabel;
-(void)setContentViewBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setUpConstraints;
-(NSLayoutConstraint *)contentViewBottomConstraint;
-(NSString *)titleString;
-(id)_titleFontTextStyle;
-(void)setTextAlignment:(long long)arg1 ;
-(UIView *)heroView;
-(void)setBodyLabel:(UILabel *)arg1 ;
-(id)_bodyFont;
-(void)setHeroView:(UIView *)arg1 ;
-(void)setUpUI;
-(void)viewDidLayoutSubviews;
-(id)createHeroView;
-(NSString *)buttonTitleString;
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

