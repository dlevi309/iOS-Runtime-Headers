/*
* Generated on Thursday, January 14, 2021 at 2:20:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UITabBarVisualProvider.h>
#import <UIKitCore/_UIBarAppearanceChangeObserver.h>
#import <UIKitCore/_UICursorInteractionDelegate.h>

@class _UICursorInteraction, _UIBarBackground, _UIBarBackgroundLayout, UIView, NSString;

@interface _UITabBarVisualProviderLegacyIOS : _UITabBarVisualProvider <_UIBarAppearanceChangeObserver, _UICursorInteractionDelegate> {

	_UICursorInteraction* _cursorInteraction;
	_UIBarBackground* _backgroundView;
	_UIBarBackgroundLayout* _backgroundViewLayout;
	UIView* _customBackgroundView;
	UIView* _accessoryView;
	double _minimumWidthForHorizontalLayout;
	BOOL _useModernAppearance;
	long long _style;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_updateBackground;
-(BOOL)useModernAppearance;
-(CGRect)_layoutRegion;
-(double)_shim_shadowAlpha;
-(void)changeLayout;
-(void)appearance:(id)arg1 categoriesChanged:(long long)arg2 ;
-(void)setSemanticContentAttribute:(long long)arg1 ;
-(id)preferredFocusedView;
-(void)setUseModernAppearance:(BOOL)arg1 ;
-(id)cursorInteraction:(id)arg1 styleForRegion:(id)arg2 ;
-(double)minimumWidthForHorizontalLayout;
-(id)cursorInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3 ;
-(id)_shim_accessoryView;
-(id)_shim_compatibilityBackgroundView;
-(id)_preferredFocusedViewCarplay;
-(void)_updateBackgroundModern;
-(BOOL)_shim_shadowHidden;
-(id)traitCollectionForChild:(id)arg1 baseTraitCollection:(id)arg2 ;
-(void)_updateAccessoryView;
-(id)createViewForTabBarItem:(id)arg1 ;
-(void)changeSelectedItem:(id)arg1 fromItem:(id)arg2 ;
-(void)_shim_setShadowHidden:(BOOL)arg1 ;
-(void)_configureItems:(id)arg1 ;
-(void)layoutSubviews;
-(void)_updateAppearanceForTransitionFromItem:(id)arg1 toItem:(id)arg2 ;
-(void)_shim_updateTabBarItemView:(id)arg1 ;
-(void)_shim_setShadowAlpha:(double)arg1 ;
-(CGRect)_shadowFrameForBounds:(CGRect)arg1 height:(double)arg2 ;
-(void)teardown;
-(void)updateArchivedSubviews:(id)arg1 ;
-(void)_layoutTabBarItems;
-(void)_shim_setAccessoryView:(id)arg1 ;
-(id)exchangeItem:(id)arg1 withItem:(id)arg2 ;
-(CGSize)intrinsicContentSizeGivenSize:(CGSize)arg1 ;
-(long long)_styleForTraitCollection:(id)arg1 ;
-(id)_preferredFocusedViewiOS;
-(void)_shim_setCustomBackgroundView:(id)arg1 ;
-(id)_focusedItemHighlightView;
-(void)changeItemsTo:(id)arg1 removingItems:(id)arg2 selectedItem:(id)arg3 oldSelectedItem:(id)arg4 animate:(BOOL)arg5 ;
-(void)setMinimumWidthForHorizontalLayout:(double)arg1 ;
-(void)_shim_layoutItemsOnly;
-(void)changeAppearance;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)prepare;
-(double)_shim_heightForCustomizingItems;
-(void)_updateBackgroundLegacy;
-(void)updateBackgroundGroupName;
-(id)appearanceObserver;
-(void)_applyAppearanceCustomizationsToItem:(id)arg1 ;
@end

