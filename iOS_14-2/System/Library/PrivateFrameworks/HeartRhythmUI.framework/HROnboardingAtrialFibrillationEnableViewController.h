/*
* Generated on Thursday, January 14, 2021 at 2:27:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HeartRhythmUI.framework/HeartRhythmUI
*/

#import <HeartRhythmUI/HROnboardingBaseViewController.h>
#import <libobjc.A.dylib/HRStackedButtonViewDelegate.h>

@class UIView, UILabel, HRStackedButtonView, NSLayoutConstraint;

@interface HROnboardingAtrialFibrillationEnableViewController : HROnboardingBaseViewController <HRStackedButtonViewDelegate> {

	UIView* _heroView;
	UILabel* _titleLabel;
	UILabel* _bodyLabel;
	UILabel* _footnoteLabel;
	HRStackedButtonView* _stackedButtonView;
	NSLayoutConstraint* _contentViewBottomConstraint;

}

@property (nonatomic,retain) UIView * heroView;                                             //@synthesize heroView=_heroView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                          //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * bodyLabel;                                           //@synthesize bodyLabel=_bodyLabel - In the implementation block
@property (nonatomic,retain) UILabel * footnoteLabel;                                       //@synthesize footnoteLabel=_footnoteLabel - In the implementation block
@property (nonatomic,retain) HRStackedButtonView * stackedButtonView;                       //@synthesize stackedButtonView=_stackedButtonView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * contentViewBottomConstraint;              //@synthesize contentViewBottomConstraint=_contentViewBottomConstraint - In the implementation block
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(id)_titleFont;
-(void)setFootnoteLabel:(UILabel *)arg1 ;
-(UILabel *)footnoteLabel;
-(UILabel *)bodyLabel;
-(void)setContentViewBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setUpConstraints;
-(NSLayoutConstraint *)contentViewBottomConstraint;
-(id)_titleFontTextStyle;
-(UIView *)heroView;
-(void)setBodyLabel:(UILabel *)arg1 ;
-(id)_bodyFont;
-(void)setHeroView:(UIView *)arg1 ;
-(void)setUpUI;
-(id)createHeroView;
-(void)stackedButtonView:(id)arg1 didTapButtonAtIndex:(long long)arg2 ;
-(void)setStackedButtonView:(HRStackedButtonView *)arg1 ;
-(HRStackedButtonView *)stackedButtonView;
-(id)_bodyFontTextStyle;
-(id)initForOnboarding:(BOOL)arg1 upgradingFromAlgorithmVersion:(long long)arg2 ;
-(id)_footnoteFont;
-(double)_titleLastBaselineToBodyFirstBaseline;
-(double)_footnoteToButton;
-(id)_footnoteFontTextStyle;
@end

