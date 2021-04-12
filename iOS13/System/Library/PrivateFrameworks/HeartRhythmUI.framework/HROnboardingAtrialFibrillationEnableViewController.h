/*
* Generated on Monday, March 1, 2021 at 2:34:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)_titleFont;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(NSLayoutConstraint *)contentViewBottomConstraint;
-(void)setContentViewBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(UILabel *)bodyLabel;
-(void)setBodyLabel:(UILabel *)arg1 ;
-(UILabel *)footnoteLabel;
-(void)setFootnoteLabel:(UILabel *)arg1 ;
-(void)setUpConstraints;
-(void)setHeroView:(UIView *)arg1 ;
-(UIView *)heroView;
-(id)_titleFontTextStyle;
-(id)_bodyFont;
-(id)createHeroView;
-(void)setUpUI;
-(void)stackedButtonView:(id)arg1 didTapButtonAtIndex:(long long)arg2 ;
-(void)setStackedButtonView:(HRStackedButtonView *)arg1 ;
-(HRStackedButtonView *)stackedButtonView;
-(id)_bodyFontTextStyle;
-(id)initForOnboarding:(BOOL)arg1 ;
-(id)_footnoteFont;
-(double)_titleLastBaselineToBodyFirstBaseline;
-(double)_footnoteToButton;
-(id)_footnoteFontTextStyle;
@end

