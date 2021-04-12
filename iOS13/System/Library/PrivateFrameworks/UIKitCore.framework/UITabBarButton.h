/*
* Generated on Monday, March 1, 2021 at 2:30:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIControl.h>
#import <UIKit/UISpringLoadedInteractionSupporting.h>

@class UITabBarSwappableImageView, UIVisualEffectView, UITabBarButtonLabel, _UIBadgeView, UIImageView, UIImage, NSMutableDictionary, UIColor, UIView, _UITabBarItemData, UIVibrancyEffect, UITabBar, NSArray, NSString;

@interface UITabBarButton : UIControl <UISpringLoadedInteractionSupporting> {

	CGRect _hitRect;
	UITabBarSwappableImageView* _imageView;
	UIVisualEffectView* _vibrancyEffectView;
	UITabBarButtonLabel* _label;
	_UIBadgeView* _badge;
	UIImageView* _selectedIndicator;
	UIEdgeInsets _imageInsets;
	UIEdgeInsets _imageLandscapeInsets;
	UIImage* _customSelectedIndicatorImage;
	UIOffset _labelOffset;
	NSMutableDictionary* _buttonTintColorsForState;
	NSMutableDictionary* _contentTintColorsForState;
	UIColor* _defaultUnselectedLabelTintColor;
	UIColor* _badgeColor;
	NSMutableDictionary* _badgeTextAttributesForState;
	UIOffset _badgeOffset;
	UIView* _highContrastFocusIndicator;
	BOOL _selected;
	BOOL _showsHighlightedState;
	UIView* _focusView;
	Class _appearanceGuideClass;
	long long _layoutStyle;
	_UITabBarItemData* _itemAppearanceData;
	UIVibrancyEffect* _itemVibrantEffect;
	UITabBar* _tabBar;
	NSArray* _carplayConstraints;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,getter=isSpringLoaded,nonatomic) BOOL springLoaded; 
@property (nonatomic,retain) NSArray * carplayConstraints;                                                                           //@synthesize carplayConstraints=_carplayConstraints - In the implementation block
@property (nonatomic,readonly) UIView * focusView;                                                                                   //@synthesize focusView=_focusView - In the implementation block
@property (getter=isDefaultTVLayout,nonatomic,readonly) BOOL _defaultTVLayout; 
@property (assign,nonatomic) long long layoutStyle;                                                                                  //@synthesize layoutStyle=_layoutStyle - In the implementation block
@property (nonatomic,retain) _UITabBarItemData * itemAppearanceData;                                                                 //@synthesize itemAppearanceData=_itemAppearanceData - In the implementation block
@property (nonatomic,retain) UIVibrancyEffect * itemVibrantEffect;                                                                   //@synthesize itemVibrantEffect=_itemVibrantEffect - In the implementation block
@property (nonatomic,__weak,readonly) UITabBar * tabBar;                                                                             //@synthesize tabBar=_tabBar - In the implementation block
@property (setter=_setAppearanceGuideClass:,nonatomic,retain) Class _appearanceGuideClass;                                           //@synthesize appearanceGuideClass=_appearanceGuideClass - In the implementation block
@property (setter=_setUnselectedTintColor:,getter=_unselectedTintColor,nonatomic,retain) UIColor * unselectedTintColor; 
@property (assign,setter=_setShowsHighlightedState:,nonatomic) BOOL _showsHighlightedState;                                          //@synthesize showsHighlightedState=_showsHighlightedState - In the implementation block
@property (nonatomic,readonly) CGRect _contentRect; 
@property (nonatomic,readonly) UIColor * _defaultUnselectedLabelTintColor; 
@property (assign,setter=_setSelected:,getter=_isSelected,nonatomic) BOOL _selected; 
+(id)_defaultLabelColor;
-(void)setEnabled:(BOOL)arg1 ;
-(id)_info;
-(void)setImage:(id)arg1 ;
-(BOOL)_isSelected;
-(void)traitCollectionDidChange:(id)arg1 ;
-(BOOL)shouldUpdateFocusInContext:(id)arg1 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(BOOL)canBecomeFocused;
-(BOOL)_isEligibleForFocusInteraction;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setSpringLoaded:(BOOL)arg1 ;
-(BOOL)isSpringLoaded;
-(void)pressesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)setSemanticContentAttribute:(long long)arg1 ;
-(UIOffset)titlePositionAdjustmentForState:(long long)arg1 ;
-(id)titleTextAttributesForState:(long long)arg1 ;
-(void)_didChangeFromIdiom:(long long)arg1 onScreen:(id)arg2 traverseHierarchy:(BOOL)arg3 ;
-(void)_UIAppearance_setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)_setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2 ;
-(Class)_appearanceGuideClass;
-(void)_setAppearanceGuideClass:(Class)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 forEvent:(GSEventRef)arg2 ;
-(UIOffset)_titlePositionAdjustment;
-(void)_setSelected:(BOOL)arg1 ;
-(void)_setUnselectedTintColor:(id)arg1 ;
-(id)_tabBar;
-(void)_setShowsHighlightedState:(BOOL)arg1 ;
-(void)_setContentTintColor:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)_showSelectedIndicator:(BOOL)arg1 changeSelection:(BOOL)arg2 ;
-(void)_setCustomSelectedIndicatorImage:(id)arg1 ;
-(BOOL)_showsHighlightedState;
-(void)_setBadgeValue:(id)arg1 ;
-(void)_updateToMatchCurrentState;
-(void)_setBadgeColor:(id)arg1 ;
-(id)badgeTextAttributesForState:(long long)arg1 ;
-(void)_setBadgeTextAttributes:(id)arg1 forState:(unsigned long long)arg2 ;
-(id)initWithImage:(id)arg1 landscapeImage:(id)arg2 selectedImage:(id)arg3 landscapeSelectedImage:(id)arg4 label:(id)arg5 withInsets:(UIEdgeInsets)arg6 landscapeInsets:(UIEdgeInsets)arg7 tabBar:(id)arg8 ;
-(void)_setBadgeOffset:(UIOffset)arg1 ;
-(void)_applyTabBarButtonAppearanceStorage:(id)arg1 withTaggedSelectors:(id)arg2 ;
-(UITabBar *)tabBar;
-(void)setItemVibrantEffect:(UIVibrancyEffect *)arg1 ;
-(void)setItemAppearanceData:(_UITabBarItemData *)arg1 ;
-(void)setLayoutStyle:(long long)arg1 ;
-(void)_setTabBarHitRect:(CGRect)arg1 ;
-(CGRect)_contentRect;
-(long long)layoutStyle;
-(_UITabBarItemData *)itemAppearanceData;
-(long long)_currentItemState;
-(id)defaultColorForState:(long long)arg1 ;
-(BOOL)isDefaultTVLayout;
-(id)_contentTintColorForState:(unsigned long long)arg1 ;
-(UIColor *)_defaultUnselectedLabelTintColor;
-(void)_UIAppearance_setTitlePositionAdjustment:(UIOffset)arg1 ;
-(void)_setTitlePositionAdjustment:(UIOffset)arg1 ;
-(void)_UIAppearance_setBadgeColor:(id)arg1 ;
-(void)_UIAppearance_setBadgeTextAttributes:(id)arg1 forState:(unsigned long long)arg2 ;
-(id)_unselectedTintColor;
-(void)_setupSymbolConfigurationsForIdiom:(long long)arg1 ;
-(void)_setupCarplayConstraints;
-(void)_updateVibrancyEffectView;
-(id)_selectedIndicatorImage;
-(void)_updateSelectedIndicatorView;
-(BOOL)iconShouldUseVibrancyForState:(long long)arg1 ;
-(id)iconColorForState:(long long)arg1 ;
-(BOOL)isDefaultColor:(id)arg1 forState:(long long)arg2 ;
-(long long)defaultCompositingModeForState:(long long)arg1 ;
-(double)defaultAlphaForState:(long long)arg1 ;
-(id)_buttonTintColorForState:(unsigned long long)arg1 ;
-(UIView *)focusView;
-(void)_updateBadgeAppearanceAndLayoutNow:(BOOL)arg1 ;
-(UIOffset)badgePositionAdjustmentForState:(long long)arg1 ;
-(void)_positionBadge;
-(void)_positionBadgeAfterChangesIfNecessary:(/*^block*/id)arg1 ;
-(id)badgeBackgroundColorForState:(long long)arg1 ;
-(UIOffset)badgeTitlePositionAdjustmentForState:(long long)arg1 ;
-(void)_removeCarplayConstraints;
-(void)setCarplayConstraints:(NSArray *)arg1 ;
-(NSArray *)carplayConstraints;
-(void)_updateSelectedIndicatorFrame;
-(CGSize)_horizontalLayout_sizeThatFits:(CGSize)arg1 ;
-(void)_appleTV_layoutSubviews;
-(void)_ios_layoutSubviews;
-(BOOL)labelShouldUseVibrancyForState:(long long)arg1 ;
-(CGRect)_responderSelectionRect;
-(id)_selectedIndicatorView;
-(id)initWithImage:(id)arg1 selectedImage:(id)arg2 label:(id)arg3 withInsets:(UIEdgeInsets)arg4 tabBar:(id)arg5 ;
-(CGRect)_tabBarHitRect;
-(CGSize)_appleTV_sizeThatFits:(CGSize)arg1 ;
-(void)_sendFocusAction;
-(CGRect)_defaultFocusRegionFrame;
-(CGRect)_responderSelectionRectForWindow:(id)arg1 ;
-(long long)_focusTouchSensitivityStyle;
-(void)_setButtonTintColor:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)set_info:(id)arg1 ;
-(UIVibrancyEffect *)itemVibrantEffect;
@end

