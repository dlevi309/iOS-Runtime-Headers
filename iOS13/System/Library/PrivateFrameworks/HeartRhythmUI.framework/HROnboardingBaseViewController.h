/*
* Generated on Monday, March 1, 2021 at 2:34:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HeartRhythmUI.framework/HeartRhythmUI
*/

#import <HeartRhythmUI/HeartRhythmUI-Structs.h>
#import <HealthUI/HKViewController.h>

@protocol HROnboardingPageViewControllerDelegate;
@class UIView, UIScrollView, NSLayoutConstraint;

@interface HROnboardingBaseViewController : HKViewController {

	BOOL _onboarding;
	UIView* _contentView;
	UIScrollView* _scrollView;
	long long _leftButtonType;
	long long _rightButtonType;
	id<HROnboardingPageViewControllerDelegate> _delegate;
	UIView* _footerView;
	NSLayoutConstraint* _scrollViewBottomConstraint;

}

@property (nonatomic,retain) UIScrollView * scrollView;                                        //@synthesize scrollView=_scrollView - In the implementation block
@property (nonatomic,retain) UIView * footerView;                                              //@synthesize footerView=_footerView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * scrollViewBottomConstraint;                  //@synthesize scrollViewBottomConstraint=_scrollViewBottomConstraint - In the implementation block
@property (getter=isOnboarding,nonatomic,readonly) BOOL onboarding;                            //@synthesize onboarding=_onboarding - In the implementation block
@property (nonatomic,retain) UIView * contentView;                                             //@synthesize contentView=_contentView - In the implementation block
@property (assign,nonatomic) long long leftButtonType;                                         //@synthesize leftButtonType=_leftButtonType - In the implementation block
@property (assign,nonatomic) long long rightButtonType;                                        //@synthesize rightButtonType=_rightButtonType - In the implementation block
@property (nonatomic,retain) id<HROnboardingPageViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<HROnboardingPageViewControllerDelegate>)delegate;
-(void)setDelegate:(id<HROnboardingPageViewControllerDelegate>)arg1 ;
-(UIView *)contentView;
-(void)setContentView:(UIView *)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidLayoutSubviews;
-(id)_cancelButton;
-(UIScrollView *)scrollView;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(id)titleFont;
-(UIView *)footerView;
-(void)setFooterView:(UIView *)arg1 ;
-(id)_closeButton;
-(void)setUpConstraints;
-(void)closeButtonTapped:(id)arg1 ;
-(id)_skipButton;
-(id)_titleFontTextStyle;
-(id)_buttonForButtonType:(long long)arg1 ;
-(void)setScrollViewBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)scrollViewBottomConstraint;
-(void)setLeftButtonType:(long long)arg1 ;
-(void)setUpUI;
-(BOOL)isOnboarding;
-(double)contentTop;
-(void)setFooterView:(id)arg1 insets:(NSDirectionalEdgeInsets)arg2 ;
-(void)removeFooterView;
-(double)_titleTopToFirstBaselineLeading;
-(id)initForOnboarding:(BOOL)arg1 ;
-(void)setRightButtonType:(long long)arg1 ;
-(void)_setUpNavigationBar;
-(void)updateUserInterfaceForStyle:(long long)arg1 ;
-(void)_adjustScrollViewForFooterView;
-(id)_onboardingElectrocardiogramCancelButton;
-(id)_onboardingAtrialFibrillationDetectionCancelButton;
-(void)onboardingElectrocardiogramCancelButtonTapped:(id)arg1 ;
-(void)onboardingAtrialFibrillationDetectionCancelButtonTapped:(id)arg1 ;
-(void)skipButtonTapped:(id)arg1 ;
-(void)presentAlertWithMessage:(id)arg1 ;
-(void)presentLearnMoreAlertWithMessage:(id)arg1 learnMoreTapped:(/*^block*/id)arg2 ;
-(double)titleTopToFirstBaseline;
-(long long)leftButtonType;
-(long long)rightButtonType;
@end

