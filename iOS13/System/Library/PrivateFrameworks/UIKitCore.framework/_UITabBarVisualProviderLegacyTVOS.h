/*
* Generated on Monday, March 1, 2021 at 2:30:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UITabBarVisualProvider.h>

@class _UIBarBackground, _UIBarBackgroundLayoutLegacy, UIView, UIScrollView, UIMotionEffect;

@interface _UITabBarVisualProviderLegacyTVOS : _UITabBarVisualProvider {

	_UIBarBackground* _backgroundView;
	_UIBarBackgroundLayoutLegacy* _backgroundViewLayout;
	UIView* _customBackgroundView;
	UIView* _accessoryView;
	UIScrollView* _itemsScrollView;
	UIView* _focusedItemHighlightView;
	UIMotionEffect* _focusedItemHighlightMotionEffect;

}
-(void)teardown;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(id)preferredFocusedView;
-(void)layoutSubviews;
-(void)setSemanticContentAttribute:(long long)arg1 ;
-(id)_shim_compatibilityBackgroundView;
-(void)_shim_setCustomBackgroundView:(id)arg1 ;
-(double)_shim_shadowAlpha;
-(void)_shim_setShadowAlpha:(double)arg1 ;
-(void)changeAppearance;
-(void)prepare;
-(void)updateArchivedSubviews:(id)arg1 ;
-(void)changeLayout;
-(void)updateBackgroundGroupName;
-(void)_updateBackground;
-(id)_shim_accessoryView;
-(void)_shim_setAccessoryView:(id)arg1 ;
-(void)changeSelectedItem:(id)arg1 fromItem:(id)arg2 ;
-(void)changeItemsTo:(id)arg1 removingItems:(id)arg2 selectedItem:(id)arg3 oldSelectedItem:(id)arg4 animate:(BOOL)arg5 ;
-(CGSize)intrinsicContentSizeGivenSize:(CGSize)arg1 ;
-(void)_shim_updateFocusHighlightVisibility;
-(id)exchangeItem:(id)arg1 withItem:(id)arg2 ;
-(void)_shim_layoutItemsOnly;
-(void)_shim_updateTabBarItemView:(id)arg1 ;
-(id)createViewForTabBarItem:(id)arg1 ;
-(BOOL)_shim_shadowHidden;
-(void)_shim_setShadowHidden:(BOOL)arg1 ;
-(void)_layoutTabBarItems;
-(void)_applyAppearanceCustomizationsToItem:(id)arg1 ;
-(CGRect)_layoutRegion;
-(void)_configureItems:(id)arg1 ;
-(void)_updateAccessoryView;
-(CGRect)_shadowFrameForBounds:(CGRect)arg1 height:(double)arg2 ;
-(id)_focusedItemHighlightView;
-(id)_parentViewForItems;
-(BOOL)_focusedItemHighlightViewIsVisible;
-(void)_updateFocusedItemHighlightViewWithInterfaceStyle:(long long)arg1 visible:(BOOL)arg2 ;
-(void)_updateFocusedItemHighlightFrame;
-(void)_updateHighlightMotionEffect;
-(void)_setFocusedItemHightlightVisible:(BOOL)arg1 ;
@end

