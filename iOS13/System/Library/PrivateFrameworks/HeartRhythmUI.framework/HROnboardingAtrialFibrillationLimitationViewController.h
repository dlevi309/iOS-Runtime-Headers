/*
* Generated on Monday, March 1, 2021 at 2:34:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HeartRhythmUI.framework/HeartRhythmUI
*/

#import <HeartRhythmUI/HeartRhythmUI-Structs.h>
#import <HeartRhythmUI/HROnboardingBaseViewController.h>
#import <libobjc.A.dylib/HRStackedButtonViewDelegate.h>

@class UILabel, UIView, HRTitledListItemLabel, HRListItemLabel, HRStackedButtonView, NSLayoutConstraint;

@interface HROnboardingAtrialFibrillationLimitationViewController : HROnboardingBaseViewController <HRStackedButtonViewDelegate> {

	BOOL _stateAnimating;
	long long _state;
	double _initialContentOffset;
	UILabel* _titleLabel;
	UIView* _backgroundView1;
	UIView* _backgroundView2;
	UIView* _backgroundView3;
	UIView* _backgroundView4;
	HRTitledListItemLabel* _titledListItemLabel1;
	HRTitledListItemLabel* _titledListItemLabel2;
	HRTitledListItemLabel* _titledListItemLabel3;
	HRListItemLabel* _listItemLabel4;
	HRStackedButtonView* _stackedButtonView;
	NSLayoutConstraint* _contentViewBottomConstraint;

}

@property (assign,nonatomic) long long state;                                               //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) BOOL stateAnimating;                                           //@synthesize stateAnimating=_stateAnimating - In the implementation block
@property (assign,nonatomic) double initialContentOffset;                                   //@synthesize initialContentOffset=_initialContentOffset - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                          //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UIView * backgroundView1;                                      //@synthesize backgroundView1=_backgroundView1 - In the implementation block
@property (nonatomic,retain) UIView * backgroundView2;                                      //@synthesize backgroundView2=_backgroundView2 - In the implementation block
@property (nonatomic,retain) UIView * backgroundView3;                                      //@synthesize backgroundView3=_backgroundView3 - In the implementation block
@property (nonatomic,retain) UIView * backgroundView4;                                      //@synthesize backgroundView4=_backgroundView4 - In the implementation block
@property (nonatomic,retain) HRTitledListItemLabel * titledListItemLabel1;                  //@synthesize titledListItemLabel1=_titledListItemLabel1 - In the implementation block
@property (nonatomic,retain) HRTitledListItemLabel * titledListItemLabel2;                  //@synthesize titledListItemLabel2=_titledListItemLabel2 - In the implementation block
@property (nonatomic,retain) HRTitledListItemLabel * titledListItemLabel3;                  //@synthesize titledListItemLabel3=_titledListItemLabel3 - In the implementation block
@property (nonatomic,retain) HRListItemLabel * listItemLabel4;                              //@synthesize listItemLabel4=_listItemLabel4 - In the implementation block
@property (nonatomic,retain) HRStackedButtonView * stackedButtonView;                       //@synthesize stackedButtonView=_stackedButtonView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * contentViewBottomConstraint;              //@synthesize contentViewBottomConstraint=_contentViewBottomConstraint - In the implementation block
+(id)_createBackgroundView;
+(id)_createNumberedViewWithInteger:(unsigned long long)arg1 ;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(UILabel *)titleLabel;
-(void)viewDidLoad;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(NSLayoutConstraint *)contentViewBottomConstraint;
-(void)setContentViewBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setInitialContentOffset:(double)arg1 ;
-(double)initialContentOffset;
-(void)setUpConstraints;
-(void)setUpUI;
-(void)stackedButtonView:(id)arg1 didTapButtonAtIndex:(long long)arg2 ;
-(void)setStackedButtonView:(HRStackedButtonView *)arg1 ;
-(HRStackedButtonView *)stackedButtonView;
-(id)initForOnboarding:(BOOL)arg1 ;
-(void)_updateUIWithState:(long long)arg1 animated:(BOOL)arg2 ;
-(void)_setUpStackedButtonView;
-(void)_setStackedButtonViewAsFooterView;
-(void)_setUpTitleLabel;
-(void)_setUpInfoLabels;
-(void)_setUpTitleConstraints;
-(void)_setUpInfoLabelConstraints;
-(id)_bottomViewForState:(long long)arg1 ;
-(void)_updateContentViewBottomConstraintWithAnchor:(id)arg1 constant:(double)arg2 ;
-(BOOL)stateAnimating;
-(UIView *)backgroundView1;
-(UIView *)backgroundView2;
-(UIView *)backgroundView3;
-(UIView *)backgroundView4;
-(void)_scrollBackgroundViewToVisible:(id)arg1 ;
-(void)setStateAnimating:(BOOL)arg1 ;
-(void)setBackgroundView1:(UIView *)arg1 ;
-(void)setBackgroundView2:(UIView *)arg1 ;
-(void)setBackgroundView3:(UIView *)arg1 ;
-(void)setBackgroundView4:(UIView *)arg1 ;
-(CGSize)_listItemSize;
-(void)setTitledListItemLabel1:(HRTitledListItemLabel *)arg1 ;
-(HRTitledListItemLabel *)titledListItemLabel1;
-(void)setTitledListItemLabel2:(HRTitledListItemLabel *)arg1 ;
-(HRTitledListItemLabel *)titledListItemLabel2;
-(void)setTitledListItemLabel3:(HRTitledListItemLabel *)arg1 ;
-(HRTitledListItemLabel *)titledListItemLabel3;
-(void)setListItemLabel4:(HRListItemLabel *)arg1 ;
-(HRListItemLabel *)listItemLabel4;
@end

