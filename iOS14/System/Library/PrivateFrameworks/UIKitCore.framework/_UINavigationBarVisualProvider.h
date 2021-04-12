/*
* Generated on Thursday, January 14, 2021 at 2:20:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class UINavigationBar, _UINavigationBarItemStack, NSString, UINavigationItem, _UINavigationControllerRefreshControlHost, UIBarButtonItem;

@interface _UINavigationBarVisualProvider : NSObject {

	UINavigationBar* _navigationBar;
	_UINavigationBarItemStack* _stack;
	NSString* _backdropGroupName;
	UINavigationItem* _itemForMeasuring;

}

@property (nonatomic,readonly) UINavigationBar * navigationBar;                                                                                                                                //@synthesize navigationBar=_navigationBar - In the implementation block
@property (nonatomic,retain) _UINavigationBarItemStack * stack;                                                                                                                                //@synthesize stack=_stack - In the implementation block
@property (nonatomic,readonly) long long currentContentSize; 
@property (nonatomic,retain) _UINavigationControllerRefreshControlHost * refreshControlHost; 
@property (nonatomic,readonly) BOOL wantsLargeTitleDisplayed; 
@property (assign,nonatomic) BOOL useInlineBackgroundHeightWhenLarge; 
@property (assign,nonatomic) double backgroundAlpha; 
@property (assign,nonatomic) double titleAlpha; 
@property (nonatomic,copy) NSString * backdropGroupName;                                                                                                                                       //@synthesize backdropGroupName=_backdropGroupName - In the implementation block
@property (assign,nonatomic) long long appearanceAPIVersion; 
@property (nonatomic,readonly) id<_UIBarAppearanceChangeObserver> appearanceObserver; 
@property (assign,nonatomic) BOOL forceScrollEdgeAppearance; 
@property (nonatomic,retain) UIBarButtonItem * staticNavBarButtonItem; 
@property (getter=isContentViewHidden,nonatomic,readonly) BOOL contentViewHidden; 
@property (assign,nonatomic) BOOL shouldFadeStaticNavBarButton; 
@property (assign,nonatomic) BOOL staticNavBarButtonLingers; 
@property (getter=isAnimatingNavItemContentLayoutGuideForStaticButtonVisibilityChange,nonatomic,readonly) BOOL animatingNavItemContentLayoutGuideForStaticButtonVisibilityChange; 
@property (nonatomic,readonly) double navItemContentLayoutGuideAnimationDistance; 
-(double)_shim_shadowAlpha;
-(void)changeLayout;
-(double)_shim_backgroundHeight;
-(void)setSemanticContentAttribute:(long long)arg1 ;
-(void)_shim_pressBackIndicator:(BOOL)arg1 initialPress:(BOOL)arg2 ;
-(id)preferredFocusedView;
-(void)pushAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)updateTopNavigationItemAnimated:(BOOL)arg1 ;
-(CGSize)intrinsicContentSize;
-(BOOL)shouldFadeStaticNavBarButton;
-(void)setRefreshControlHost:(_UINavigationControllerRefreshControlHost *)arg1 ;
-(void)setStack:(_UINavigationBarItemStack *)arg1 ;
-(void)prepareForPop;
-(BOOL)isAnimatingNavItemContentLayoutGuideForStaticButtonVisibilityChange;
-(void)_installContentClippingView:(id)arg1 ;
-(id)_shim_compatibilityBackgroundView;
-(BOOL)shouldUseHeightRangeFittingWidth;
-(id)_accessibility_HUDItemForPoint:(CGPoint)arg1 ;
-(id)_shim_userContentGuide;
-(void)setNeedsStaticNavBarButtonUpdate;
-(BOOL)canHandleStatusBarTouchAtPoint:(CGPoint)arg1 ;
-(id)traitCollectionForChild:(id)arg1 baseTraitCollection:(id)arg2 ;
-(_UINavigationBarItemStack *)stack;
-(double)navItemContentLayoutGuideAnimationDistance;
-(void)barSizeChanged;
-(NSDirectionalEdgeInsets)resolvedSearchBarMargins;
-(BOOL)topItemHasVariableHeight;
-(void)_shim_setDisableBlurTinting:(BOOL)arg1 ;
-(void)_shim_updateBackgroundViewIgnoringFlag;
-(void)setBackgroundAlpha:(double)arg1 ;
-(void)traitCollectionDidChangeOnSubtree:(id)arg1 ;
-(void)provideViewsForContents:(id)arg1 topItem:(id)arg2 backItem:(id)arg3 ;
-(void)_shim_touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)beginAnimatingNavItemContentLayoutGuideForStaticButtonVisibilityChange;
-(void)navigationBarInvalidatedResolvedLayoutMargins;
-(BOOL)_shim_disableBlurTinting;
-(UINavigationBar *)navigationBar;
-(void)_shim_touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)forceScrollEdgeAppearance;
-(id)_shim_promptText;
-(BOOL)wantsLargeTitleDisplayed;
-(void)appendToDescription:(id)arg1 ;
-(void)recordBarSize:(CGSize)arg1 ;
-(id)_shim_layoutView;
-(id)_shim_customHitTest:(CGPoint)arg1 forView:(id)arg2 ;
-(double)backgroundAlpha;
-(BOOL)_shim_wantsCustomTouchHandlingForTouches:(id)arg1 ;
-(void)prepareForPush;
-(id)description;
-(void)endAnimatingNavItemContentLayoutGuideForStaticButtonVisibilityChange;
-(void)layoutSubviews;
-(void)updateConstraints;
-(long long)currentContentSize;
-(_UINavigationControllerRefreshControlHost *)refreshControlHost;
-(id)_accessibility_controlToActivateForHUDGestureLiftAtPoint:(CGPoint)arg1 ;
-(BOOL)_shim_throwConstraintExceptions;
-(void)presentSearchWithTransitionCoordinator:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)invalidateIntrinsicContentSize;
-(void)_shim_30244716;
-(void)_shim_popForCarplayPressAtFakePoint:(CGPoint)arg1 ;
-(void)_shim_setUseContentView:(BOOL)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 defaultAnswer:(/*^block*/id)arg2 ;
-(void)_removeContentClippingView;
-(BOOL)staticNavBarButtonLingers;
-(void)_shim_updateUserContentGuideForTopItem:(id)arg1 backItem:(id)arg2 ;
-(NSString *)backdropGroupName;
-(void)presentHostedSearchWithTransitionCoordinator:(id)arg1 ;
-(id)_shim_displayViewsIncludingHiddenBackButtonViews:(BOOL)arg1 ;
-(void)dismissHostedSearchWithTransitionCoordinator:(id)arg1 ;
-(void)setForceScrollEdgeAppearance:(BOOL)arg1 ;
-(void)_shim_setShadowAlpha:(double)arg1 ;
-(long long)appearanceAPIVersion;
-(BOOL)updateNavItemContentLayoutGuideAnimationConstraintConstant:(double)arg1 ;
-(BOOL)supportsRefreshControlHosting;
-(void)setupTopNavigationItem;
-(void)popAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)safeAreaInsetsDidChange;
-(void)setTitleAlpha:(double)arg1 ;
-(void)intrinsicContentSizeInvalidatedForChildView:(id)arg1 ;
-(void)teardown;
-(void)setBackButtonVisible:(BOOL)arg1 animated:(BOOL)arg2 ;
-(SCD_Struct_UI30)layoutHeightsFittingWidth:(double)arg1 ;
-(void)updateArchivedSubviews:(id)arg1 ;
-(id)_shim_contentView;
-(long long)statusBarStyle;
-(long long)_shim_backdropStyle;
-(double)heightForRestoringFromCancelledTransition;
-(void)setAppearanceAPIVersion:(long long)arg1 ;
-(void)setBackdropGroupName:(NSString *)arg1 ;
-(BOOL)isContentViewHidden;
-(void)_shim_setCustomBackgroundView:(id)arg1 ;
-(void)updateTopNavigationItemTitleView;
-(void)_shim_touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)_shim_setPromptText:(id)arg1 animated:(BOOL)arg2 ;
-(NSDirectionalEdgeInsets)resolvedLargeTitleMargins;
-(void)_shim_updateBackIndicator;
-(void)changeAppearance;
-(id)_shim_backIndicatorView;
-(id)initWithNavigationBar:(id)arg1 ;
-(void)_refreshBackButtonMenu;
-(void)barDidMoveToWindow;
-(id)restingHeights;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setUseInlineBackgroundHeightWhenLarge:(BOOL)arg1 ;
-(void)setShouldFadeStaticNavBarButton:(BOOL)arg1 ;
-(BOOL)_shim_34415965;
-(void)prepare;
-(void)setStaticNavBarButtonLingers:(BOOL)arg1 ;
-(void)updateBackgroundGroupName;
-(double)titleAlpha;
-(void)setStaticNavBarButtonItem:(UIBarButtonItem *)arg1 ;
-(void)animateForSearchPresentation:(BOOL)arg1 ;
-(void)stackDidChangeFrom:(id)arg1 ;
-(void)barDidAddSubview:(id)arg1 ;
-(UIBarButtonItem *)staticNavBarButtonItem;
-(id<_UIBarAppearanceChangeObserver>)appearanceObserver;
-(BOOL)_accessibility_shouldBeginHUDGestureAtPoint:(CGPoint)arg1 ;
-(BOOL)useInlineBackgroundHeightWhenLarge;
-(void)_shim_touchesEnded:(id)arg1 withEvent:(id)arg2 ;
@end

