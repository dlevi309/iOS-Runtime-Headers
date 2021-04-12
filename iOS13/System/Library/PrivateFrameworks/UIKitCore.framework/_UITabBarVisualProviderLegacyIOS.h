/*
* Generated on Monday, March 1, 2021 at 2:30:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)teardown;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)preferredFocusedView;
-(void)layoutSubviews;
-(void)setSemanticContentAttribute:(long long)arg1 ;
-(void)appearance:(id)arg1 categoriesChanged:(long long)arg2 ;
-(id)_shim_compatibilityBackgroundView;
-(void)_shim_setCustomBackgroundView:(id)arg1 ;
-(double)_shim_shadowAlpha;
-(void)_shim_setShadowAlpha:(double)arg1 ;
-(void)changeAppearance;
-(id)appearanceObserver;
-(void)prepare;
-(id)traitCollectionForChild:(id)arg1 baseTraitCollection:(id)arg2 ;
-(void)updateArchivedSubviews:(id)arg1 ;
-(void)changeLayout;
-(void)updateBackgroundGroupName;
-(void)_updateBackground;
-(id)_shim_accessoryView;
-(void)_shim_setAccessoryView:(id)arg1 ;
-(double)minimumWidthForHorizontalLayout;
-(void)setMinimumWidthForHorizontalLayout:(double)arg1 ;
-(void)setUseModernAppearance:(BOOL)arg1 ;
-(BOOL)useModernAppearance;
-(double)_shim_heightForCustomizingItems;
-(void)changeSelectedItem:(id)arg1 fromItem:(id)arg2 ;
-(void)changeItemsTo:(id)arg1 removingItems:(id)arg2 selectedItem:(id)arg3 oldSelectedItem:(id)arg4 animate:(BOOL)arg5 ;
-(CGSize)intrinsicContentSizeGivenSize:(CGSize)arg1 ;
-(id)exchangeItem:(id)arg1 withItem:(id)arg2 ;
-(void)_shim_layoutItemsOnly;
-(void)_shim_updateTabBarItemView:(id)arg1 ;
-(id)createViewForTabBarItem:(id)arg1 ;
-(BOOL)_shim_shadowHidden;
-(void)_shim_setShadowHidden:(BOOL)arg1 ;
-(void)_layoutTabBarItems;
-(void)_updateAppearanceForTransitionFromItem:(id)arg1 toItem:(id)arg2 ;
-(void)_applyAppearanceCustomizationsToItem:(id)arg1 ;
-(CGRect)_layoutRegion;
-(void)_configureItems:(id)arg1 ;
-(void)_updateBackgroundModern;
-(void)_updateBackgroundLegacy;
-(long long)_styleForTraitCollection:(id)arg1 ;
-(void)_updateAccessoryView;
-(id)_preferredFocusedViewCarplay;
-(id)_preferredFocusedViewiOS;
-(id)cursorInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3 ;
-(id)cursorInteraction:(id)arg1 styleForRegion:(id)arg2 ;
-(CGRect)_shadowFrameForBounds:(CGRect)arg1 height:(double)arg2 ;
-(id)_focusedItemHighlightView;
@end

