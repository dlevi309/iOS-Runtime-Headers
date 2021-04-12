/*
* Generated on Monday, March 1, 2021 at 2:34:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HeartRhythmUI.framework/HeartRhythmUI
*/

#import <UIKitCore/UIView.h>

@class NSString, UILabel, HRVideoPlayerView, UIButton, UIView, HKSeparatorLineView, NSLayoutConstraint;

@interface HROnboardingElectrocardiogramResultView : UIView {

	BOOL _hideNumberedTitle;
	BOOL _alwaysExpanded;
	BOOL _shouldHideSeparatorLine;
	BOOL _expanded;
	NSString* _title;
	UILabel* _numberedTitleLabel;
	HRVideoPlayerView* _playerView;
	NSString* _localizationKey;
	NSString* _numberedTitle;
	NSString* _visibleBody;
	UILabel* _visibleBodyLabel;
	UIButton* _learnMoreButton;
	UIView* _expandedView;
	HKSeparatorLineView* _separatorLineView;
	NSLayoutConstraint* _playerViewTopConstraint;
	NSLayoutConstraint* _bottomConstraint;

}

@property (nonatomic,copy) NSString * localizationKey;                                         //@synthesize localizationKey=_localizationKey - In the implementation block
@property (nonatomic,copy) NSString * title;                                                   //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * numberedTitle;                                           //@synthesize numberedTitle=_numberedTitle - In the implementation block
@property (nonatomic,retain) HRVideoPlayerView * playerView;                                   //@synthesize playerView=_playerView - In the implementation block
@property (nonatomic,copy) NSString * visibleBody;                                             //@synthesize visibleBody=_visibleBody - In the implementation block
@property (nonatomic,retain) UILabel * numberedTitleLabel;                                     //@synthesize numberedTitleLabel=_numberedTitleLabel - In the implementation block
@property (nonatomic,retain) UILabel * visibleBodyLabel;                                       //@synthesize visibleBodyLabel=_visibleBodyLabel - In the implementation block
@property (nonatomic,retain) UIButton * learnMoreButton;                                       //@synthesize learnMoreButton=_learnMoreButton - In the implementation block
@property (nonatomic,retain) UIView * expandedView;                                            //@synthesize expandedView=_expandedView - In the implementation block
@property (nonatomic,retain) HKSeparatorLineView * separatorLineView;                          //@synthesize separatorLineView=_separatorLineView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * playerViewTopConstraint;                     //@synthesize playerViewTopConstraint=_playerViewTopConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * bottomConstraint;                            //@synthesize bottomConstraint=_bottomConstraint - In the implementation block
@property (assign,getter=isExpanded,nonatomic) BOOL expanded;                                  //@synthesize expanded=_expanded - In the implementation block
@property (assign,getter=isHidingNumberedTitle,nonatomic) BOOL hideNumberedTitle;              //@synthesize hideNumberedTitle=_hideNumberedTitle - In the implementation block
@property (assign,getter=isAlwaysExpanded,nonatomic) BOOL alwaysExpanded;                      //@synthesize alwaysExpanded=_alwaysExpanded - In the implementation block
@property (assign,nonatomic) BOOL shouldHideSeparatorLine;                                     //@synthesize shouldHideSeparatorLine=_shouldHideSeparatorLine - In the implementation block
+(id)sinusRhythmResultView;
+(id)atrialFibrillationResultView;
+(id)highOrLowAbove120Below50HeartRateResultView;
+(id)inconclusiveResultViewWithDelegate:(id)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSLayoutConstraint *)bottomConstraint;
-(BOOL)isExpanded;
-(NSString *)localizationKey;
-(void)setExpanded:(BOOL)arg1 ;
-(void)_setUpConstraints;
-(void)setBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(UIButton *)learnMoreButton;
-(void)setLearnMoreButton:(UIButton *)arg1 ;
-(HRVideoPlayerView *)playerView;
-(void)setPlayerView:(HRVideoPlayerView *)arg1 ;
-(void)learnMoreButtonTapped:(id)arg1 ;
-(void)_setUpUI;
-(id)initWithLocalizationKey:(id)arg1 video:(id)arg2 expandedView:(id)arg3 ;
-(void)_updateNumberedTitleViewState;
-(void)_updateExpandedViewState;
-(void)setNumberedTitleLabel:(UILabel *)arg1 ;
-(NSString *)numberedTitle;
-(UILabel *)numberedTitleLabel;
-(id)_numberedTitleFont;
-(void)setVisibleBodyLabel:(UILabel *)arg1 ;
-(NSString *)visibleBody;
-(UILabel *)visibleBodyLabel;
-(id)_visibleBodyFont;
-(UIView *)expandedView;
-(void)setSeparatorLineView:(HKSeparatorLineView *)arg1 ;
-(HKSeparatorLineView *)separatorLineView;
-(void)_setUpNumberedTitleLabelConstraints;
-(void)_setUpPlayerViewTopConstraint;
-(double)_visibleBodyFirstBaselineDistance;
-(double)_visibleBodyLastBaselineToLearnMoreButtonFirstBaseline;
-(double)_learnMoreButtonLastBaselineToBottom;
-(double)_numberedTitleTopToFirstBaseline;
-(NSLayoutConstraint *)playerViewTopConstraint;
-(void)setPlayerViewTopConstraint:(NSLayoutConstraint *)arg1 ;
-(BOOL)isHidingNumberedTitle;
-(double)_numberedTitleLastBaseLineToVideoTop;
-(BOOL)shouldHideSeparatorLine;
-(id)_visibleBodyFontTextStyle;
-(void)setHideNumberedTitle:(BOOL)arg1 ;
-(void)setAlwaysExpanded:(BOOL)arg1 ;
-(void)setShouldHideSeparatorLine:(BOOL)arg1 ;
-(BOOL)isAlwaysExpanded;
-(void)setLocalizationKey:(NSString *)arg1 ;
-(void)setNumberedTitle:(NSString *)arg1 ;
-(void)setVisibleBody:(NSString *)arg1 ;
-(void)setExpandedView:(UIView *)arg1 ;
@end

