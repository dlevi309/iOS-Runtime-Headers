/*
* Generated on Thursday, January 14, 2021 at 2:27:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HeartRhythmUI.framework/HeartRhythmUI
*/

#import <HeartRhythmUI/HROnboardingBaseViewController.h>
#import <libobjc.A.dylib/HRStackedButtonViewDelegate.h>

@protocol HROnboardingElectrocardiogramSetupCompleteViewControllerDelegate;
@class HKAnchoredObjectQuery, HKElectrocardiogram, UITapGestureRecognizer, UILabel, UIActivityIndicatorView, HKElectrocardiogramCardView, HRStackedButtonView, NSLayoutConstraint, NSLayoutYAxisAnchor;

@interface HROnboardingElectrocardiogramSetupCompleteViewController : HROnboardingBaseViewController <HRStackedButtonViewDelegate> {

	BOOL _firstViewDidLayoutSubviews;
	BOOL _isSampleInteractive;
	long long _state;
	HKAnchoredObjectQuery* _electrocardiogramQuery;
	HKElectrocardiogram* _electrocardiogram;
	UITapGestureRecognizer* _electrocardiogramCardTapGestureRecognizer;
	id<HROnboardingElectrocardiogramSetupCompleteViewControllerDelegate> _electrocardiogramDelegate;
	UILabel* _titleLabel;
	UIActivityIndicatorView* _activityIndicatorView;
	UILabel* _classificationLabel;
	HKElectrocardiogramCardView* _electrocardiogramCardView;
	UILabel* _bodyLabel;
	HRStackedButtonView* _stackedButtonView;
	NSLayoutConstraint* _contentViewBottomConstraint;
	NSLayoutYAxisAnchor* _viewBottomAnchor;

}

@property (assign,nonatomic) long long state;                                                                                                    //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) HKAnchoredObjectQuery * electrocardiogramQuery;                                                                     //@synthesize electrocardiogramQuery=_electrocardiogramQuery - In the implementation block
@property (nonatomic,retain) HKElectrocardiogram * electrocardiogram;                                                                            //@synthesize electrocardiogram=_electrocardiogram - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * electrocardiogramCardTapGestureRecognizer;                                                 //@synthesize electrocardiogramCardTapGestureRecognizer=_electrocardiogramCardTapGestureRecognizer - In the implementation block
@property (assign,nonatomic,__weak) id<HROnboardingElectrocardiogramSetupCompleteViewControllerDelegate> electrocardiogramDelegate;              //@synthesize electrocardiogramDelegate=_electrocardiogramDelegate - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                                                                               //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * activityIndicatorView;                                                                    //@synthesize activityIndicatorView=_activityIndicatorView - In the implementation block
@property (nonatomic,retain) UILabel * classificationLabel;                                                                                      //@synthesize classificationLabel=_classificationLabel - In the implementation block
@property (nonatomic,retain) HKElectrocardiogramCardView * electrocardiogramCardView;                                                            //@synthesize electrocardiogramCardView=_electrocardiogramCardView - In the implementation block
@property (nonatomic,retain) UILabel * bodyLabel;                                                                                                //@synthesize bodyLabel=_bodyLabel - In the implementation block
@property (nonatomic,retain) HRStackedButtonView * stackedButtonView;                                                                            //@synthesize stackedButtonView=_stackedButtonView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * contentViewBottomConstraint;                                                                   //@synthesize contentViewBottomConstraint=_contentViewBottomConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutYAxisAnchor * viewBottomAnchor;                                                                             //@synthesize viewBottomAnchor=_viewBottomAnchor - In the implementation block
@property (assign,nonatomic) BOOL firstViewDidLayoutSubviews;                                                                                    //@synthesize firstViewDidLayoutSubviews=_firstViewDidLayoutSubviews - In the implementation block
@property (nonatomic,readonly) BOOL isSampleInteractive;                                                                                         //@synthesize isSampleInteractive=_isSampleInteractive - In the implementation block
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)_setUpConstraints;
-(void)viewDidLoad;
-(UILabel *)bodyLabel;
-(UILabel *)classificationLabel;
-(void)setContentViewBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(void)_updateUI;
-(void)setState:(long long)arg1 ;
-(long long)state;
-(UIActivityIndicatorView *)activityIndicatorView;
-(void)setActivityIndicatorView:(UIActivityIndicatorView *)arg1 ;
-(NSLayoutConstraint *)contentViewBottomConstraint;
-(void)setBodyLabel:(UILabel *)arg1 ;
-(id)_bodyFont;
-(void)_setUpUI;
-(void)viewDidLayoutSubviews;
-(BOOL)isSampleInteractive;
-(void)stackedButtonView:(id)arg1 didTapButtonAtIndex:(long long)arg2 ;
-(void)setClassificationLabel:(UILabel *)arg1 ;
-(void)_resetUI;
-(BOOL)firstViewDidLayoutSubviews;
-(void)setFirstViewDidLayoutSubviews:(BOOL)arg1 ;
-(void)setStackedButtonView:(HRStackedButtonView *)arg1 ;
-(HRStackedButtonView *)stackedButtonView;
-(id)_bodyFontTextStyle;
-(id)_subheadlineFont;
-(id)initForOnboarding:(BOOL)arg1 isSampleInteractive:(BOOL)arg2 electrocardiogramDelegate:(id)arg3 ;
-(void)_setUpElectrocardiogramQuery;
-(void)_stopElectrocardiogramQuery;
-(void)setElectrocardiogramQuery:(HKAnchoredObjectQuery *)arg1 ;
-(HKAnchoredObjectQuery *)electrocardiogramQuery;
-(HKElectrocardiogram *)electrocardiogram;
-(void)setElectrocardiogram:(HKElectrocardiogram *)arg1 ;
-(void)_recomputeState;
-(id)_classificationAttributedTextForElectrocardiogram:(id)arg1 activeAlgorithmVersion:(long long)arg2 ;
-(void)setElectrocardiogramCardView:(HKElectrocardiogramCardView *)arg1 ;
-(HKElectrocardiogramCardView *)electrocardiogramCardView;
-(void)_electrocardiogramCardViewTapped:(id)arg1 ;
-(void)setElectrocardiogramCardTapGestureRecognizer:(UITapGestureRecognizer *)arg1 ;
-(UITapGestureRecognizer *)electrocardiogramCardTapGestureRecognizer;
-(void)_setupBodyLabelForSetupCompleteState:(long long)arg1 ;
-(id<HROnboardingElectrocardiogramSetupCompleteViewControllerDelegate>)electrocardiogramDelegate;
-(double)_classificationTextDistance;
-(void)_updateUIForElectrocardiogram:(id)arg1 ;
-(void)setElectrocardiogramDelegate:(id<HROnboardingElectrocardiogramSetupCompleteViewControllerDelegate>)arg1 ;
-(NSLayoutYAxisAnchor *)viewBottomAnchor;
-(void)setViewBottomAnchor:(NSLayoutYAxisAnchor *)arg1 ;
@end

