/*
* Generated on Monday, March 1, 2021 at 2:34:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol HUQuickControlContainerViewDelegate;
@class UIView, UILayoutGuide, HUQuickControlSummaryView, HUControlHostView, NSArray, NSLayoutConstraint, HUQuickControlAuxiliaryHostView, HUQuickControlButtonRowView, UIButton;

@interface HUQuickControlContainerView : UIView {

	BOOL _shouldShowActiveControl;
	BOOL _shouldShowDetailsButton;
	BOOL _controlViewSupportsTransformTransition;
	double _controlTransitionProgress;
	double _chromeTransitionProgress;
	double _initialSourceViewScale;
	unsigned long long _edgesForExtendedLayout;
	UIView* _activeControlView;
	UILayoutGuide* _controlViewPreferredFrameLayoutGuide;
	UILayoutGuide* _standardViewportFromParentGuide;
	HUQuickControlSummaryView* _summaryView;
	id<HUQuickControlContainerViewDelegate> _delegate;
	HUControlHostView* _controlHostView;
	UILayoutGuide* _controlViewLayoutGuide;
	UILayoutGuide* _cardViewLayoutGuide;
	NSArray* _contentConstraints;
	NSArray* _maxHeightConstraints;
	NSLayoutConstraint* _compactControlBottomConstraint;
	HUQuickControlAuxiliaryHostView* _auxiliaryHostView;
	HUQuickControlButtonRowView* _buttonRowView;
	UIButton* _detailsButton;
	UILayoutGuide* _contentToAuxiliarySpacingLayoutGuide;
	UILayoutGuide* _topToSummarySpacingLayoutGuide;
	CGRect _sourceRect;

}

@property (nonatomic,retain) HUControlHostView * controlHostView;                                    //@synthesize controlHostView=_controlHostView - In the implementation block
@property (nonatomic,retain) UILayoutGuide * controlViewLayoutGuide;                                 //@synthesize controlViewLayoutGuide=_controlViewLayoutGuide - In the implementation block
@property (nonatomic,retain) UILayoutGuide * controlViewPreferredFrameLayoutGuide;                   //@synthesize controlViewPreferredFrameLayoutGuide=_controlViewPreferredFrameLayoutGuide - In the implementation block
@property (nonatomic,retain) UILayoutGuide * cardViewLayoutGuide;                                    //@synthesize cardViewLayoutGuide=_cardViewLayoutGuide - In the implementation block
@property (nonatomic,retain) NSArray * contentConstraints;                                           //@synthesize contentConstraints=_contentConstraints - In the implementation block
@property (nonatomic,retain) NSArray * maxHeightConstraints;                                         //@synthesize maxHeightConstraints=_maxHeightConstraints - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * compactControlBottomConstraint;                    //@synthesize compactControlBottomConstraint=_compactControlBottomConstraint - In the implementation block
@property (nonatomic,retain) HUQuickControlAuxiliaryHostView * auxiliaryHostView;                    //@synthesize auxiliaryHostView=_auxiliaryHostView - In the implementation block
@property (nonatomic,retain) HUQuickControlButtonRowView * buttonRowView;                            //@synthesize buttonRowView=_buttonRowView - In the implementation block
@property (nonatomic,retain) UIButton * detailsButton;                                               //@synthesize detailsButton=_detailsButton - In the implementation block
@property (nonatomic,retain) HUQuickControlSummaryView * summaryView;                                //@synthesize summaryView=_summaryView - In the implementation block
@property (nonatomic,retain) UILayoutGuide * contentToAuxiliarySpacingLayoutGuide;                   //@synthesize contentToAuxiliarySpacingLayoutGuide=_contentToAuxiliarySpacingLayoutGuide - In the implementation block
@property (nonatomic,retain) UILayoutGuide * topToSummarySpacingLayoutGuide;                         //@synthesize topToSummarySpacingLayoutGuide=_topToSummarySpacingLayoutGuide - In the implementation block
@property (assign,nonatomic) double controlTransitionProgress;                                       //@synthesize controlTransitionProgress=_controlTransitionProgress - In the implementation block
@property (assign,nonatomic) double chromeTransitionProgress;                                        //@synthesize chromeTransitionProgress=_chromeTransitionProgress - In the implementation block
@property (assign,nonatomic) double initialSourceViewScale;                                          //@synthesize initialSourceViewScale=_initialSourceViewScale - In the implementation block
@property (assign,nonatomic) BOOL shouldShowActiveControl;                                           //@synthesize shouldShowActiveControl=_shouldShowActiveControl - In the implementation block
@property (assign,nonatomic) BOOL shouldShowDetailsButton;                                           //@synthesize shouldShowDetailsButton=_shouldShowDetailsButton - In the implementation block
@property (assign,nonatomic) unsigned long long edgesForExtendedLayout;                              //@synthesize edgesForExtendedLayout=_edgesForExtendedLayout - In the implementation block
@property (nonatomic,retain) UIView * activeControlView;                                             //@synthesize activeControlView=_activeControlView - In the implementation block
@property (nonatomic,retain) UILayoutGuide * standardViewportFromParentGuide;                        //@synthesize standardViewportFromParentGuide=_standardViewportFromParentGuide - In the implementation block
@property (assign,nonatomic) BOOL controlViewSupportsTransformTransition;                            //@synthesize controlViewSupportsTransformTransition=_controlViewSupportsTransformTransition - In the implementation block
@property (nonatomic,readonly) CGRect presentedControlFrame; 
@property (nonatomic,readonly) CGRect sourceRect;                                                    //@synthesize sourceRect=_sourceRect - In the implementation block
@property (nonatomic,__weak,readonly) id<HUQuickControlContainerViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(BOOL)requiresConstraintBasedLayout;
-(id<HUQuickControlContainerViewDelegate>)delegate;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)layoutSubviews;
-(void)updateConstraints;
-(void)layoutMarginsDidChange;
-(CGRect)sourceRect;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(void)willMoveToWindow:(id)arg1 ;
-(unsigned long long)edgesForExtendedLayout;
-(void)setEdgesForExtendedLayout:(unsigned long long)arg1 ;
-(void)_updateLayoutMargins;
-(UIButton *)detailsButton;
-(void)setDetailsButton:(UIButton *)arg1 ;
-(void)setContentConstraints:(NSArray *)arg1 ;
-(NSArray *)contentConstraints;
-(long long)_sizeSubclass;
-(HUQuickControlSummaryView *)summaryView;
-(void)setSummaryView:(HUQuickControlSummaryView *)arg1 ;
-(UIView *)activeControlView;
-(void)setControlHostView:(HUControlHostView *)arg1 ;
-(HUControlHostView *)controlHostView;
-(void)_detailsButtonTapped:(id)arg1 ;
-(void)setControlViewLayoutGuide:(UILayoutGuide *)arg1 ;
-(UILayoutGuide *)controlViewLayoutGuide;
-(void)setCardViewLayoutGuide:(UILayoutGuide *)arg1 ;
-(UILayoutGuide *)cardViewLayoutGuide;
-(void)setControlViewPreferredFrameLayoutGuide:(UILayoutGuide *)arg1 ;
-(UILayoutGuide *)controlViewPreferredFrameLayoutGuide;
-(void)_updateContentAlignment;
-(BOOL)shouldShowActiveControl;
-(void)_updateDetailsButtonVisibility;
-(HUQuickControlAuxiliaryHostView *)auxiliaryHostView;
-(void)_updateCompactControlBottomConstraint;
-(HUQuickControlButtonRowView *)buttonRowView;
-(BOOL)shouldShowDetailsButton;
-(BOOL)_useCompactHeightLayout;
-(CGSize)_presentedControlHostSize;
-(double)initialSourceViewScale;
-(double)controlTransitionProgress;
-(CGAffineTransform)_controlHostTransformForPresentationProgress:(double)arg1 ;
-(CGPoint)_controlHostCenterForPresentationProgress:(double)arg1 ;
-(NSArray *)maxHeightConstraints;
-(void)setMaxHeightConstraints:(NSArray *)arg1 ;
-(void)_configureRegularHeightConstraints:(id)arg1 ;
-(UILayoutGuide *)standardViewportFromParentGuide;
-(void)_configureControlViewLayoutGuideConstraints:(id)arg1 ;
-(void)_configureCardViewLayoutGuideConstraints:(id)arg1 ;
-(NSLayoutConstraint *)compactControlBottomConstraint;
-(BOOL)_shouldShowControlView;
-(void)setCompactControlBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(BOOL)controlViewSupportsTransformTransition;
-(id)initWithFrame:(CGRect)arg1 delegate:(id)arg2 sourceRect:(CGRect)arg3 ;
-(void)setShouldShowActiveControl:(BOOL)arg1 ;
-(void)setActiveControlView:(UIView *)arg1 ;
-(void)setInitialSourceViewScale:(double)arg1 ;
-(void)setShouldShowDetailsButton:(BOOL)arg1 ;
-(void)setControlTransitionProgress:(double)arg1 ;
-(void)setChromeTransitionProgress:(double)arg1 ;
-(void)setStandardViewportFromParentGuide:(UILayoutGuide *)arg1 ;
-(void)showAuxiliaryView:(id)arg1 ;
-(void)hideAuxiliaryView;
-(CGAffineTransform)_controlHostTransform;
-(CGPoint)_controlHostCenter;
-(double)_summaryFirstBaselineToControlTopSpacing;
-(CGRect)presentedControlFrame;
-(CGAffineTransform)sourceViewTransformForPresentationProgress:(double)arg1 ;
-(double)chromeTransitionProgress;
-(void)setControlViewSupportsTransformTransition:(BOOL)arg1 ;
-(void)setAuxiliaryHostView:(HUQuickControlAuxiliaryHostView *)arg1 ;
-(void)setButtonRowView:(HUQuickControlButtonRowView *)arg1 ;
-(UILayoutGuide *)contentToAuxiliarySpacingLayoutGuide;
-(void)setContentToAuxiliarySpacingLayoutGuide:(UILayoutGuide *)arg1 ;
-(UILayoutGuide *)topToSummarySpacingLayoutGuide;
-(void)setTopToSummarySpacingLayoutGuide:(UILayoutGuide *)arg1 ;
@end

