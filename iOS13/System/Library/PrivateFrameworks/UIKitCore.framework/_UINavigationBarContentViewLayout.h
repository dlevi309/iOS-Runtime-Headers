/*
* Generated on Monday, March 1, 2021 at 2:30:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol _UINavigationBarAugmentedTitleView;
#import <UIKitCore/UIKitCore-Structs.h>
@class NSLayoutConstraint, NSArray, UIBarButtonItemGroup, UIView, _UINavigationBarContentView, UILayoutGuide, _UIButtonBarButton, UILabel, _UITAMICAdaptorView, _UIButtonBar, _UIBarButtonItemData;

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
-(id)description;
-(void)freeze;
-(void)setActive:(BOOL)arg1 ;
-(long long)alignment;
-(void)setAlignment:(long long)arg1 ;
-(BOOL)active;
-(_UINavigationBarContentView *)contentView;
-(id)initWithContentView:(id)arg1 ;
-(void)setLayoutMargins:(NSDirectionalEdgeInsets)arg1 ;
-(NSDirectionalEdgeInsets)layoutMargins;
-(void)setPlainItemAppearance:(_UIBarButtonItemData *)arg1 ;
-(void)setDoneItemAppearance:(_UIBarButtonItemData *)arg1 ;
-(_UIBarButtonItemData *)plainItemAppearance;
-(_UIBarButtonItemData *)doneItemAppearance;
-(_UIBarButtonItemData *)backButtonAppearance;
-(UIView *)titleView;
-(void)setTitleView:(UIView *)arg1 ;
-(long long)currentContentSize;
-(double)largeTitleHeight;
-(CGSize)largeTitleHeightRange;
-(void)setMinimumBackButtonWidth:(double)arg1 ;
-(void)setCurrentContentSize:(long long)arg1 ;
-(double)currentHeight;
-(UIView*<_UINavigationBarAugmentedTitleView>)augmentedTitleView;
-(_UIButtonBarButton *)backButton;
-(void)replaceBackButtonWithSnapshot;
-(void)setKeepsSnapshotsInHierarchy:(BOOL)arg1 ;
-(UIView *)backButtonSnapshot;
-(void)setBackButton:(_UIButtonBarButton *)arg1 ;
-(NSArray *)leadingBarItems;
-(BOOL)hasFakedBackButton;
-(_UIButtonBar *)leadingBar;
-(void)setHasFakedBackButton:(BOOL)arg1 ;
-(void)replaceLeadingBarWithSnapshot;
-(UIView *)leadingBarSnapshot;
-(void)setLeadingBar:(_UIButtonBar *)arg1 ;
-(void)setLeadingBarItems:(NSArray *)arg1 ;
-(NSArray *)trailingBarItems;
-(_UIButtonBar *)trailingBar;
-(void)setTrailingBar:(_UIButtonBar *)arg1 ;
-(void)replaceTrailingBarWithSnapshot;
-(UIView *)trailingBarSnapshot;
-(void)setTrailingBarItems:(NSArray *)arg1 ;
-(UILabel *)inlineTitleView;
-(void)setInlineTitleViewAlpha:(double)arg1 ;
-(UIView *)effectiveTitleView;
-(void)replaceTitleViewWithSnapshot;
-(UIView *)titleViewSnapshot;
-(void)setAugmentedTitleView:(UIView*<_UINavigationBarAugmentedTitleView>)arg1 ;
-(void)setInlineTitleView:(UILabel *)arg1 ;
-(void)setTitlePositionAdjustment:(UIOffset)arg1 ;
-(double)resolvedSize;
-(void)updateAugmentedTitleViewHeight;
-(void)removeAllSnapshots;
-(void)setOverrideSize:(double)arg1 ;
-(void)updateAlphas;
-(void)updateSpacingConstraints;
-(void)removeContent;
-(void)setMaximumBackButtonWidth:(double)arg1 ;
-(double)maximumBackButtonWidth;
-(void)setBackButtonAppearance:(_UIBarButtonItemData *)arg1 ;
-(double)baselineOffsetFromTop;
-(double)baseHeight;
-(void)updateAugmentedTitleViewLayout;
-(void)updateAugmentedTitleViewBackButtonConstraints;
-(double)inlineTitleViewAlpha;
-(UIOffset)titlePositionAdjustment;
-(double)overrideSize;
-(double)_contentHeight;
-(double)_inlineTitleBaselineOffset;
-(void)_disableLayoutFlushing:(BOOL)arg1 ;
-(void)_updateSubviewOrder;
-(void)_updateAlignmentConstraints;
-(void)_updateHeightConstraints;
-(void)_updateBackButtonConstraints;
-(void)_updateBackButtonWidthConstraintsAndActivateIfNecessary;
-(void)_updateLeadingBarConstraints;
-(void)_updateTitleViewConstraints;
-(void)_updateTrailingBarConstraints;
-(void)_updateAugmentedTitleViewConstraints;
-(void)_deactivateAllConstraints;
-(void)_activateAllConstraints;
-(void)setBackButtonHidden:(BOOL)arg1 titleLabelHidden:(BOOL)arg2 titleViewHidden:(BOOL)arg3 barsHidden:(BOOL)arg4 ;
-(void)_deactivateConstraintsIfNecessary:(id)arg1 ;
-(void)_activateConstraintsAndUpdateViewOrderIfNecessary:(id)arg1 ;
-(void)_updateMarginConstraints;
-(void)_prepareTitleViewAndWrapIfNecessary;
-(void)_updateAugmentedTitleViewLayout;
-(void)unfreeze;
-(void)cleanupAfterLayoutTransitionCompleted;
-(void)setContentHidden:(BOOL)arg1 ;
-(void)setLargeTitleHeight:(double)arg1 ;
-(void)setLargeTitleHeightRange:(CGSize)arg1 ;
-(void)updateTitleHeight;
-(UILayoutGuide *)backButtonGuide;
-(UILayoutGuide *)leadingBarGuide;
-(UILayoutGuide *)titleViewGuide;
-(UILayoutGuide *)trailingBarGuide;
-(long long)resolvedAlignment;
-(double)minimumBackButtonWidth;
-(_UITAMICAdaptorView *)titleViewWrapperView;
-(BOOL)keepsSnapshotsInHierarchy;
@end

