/*
* Generated on Monday, March 1, 2021 at 2:34:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HeartRhythmUI.framework/HeartRhythmUI
*/

#import <HeartRhythmUI/HROnboardingBaseViewController.h>
#import <libobjc.A.dylib/HRStackedButtonViewDelegate.h>

@class UILabel, HRVideoPlayerView, HRStackedButtonView, NSLayoutConstraint;

@interface HROnboardingElectrocardiogramExplanationViewController : HROnboardingBaseViewController <HRStackedButtonViewDelegate> {

	UILabel* _titleLabel;
	HRVideoPlayerView* _animatedWatchRhythmVideoView;
	UILabel* _bodyLabel;
	HRStackedButtonView* _stackedButtonView;
	NSLayoutConstraint* _contentViewBottomConstraint;

}

@property (nonatomic,retain) UILabel * titleLabel;                                          //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) HRVideoPlayerView * animatedWatchRhythmVideoView;              //@synthesize animatedWatchRhythmVideoView=_animatedWatchRhythmVideoView - In the implementation block
@property (nonatomic,retain) UILabel * bodyLabel;                                           //@synthesize bodyLabel=_bodyLabel - In the implementation block
@property (nonatomic,retain) HRStackedButtonView * stackedButtonView;                       //@synthesize stackedButtonView=_stackedButtonView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * contentViewBottomConstraint;              //@synthesize contentViewBottomConstraint=_contentViewBottomConstraint - In the implementation block
-(UILabel *)titleLabel;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(NSLayoutConstraint *)contentViewBottomConstraint;
-(void)setContentViewBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(UILabel *)bodyLabel;
-(void)setBodyLabel:(UILabel *)arg1 ;
-(void)setUpConstraints;
-(id)_bodyFont;
-(void)setUpUI;
-(void)stackedButtonView:(id)arg1 didTapButtonAtIndex:(long long)arg2 ;
-(void)_setUpButtonFooterView;
-(void)_adjustButtonFooterViewLocationForViewContentHeight;
-(void)setStackedButtonView:(HRStackedButtonView *)arg1 ;
-(HRStackedButtonView *)stackedButtonView;
-(id)_bodyFontTextStyle;
-(id)initForOnboarding:(BOOL)arg1 ;
-(HRVideoPlayerView *)animatedWatchRhythmVideoView;
-(void)setAnimatedWatchRhythmVideoView:(HRVideoPlayerView *)arg1 ;
-(double)_titleBottomToVideoViewTop;
-(double)_videoViewBottomToBodyFirstBaseline;
@end

