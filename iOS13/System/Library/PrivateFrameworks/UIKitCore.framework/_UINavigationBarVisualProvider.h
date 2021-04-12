/*
* Generated on Monday, March 1, 2021 at 2:30:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class UINavigationBar, _UINavigationBarItemStack, NSString, UINavigationItem, _UINavigationControllerRefreshControlHost;

@interface _UINavigationBarVisualProvider : NSObject {

	UINavigationBar* _navigationBar;
	_UINavigationBarItemStack* _stack;
	NSString* _backdropGroupName;
	UINavigationItem* _itemForMeasuring;

}

@property (nonatomic,readonly) UINavigationBar * navigationBar;                                           //@synthesize navigationBar=_navigationBar - In the implementation block
@property (nonatomic,retain) _UINavigationBarItemStack * stack;                                           //@synthesize stack=_stack - In the implementation block
@property (nonatomic,readonly) long long currentContentSize; 
@property (nonatomic,retain) _UINavigationControllerRefreshControlHost * refreshControlHost; 
@property (nonatomic,readonly) BOOL wantsLargeTitleDisplayed; 
@property (assign,nonatomic) BOOL useInlineBackgroundHeightWhenLarge; 
@property (assign,nonatomic) double backgroundAlpha; 
@property (assign,nonatomic) double titleAlpha; 
@property (nonatomic,copy) NSString * backdropGroupName;                                                  //@synthesize backdropGroupName=_backdropGroupName - In the implementation block
@property (assign,nonatomic) long long appearanceAPIVersion; 
@property (nonatomic,readonly) id<_UIBarAppearanceChangeObserver> appearanceObserver; 
@property (assign,nonatomic) BOOL forceScrollEdgeAppearance; 
-(id)description;
-(void)teardown;
-(CGSize)intrinsicContentSize;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)preferredFocusedView;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)updateConstraints;
-(void)invalidateIntrinsicContentSize;
-(void)setSemanticContentAttribute:(long long)arg1 ;
-(void)safeAreaInsetsDidChange;
-(UINavigationBar *)navigationBar;
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
-(double)_shim_backgroundHeight;
-(NSString *)backdropGroupName;
-(void)setBackdropGroupName:(NSString *)arg1 ;
-(void)changeAppearance;
-(id)_shim_userContentGuide;
-(id<_UIBarAppearanceChangeObserver>)appearanceObserver;
-(long long)appearanceAPIVersion;
-(void)setAppearanceAPIVersion:(long long)arg1 ;
-(void)_shim_setUseContentView:(BOOL)arg1 ;
-(void)prepare;
-(void)setStack:(_UINavigationBarItemStack *)arg1 ;
-(void)updateTopNavigationItemAnimated:(BOOL)arg1 ;
-(void)updateTopNavigationItemTitleView;
-(void)traitCollectionDidChangeOnSubtree:(id)arg1 ;
-(id)traitCollectionForChild:(id)arg1 baseTraitCollection:(id)arg2 ;
-(id)_shim_promptText;
-(id)initWithNavigationBar:(id)arg1 ;
-(id)_shim_contentView;
-(void)setupTopNavigationItem;
-(void)updateArchivedSubviews:(id)arg1 ;
-(CGSize)sizeForRestoringFromCancelledTransition;
-(void)prepareForPush;
-(void)pushAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)prepareForPop;
-(void)popAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)changeLayout;
-(long long)currentContentSize;
-(BOOL)shouldUseHeightRangeFittingWidth;
-(SCD_Struct_UI25)layoutHeightsFittingWidth:(double)arg1 ;
-(id)restingHeights;
-(NSDirectionalEdgeInsets)resolvedLargeTitleMargins;
-(void)navigationBarInvalidatedResolvedLayoutMargins;
-(BOOL)canHandleStatusBarTouchAtPoint:(CGPoint)arg1 ;
-(id)_shim_customHitTest:(CGPoint)arg1 forView:(id)arg2 ;
-(void)_shim_pressBackIndicator:(BOOL)arg1 initialPress:(BOOL)arg2 ;
-(void)_shim_popForCarplayPressAtFakePoint:(CGPoint)arg1 ;
-(BOOL)_shim_wantsCustomTouchHandlingForTouches:(id)arg1 ;
-(void)_shim_touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)_shim_touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)_shim_touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)_shim_touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)_shim_updateBackIndicator;
-(BOOL)_shim_throwConstraintExceptions;
-(long long)statusBarStyle;
-(BOOL)supportsRefreshControlHosting;
-(void)setRefreshControlHost:(_UINavigationControllerRefreshControlHost *)arg1 ;
-(_UINavigationControllerRefreshControlHost *)refreshControlHost;
-(BOOL)forceScrollEdgeAppearance;
-(void)setForceScrollEdgeAppearance:(BOOL)arg1 ;
-(BOOL)topItemHasVariableHeight;
-(BOOL)wantsLargeTitleDisplayed;
-(void)animateForSearchPresentation:(BOOL)arg1 ;
-(void)presentHostedSearchWithTransitionCoordinator:(id)arg1 ;
-(void)dismissHostedSearchWithTransitionCoordinator:(id)arg1 ;
-(BOOL)_shim_34415965;
-(void)_shim_setPromptText:(id)arg1 animated:(BOOL)arg2 ;
-(void)setBackButtonVisible:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)recordBarSize:(CGSize)arg1 ;
-(void)barSizeChanged;
-(void)_shim_updateBackgroundViewIgnoringFlag;
-(id)_shim_displayViewsIncludingHiddenBackButtonViews:(BOOL)arg1 ;
-(void)_shim_updateUserContentGuideForTopItem:(id)arg1 backItem:(id)arg2 ;
-(void)_shim_30244716;
-(long long)_shim_backdropStyle;
-(void)intrinsicContentSizeInvalidatedForChildView:(id)arg1 ;
-(void)provideViewsForContents:(id)arg1 topItem:(id)arg2 backItem:(id)arg3 ;
-(BOOL)_accessibility_shouldBeginHUDGestureAtPoint:(CGPoint)arg1 ;
-(id)_accessibility_HUDItemForPoint:(CGPoint)arg1 ;
-(id)_accessibility_controlToActivateForHUDGestureLiftAtPoint:(CGPoint)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 defaultAnswer:(/*^block*/id)arg2 ;
-(void)stackDidChangeFrom:(id)arg1 ;
-(void)updateBackgroundGroupName;
-(void)appendToDescription:(id)arg1 ;
-(void)presentSearchWithTransitionCoordinator:(id)arg1 ;
-(_UINavigationBarItemStack *)stack;
-(id)_shim_layoutView;
-(id)_shim_backIndicatorView;
@end

