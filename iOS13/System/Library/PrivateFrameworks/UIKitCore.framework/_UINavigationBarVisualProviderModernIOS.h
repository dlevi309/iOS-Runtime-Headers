/*
* Generated on Monday, March 1, 2021 at 2:30:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UINavigationBarVisualProvider.h>
#import <UIKitCore/_UINavigationBarContentViewDelegate.h>
#import <UIKitCore/_UINavigationItemChangeObserver.h>
#import <UIKitCore/_UIBarAppearanceChangeObserver.h>
#import <UIKitCore/_UINavigationControllerRefreshControlHostDelegate.h>
#import <UIKitCore/_UIBasicAnimationFactory.h>

@class _UIBarBackground, _UINavigationBarContentView, UIView, _UINavigationBarLargeTitleView, _UINavigationBarModernPromptView, _UIPointerInteractionAssistant, UILabel, _UINavigationBarTransitionContext, _UINavigationControllerRefreshControlHost, NSString;

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
	_UINavigationControllerRefreshControlHost* _refreshControlHost;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)teardown;
-(CGSize)intrinsicContentSize;
-(void)traitCollectionDidChange:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2 ;
-(id)_timingFunctionForAnimationInView:(id)arg1 withKeyPath:(id)arg2 ;
-(BOOL)_shouldAnimateAdditivelyForView:(id)arg1 withKeyPath:(id)arg2 ;
-(void)safeAreaInsetsDidChange;
-(void)appearance:(id)arg1 categoriesChanged:(long long)arg2 ;
-(BOOL)useInlineBackgroundHeightWhenLarge;
-(void)setUseInlineBackgroundHeightWhenLarge:(BOOL)arg1 ;
-(double)backgroundAlpha;
-(void)setBackgroundAlpha:(double)arg1 ;
-(id)_shim_compatibilityBackgroundView;
-(void)_shim_setCustomBackgroundView:(id)arg1 ;
-(double)_shim_shadowAlpha;
-(void)_shim_setShadowAlpha:(double)arg1 ;
-(double)titleAlpha;
-(void)setTitleAlpha:(double)arg1 ;
-(BOOL)_shim_disableBlurTinting;
-(void)_shim_setDisableBlurTinting:(BOOL)arg1 ;
-(void)changeAppearance;
-(id)appearanceObserver;
-(long long)appearanceAPIVersion;
-(void)setAppearanceAPIVersion:(long long)arg1 ;
-(void)prepare;
-(void)traitCollectionDidChangeOnSubtree:(id)arg1 ;
-(id)traitCollectionForChild:(id)arg1 baseTraitCollection:(id)arg2 ;
-(void)updateArchivedSubviews:(id)arg1 ;
-(CGSize)sizeForRestoringFromCancelledTransition;
-(void)prepareForPush;
-(void)pushAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)prepareForPop;
-(void)popAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)changeLayout;
-(long long)currentContentSize;
-(SCD_Struct_UI25)layoutHeightsFittingWidth:(double)arg1 ;
-(id)restingHeights;
-(NSDirectionalEdgeInsets)resolvedLargeTitleMargins;
-(void)navigationBarInvalidatedResolvedLayoutMargins;
-(long long)statusBarStyle;
-(BOOL)supportsRefreshControlHosting;
-(void)setRefreshControlHost:(id)arg1 ;
-(id)refreshControlHost;
-(BOOL)forceScrollEdgeAppearance;
-(void)setForceScrollEdgeAppearance:(BOOL)arg1 ;
-(BOOL)topItemHasVariableHeight;
-(BOOL)wantsLargeTitleDisplayed;
-(void)animateForSearchPresentation:(BOOL)arg1 ;
-(void)presentHostedSearchWithTransitionCoordinator:(id)arg1 ;
-(void)dismissHostedSearchWithTransitionCoordinator:(id)arg1 ;
-(void)recordBarSize:(CGSize)arg1 ;
-(void)provideViewsForContents:(id)arg1 topItem:(id)arg2 backItem:(id)arg3 ;
-(BOOL)_accessibility_shouldBeginHUDGestureAtPoint:(CGPoint)arg1 ;
-(id)_accessibility_HUDItemForPoint:(CGPoint)arg1 ;
-(id)_accessibility_controlToActivateForHUDGestureLiftAtPoint:(CGPoint)arg1 ;
-(double)_effectiveBackIndicatorLeftMargin;
-(BOOL)navigationItemIsTopItem:(id)arg1 ;
-(void)navigationItemUpdatedTitleContent:(id)arg1 animated:(BOOL)arg2 ;
-(BOOL)navigationItemIsBackItem:(id)arg1 ;
-(void)navigationItemUpdatedBackButtonContent:(id)arg1 animated:(BOOL)arg2 ;
-(void)navigationItemUpdatedLargeTitleContent:(id)arg1 ;
-(void)navigationItemUpdatedLargeTitleDisplayMode:(id)arg1 ;
-(void)navigationItemUpdatedBackgroundAppearance:(id)arg1 ;
-(void)navigationItem:(id)arg1 appearance:(id)arg2 categoriesChanged:(long long)arg3 ;
-(void)navigationItemUpdatedPromptContent:(id)arg1 ;
-(void)navigationItemUpdatedContentLayout:(id)arg1 animated:(BOOL)arg2 ;
-(void)navigationItemUpdatedLeftBarButtonItems:(id)arg1 animated:(BOOL)arg2 ;
-(void)navigationItemUpdatedRightBarButtonItems:(id)arg1 animated:(BOOL)arg2 ;
-(void)navigationItemUpdatedSearchController:(id)arg1 oldSearchController:(id)arg2 ;
-(void)navigationItemUpdatedScrollEdgeProgress:(id)arg1 ;
-(void)navigationItemUpdatedBottomPalette:(id)arg1 oldPalette:(id)arg2 ;
-(void)navigationItemUpdatedCanvasView:(id)arg1 ;
-(void)stackDidChangeFrom:(id)arg1 ;
-(void)updateBackgroundGroupName;
-(void)_updateBackground;
-(void)navigationBarContentViewDidTriggerBackAction:(id)arg1 fromBackButtonItem:(id)arg2 ;
-(void)navigationBarContentViewDidChangeDesiredHeight:(id)arg1 ;
-(void)_enforceLayoutOrdering;
-(void)_updateContentPriorities;
-(void)_invalidateIntrinsicContentSizeAndNotifySizeChanged;
-(BOOL)_isInInteractiveScroll;
-(BOOL)wantsExtendedContentView;
-(BOOL)_stackWantsExtendedContentViewForItem:(id)arg1 ;
-(BOOL)_stackWantsLargeTitleDisplayedForItem:(id)arg1 ;
-(BOOL)useManualScrollEdgeAppearanceForItem:(id)arg1 ;
-(BOOL)_stackWantsSearchDisplayedBelowContentViewForItem:(id)arg1 ;
-(BOOL)_stackWantsBottomPaletteDisplayedForItem:(id)arg1 ;
-(BOOL)_stackWantsLargeTitleDisplayedForItem:(id)arg1 hideLargeTitleForActiveSearch:(BOOL)arg2 ;
-(BOOL)allowLargeTitleView;
-(BOOL)_isInnerNavigationBarOfNestedNavigationController;
-(void)_updateAugmentedTitleDataSources;
-(void)_computeProvidesExtraSpaceForExcessiveLineHeightsForTopItem:(id)arg1 ;
-(id)_defaultWeeTitleAttributes;
-(void)_updateContentForTopItem:(id)arg1 backItem:(id)arg2 animated:(BOOL)arg3 ;
-(double)_contentBackgroundExtension;
-(id)_backgroundLayoutOfClass:(Class)arg1 fromLayout:(id)arg2 ;
-(void)_updateModernLayout:(id)arg1 forNavigationItem:(id)arg2 compact:(BOOL)arg3 ;
-(void)_updateLegacyLayout:(id)arg1 forNavigationItem:(id)arg2 ;
-(id)_updateBackgroundLayout:(id)arg1 forNavigationItem:(id)arg2 compact:(BOOL)arg3 ;
-(void)_ensureLayoutsConfiguredForEntry:(id)arg1 ;
-(void)_configureMarginsOnContentViewsAndPalette:(id)arg1 withContentMargin:(double)arg2 ;
-(void)_updatePromptViewAndActuallyHide:(BOOL)arg1 ;
-(void)_updateContentForTopItem:(id)arg1 backItem:(id)arg2 ;
-(void)_updateCanvasView;
-(void)_layoutInBounds:(CGRect)arg1 wantsExtendedContentView:(BOOL)arg2 wantsLargeTitle:(BOOL)arg3 ;
-(void)_updateTitleViewWithLargeTitle:(BOOL)arg1 ;
-(id)emptyLayout;
-(void)_presentOrDismissSearch:(int)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)_setupTransitionContextForTransition:(int)arg1 ;
-(void)_endTransitionCompleted:(BOOL)arg1 ;
-(void)_performAnimationWithTransitionCompletion:(/*^block*/id)arg1 transition:(int)arg2 ;
-(void)_updateWithCompletion:(/*^block*/id)arg1 ;
-(void)_upgradeAppearanceAPIForItemIfNecessary:(id)arg1 ;
-(void)_prepareLayouts;
-(void)_beginOrEndObservingDidEncounterFirstTitleWithExcessiveHeightChangedIfNecessary;
-(void)_postDidEncounterFirstTitleWithExcessiveHeightChanged;
-(void)_didEncounterFirstTitleWithExcessiveHeightChanged:(id)arg1 ;
-(void)navigationControllerRefreshControlHostDidUpdateLayout:(id)arg1 ;
-(void)_setupTopNavigationItemAnimated:(BOOL)arg1 ;
@end

