/*
* Generated on Monday, March 1, 2021 at 2:30:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)teardown;
-(void)traitCollectionDidChange:(id)arg1 ;
-(BOOL)shouldUpdateFocusInContext:(id)arg1 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(id)preferredFocusedView;
-(void)layoutSubviews;
-(void)updateConstraints;
-(void)setSemanticContentAttribute:(long long)arg1 ;
-(id)_shim_compatibilityBackgroundView;
-(void)_shim_setCustomBackgroundView:(id)arg1 ;
-(double)_shim_shadowAlpha;
-(void)_shim_setShadowAlpha:(double)arg1 ;
-(NSString *)backdropGroupName;
-(void)setBackdropGroupName:(NSString *)arg1 ;
-(void)changeAppearance;
-(id<_UIBarAppearanceChangeObserver>)appearanceObserver;
-(void)prepare;
-(id)traitCollectionForChild:(id)arg1 baseTraitCollection:(id)arg2 ;
-(void)updateArchivedSubviews:(id)arg1 ;
-(void)changeLayout;
-(double)defaultAnimationDuration;
-(void)updateBackgroundGroupName;
-(id)_shim_accessoryView;
-(void)_shim_setAccessoryView:(id)arg1 ;
-(double)minimumWidthForHorizontalLayout;
-(void)setMinimumWidthForHorizontalLayout:(double)arg1 ;
-(id)_shim_shadowView;
-(id)initWithTabBar:(id)arg1 ;
-(void)setUseModernAppearance:(BOOL)arg1 ;
-(BOOL)useModernAppearance;
-(double)_shim_heightForCustomizingItems;
-(void)changeSelectedItem:(id)arg1 fromItem:(id)arg2 ;
-(void)changeItemsTo:(id)arg1 removingItems:(id)arg2 selectedItem:(id)arg3 oldSelectedItem:(id)arg4 animate:(BOOL)arg5 ;
-(CGSize)intrinsicContentSizeGivenSize:(CGSize)arg1 ;
-(id)defaultTintColor;
-(void)_shim_updateFocusHighlightVisibility;
-(void)tabBarSizeChanged:(CGSize)arg1 ;
-(id)exchangeItem:(id)arg1 withItem:(id)arg2 ;
-(void)_shim_layoutItemsOnly;
-(void)_shim_updateTabBarItemView:(id)arg1 ;
-(UITabBar *)tabBar;
-(void)changeItemsTo:(id)arg1 removingItems:(id)arg2 selectedItem:(id)arg3 animate:(BOOL)arg4 ;
-(id)createViewForTabBarItem:(id)arg1 ;
-(BOOL)wantsFocus;
-(BOOL)_shim_shadowHidden;
-(void)_shim_setShadowHidden:(BOOL)arg1 ;
@end

