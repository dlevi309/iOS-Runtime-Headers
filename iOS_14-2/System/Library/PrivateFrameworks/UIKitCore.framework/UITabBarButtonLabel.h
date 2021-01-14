/*
* Generated on Thursday, January 14, 2021 at 2:20:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UILabel.h>

@class _UITabBarItemAppearanceStorage, UIColor, UITabBarButton;

@interface UITabBarButtonLabel : UILabel {

	double _boundsWidth;
	_UITabBarItemAppearanceStorage* _appearanceStorage;
	BOOL _isSelected;
	BOOL _isHighlighted;
	BOOL _hasSeenIdiom;
	Class _appearanceGuideClass;
	UIColor* _unselectedTintColor;
	UITabBarButton* _tabBarButton;

}

@property (setter=_setAppearanceGuideClass:,nonatomic,retain) Class _appearanceGuideClass;              //@synthesize appearanceGuideClass=_appearanceGuideClass - In the implementation block
@property (nonatomic,retain) UIColor * unselectedTintColor;                                             //@synthesize unselectedTintColor=_unselectedTintColor - In the implementation block
@property (assign,nonatomic,__weak) UITabBarButton * tabBarButton;                                      //@synthesize tabBarButton=_tabBarButton - In the implementation block
+(double)_fontPointSizeForIdiom:(long long)arg1 ;
-(void)_setAppearanceGuideClass:(Class)arg1 ;
-(void)_UIAppearance_setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)_didChangeFromIdiom:(long long)arg1 onScreen:(id)arg2 traverseHierarchy:(BOOL)arg3 ;
-(void)_setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)_setBadgeColor:(id)arg1 ;
-(id)_titleTextAttributesForState:(unsigned long long)arg1 ;
-(void)tintColorDidChange;
-(Class)_appearanceGuideClass;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_UIAppearance_setBadgeTextAttributes:(id)arg1 forState:(unsigned long long)arg2 ;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(long long)_idiomForFontGivenIdiom:(long long)arg1 ;
-(void)_setBadgeTextAttributes:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)_updateLabelsVibrancy;
-(void)_applyTabBarButtonAppearanceStorage:(id)arg1 withTaggedSelectors:(id)arg2 ;
-(UITabBarButton *)tabBarButton;
-(void)updateTextColorsForState;
-(void)setSelected:(BOOL)arg1 ;
-(void)_setTitlePositionAdjustment:(UIOffset)arg1 ;
-(void)_UIAppearance_setTitlePositionAdjustment:(UIOffset)arg1 ;
-(void)setUnselectedTintColor:(UIColor *)arg1 ;
-(void)_updateForFontChangeWithIdiom:(long long)arg1 ;
-(void)resizeToFitWidth:(double)arg1 ;
-(id)initWithTabBarDisplayStyle:(long long)arg1 ;
-(void)_UIAppearance_setBadgeColor:(id)arg1 ;
-(UIColor *)unselectedTintColor;
-(void)_legacyApperance_updateTextColorsForState;
-(id)_fontForIdiom:(long long)arg1 ;
-(id)_fontForIdiom:(long long)arg1 forTabBarDisplayStyle:(long long)arg2 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setTabBarButton:(UITabBarButton *)arg1 ;
-(BOOL)_shouldCeilSizeToViewScale;
-(void)setHighlighted:(BOOL)arg1 ;
@end

