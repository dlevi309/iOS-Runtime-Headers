/*
* Generated on Thursday, January 14, 2021 at 2:20:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_updateBackground;
-(CGRect)_layoutRegion;
-(double)_shim_shadowAlpha;
-(void)changeLayout;
-(void)setSemanticContentAttribute:(long long)arg1 ;
-(id)preferredFocusedView;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(id)_shim_accessoryView;
-(id)_shim_compatibilityBackgroundView;
-(BOOL)_shim_shadowHidden;
-(void)_updateAccessoryView;
-(id)createViewForTabBarItem:(id)arg1 ;
-(void)changeSelectedItem:(id)arg1 fromItem:(id)arg2 ;
-(void)_shim_setShadowHidden:(BOOL)arg1 ;
-(void)_configureItems:(id)arg1 ;
-(void)layoutSubviews;
-(void)_shim_updateFocusHighlightVisibility;
-(void)_shim_updateTabBarItemView:(id)arg1 ;
-(void)_shim_setShadowAlpha:(double)arg1 ;
-(CGRect)_shadowFrameForBounds:(CGRect)arg1 height:(double)arg2 ;
-(void)teardown;
-(void)updateArchivedSubviews:(id)arg1 ;
-(void)_layoutTabBarItems;
-(void)_shim_setAccessoryView:(id)arg1 ;
-(id)exchangeItem:(id)arg1 withItem:(id)arg2 ;
-(CGSize)intrinsicContentSizeGivenSize:(CGSize)arg1 ;
-(void)_shim_setCustomBackgroundView:(id)arg1 ;
-(id)_focusedItemHighlightView;
-(void)changeItemsTo:(id)arg1 removingItems:(id)arg2 selectedItem:(id)arg3 oldSelectedItem:(id)arg4 animate:(BOOL)arg5 ;
-(id)_parentViewForItems;
-(BOOL)_focusedItemHighlightViewIsVisible;
-(void)_updateFocusedItemHighlightFrame;
-(void)_updateFocusedItemHighlightViewWithInterfaceStyle:(long long)arg1 visible:(BOOL)arg2 ;
-(void)_updateHighlightMotionEffect;
-(void)_setFocusedItemHightlightVisible:(BOOL)arg1 ;
-(void)_shim_layoutItemsOnly;
-(void)changeAppearance;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)prepare;
-(void)updateBackgroundGroupName;
-(void)_applyAppearanceCustomizationsToItem:(id)arg1 ;
@end

