/*
* Generated on Monday, March 1, 2021 at 2:30:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)title;
-(void)setStyle:(long long)arg1 ;
-(id)image;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(BOOL)canBecomeFocused;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)setPressed:(BOOL)arg1 ;
-(UIColor *)_tintColor;
-(BOOL)pressed;
-(UIEdgeInsets)alignmentRectInsets;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)tintColorDidChange;
-(void)didMoveToWindow;
-(void)_accessibilityButtonShapesDidChangeNotification:(id)arg1 ;
-(id)backgroundImageView;
-(BOOL)_wantsAccessibilityButtonShapes;
-(BOOL)_wantsBlendModeForAccessibilityBackgrounds;
-(UIColor *)_accessibilityBackgroundTintColor;
-(BOOL)_showsAccessibilityBackgroundWhenEnabled;
-(void)_setWantsBlendModeForAccessibilityBackgrounds:(BOOL)arg1 ;
-(void)_accessibilityButtonShapesParametersDidChange;
-(void)_didChangeFromIdiom:(long long)arg1 onScreen:(id)arg2 traverseHierarchy:(BOOL)arg3 ;
-(void)_setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 style:(long long)arg3 barMetrics:(long long)arg4 ;
-(void)_UIAppearance_setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 style:(long long)arg3 barMetrics:(long long)arg4 ;
-(void)_UIAppearance_setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3 ;
-(void)_UIAppearance_setTintColor:(id)arg1 ;
-(void)_UIAppearance_setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)_UIAppearance_setBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2 ;
-(void)_UIAppearance_setTitlePositionAdjustment:(UIOffset)arg1 forBarMetrics:(long long)arg2 ;
-(void)_setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)_setTintColor:(id)arg1 ;
-(void)_setTitlePositionAdjustment:(UIOffset)arg1 forBarMetrics:(long long)arg2 ;
-(void)_setBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2 ;
-(void)_setAccessibilityBackgroundTintColor:(id)arg1 ;
-(void)_setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3 ;
-(id)_titleTextAttributesForState:(unsigned long long)arg1 ;
-(void)_UIAppearance_setBackButtonBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3 ;
-(void)_setBackButtonBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3 ;
-(double)_backgroundVerticalPositionAdjustmentForBarMetrics:(long long)arg1 ;
-(void)_UIAppearance_setBackButtonTitlePositionAdjustment:(UIOffset)arg1 forBarMetrics:(long long)arg2 ;
-(void)_setBackButtonTitlePositionAdjustment:(UIOffset)arg1 forBarMetrics:(long long)arg2 ;
-(void)_UIAppearance_setBackButtonBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2 ;
-(void)_setBackButtonBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2 ;
-(void)_applyBarButtonAppearanceStorage:(id)arg1 withTaggedSelectors:(id)arg2 ;
-(id)_appearanceStorage;
-(Class)_appearanceGuideClass;
-(id)_backButtonBackgroundImageForState:(unsigned long long)arg1 barMetrics:(long long)arg2 ;
-(void)_setAbbreviatedTitleIndex:(unsigned long long)arg1 ;
-(unsigned long long)_abbreviatedTitleIndex;
-(id)initWithNavigationItem:(id)arg1 ;
-(BOOL)_suppressesBackIndicatorView;
-(BOOL)customBackgroundImageChangedToOrFromNil;
-(CGSize)imageSize;
-(id)_defaultFont;
-(BOOL)hasCustomBackgroundImage;
-(void)backIndicatorViewHasRespondedToCustomBackgroundImageChange;
-(void)setPressed:(BOOL)arg1 initialPress:(BOOL)arg2 ;
-(id)_currentTextColorForBarStyle:(long long)arg1 ;
-(CGSize)_currentTextShadowOffsetForBarStyle:(long long)arg1 ;
-(id)_currentTextShadowColorForBarStyle:(long long)arg1 ;
-(double)_titleYAdjustmentCustomization;
-(void)_resetRenderingModesForAccessibilityBackgrounds;
-(id)_currentCustomBackgroundNeedsDarkening:(BOOL*)arg1 ;
-(void)setStyle:(long long)arg1 animated:(BOOL)arg2 ;
-(double)_backButtonBackgroundVerticalPositionAdjustmentForBarMetrics:(long long)arg1 ;
-(void)_updateBackSelectGestureRecognizer;
-(void)_installBackSelectGestureRecognizer;
-(void)_uninstallBackSelectGestureRecognizer;
-(void)_backSelectGestureChanged:(id)arg1 ;
-(BOOL)_useSilverLookForBarStyle:(long long)arg1 ;
-(UIOffset)_backButtonTitlePositionAdjustmentForBarMetrics:(long long)arg1 ;
@end

