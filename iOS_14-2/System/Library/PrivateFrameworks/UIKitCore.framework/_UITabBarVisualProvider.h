/*
* Generated on Thursday, January 14, 2021 at 2:20:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class UITabBar, NSString;

@interface _UITabBarVisualProvider : NSObject {

	UITabBar* _tabBar;
	NSString* _backdropGroupName;

}

@property (nonatomic,readonly) UITabBar * tabBar;                                                  //@synthesize tabBar=_tabBar - In the implementation block
@property (nonatomic,copy) NSString * backdropGroupName;                                           //@synthesize backdropGroupName=_backdropGroupName - In the implementation block
@property (assign,nonatomic) BOOL useModernAppearance; 
@property (nonatomic,readonly) id<_UIBarAppearanceChangeObserver> appearanceObserver; 
@property (assign,nonatomic) double minimumWidthForHorizontalLayout; 
-(BOOL)useModernAppearance;
-(double)_shim_shadowAlpha;
-(BOOL)shouldUpdateFocusInContext:(id)arg1 ;
-(void)changeLayout;
-(UITabBar *)tabBar;
-(void)setSemanticContentAttribute:(long long)arg1 ;
-(id)preferredFocusedView;
-(void)setUseModernAppearance:(BOOL)arg1 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(double)minimumWidthForHorizontalLayout;
-(id)_shim_accessoryView;
-(id)_shim_compatibilityBackgroundView;
-(void)changeItemsTo:(id)arg1 removingItems:(id)arg2 selectedItem:(id)arg3 animate:(BOOL)arg4 ;
-(BOOL)_shim_shadowHidden;
-(id)traitCollectionForChild:(id)arg1 baseTraitCollection:(id)arg2 ;
-(id)createViewForTabBarItem:(id)arg1 ;
-(void)changeSelectedItem:(id)arg1 fromItem:(id)arg2 ;
-(void)_shim_setShadowHidden:(BOOL)arg1 ;
-(void)layoutSubviews;
-(void)_shim_updateFocusHighlightVisibility;
-(void)updateConstraints;
-(double)defaultAnimationDuration;
-(BOOL)wantsFocus;
-(void)_shim_updateTabBarItemView:(id)arg1 ;
-(NSString *)backdropGroupName;
-(void)_shim_setShadowAlpha:(double)arg1 ;
-(void)teardown;
-(void)updateArchivedSubviews:(id)arg1 ;
-(void)_shim_setAccessoryView:(id)arg1 ;
-(id)exchangeItem:(id)arg1 withItem:(id)arg2 ;
-(CGSize)intrinsicContentSizeGivenSize:(CGSize)arg1 ;
-(id)initWithTabBar:(id)arg1 ;
-(void)setBackdropGroupName:(NSString *)arg1 ;
-(void)_shim_setCustomBackgroundView:(id)arg1 ;
-(void)changeItemsTo:(id)arg1 removingItems:(id)arg2 selectedItem:(id)arg3 oldSelectedItem:(id)arg4 animate:(BOOL)arg5 ;
-(void)setMinimumWidthForHorizontalLayout:(double)arg1 ;
-(void)_shim_layoutItemsOnly;
-(void)changeAppearance;
-(void)tabBarSizeChanged:(CGSize)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)prepare;
-(double)_shim_heightForCustomizingItems;
-(void)updateBackgroundGroupName;
-(id)_shim_shadowView;
-(id)defaultTintColor;
-(id<_UIBarAppearanceChangeObserver>)appearanceObserver;
@end

