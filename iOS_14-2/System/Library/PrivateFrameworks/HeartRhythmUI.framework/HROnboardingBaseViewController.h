/*
* Generated on Thursday, January 14, 2021 at 2:27:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HeartRhythmUI.framework/HeartRhythmUI
*/

#import <HeartRhythmUI/HeartRhythmUI-Structs.h>
#import <HealthUI/HKViewController.h>

@protocol HROnboardingPageViewControllerDelegate;
@class UIView, UIScrollView, NSLayoutConstraint;

@interface HROnboardingBaseViewController : HKViewController {

	BOOL _onboarding;
	long long _upgradingFromAlgorithmVersion;
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
@property (assign,nonatomic) long long upgradingFromAlgorithmVersion;                          //@synthesize upgradingFromAlgorithmVersion=_upgradingFromAlgorithmVersion - In the implementation block
@property (nonatomic,retain) UIView * contentView;                                             //@synthesize contentView=_contentView - In the implementation block
@property (assign,nonatomic) long long leftButtonType;                                         //@synthesize leftButtonType=_leftButtonType - In the implementation block
@property (assign,nonatomic) long long rightButtonType;                                        //@synthesize rightButtonType=_rightButtonType - In the implementation block
@property (nonatomic,retain) id<HROnboardingPageViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(UIView *)footerView;
-(id<HROnboardingPageViewControllerDelegate>)delegate;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)titleFont;
-(id)_buttonForButtonType:(long long)arg1 ;
-(void)setDelegate:(id<HROnboardingPageViewControllerDelegate>)arg1 ;
-(void)viewDidLoad;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(void)setContentView:(UIView *)arg1 ;
-(void)setFooterView:(UIView *)arg1 ;
-(id)_closeButton;
-(id)_cancelButton;
-(void)setUpConstraints;
-(id)_titleFontTextStyle;
-(void)closeButtonTapped:(id)arg1 ;
-(UIView *)contentView;
-(id)_skipButton;
-(void)setUpUI;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UIScrollView *)scrollView;
-(void)viewDidLayoutSubviews;
-(BOOL)isOnboarding;
-(void)setScrollViewBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)scrollViewBottomConstraint;
-(void)setLeftButtonType:(long long)arg1 ;
-(id)initForOnboarding:(BOOL)arg1 ;
-(double)contentTop;
-(void)setFooterView:(id)arg1 insets:(NSDirectionalEdgeInsets)arg2 ;
-(void)removeFooterView;
-(double)_titleTopToFirstBaselineLeading;
-(id)initForOnboarding:(BOOL)arg1 upgradingFromAlgorithmVersion:(long long)arg2 ;
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
-(long long)upgradingFromAlgorithmVersion;
-(void)setUpgradingFromAlgorithmVersion:(long long)arg1 ;
-(long long)leftButtonType;
-(long long)rightButtonType;
@end

