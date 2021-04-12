/*
* Generated on Monday, March 1, 2021 at 2:34:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HeartRhythmUI.framework/HeartRhythmUI
*/

#import <HeartRhythmUI/HeartRhythmUI-Structs.h>
#import <HeartRhythmUI/HROnboardingBaseViewController.h>
#import <libobjc.A.dylib/HRLinkTextViewDelegate.h>
#import <libobjc.A.dylib/HRStackedButtonViewDelegate.h>

@class HKAnchoredObjectQuery, HKElectrocardiogram, UITapGestureRecognizer, UILabel, UIActivityIndicatorView, HKElectrocardiogramCardView, HRStackedButtonView, NSLayoutConstraint, NSLayoutYAxisAnchor;

@interface HROnboardingElectrocardiogramSetupCompleteViewController : HROnboardingBaseViewController <HRLinkTextViewDelegate, HRStackedButtonViewDelegate> {

	long long _state;
	HKAnchoredObjectQuery* _electrocardiogramQuery;
	HKElectrocardiogram* _electrocardiogram;
	UITapGestureRecognizer* _electrocardiogramCardTapGestureRecognizer;
	UILabel* _titleLabel;
	UIActivityIndicatorView* _activityIndicatorView;
	UILabel* _classificationLabel;
	HKElectrocardiogramCardView* _electrocardiogramCardView;
	UILabel* _bodyLabel;
	HRStackedButtonView* _stackedButtonView;
	NSLayoutConstraint* _contentViewBottomConstraint;
	NSLayoutYAxisAnchor* _viewBottomAnchor;

}

@property (assign,nonatomic) long long state;                                                                 //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) HKAnchoredObjectQuery * electrocardiogramQuery;                                  //@synthesize electrocardiogramQuery=_electrocardiogramQuery - In the implementation block
@property (nonatomic,retain) HKElectrocardiogram * electrocardiogram;                                         //@synthesize electrocardiogram=_electrocardiogram - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * electrocardiogramCardTapGestureRecognizer;              //@synthesize electrocardiogramCardTapGestureRecognizer=_electrocardiogramCardTapGestureRecognizer - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                                            //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * activityIndicatorView;                                 //@synthesize activityIndicatorView=_activityIndicatorView - In the implementation block
@property (nonatomic,retain) UILabel * classificationLabel;                                                   //@synthesize classificationLabel=_classificationLabel - In the implementation block
@property (nonatomic,retain) HKElectrocardiogramCardView * electrocardiogramCardView;                         //@synthesize electrocardiogramCardView=_electrocardiogramCardView - In the implementation block
@property (nonatomic,retain) UILabel * bodyLabel;                                                             //@synthesize bodyLabel=_bodyLabel - In the implementation block
@property (nonatomic,retain) HRStackedButtonView * stackedButtonView;                                         //@synthesize stackedButtonView=_stackedButtonView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * contentViewBottomConstraint;                                //@synthesize contentViewBottomConstraint=_contentViewBottomConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutYAxisAnchor * viewBottomAnchor;                                          //@synthesize viewBottomAnchor=_viewBottomAnchor - In the implementation block
-(long long)state;
-(void)setState:(long long)arg1 ;
-(UILabel *)titleLabel;
-(void)viewDidLoad;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(NSLayoutConstraint *)contentViewBottomConstraint;
-(void)setContentViewBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(UILabel *)bodyLabel;
-(void)setBodyLabel:(UILabel *)arg1 ;
-(UIActivityIndicatorView *)activityIndicatorView;
-(void)setActivityIndicatorView:(UIActivityIndicatorView *)arg1 ;
-(UILabel *)classificationLabel;
-(void)_setUpConstraints;
-(void)setClassificationLabel:(UILabel *)arg1 ;
-(id)_bodyFont;
-(void)_setUpUI;
-(void)stackedButtonView:(id)arg1 didTapButtonAtIndex:(long long)arg2 ;
-(void)setStackedButtonView:(HRStackedButtonView *)arg1 ;
-(HRStackedButtonView *)stackedButtonView;
-(id)_bodyFontTextStyle;
-(id)initForOnboarding:(BOOL)arg1 ;
-(id)_subheadlineFont;
-(void)_setUpElectrocardiogramQuery;
-(void)_stopElectrocardiogramQuery;
-(void)setElectrocardiogramQuery:(HKAnchoredObjectQuery *)arg1 ;
-(HKAnchoredObjectQuery *)electrocardiogramQuery;
-(HKElectrocardiogram *)electrocardiogram;
-(void)setElectrocardiogram:(HKElectrocardiogram *)arg1 ;
-(void)linkTextView:(id)arg1 didTapOnLinkInRange:(NSRange)arg2 ;
-(void)_recomputeState;
-(id)_classificationAttributedTextForElectrocardiogram:(id)arg1 ;
-(void)setElectrocardiogramCardView:(HKElectrocardiogramCardView *)arg1 ;
-(HKElectrocardiogramCardView *)electrocardiogramCardView;
-(void)_electrocardiogramCardViewTapped:(id)arg1 ;
-(void)setElectrocardiogramCardTapGestureRecognizer:(UITapGestureRecognizer *)arg1 ;
-(UITapGestureRecognizer *)electrocardiogramCardTapGestureRecognizer;
-(void)_setupBodyLabelForSetupCompleteState:(long long)arg1 ;
-(void)_resetUI;
-(double)_classificationTextDistance;
-(void)_updateUIForElectrocardiogram:(id)arg1 ;
-(NSLayoutYAxisAnchor *)viewBottomAnchor;
-(void)setViewBottomAnchor:(NSLayoutYAxisAnchor *)arg1 ;
@end

