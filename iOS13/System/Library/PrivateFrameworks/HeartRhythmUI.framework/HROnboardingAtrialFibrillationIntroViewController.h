/*
* Generated on Monday, March 1, 2021 at 2:34:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HeartRhythmUI.framework/HeartRhythmUI
*/

#import <HeartRhythmUI/HROnboardingBaseViewController.h>
#import <libobjc.A.dylib/HRStackedButtonViewDelegate.h>
#import <UIKit/UITextFieldDelegate.h>

@class HKHeartRhythmAvailability, NSNumber, UIView, UILabel, HRStackedButtonView, NSLayoutConstraint, UIButton, NSArray, NSString;

@interface HROnboardingAtrialFibrillationIntroViewController : HROnboardingBaseViewController <HRStackedButtonViewDelegate, UITextFieldDelegate> {

	BOOL _learnMoreContentExpanded;
	HKHeartRhythmAvailability* _availability;
	NSNumber* _activeWatchNeedsLocationCheck;
	UIView* _heroView;
	UILabel* _titleLabel;
	UILabel* _bodyLabel;
	UILabel* _footnoteLabel;
	HRStackedButtonView* _stackedButtonView;
	NSLayoutConstraint* _contentViewBottomConstraint;
	UIButton* _learnMoreButton;
	UIView* _learnMoreContentView;
	NSArray* _learnMoreCollapsedConstraints;
	NSArray* _learnMoreExpandedConstraints;

}

@property (nonatomic,retain) HKHeartRhythmAvailability * availability;                      //@synthesize availability=_availability - In the implementation block
@property (nonatomic,retain) NSNumber * activeWatchNeedsLocationCheck;                      //@synthesize activeWatchNeedsLocationCheck=_activeWatchNeedsLocationCheck - In the implementation block
@property (nonatomic,retain) UIView * heroView;                                             //@synthesize heroView=_heroView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                          //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * bodyLabel;                                           //@synthesize bodyLabel=_bodyLabel - In the implementation block
@property (nonatomic,retain) UILabel * footnoteLabel;                                       //@synthesize footnoteLabel=_footnoteLabel - In the implementation block
@property (nonatomic,retain) HRStackedButtonView * stackedButtonView;                       //@synthesize stackedButtonView=_stackedButtonView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * contentViewBottomConstraint;              //@synthesize contentViewBottomConstraint=_contentViewBottomConstraint - In the implementation block
@property (nonatomic,retain) UIButton * learnMoreButton;                                    //@synthesize learnMoreButton=_learnMoreButton - In the implementation block
@property (assign,nonatomic) BOOL learnMoreContentExpanded;                                 //@synthesize learnMoreContentExpanded=_learnMoreContentExpanded - In the implementation block
@property (nonatomic,retain) UIView * learnMoreContentView;                                 //@synthesize learnMoreContentView=_learnMoreContentView - In the implementation block
@property (nonatomic,retain) NSArray * learnMoreCollapsedConstraints;                       //@synthesize learnMoreCollapsedConstraints=_learnMoreCollapsedConstraints - In the implementation block
@property (nonatomic,retain) NSArray * learnMoreExpandedConstraints;                        //@synthesize learnMoreExpandedConstraints=_learnMoreExpandedConstraints - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UILabel *)titleLabel;
-(id)_titleFont;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(NSLayoutConstraint *)contentViewBottomConstraint;
-(void)setContentViewBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(UILabel *)bodyLabel;
-(void)setBodyLabel:(UILabel *)arg1 ;
-(id)titleString;
-(HKHeartRhythmAvailability *)availability;
-(void)setAvailability:(HKHeartRhythmAvailability *)arg1 ;
-(UILabel *)footnoteLabel;
-(void)setFootnoteLabel:(UILabel *)arg1 ;
-(void)setUpConstraints;
-(UIButton *)learnMoreButton;
-(void)setLearnMoreButton:(UIButton *)arg1 ;
-(void)setHeroView:(UIView *)arg1 ;
-(id)bodyString;
-(UIView *)heroView;
-(id)_titleFontTextStyle;
-(void)learnMoreButtonTapped:(id)arg1 ;
-(id)_bodyFont;
-(id)buttonTitleString;
-(void)setUpUI;
-(void)stackedButtonView:(id)arg1 didTapButtonAtIndex:(long long)arg2 ;
-(void)setStackedButtonView:(HRStackedButtonView *)arg1 ;
-(HRStackedButtonView *)stackedButtonView;
-(id)_bodyFontTextStyle;
-(id)initForOnboarding:(BOOL)arg1 ;
-(id)_footnoteFont;
-(void)_setUpStackedButtonView;
-(void)_setStackedButtonViewAsFooterView;
-(id)_createHeroView;
-(BOOL)_activeWatchNeedsLocationCheck;
-(id)footnoteString;
-(void)_setUpLearnMoreViews;
-(double)_assetImageBottomToTitleFirstBaseline;
-(double)_titleLastBaselineToBodyFirstBaseline;
-(void)_setUpLearnMoreConstraints;
-(id)learnMoreString;
-(id)_createLearnMoreExpandedView;
-(void)setLearnMoreContentView:(UIView *)arg1 ;
-(UIView *)learnMoreContentView;
-(double)_footnoteLeading;
-(double)_viewLastBaselineToContinueButton;
-(void)setLearnMoreCollapsedConstraints:(NSArray *)arg1 ;
-(void)setLearnMoreExpandedConstraints:(NSArray *)arg1 ;
-(void)_updateViewsForContentExpansionState:(BOOL)arg1 ;
-(NSArray *)learnMoreCollapsedConstraints;
-(NSArray *)learnMoreExpandedConstraints;
-(id)locationFeatureAlertAckButtonString;
-(id)featureDisabledBodyString;
-(id)locationNotFoundPromptBodyString;
-(id)watchOSVersionTooLowBodyString;
-(id)deviceNotSupportedBodyString;
-(id)locationFeatureIneligiblePromptBodyString;
-(id)_footnoteTextStyle;
-(void)_presentFeatureAlertWithMessage:(id)arg1 ;
-(double)_learnMoreContentViewLastBaselineToContinueButton;
-(NSNumber *)activeWatchNeedsLocationCheck;
-(void)setActiveWatchNeedsLocationCheck:(NSNumber *)arg1 ;
-(BOOL)learnMoreContentExpanded;
-(void)setLearnMoreContentExpanded:(BOOL)arg1 ;
@end

