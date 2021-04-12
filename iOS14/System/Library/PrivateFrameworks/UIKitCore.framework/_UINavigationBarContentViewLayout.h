/*
* Generated on Thursday, January 14, 2021 at 2:20:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol _UINavigationBarAugmentedTitleView;
#import <UIKitCore/UIKitCore-Structs.h>
@class NSLayoutConstraint, NSArray, UIBarButtonItemGroup, UIView, _UINavigationBarContentView, UILayoutGuide, _UIButtonBarButton, UILabel, _UITAMICAdaptorView, UITraitCollection, _UIButtonBar, _UIBarButtonItemData;

@interface _UINavigationBarContentViewLayout : NSObject {

	NSLayoutConstraint* _leadingMarginConstraint;
	NSLayoutConstraint* _trailingMarginConstraint;
	NSLayoutConstraint* _backButtonToLeadingBarSpacer;
	NSLayoutConstraint* _leadingBarToTitleSpacer;
	NSLayoutConstraint* _titleToTrailingBarSpacer;
	NSArray* _layoutGuideConstraints;
	NSArray* _alignmentConstraints;
	NSArray* _heightConstraints;
	NSArray* _backButtonConstraints;
	NSLayoutConstraint* _backButtonMinimumWidthConstraint;
	NSLayoutConstraint* _backButtonMaximumWidthConstraint;
	NSArray* _leadingBarConstraints;
	NSArray* _titleViewConstraints;
	NSArray* _augmentedTitleViewContraints;
	NSArray* _trailingBarConstraints;
	UIBarButtonItemGroup* _leadingBarGroup;
	UIBarButtonItemGroup* _trailingBarGroup;
	UIView* _leadingBarSnapshot;
	UIView* _trailingBarSnapshot;
	UIView* _titleViewSnapshot;
	UIView* _backButtonSnapshot;
	BOOL _hasFakedBackButton;
	BOOL _active;
	BOOL _keepsSnapshotsInHierarchy;
	_UINavigationBarContentView* _contentView;
	UILayoutGuide* _backButtonGuide;
	UILayoutGuide* _leadingBarGuide;
	UILayoutGuide* _titleViewGuide;
	UILayoutGuide* _trailingBarGuide;
	long long _alignment;
	long long _currentContentSize;
	double _overrideSize;
	double _resolvedSize;
	long long _resolvedAlignment;
	_UIButtonBarButton* _backButton;
	double _minimumBackButtonWidth;
	double _maximumBackButtonWidth;
	UILabel* _inlineTitleView;
	double _inlineTitleViewAlpha;
	UIView* _titleView;
	_UITAMICAdaptorView* _titleViewWrapperView;
	UIView*<_UINavigationBarAugmentedTitleView> _augmentedTitleView;
	double _largeTitleHeight;
	UITraitCollection* _augmentedTitleNavigationBarTraits;
	_UIButtonBar* _leadingBar;
	_UIButtonBar* _trailingBar;
	_UIBarButtonItemData* _plainItemAppearance;
	_UIBarButtonItemData* _doneItemAppearance;
	_UIBarButtonItemData* _backButtonAppearance;
	UIOffset _titlePositionAdjustment;
	CGSize _largeTitleHeightRange;
	NSDirectionalEdgeInsets _layoutMargins;

}

@property (nonatomic,readonly) _UINavigationBarContentView * contentView;                                 //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,readonly) UILayoutGuide * backButtonGuide;                                           //@synthesize backButtonGuide=_backButtonGuide - In the implementation block
@property (nonatomic,readonly) UILayoutGuide * leadingBarGuide;                                           //@synthesize leadingBarGuide=_leadingBarGuide - In the implementation block
@property (nonatomic,readonly) UILayoutGuide * titleViewGuide;                                            //@synthesize titleViewGuide=_titleViewGuide - In the implementation block
@property (nonatomic,readonly) UILayoutGuide * trailingBarGuide;                                          //@synthesize trailingBarGuide=_trailingBarGuide - In the implementation block
@property (assign,nonatomic) long long alignment;                                                         //@synthesize alignment=_alignment - In the implementation block
@property (assign,nonatomic) long long currentContentSize;                                                //@synthesize currentContentSize=_currentContentSize - In the implementation block
@property (assign,nonatomic) NSDirectionalEdgeInsets layoutMargins;                                       //@synthesize layoutMargins=_layoutMargins - In the implementation block
@property (assign,nonatomic) double overrideSize;                                                         //@synthesize overrideSize=_overrideSize - In the implementation block
@property (nonatomic,readonly) double baseHeight; 
@property (nonatomic,readonly) double resolvedSize;                                                       //@synthesize resolvedSize=_resolvedSize - In the implementation block
@property (nonatomic,readonly) long long resolvedAlignment;                                               //@synthesize resolvedAlignment=_resolvedAlignment - In the implementation block
@property (nonatomic,retain) _UIButtonBarButton * backButton;                                             //@synthesize backButton=_backButton - In the implementation block
@property (assign,nonatomic) double minimumBackButtonWidth;                                               //@synthesize minimumBackButtonWidth=_minimumBackButtonWidth - In the implementation block
@property (assign,nonatomic) double maximumBackButtonWidth;                                               //@synthesize maximumBackButtonWidth=_maximumBackButtonWidth - In the implementation block
@property (assign,nonatomic) BOOL hasFakedBackButton;                                                     //@synthesize hasFakedBackButton=_hasFakedBackButton - In the implementation block
@property (nonatomic,retain) UILabel * inlineTitleView;                                                   //@synthesize inlineTitleView=_inlineTitleView - In the implementation block
@property (assign,nonatomic) double inlineTitleViewAlpha;                                                 //@synthesize inlineTitleViewAlpha=_inlineTitleViewAlpha - In the implementation block
@property (nonatomic,retain) UIView * titleView;                                                          //@synthesize titleView=_titleView - In the implementation block
@property (nonatomic,readonly) _UITAMICAdaptorView * titleViewWrapperView;                                //@synthesize titleViewWrapperView=_titleViewWrapperView - In the implementation block
@property (nonatomic,readonly) UIView * effectiveTitleView; 
@property (assign,nonatomic) UIOffset titlePositionAdjustment;                                            //@synthesize titlePositionAdjustment=_titlePositionAdjustment - In the implementation block
@property (nonatomic,retain) UIView*<_UINavigationBarAugmentedTitleView> augmentedTitleView;              //@synthesize augmentedTitleView=_augmentedTitleView - In the implementation block
@property (assign,nonatomic) double largeTitleHeight;                                                     //@synthesize largeTitleHeight=_largeTitleHeight - In the implementation block
@property (assign,nonatomic) CGSize largeTitleHeightRange;                                                //@synthesize largeTitleHeightRange=_largeTitleHeightRange - In the implementation block
@property (nonatomic,retain) UITraitCollection * augmentedTitleNavigationBarTraits;                       //@synthesize augmentedTitleNavigationBarTraits=_augmentedTitleNavigationBarTraits - In the implementation block
@property (nonatomic,readonly) double baselineOffsetFromTop; 
@property (nonatomic,readonly) double currentHeight; 
@property (nonatomic,retain) _UIButtonBar * leadingBar;                                                   //@synthesize leadingBar=_leadingBar - In the implementation block
@property (nonatomic,retain) NSArray * leadingBarItems; 
@property (nonatomic,retain) _UIButtonBar * trailingBar;                                                  //@synthesize trailingBar=_trailingBar - In the implementation block
@property (nonatomic,retain) NSArray * trailingBarItems; 
@property (nonatomic,copy) _UIBarButtonItemData * plainItemAppearance;                                    //@synthesize plainItemAppearance=_plainItemAppearance - In the implementation block
@property (nonatomic,copy) _UIBarButtonItemData * doneItemAppearance;                                     //@synthesize doneItemAppearance=_doneItemAppearance - In the implementation block
@property (nonatomic,copy) _UIBarButtonItemData * backButtonAppearance;                                   //@synthesize backButtonAppearance=_backButtonAppearance - In the implementation block
@property (assign,nonatomic) BOOL active;                                                                 //@synthesize active=_active - In the implementation block
@property (nonatomic,readonly) UIView * leadingBarSnapshot;                                               //@synthesize leadingBarSnapshot=_leadingBarSnapshot - In the implementation block
@property (nonatomic,readonly) UIView * trailingBarSnapshot;                                              //@synthesize trailingBarSnapshot=_trailingBarSnapshot - In the implementation block
@property (nonatomic,readonly) UIView * titleViewSnapshot;                                                //@synthesize titleViewSnapshot=_titleViewSnapshot - In the implementation block
@property (nonatomic,readonly) UIView * backButtonSnapshot;                                               //@synthesize backButtonSnapshot=_backButtonSnapshot - In the implementation block
@property (assign,nonatomic) BOOL keepsSnapshotsInHierarchy;                                              //@synthesize keepsSnapshotsInHierarchy=_keepsSnapshotsInHierarchy - In the implementation block
-(void)freeze;
-(void)removeContent;
-(void)setOverrideSize:(double)arg1 ;
-(void)setPlainItemAppearance:(_UIBarButtonItemData *)arg1 ;
-(_UIBarButtonItemData *)backButtonAppearance;
-(void)setBackButtonAppearance:(_UIBarButtonItemData *)arg1 ;
-(_UIBarButtonItemData *)plainItemAppearance;
-(double)largeTitleHeight;
-(void)setTitlePositionAdjustment:(UIOffset)arg1 ;
-(double)overrideSize;
-(_UIBarButtonItemData *)doneItemAppearance;
-(CGSize)largeTitleHeightRange;
-(void)setDoneItemAppearance:(_UIBarButtonItemData *)arg1 ;
-(double)minimumBackButtonWidth;
-(UIOffset)titlePositionAdjustment;
-(void)_deactivateConstraintsIfNecessary:(id)arg1 ;
-(void)_updateTitleViewConstraints;
-(void)setAugmentedTitleNavigationBarTraits:(UITraitCollection *)arg1 ;
-(void)setBackButton:(_UIButtonBarButton *)arg1 ;
-(BOOL)active;
-(void)cleanupAfterLayoutTransitionCompleted;
-(void)setActive:(BOOL)arg1 ;
-(UIView *)titleView;
-(void)_updateLeadingBarConstraints;
-(void)updateAugmentedTitleViewBackButtonConstraints;
-(void)updateAugmentedTitleViewLayout;
-(void)replaceBackButtonWithSnapshot;
-(void)setBackButtonHidden:(BOOL)arg1 titleLabelHidden:(BOOL)arg2 titleViewHidden:(BOOL)arg3 barsHidden:(BOOL)arg4 ;
-(void)_activateAllConstraints;
-(void)setLargeTitleHeightRange:(CGSize)arg1 ;
-(void)_updateBackButtonWidthConstraintsAndActivateIfNecessary;
-(void)setHasFakedBackButton:(BOOL)arg1 ;
-(long long)alignment;
-(UIView *)backButtonSnapshot;
-(void)_updateAugmentedTitleViewLayout;
-(UIView *)titleViewSnapshot;
-(double)maximumBackButtonWidth;
-(UILayoutGuide *)backButtonGuide;
-(void)setContentHidden:(BOOL)arg1 ;
-(UILayoutGuide *)leadingBarGuide;
-(void)updateAlphas;
-(void)updateAugmentedTitleViewHeight;
-(void)setInlineTitleView:(UILabel *)arg1 ;
-(void)setLeadingBar:(_UIButtonBar *)arg1 ;
-(NSArray *)leadingBarItems;
-(id)initWithContentView:(id)arg1 ;
-(double)_contentHeight;
-(void)setTrailingBarItems:(NSArray *)arg1 ;
-(NSDirectionalEdgeInsets)layoutMargins;
-(void)setLeadingBarItems:(NSArray *)arg1 ;
-(UIView*<_UINavigationBarAugmentedTitleView>)augmentedTitleView;
-(void)setTitleView:(UIView *)arg1 ;
-(void)_updateAlignmentConstraints;
-(void)setAlignment:(long long)arg1 ;
-(void)setKeepsSnapshotsInHierarchy:(BOOL)arg1 ;
-(double)resolvedSize;
-(double)baseHeight;
-(void)setInlineTitleViewAlpha:(double)arg1 ;
-(void)setLayoutMargins:(NSDirectionalEdgeInsets)arg1 ;
-(void)_deactivateAllConstraints;
-(id)description;
-(UILabel *)inlineTitleView;
-(void)setTrailingBar:(_UIButtonBar *)arg1 ;
-(long long)currentContentSize;
-(void)setAugmentedTitleView:(UIView*<_UINavigationBarAugmentedTitleView>)arg1 ;
-(double)baselineOffsetFromTop;
-(_UIButtonBar *)leadingBar;
-(void)unfreeze;
-(void)setLargeTitleHeight:(double)arg1 ;
-(UIView *)trailingBarSnapshot;
-(double)_inlineTitleBaselineOffset;
-(void)updateTitleHeight;
-(long long)resolvedAlignment;
-(_UIButtonBar *)trailingBar;
-(UITraitCollection *)augmentedTitleNavigationBarTraits;
-(void)replaceLeadingBarWithSnapshot;
-(void)_updateBackButtonConstraints;
-(void)_updateHeightConstraints;
-(_UITAMICAdaptorView *)titleViewWrapperView;
-(void)_updateMarginConstraints;
-(double)inlineTitleViewAlpha;
-(void)_updateSubviewOrder;
-(void)_updateAugmentedTitleViewConstraints;
-(UIView *)leadingBarSnapshot;
-(UILayoutGuide *)titleViewGuide;
-(_UIButtonBarButton *)backButton;
-(BOOL)keepsSnapshotsInHierarchy;
-(void)setCurrentContentSize:(long long)arg1 ;
-(void)_updateTrailingBarConstraints;
-(void)removeAllSnapshots;
-(double)currentHeight;
-(UIView *)effectiveTitleView;
-(void)replaceTrailingBarWithSnapshot;
-(NSArray *)trailingBarItems;
-(_UINavigationBarContentView *)contentView;
-(void)updateSpacingConstraints;
-(void)_prepareTitleViewAndWrapIfNecessary;
-(id)traitOverridesForChild:(id)arg1 ;
-(BOOL)hasFakedBackButton;
-(void)setMaximumBackButtonWidth:(double)arg1 ;
-(void)setMinimumBackButtonWidth:(double)arg1 ;
-(void)_disableLayoutFlushing:(BOOL)arg1 ;
-(void)replaceTitleViewWithSnapshot;
-(void)_activateConstraintsAndUpdateViewOrderIfNecessary:(id)arg1 ;
-(UILayoutGuide *)trailingBarGuide;
@end

