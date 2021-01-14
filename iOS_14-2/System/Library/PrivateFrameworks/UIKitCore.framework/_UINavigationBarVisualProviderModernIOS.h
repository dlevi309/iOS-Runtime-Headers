/*
* Generated on Thursday, January 14, 2021 at 2:20:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UINavigationBarVisualProvider.h>
#import <UIKitCore/_UINavigationBarContentViewDelegate.h>
#import <UIKitCore/_UINavigationItemChangeObserver.h>
#import <UIKitCore/_UIBarAppearanceChangeObserver.h>
#import <UIKitCore/_UINavigationControllerRefreshControlHostDelegate.h>
#import <UIKitCore/_UIBasicAnimationFactory.h>

@class _UIBarBackground, _UINavigationBarContentView, UIView, _UINavigationBarLargeTitleView, _UINavigationBarModernPromptView, _UIPointerInteractionAssistant, UILabel, _UINavigationBarTransitionContext, UIBarButtonItem, _UINavigationControllerRefreshControlHost, NSString;

@interface _UINavigationBarVisualProviderModernIOS : _UINavigationBarVisualProvider <_UINavigationBarContentViewDelegate, _UINavigationItemChangeObserver, _UIBarAppearanceChangeObserver, _UINavigationControllerRefreshControlHostDelegate, _UIBasicAnimationFactory> {

	_UIBarBackground* _backgroundView;
	_UINavigationBarContentView* _contentView;
	UIView* _canvasView;
	_UINavigationBarLargeTitleView* _largeTitleView;
	_UINavigationBarModernPromptView* _promptView;
	_UIPointerInteractionAssistant* _assistant;
	UILabel* _weeTitleLabel;
	_UINavigationBarTransitionContext* _transitionContext;
	CGSize _previousBarSize;
	double _backgroundAlpha;
	double _titleAlpha;
	double _shadowAlpha;
	BOOL _hasIdiom;
	BOOL _runningPaletteBasedSearchPresentation;
	BOOL _useInlineBackgroundHeightWhenLarge;
	BOOL _backgroundTransparentWhenNotCollapsed;
	BOOL _providesExtraSpaceForExcessiveLineHeights;
	BOOL _isObservingDidEncounterFirstTitleWithExcessiveHeightChanged;
	BOOL _useModernAppearanceAPI;
	BOOL _forceScrollEdgeAppearance;
	long long _appearanceAPIVersion;
	UIBarButtonItem* _staticNavBarButtonItem;
	_UINavigationControllerRefreshControlHost* _refreshControlHost;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_updateBackground;
-(double)_shim_shadowAlpha;
-(void)changeLayout;
-(void)appearance:(id)arg1 categoriesChanged:(long long)arg2 ;
-(BOOL)_shouldAnimateAdditivelyForView:(id)arg1 withKeyPath:(id)arg2 ;
-(void)_beginOrEndObservingDidEncounterFirstTitleWithExcessiveHeightChangedIfNecessary;
-(void)pushAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(CGSize)intrinsicContentSize;
-(BOOL)shouldFadeStaticNavBarButton;
-(void)setRefreshControlHost:(id)arg1 ;
-(BOOL)_stackWantsExtendedContentViewForItem:(id)arg1 ;
-(void)_updateContentForTopItem:(id)arg1 backItem:(id)arg2 animated:(BOOL)arg3 ;
-(void)_updatePromptViewAndActuallyHide:(BOOL)arg1 ;
-(void)prepareForPop;
-(BOOL)isAnimatingNavItemContentLayoutGuideForStaticButtonVisibilityChange;
-(void)_endTransitionCompleted:(BOOL)arg1 ;
-(void)_installContentClippingView:(id)arg1 ;
-(id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2 ;
-(id)_shim_compatibilityBackgroundView;
-(BOOL)navigationItemIsBackItem:(id)arg1 ;
-(BOOL)_stackWantsSearchDisplayedBelowContentViewForItem:(id)arg1 ;
-(id)_accessibility_HUDItemForPoint:(CGPoint)arg1 ;
-(void)_upgradeAppearanceAPIForItemIfNecessary:(id)arg1 ;
-(void)_setupTopNavigationItemAnimated:(BOOL)arg1 ;
-(void)setNeedsStaticNavBarButtonUpdate;
-(void)_updateWithCompletion:(/*^block*/id)arg1 ;
-(double)_contentBackgroundExtension;
-(id)traitCollectionForChild:(id)arg1 baseTraitCollection:(id)arg2 ;
-(void)navigationItemUpdatedLeftBarButtonItems:(id)arg1 animated:(BOOL)arg2 ;
-(id)_backgroundLayoutOfClass:(Class)arg1 fromLayout:(id)arg2 ;
-(double)navItemContentLayoutGuideAnimationDistance;
-(void)_presentOrDismissSearch:(int)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)_updateContentForTopItem:(id)arg1 backItem:(id)arg2 ;
-(id)_defaultWeeTitleAttributes;
-(id)_staticNavBarButtonFakeBackMenu;
-(NSDirectionalEdgeInsets)resolvedSearchBarMargins;
-(BOOL)topItemHasVariableHeight;
-(void)_shim_setDisableBlurTinting:(BOOL)arg1 ;
-(void)setBackgroundAlpha:(double)arg1 ;
-(void)traitCollectionDidChangeOnSubtree:(id)arg1 ;
-(void)_layoutInBounds:(CGRect)arg1 wantsExtendedContentView:(BOOL)arg2 wantsLargeTitle:(BOOL)arg3 ;
-(void)provideViewsForContents:(id)arg1 topItem:(id)arg2 backItem:(id)arg3 ;
-(void)navigationBarContentViewDidChangeDesiredHeight:(id)arg1 ;
-(BOOL)_isInnerNavigationBarOfNestedNavigationController;
-(void)beginAnimatingNavItemContentLayoutGuideForStaticButtonVisibilityChange;
-(void)navigationItem:(id)arg1 appearance:(id)arg2 categoriesChanged:(long long)arg3 ;
-(void)navigationBarInvalidatedResolvedLayoutMargins;
-(BOOL)_shim_disableBlurTinting;
-(BOOL)forceScrollEdgeAppearance;
-(id)emptyLayout;
-(void)_updateModernLayout:(id)arg1 forNavigationItem:(id)arg2 compact:(BOOL)arg3 ;
-(BOOL)wantsLargeTitleDisplayed;
-(id)_backButtonMenu;
-(void)recordBarSize:(CGSize)arg1 ;
-(void)navigationItemUpdatedContentLayout:(id)arg1 animated:(BOOL)arg2 ;
-(void)_updateCanvasView;
-(double)backgroundAlpha;
-(BOOL)_stackWantsLargeTitleDisplayedForItem:(id)arg1 ;
-(void)prepareForPush;
-(void)endAnimatingNavItemContentLayoutGuideForStaticButtonVisibilityChange;
-(BOOL)_isInInteractiveScroll;
-(void)layoutSubviews;
-(long long)currentContentSize;
-(id)refreshControlHost;
-(id)_accessibility_controlToActivateForHUDGestureLiftAtPoint:(CGPoint)arg1 ;
-(void)_updateContentPriorities;
-(void)_enforceLayoutOrdering;
-(void)_invalidateIntrinsicContentSizeAndNotifySizeChanged;
-(void)navigationItemUpdatedBottomPalette:(id)arg1 oldPalette:(id)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)_setupAccessibilityLimitsForView:(id)arg1 ;
-(void)_popToItem:(id)arg1 ;
-(void)navigationBarContentViewDidTriggerBackAction:(id)arg1 fromBackButtonItem:(id)arg2 ;
-(void)navigationItemUpdatedSearchController:(id)arg1 oldSearchController:(id)arg2 ;
-(void)navigationItemUpdatedScrollEdgeProgress:(id)arg1 ;
-(void)_removeContentClippingView;
-(void)navigationItemUpdatedCanvasView:(id)arg1 ;
-(void)_computeProvidesExtraSpaceForExcessiveLineHeightsForTopItem:(id)arg1 ;
-(BOOL)navigationItemIsTopItem:(id)arg1 ;
-(BOOL)staticNavBarButtonLingers;
-(void)navigationItemUpdatedRightBarButtonItems:(id)arg1 animated:(BOOL)arg2 ;
-(void)presentHostedSearchWithTransitionCoordinator:(id)arg1 ;
-(void)dismissHostedSearchWithTransitionCoordinator:(id)arg1 ;
-(void)setForceScrollEdgeAppearance:(BOOL)arg1 ;
-(void)_shim_setShadowAlpha:(double)arg1 ;
-(long long)appearanceAPIVersion;
-(double)_effectiveBackIndicatorLeftMargin;
-(BOOL)updateNavItemContentLayoutGuideAnimationConstraintConstant:(double)arg1 ;
-(BOOL)supportsRefreshControlHosting;
-(void)_updateLegacyLayout:(id)arg1 forNavigationItem:(id)arg2 ;
-(BOOL)allowLargeTitleView;
-(void)popAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)safeAreaInsetsDidChange;
-(void)setTitleAlpha:(double)arg1 ;
-(void)teardown;
-(SCD_Struct_UI30)layoutHeightsFittingWidth:(double)arg1 ;
-(void)updateArchivedSubviews:(id)arg1 ;
-(void)navigationControllerRefreshControlHostDidUpdateLayout:(id)arg1 ;
-(void)_ensureLayoutsConfiguredForEntry:(id)arg1 ;
-(BOOL)useManualScrollEdgeAppearanceForItem:(id)arg1 ;
-(void)_configureMarginsOnContentViewsAndPalette:(id)arg1 withContentMargin:(double)arg2 ;
-(NSDirectionalEdgeInsets)largeSearchBaseMarginsRequiringNavMinimums:(BOOL)arg1 ;
-(void)navigationItemUpdatedBackgroundAppearance:(id)arg1 ;
-(BOOL)_stackWantsBottomPaletteDisplayedForItem:(id)arg1 ;
-(long long)statusBarStyle;
-(void)_updateAugmentedTitleDataSources;
-(double)heightForRestoringFromCancelledTransition;
-(void)setAppearanceAPIVersion:(long long)arg1 ;
-(BOOL)wantsExtendedContentView;
-(id)_timingFunctionForAnimationInView:(id)arg1 withKeyPath:(id)arg2 ;
-(BOOL)isContentViewHidden;
-(void)navigationItemUpdatedLargeTitleDisplayMode:(id)arg1 ;
-(void)_shim_setCustomBackgroundView:(id)arg1 ;
-(void)_performAnimationWithTransitionCompletion:(/*^block*/id)arg1 transition:(int)arg2 ;
-(NSDirectionalEdgeInsets)resolvedLargeTitleMargins;
-(void)navigationItemUpdatedLargeTitleContent:(id)arg1 ;
-(BOOL)_stackWantsLargeTitleDisplayedForItem:(id)arg1 hideLargeTitleForActiveSearch:(BOOL)arg2 ;
-(void)changeAppearance;
-(void)navigationItemUpdatedTitleContent:(id)arg1 animated:(BOOL)arg2 ;
-(void)_refreshBackButtonMenu;
-(void)_prepareLayouts;
-(void)barDidMoveToWindow;
-(id)restingHeights;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setUseInlineBackgroundHeightWhenLarge:(BOOL)arg1 ;
-(void)setShouldFadeStaticNavBarButton:(BOOL)arg1 ;
-(void)prepare;
-(void)setStaticNavBarButtonLingers:(BOOL)arg1 ;
-(void)updateBackgroundGroupName;
-(double)titleAlpha;
-(void)_didEncounterFirstTitleWithExcessiveHeightChanged:(id)arg1 ;
-(id)_updateBackgroundLayout:(id)arg1 forNavigationItem:(id)arg2 compact:(BOOL)arg3 ;
-(void)setStaticNavBarButtonItem:(id)arg1 ;
-(void)animateForSearchPresentation:(BOOL)arg1 ;
-(void)stackDidChangeFrom:(id)arg1 ;
-(void)_setupTransitionContextForTransition:(int)arg1 ;
-(void)barDidAddSubview:(id)arg1 ;
-(void)_postDidEncounterFirstTitleWithExcessiveHeightChanged;
-(void)navigationItemUpdatedBackButtonContent:(id)arg1 animated:(BOOL)arg2 ;
-(id)staticNavBarButtonItem;
-(id)appearanceObserver;
-(BOOL)_accessibility_shouldBeginHUDGestureAtPoint:(CGPoint)arg1 ;
-(void)navigationItemUpdatedPromptContent:(id)arg1 ;
-(BOOL)useInlineBackgroundHeightWhenLarge;
-(void)_updateTitleViewWithLargeTitle:(BOOL)arg1 ;
@end

