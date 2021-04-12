/*
* Generated on Monday, March 1, 2021 at 2:34:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/ControlCenter/Bundles/HomeControlCenterModule.bundle/HomeControlCenterModule
*/

#import <HomeControlCenterModule/HomeControlCenterModule-Structs.h>
#import <UIKitCore/UIView.h>

@protocol HUCCModuleViewDelegate;
@class UIView, HUPillButton, UILabel, HUCCHomeButton, UILayoutGuide, NAUILayoutConstraintSet, HUCCModuleExpandingTransition;

@interface HUCCModuleView : UIView {

	BOOL _expanded;
	id<HUCCModuleViewDelegate> _delegate;
	UIView* _contentView;
	HUPillButton* _pageSwitchButton;
	UILabel* _titleLabel;
	unsigned long long _layoutStyle;
	HUCCHomeButton* _collapsedHomeButton;
	HUCCHomeButton* _expandedHomeButton;
	UILayoutGuide* _transformingExpandedHomeButtonLayoutGuide;
	UIView* _transformingContentContainerView;
	NAUILayoutConstraintSet* _homeButtonTrackingConstraintSet;
	NAUILayoutConstraintSet* _homeButtonPositioningConstraintSet;
	NAUILayoutConstraintSet* _expandedContentViewConstraintSet;
	NAUILayoutConstraintSet* _expandedChromeConstraintSet;
	HUCCModuleExpandingTransition* _activeTransition;
	SCD_Struct_HU3 _layoutMetrics;

}

@property (nonatomic,readonly) HUCCHomeButton * collapsedHomeButton;                                    //@synthesize collapsedHomeButton=_collapsedHomeButton - In the implementation block
@property (nonatomic,readonly) HUCCHomeButton * expandedHomeButton;                                     //@synthesize expandedHomeButton=_expandedHomeButton - In the implementation block
@property (nonatomic,readonly) UILayoutGuide * transformingExpandedHomeButtonLayoutGuide;               //@synthesize transformingExpandedHomeButtonLayoutGuide=_transformingExpandedHomeButtonLayoutGuide - In the implementation block
@property (nonatomic,readonly) UIView * transformingContentContainerView;                               //@synthesize transformingContentContainerView=_transformingContentContainerView - In the implementation block
@property (nonatomic,retain) NAUILayoutConstraintSet * homeButtonTrackingConstraintSet;                 //@synthesize homeButtonTrackingConstraintSet=_homeButtonTrackingConstraintSet - In the implementation block
@property (nonatomic,retain) NAUILayoutConstraintSet * homeButtonPositioningConstraintSet;              //@synthesize homeButtonPositioningConstraintSet=_homeButtonPositioningConstraintSet - In the implementation block
@property (nonatomic,retain) NAUILayoutConstraintSet * expandedContentViewConstraintSet;                //@synthesize expandedContentViewConstraintSet=_expandedContentViewConstraintSet - In the implementation block
@property (nonatomic,retain) NAUILayoutConstraintSet * expandedChromeConstraintSet;                     //@synthesize expandedChromeConstraintSet=_expandedChromeConstraintSet - In the implementation block
@property (nonatomic,retain) HUCCModuleExpandingTransition * activeTransition;                          //@synthesize activeTransition=_activeTransition - In the implementation block
@property (assign,nonatomic) SCD_Struct_HU4 layoutMetrics;                                              //@synthesize layoutMetrics=_layoutMetrics - In the implementation block
@property (assign,nonatomic,__weak) id<HUCCModuleViewDelegate> delegate;                                //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isExpanded,nonatomic) BOOL expanded;                                           //@synthesize expanded=_expanded - In the implementation block
@property (nonatomic,retain) UIView * contentView;                                                      //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,readonly) HUPillButton * pageSwitchButton;                                         //@synthesize pageSwitchButton=_pageSwitchButton - In the implementation block
@property (nonatomic,readonly) UILabel * titleLabel;                                                    //@synthesize titleLabel=_titleLabel - In the implementation block
@property (assign,nonatomic) unsigned long long layoutStyle;                                            //@synthesize layoutStyle=_layoutStyle - In the implementation block
+(BOOL)requiresConstraintBasedLayout;
+(UIEdgeInsets)expandedContentInsetsForModuleWidth:(double)arg1 ;
+(double)preferredExpandedHeightForContentHeight:(double)arg1 moduleWidth:(double)arg2 ;
-(id<HUCCModuleViewDelegate>)delegate;
-(void)setDelegate:(id<HUCCModuleViewDelegate>)arg1 ;
-(UIView *)contentView;
-(void)setContentView:(UIView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UILabel *)titleLabel;
-(void)layoutSubviews;
-(void)updateConstraints;
-(void)layoutMarginsDidChange;
-(void)setLayoutStyle:(unsigned long long)arg1 ;
-(unsigned long long)layoutStyle;
-(BOOL)isExpanded;
-(void)setExpanded:(BOOL)arg1 ;
-(void)_updateFonts;
-(HUCCModuleExpandingTransition *)activeTransition;
-(void)setActiveTransition:(HUCCModuleExpandingTransition *)arg1 ;
-(SCD_Struct_HU4)layoutMetrics;
-(void)setLayoutMetrics:(SCD_Struct_HU4)arg1 ;
-(HUPillButton *)pageSwitchButton;
-(id)expandedStateTransitionWithNewSize:(CGSize)arg1 ;
-(void)_homeButtonPressed:(id)arg1 ;
-(HUCCHomeButton *)collapsedHomeButton;
-(HUCCHomeButton *)expandedHomeButton;
-(UIView *)transformingContentContainerView;
-(UILayoutGuide *)transformingExpandedHomeButtonLayoutGuide;
-(void)_updateLayoutMetricsForFirstLayout:(BOOL)arg1 ;
-(void)_buildConstraintSets;
-(void)_updateContentAppearanceForExpandedState;
-(void)_invalidateSizeDependentConstraints;
-(NAUILayoutConstraintSet *)expandedContentViewConstraintSet;
-(NAUILayoutConstraintSet *)expandedChromeConstraintSet;
-(void)_updateTransformingContentContainerLayout;
-(void)_updateContentViewVisibilityForExpandedState;
-(void)setHomeButtonTrackingConstraintSet:(NAUILayoutConstraintSet *)arg1 ;
-(void)setHomeButtonPositioningConstraintSet:(NAUILayoutConstraintSet *)arg1 ;
-(void)setExpandedContentViewConstraintSet:(NAUILayoutConstraintSet *)arg1 ;
-(void)setExpandedChromeConstraintSet:(NAUILayoutConstraintSet *)arg1 ;
-(NAUILayoutConstraintSet *)homeButtonPositioningConstraintSet;
-(NAUILayoutConstraintSet *)homeButtonTrackingConstraintSet;
-(id)_sizeDependentConstraintSets;
-(id)_allConstraintSets;
@end

