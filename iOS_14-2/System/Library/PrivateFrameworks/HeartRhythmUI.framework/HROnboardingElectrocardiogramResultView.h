/*
* Generated on Thursday, January 14, 2021 at 2:27:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HeartRhythmUI.framework/HeartRhythmUI
*/

#import <UIKitCore/UIView.h>

@class NSString, HRVideoPlayerView, HRPaddingLabel, UILabel, UIButton, UIView, HKSeparatorLineView, NSLayoutConstraint;

@interface HROnboardingElectrocardiogramResultView : UIView {

	BOOL _hideNumberedTitle;
	BOOL _alwaysExpanded;
	BOOL _shouldHideSeparatorLine;
	BOOL _expanded;
	NSString* _title;
	HRVideoPlayerView* _playerView;
	NSString* _badge;
	NSString* _numberedTitle;
	NSString* _visibleBody;
	HRPaddingLabel* _badgeLabel;
	UILabel* _numberedTitleLabel;
	UILabel* _visibleBodyLabel;
	UIButton* _learnMoreButton;
	UIView* _expandedView;
	HKSeparatorLineView* _separatorLineView;
	NSLayoutConstraint* _playerViewOrVisibleBodyLabelTopConstraint;
	NSLayoutConstraint* _bottomConstraint;

}

@property (nonatomic,copy) NSString * badge;                                                              //@synthesize badge=_badge - In the implementation block
@property (nonatomic,copy) NSString * title;                                                              //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * numberedTitle;                                                      //@synthesize numberedTitle=_numberedTitle - In the implementation block
@property (nonatomic,retain) HRVideoPlayerView * playerView;                                              //@synthesize playerView=_playerView - In the implementation block
@property (nonatomic,copy) NSString * visibleBody;                                                        //@synthesize visibleBody=_visibleBody - In the implementation block
@property (nonatomic,retain) HRPaddingLabel * badgeLabel;                                                 //@synthesize badgeLabel=_badgeLabel - In the implementation block
@property (nonatomic,retain) UILabel * numberedTitleLabel;                                                //@synthesize numberedTitleLabel=_numberedTitleLabel - In the implementation block
@property (nonatomic,retain) UILabel * visibleBodyLabel;                                                  //@synthesize visibleBodyLabel=_visibleBodyLabel - In the implementation block
@property (nonatomic,retain) UIButton * learnMoreButton;                                                  //@synthesize learnMoreButton=_learnMoreButton - In the implementation block
@property (nonatomic,retain) UIView * expandedView;                                                       //@synthesize expandedView=_expandedView - In the implementation block
@property (nonatomic,retain) HKSeparatorLineView * separatorLineView;                                     //@synthesize separatorLineView=_separatorLineView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * playerViewOrVisibleBodyLabelTopConstraint;              //@synthesize playerViewOrVisibleBodyLabelTopConstraint=_playerViewOrVisibleBodyLabelTopConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * bottomConstraint;                                       //@synthesize bottomConstraint=_bottomConstraint - In the implementation block
@property (assign,getter=isExpanded,nonatomic) BOOL expanded;                                             //@synthesize expanded=_expanded - In the implementation block
@property (assign,getter=isHidingNumberedTitle,nonatomic) BOOL hideNumberedTitle;                         //@synthesize hideNumberedTitle=_hideNumberedTitle - In the implementation block
@property (assign,getter=isAlwaysExpanded,nonatomic) BOOL alwaysExpanded;                                 //@synthesize alwaysExpanded=_alwaysExpanded - In the implementation block
@property (assign,nonatomic) BOOL shouldHideSeparatorLine;                                                //@synthesize shouldHideSeparatorLine=_shouldHideSeparatorLine - In the implementation block
+(id)resultViewWithItem:(id)arg1 ;
-(void)setExpanded:(BOOL)arg1 ;
-(BOOL)isExpanded;
-(void)setBadge:(NSString *)arg1 ;
-(NSString *)badge;
-(id)_badgeFont;
-(void)_setUpConstraints;
-(NSLayoutConstraint *)bottomConstraint;
-(void)setTitle:(NSString *)arg1 ;
-(HRVideoPlayerView *)playerView;
-(void)setPlayerView:(HRVideoPlayerView *)arg1 ;
-(UIButton *)learnMoreButton;
-(void)setLearnMoreButton:(UIButton *)arg1 ;
-(void)_setUpUI;
-(void)setBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(NSString *)title;
-(HRPaddingLabel *)badgeLabel;
-(void)setBadgeLabel:(HRPaddingLabel *)arg1 ;
-(void)learnMoreButtonTapped:(id)arg1 ;
-(NSString *)numberedTitle;
-(id)initWithBadge:(id)arg1 title:(id)arg2 numberedTitle:(id)arg3 visibleBodyText:(id)arg4 video:(id)arg5 expandedView:(id)arg6 ;
-(void)_updateNumberedTitleViewState;
-(void)_updateExpandedViewState;
-(void)setNumberedTitleLabel:(UILabel *)arg1 ;
-(UILabel *)numberedTitleLabel;
-(id)_numberedTitleFont;
-(void)setVisibleBodyLabel:(UILabel *)arg1 ;
-(NSString *)visibleBody;
-(UILabel *)visibleBodyLabel;
-(id)_visibleBodyFont;
-(UIView *)expandedView;
-(void)setSeparatorLineView:(HKSeparatorLineView *)arg1 ;
-(HKSeparatorLineView *)separatorLineView;
-(double)_badgeTopToFirstBaseline;
-(void)_setUpNumberedTitleLabelConstraints;
-(void)_setUpPlayerViewTopConstraint;
-(double)_visibleBodyFirstBaselineDistance;
-(void)_setUpVisibleBodyLabelTopConstraint;
-(double)_visibleBodyLastBaselineToLearnMoreButtonFirstBaseline;
-(double)_learnMoreButtonLastBaselineToBottom;
-(double)_numberedTitleToBadgeLastBaseline;
-(double)_numberedTitleTopToFirstBaseline;
-(NSLayoutConstraint *)playerViewOrVisibleBodyLabelTopConstraint;
-(void)setPlayerViewOrVisibleBodyLabelTopConstraint:(NSLayoutConstraint *)arg1 ;
-(id)_playerViewOrVisibleBodyLabelTopConstraint;
-(double)_playerViewOrVisibleBodyLabelTopConstant;
-(BOOL)isHidingNumberedTitle;
-(double)_numberedTitleLastBaseLineToVideoTop;
-(BOOL)shouldHideSeparatorLine;
-(id)_visibleBodyFontTextStyle;
-(void)setHideNumberedTitle:(BOOL)arg1 ;
-(void)setAlwaysExpanded:(BOOL)arg1 ;
-(void)setShouldHideSeparatorLine:(BOOL)arg1 ;
-(BOOL)isAlwaysExpanded;
-(void)setNumberedTitle:(NSString *)arg1 ;
-(void)setVisibleBody:(NSString *)arg1 ;
-(void)setExpandedView:(UIView *)arg1 ;
@end

