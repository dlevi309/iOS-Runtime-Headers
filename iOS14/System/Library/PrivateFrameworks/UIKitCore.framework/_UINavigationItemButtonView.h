/*
* Generated on Thursday, January 14, 2021 at 2:20:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UINavigationItemView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class _UIBarButtonItemAppearanceStorage, UIImageView, UIColor, NSString;

@interface _UINavigationItemButtonView : _UINavigationItemView <UIGestureRecognizerDelegate> {

	long long _style;
	BOOL _pressed;
	_UIBarButtonItemAppearanceStorage* _appearanceStorage;
	BOOL _customBackgroundImageChangedToOrFromNil;
	UIImageView* _backgroundImageView;
	UIImageView* _imageView;
	BOOL _wantsBlendModeForAccessibilityBackgrounds;
	unsigned long long _abbreviatedTitleIndex;
	UIColor* _accessibilityBackgroundTintColor;

}

@property (assign,setter=_setAbbreviatedTitleIndex:,nonatomic) unsigned long long _abbreviatedTitleIndex;                                        //@synthesize abbreviatedTitleIndex=_abbreviatedTitleIndex - In the implementation block
@property (assign,setter=_setWantsBlendModeForAccessibilityBackgrounds:,nonatomic) BOOL _wantsBlendModeForAccessibilityBackgrounds;              //@synthesize wantsBlendModeForAccessibilityBackgrounds=_wantsBlendModeForAccessibilityBackgrounds - In the implementation block
@property (setter=_setAccessibilityBackgroundTintColor:,nonatomic,retain) UIColor * _accessibilityBackgroundTintColor;                           //@synthesize accessibilityBackgroundTintColor=_accessibilityBackgroundTintColor - In the implementation block
@property (setter=_setTintColor:,nonatomic,retain) UIColor * _tintColor; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)canBecomeFocused;
-(void)_setBackButtonTitlePositionAdjustment:(UIOffset)arg1 forBarMetrics:(long long)arg2 ;
-(id)backgroundImageView;
-(void)_setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3 ;
-(void)_setBackButtonBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2 ;
-(void)_UIAppearance_setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3 ;
-(void)_setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 style:(long long)arg3 barMetrics:(long long)arg4 ;
-(void)_UIAppearance_setTintColor:(id)arg1 ;
-(void)_UIAppearance_setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 style:(long long)arg3 barMetrics:(long long)arg4 ;
-(void)_UIAppearance_setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2 ;
-(CGSize)imageSize;
-(void)_setBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2 ;
-(BOOL)_wantsAccessibilityButtonShapes;
-(void)_accessibilityButtonShapesDidChangeNotification:(id)arg1 ;
-(void)_UIAppearance_setBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2 ;
-(UIOffset)_backButtonTitlePositionAdjustmentForBarMetrics:(long long)arg1 ;
-(void)_didChangeFromIdiom:(long long)arg1 onScreen:(id)arg2 traverseHierarchy:(BOOL)arg3 ;
-(id)_currentCustomBackgroundNeedsDarkening:(BOOL*)arg1 ;
-(void)_setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2 ;
-(BOOL)_wantsBlendModeForAccessibilityBackgrounds;
-(void)_setTintColor:(id)arg1 ;
-(void)_UIAppearance_setTitlePositionAdjustment:(UIOffset)arg1 forBarMetrics:(long long)arg2 ;
-(double)_backgroundVerticalPositionAdjustmentForBarMetrics:(long long)arg1 ;
-(BOOL)_showsAccessibilityBackgroundWhenEnabled;
-(void)_setWantsBlendModeForAccessibilityBackgrounds:(BOOL)arg1 ;
-(void)_UIAppearance_setBackButtonBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3 ;
-(void)_accessibilityButtonShapesParametersDidChange;
-(id)_appearanceStorage;
-(BOOL)pressed;
-(void)_setBackButtonBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3 ;
-(void)_setAccessibilityBackgroundTintColor:(id)arg1 ;
-(void)setPressed:(BOOL)arg1 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)setStyle:(long long)arg1 animated:(BOOL)arg2 ;
-(double)_titleYAdjustmentCustomization;
-(id)_titleTextAttributesForState:(unsigned long long)arg1 ;
-(id)_backButtonBackgroundImageForState:(unsigned long long)arg1 barMetrics:(long long)arg2 ;
-(void)tintColorDidChange;
-(void)_setTitlePositionAdjustment:(UIOffset)arg1 forBarMetrics:(long long)arg2 ;
-(Class)_appearanceGuideClass;
-(void)_UIAppearance_setBackButtonTitlePositionAdjustment:(UIOffset)arg1 forBarMetrics:(long long)arg2 ;
-(UIColor *)_accessibilityBackgroundTintColor;
-(void)_UIAppearance_setBackButtonBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2 ;
-(void)_applyBarButtonAppearanceStorage:(id)arg1 withTaggedSelectors:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)_currentTextShadowColorForBarStyle:(long long)arg1 ;
-(id)_defaultFont;
-(UIColor *)_tintColor;
-(UIEdgeInsets)alignmentRectInsets;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)_suppressesBackIndicatorView;
-(void)setPressed:(BOOL)arg1 initialPress:(BOOL)arg2 ;
-(id)image;
-(double)_backButtonBackgroundVerticalPositionAdjustmentForBarMetrics:(long long)arg1 ;
-(void)layoutSubviews;
-(void)didMoveToWindow;
-(void)_updateBackSelectGestureRecognizer;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)_installBackSelectGestureRecognizer;
-(unsigned long long)_abbreviatedTitleIndex;
-(void)_setAbbreviatedTitleIndex:(unsigned long long)arg1 ;
-(BOOL)customBackgroundImageChangedToOrFromNil;
-(void)_uninstallBackSelectGestureRecognizer;
-(CGSize)_currentTextShadowOffsetForBarStyle:(long long)arg1 ;
-(void)_resetRenderingModesForAccessibilityBackgrounds;
-(BOOL)hasCustomBackgroundImage;
-(void)backIndicatorViewHasRespondedToCustomBackgroundImageChange;
-(void)setStyle:(long long)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(id)_currentTextColorForBarStyle:(long long)arg1 ;
-(BOOL)_useSilverLookForBarStyle:(long long)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)initWithNavigationItem:(id)arg1 ;
-(id)title;
-(void)dealloc;
-(void)_backSelectGestureChanged:(id)arg1 ;
@end

