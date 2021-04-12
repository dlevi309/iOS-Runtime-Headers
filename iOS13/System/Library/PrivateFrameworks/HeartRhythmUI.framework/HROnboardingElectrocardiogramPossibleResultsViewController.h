/*
* Generated on Monday, March 1, 2021 at 2:34:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HeartRhythmUI.framework/HeartRhythmUI
*/

#import <HeartRhythmUI/HeartRhythmUI-Structs.h>
#import <HeartRhythmUI/HROnboardingBaseViewController.h>
#import <libobjc.A.dylib/HRLinkTextViewDelegate.h>
#import <libobjc.A.dylib/HRStackedButtonViewDelegate.h>

@class HKElectrocardiogram, HKHealthStore, UILabel, HROnboardingElectrocardiogramResultView, HRStackedButtonView, NSLayoutAnchor, NSLayoutConstraint;

@interface HROnboardingElectrocardiogramPossibleResultsViewController : HROnboardingBaseViewController <HRLinkTextViewDelegate, HRStackedButtonViewDelegate> {

	HKElectrocardiogram* _electrocardiogram;
	HKHealthStore* _healthStore;
	UILabel* _titleLabel;
	HROnboardingElectrocardiogramResultView* _sinusRhythmResultReview;
	HROnboardingElectrocardiogramResultView* _atrialFibrillationResultView;
	HROnboardingElectrocardiogramResultView* _highOrLowHeartRateResultView;
	HROnboardingElectrocardiogramResultView* _inconclusiveResultView;
	HROnboardingElectrocardiogramResultView* _onlyResultView;
	HROnboardingElectrocardiogramResultView* _bottomResultView;
	UILabel* _disclaimerLabel;
	HRStackedButtonView* _stackedButtonView;
	NSLayoutAnchor* _viewTopAnchor;
	NSLayoutConstraint* _contentViewBottomConstraint;
	NSLayoutConstraint* _disclaimerLabelTopConstraint;

}

@property (nonatomic,retain) HKElectrocardiogram * electrocardiogram;                                             //@synthesize electrocardiogram=_electrocardiogram - In the implementation block
@property (nonatomic,retain) HKHealthStore * healthStore;                                                         //@synthesize healthStore=_healthStore - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                                                //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) HROnboardingElectrocardiogramResultView * sinusRhythmResultReview;                   //@synthesize sinusRhythmResultReview=_sinusRhythmResultReview - In the implementation block
@property (nonatomic,retain) HROnboardingElectrocardiogramResultView * atrialFibrillationResultView;              //@synthesize atrialFibrillationResultView=_atrialFibrillationResultView - In the implementation block
@property (nonatomic,retain) HROnboardingElectrocardiogramResultView * highOrLowHeartRateResultView;              //@synthesize highOrLowHeartRateResultView=_highOrLowHeartRateResultView - In the implementation block
@property (nonatomic,retain) HROnboardingElectrocardiogramResultView * inconclusiveResultView;                    //@synthesize inconclusiveResultView=_inconclusiveResultView - In the implementation block
@property (nonatomic,retain) HROnboardingElectrocardiogramResultView * onlyResultView;                            //@synthesize onlyResultView=_onlyResultView - In the implementation block
@property (nonatomic,retain) HROnboardingElectrocardiogramResultView * bottomResultView;                          //@synthesize bottomResultView=_bottomResultView - In the implementation block
@property (nonatomic,retain) UILabel * disclaimerLabel;                                                           //@synthesize disclaimerLabel=_disclaimerLabel - In the implementation block
@property (nonatomic,retain) HRStackedButtonView * stackedButtonView;                                             //@synthesize stackedButtonView=_stackedButtonView - In the implementation block
@property (nonatomic,retain) NSLayoutAnchor * viewTopAnchor;                                                      //@synthesize viewTopAnchor=_viewTopAnchor - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * contentViewBottomConstraint;                                    //@synthesize contentViewBottomConstraint=_contentViewBottomConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * disclaimerLabelTopConstraint;                                   //@synthesize disclaimerLabelTopConstraint=_disclaimerLabelTopConstraint - In the implementation block
-(HKHealthStore *)healthStore;
-(void)setHealthStore:(HKHealthStore *)arg1 ;
-(UILabel *)titleLabel;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(NSLayoutConstraint *)contentViewBottomConstraint;
-(void)setContentViewBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(void)_updateForCurrentSizeCategory;
-(id)initWithSample:(id)arg1 ;
-(void)setUpConstraints;
-(UILabel *)disclaimerLabel;
-(void)setDisclaimerLabel:(UILabel *)arg1 ;
-(void)setUpUI;
-(void)stackedButtonView:(id)arg1 didTapButtonAtIndex:(long long)arg2 ;
-(void)setStackedButtonView:(HRStackedButtonView *)arg1 ;
-(HRStackedButtonView *)stackedButtonView;
-(id)initForOnboarding:(BOOL)arg1 ;
-(void)_setUpStackedButtonView;
-(void)_setStackedButtonViewAsFooterView;
-(void)_setUpTitleConstraints;
-(HROnboardingElectrocardiogramResultView *)atrialFibrillationResultView;
-(HKElectrocardiogram *)electrocardiogram;
-(void)setElectrocardiogram:(HKElectrocardiogram *)arg1 ;
-(void)linkTextView:(id)arg1 didTapOnLinkInRange:(NSRange)arg2 ;
-(void)_playResultViewVideos;
-(void)_pauseResultViewVideos;
-(void)_adjustStackedButtonViewLocationForViewContentHeight;
-(void)_setUpTitle;
-(void)setViewTopAnchor:(NSLayoutAnchor *)arg1 ;
-(void)_setUpOnlyResultView;
-(HROnboardingElectrocardiogramResultView *)onlyResultView;
-(void)_setUpAllResultViews;
-(void)_setUpDisclaimerLabel;
-(void)_setUpOnlyResultViewConstraints;
-(void)_setUpAllResultViewConstraints;
-(void)_setUpBottomResultViewConstraint;
-(void)_adjustDisclaimerLabelConstraints;
-(id)_resultViewForSample:(id)arg1 ;
-(void)setOnlyResultView:(HROnboardingElectrocardiogramResultView *)arg1 ;
-(void)setBottomResultView:(HROnboardingElectrocardiogramResultView *)arg1 ;
-(NSLayoutAnchor *)viewTopAnchor;
-(void)setSinusRhythmResultReview:(HROnboardingElectrocardiogramResultView *)arg1 ;
-(HROnboardingElectrocardiogramResultView *)sinusRhythmResultReview;
-(void)setAtrialFibrillationResultView:(HROnboardingElectrocardiogramResultView *)arg1 ;
-(void)setHighOrLowHeartRateResultView:(HROnboardingElectrocardiogramResultView *)arg1 ;
-(HROnboardingElectrocardiogramResultView *)highOrLowHeartRateResultView;
-(void)setInconclusiveResultView:(HROnboardingElectrocardiogramResultView *)arg1 ;
-(HROnboardingElectrocardiogramResultView *)inconclusiveResultView;
-(HROnboardingElectrocardiogramResultView *)bottomResultView;
-(void)setDisclaimerLabelTopConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)disclaimerLabelTopConstraint;
@end

