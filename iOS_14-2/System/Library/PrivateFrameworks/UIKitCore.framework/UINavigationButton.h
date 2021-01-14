/*
* Generated on Thursday, January 14, 2021 at 2:20:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIButton.h>

@class NSSet, UIColor, _UIBarButtonItemAppearanceStorage, UIBarButtonItem, UINavigationItem, NSDictionary, UIView, NSString, UIImage;

@interface UINavigationButton : UIButton {

	NSSet* _possibleTitles;
	int _style;
	long long _barStyle;
	UIColor* _navigationBarTintColor;
	CGSize _boundsAdjustment;
	_UIBarButtonItemAppearanceStorage* _appearanceStorage;
	NSSet* _possibleSystemItems;
	unsigned _size : 2;
	unsigned _wantsLetterpressContent : 1;
	UIBarButtonItem* _originatingButtonItem;
	UINavigationItem* _originatingNavigationItem;
	BOOL _createdByBarButtonItem;
	BOOL _isFontScaleInvalid;
	BOOL _wantsBlendModeForAccessibilityBackgrounds;
	BOOL __barItemHidden;
	long long _buttonItemStyle;
	NSDictionary* _stylesForSizingTitles;
	double _fontScaleAdjustment;
	UIColor* _accessibilityBackgroundTintColor;
	Class _appearanceGuideClass;
	UIView* __enclosingBar;
	double _minimumWidth;
	double _maximumWidth;
	UIEdgeInsets __additionalSelectionInsets;

}

@property (assign,setter=_setEnclosingBar:,nonatomic,__weak) UIView * _enclosingBar;                                                             //@synthesize _enclosingBar=__enclosingBar - In the implementation block
@property (assign,nonatomic) double minimumWidth;                                                                                                //@synthesize minimumWidth=_minimumWidth - In the implementation block
@property (assign,nonatomic) double maximumWidth;                                                                                                //@synthesize maximumWidth=_maximumWidth - In the implementation block
@property (assign,nonatomic,__weak) UINavigationItem * originatingNavigationItem;                                                                //@synthesize originatingNavigationItem=_originatingNavigationItem - In the implementation block
@property (assign,nonatomic,__weak) UIBarButtonItem * originatingButtonItem;                                                                     //@synthesize originatingButtonItem=_originatingButtonItem - In the implementation block
@property (setter=_setAppearanceGuideClass:,nonatomic,retain) Class _appearanceGuideClass;                                                       //@synthesize appearanceGuideClass=_appearanceGuideClass - In the implementation block
@property (assign,setter=_setButtonItemStyle:,nonatomic) long long _buttonItemStyle;                                                             //@synthesize buttonItemStyle=_buttonItemStyle - In the implementation block
@property (setter=_setStylesForSizingTitles:,nonatomic,copy) NSDictionary * _stylesForSizingTitles;                                              //@synthesize stylesForSizingTitles=_stylesForSizingTitles - In the implementation block
@property (assign,setter=_setFontScaleAdjustment:,nonatomic) double _fontScaleAdjustment;                                                        //@synthesize fontScaleAdjustment=_fontScaleAdjustment - In the implementation block
@property (assign,setter=_setFontScaleInvalid:,nonatomic) BOOL _isFontScaleInvalid;                                                              //@synthesize isFontScaleInvalid=_isFontScaleInvalid - In the implementation block
@property (assign,setter=_setWantsBlendModeForAccessibilityBackgrounds:,nonatomic) BOOL _wantsBlendModeForAccessibilityBackgrounds;              //@synthesize wantsBlendModeForAccessibilityBackgrounds=_wantsBlendModeForAccessibilityBackgrounds - In the implementation block
@property (assign,setter=_setBarItemHidden:,nonatomic) BOOL _barItemHidden;                                                                      //@synthesize _barItemHidden=__barItemHidden - In the implementation block
@property (setter=_setAccessibilityBackgroundTintColor:,nonatomic,retain) UIColor * _accessibilityBackgroundTintColor;                           //@synthesize accessibilityBackgroundTintColor=_accessibilityBackgroundTintColor - In the implementation block
@property (setter=_setTintColor:,nonatomic,retain) UIColor * _tintColor; 
@property (assign,setter=_setAdditionalSelectionInsets:,nonatomic) UIEdgeInsets _additionalSelectionInsets;                                      //@synthesize _additionalSelectionInsets=__additionalSelectionInsets - In the implementation block
@property (assign,setter=_setCreatedByBarButtonItem:,nonatomic) BOOL _createdByBarButtonItem;                                                    //@synthesize createdByBarButtonItem=_createdByBarButtonItem - In the implementation block
@property (nonatomic,retain) NSString * title; 
@property (nonatomic,retain) UIImage * image; 
@property (assign,nonatomic) long long barStyle;                                                                                                 //@synthesize barStyle=_barStyle - In the implementation block
@property (assign,nonatomic) int style;                                                                                                          //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) int controlSize; 
@property (nonatomic,retain) UIColor * tintColor; 
+(BOOL)_cursorInteractionEnabled;
+(id)defaultFont;
+(void)_resetRenderingModesForBackgroundImageView:(id)arg1 inBarStyle:(long long)arg2 isEnabled:(BOOL)arg3 withAccessibilityBackground:(BOOL)arg4 wantsBlendModeForAccessibilityBackgrounds:(BOOL)arg5 accessibilityBackgroundTintColor:(id)arg6 ;
-(void)_updateContentInsets;
-(CGRect)_selectedIndicatorBounds;
-(BOOL)canBecomeFocused;
-(BOOL)_isModernButton;
-(void)_setBackButtonTitlePositionAdjustment:(UIOffset)arg1 forBarMetrics:(long long)arg2 ;
-(void)_setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3 ;
-(void)_setBackButtonBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2 ;
-(UIView *)_enclosingBar;
-(id)_backgroundImageForState:(unsigned long long)arg1 barMetrics:(long long)arg2 ;
-(void)_UIAppearance_setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3 ;
-(void)_setAppearanceGuideClass:(Class)arg1 ;
-(void)setControlSize:(int)arg1 ;
-(id)initWithImage:(id)arg1 width:(double)arg2 style:(int)arg3 applyBezel:(BOOL)arg4 forBarStyle:(long long)arg5 buttonItemStyle:(long long)arg6 ;
-(void)_setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 style:(long long)arg3 barMetrics:(long long)arg4 ;
-(void)_UIAppearance_setTintColor:(id)arg1 ;
-(void)setOriginatingButtonItem:(UIBarButtonItem *)arg1 ;
-(void)_UIAppearance_setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 style:(long long)arg3 barMetrics:(long long)arg4 ;
-(void)_UIAppearance_setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)_setStylesForSizingTitles:(id)arg1 ;
-(id)initWithTitle:(id)arg1 ;
-(void)_setBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2 ;
-(void)_setBarItemHidden:(BOOL)arg1 ;
-(double)maximumWidth;
-(BOOL)_wantsAccessibilityButtonShapes;
-(void)_accessibilityButtonShapesDidChangeNotification:(id)arg1 ;
-(void)_setAdditionalSelectionInsets:(UIEdgeInsets)arg1 ;
-(void)_UIAppearance_setBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2 ;
-(void)_setButtonItemStyle:(long long)arg1 ;
-(void)_updateStyle;
-(void)_didChangeFromIdiom:(long long)arg1 onScreen:(id)arg2 traverseHierarchy:(BOOL)arg3 ;
-(id)initWithImage:(id)arg1 width:(double)arg2 style:(int)arg3 ;
-(void)_setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2 ;
-(BOOL)_barItemHidden;
-(id)_defaultTitleShadowColorForState:(unsigned long long)arg1 ;
-(UIOffset)_titlePositionAdjustmentForBarMetrics:(long long)arg1 ;
-(BOOL)_wantsBlendModeForAccessibilityBackgrounds;
-(void)_setTintColor:(id)arg1 ;
-(UIEdgeInsets)_additionalSelectionInsets;
-(void)_UIAppearance_setTitlePositionAdjustment:(UIOffset)arg1 forBarMetrics:(long long)arg2 ;
-(id)_adjustedDefaultTitleFont;
-(void)_setGroupName:(id)arg1 forNavigationBar:(id)arg2 ;
-(double)_backgroundVerticalPositionAdjustmentForBarMetrics:(long long)arg1 ;
-(id)initWithValue:(id)arg1 width:(double)arg2 style:(int)arg3 barStyle:(long long)arg4 possibleTitles:(id)arg5 possibleSystemItems:(id)arg6 tintColor:(id)arg7 applyBezel:(BOOL)arg8 forButtonItemStyle:(long long)arg9 ;
-(double)minimumWidth;
-(BOOL)_showsAccessibilityBackgroundWhenEnabled;
-(BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
-(id)_externalTitleColorForState:(unsigned long long)arg1 isTintColor:(BOOL*)arg2 ;
-(void)_setWantsBlendModeForAccessibilityBackgrounds:(BOOL)arg1 ;
-(void)_UIAppearance_setBackButtonBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3 ;
-(void)_accessibilityButtonShapesParametersDidChange;
-(id)cursorInteraction:(id)arg1 regionForLocation:(CGPoint)arg2 defaultRegion:(id)arg3 ;
-(void)_setTitleFrozen:(BOOL)arg1 ;
-(id)_appearanceStorage;
-(BOOL)_isCarPlaySystemTypeButton;
-(id)cursorInteraction:(id)arg1 styleForRegion:(id)arg2 modifiers:(long long)arg3 ;
-(id)initWithTitle:(id)arg1 possibleTitles:(id)arg2 style:(int)arg3 ;
-(void)_setBackButtonBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3 ;
-(void)_setAccessibilityBackgroundTintColor:(id)arg1 ;
-(void)_setEnclosingBar:(id)arg1 ;
-(void)setBarStyle:(long long)arg1 ;
-(UIEdgeInsets)_buttonTitleEdgeInsets;
-(CGSize)_intrinsicSizeWithinSize:(CGSize)arg1 ;
-(void)setMinimumWidth:(double)arg1 ;
-(void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2 ;
-(BOOL)_isExternalRoundedRectButton;
-(BOOL)_supportsMacIdiom;
-(id)_titleTextAttributesForState:(unsigned long long)arg1 ;
-(id)_visualStyleForMetrics:(long long)arg1 ;
-(UIEdgeInsets)_pathTitleEdgeInsets;
-(int)controlSize;
-(void)_updateTitleColorsForState:(unsigned long long)arg1 ;
-(void)_setTitlePositionAdjustment:(UIOffset)arg1 forBarMetrics:(long long)arg2 ;
-(void)_setFontScaleAdjustment:(double)arg1 ;
-(Class)_appearanceGuideClass;
-(CGSize)_defaultTitleShadowOffsetForState:(unsigned long long)arg1 ;
-(UIBarButtonItem *)originatingButtonItem;
-(void)setMaximumWidth:(double)arg1 ;
-(void)_setCreatedByBarButtonItem:(BOOL)arg1 ;
-(void)_UIAppearance_setBackButtonTitlePositionAdjustment:(UIOffset)arg1 forBarMetrics:(long long)arg2 ;
-(UIColor *)_accessibilityBackgroundTintColor;
-(void)_UIAppearance_setBackButtonBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2 ;
-(id)initWithValue:(id)arg1 width:(double)arg2 style:(int)arg3 barStyle:(long long)arg4 possibleTitles:(id)arg5 tintColor:(id)arg6 ;
-(long long)barStyle;
-(id)_activeVisualStyle;
-(BOOL)_canHandleStatusBarTouchAtLocation:(CGPoint)arg1 ;
-(UIEdgeInsets)_pathImageEdgeInsets;
-(void)_setFontScaleInvalid:(BOOL)arg1 ;
-(void)_applyBarButtonAppearanceStorage:(id)arg1 withTaggedSelectors:(id)arg2 ;
-(void)setImage:(UIImage *)arg1 ;
-(id)initWithImage:(id)arg1 ;
-(UIColor *)_tintColor;
-(id)_customOrAccessibilityBackgroundImageForState:(unsigned long long)arg1 style:(long long)arg2 isMini:(BOOL)arg3 ;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)_adjustBounds;
-(id)_externalUnfocusedBorderColor;
-(double)_fontScaleAdjustment;
-(NSDictionary *)_stylesForSizingTitles;
-(void)_setWantsLetterpressContent;
-(UIImage *)image;
-(void)_setFrame:(CGRect)arg1 deferLayout:(BOOL)arg2 ;
-(long long)_activeBarMetrics;
-(void)_updateTitleForLetterpress;
-(id)initWithImage:(id)arg1 style:(int)arg2 ;
-(void)layoutSubviews;
-(void)setNavigationBarTintColor:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)_uinavigationbar_prepareToAppearInNavigationItem:(id)arg1 onLeft:(BOOL)arg2 ;
-(long long)_barButtonItemStyle;
-(void)_setBoundsAdjustment:(CGSize)arg1 ;
-(id)initWithTitle:(id)arg1 style:(int)arg2 ;
-(BOOL)contentsEqualTo:(id)arg1 withStyle:(int)arg2 ;
-(BOOL)_isFontScaleInvalid;
-(UINavigationItem *)originatingNavigationItem;
-(BOOL)_createdByBarButtonItem;
-(void)setOriginatingNavigationItem:(UINavigationItem *)arg1 ;
-(void)setStyle:(int)arg1 ;
-(BOOL)_hasBaselineAlignedAbsoluteVerticalPosition:(out double*)arg1 withinNavBar:(id)arg2 forSize:(CGSize)arg3 ;
-(void)_sendSetNeedsLayoutToSuperviewOnTitleAnimationCompletionIfNecessary;
-(void)_updateShadowOffsetWithAttributes:(id)arg1 forState:(unsigned long long)arg2 ;
-(long long)buttonType;
-(long long)_buttonItemStyle;
-(int)style;
-(id)_defaultTitleColorForState:(unsigned long long)arg1 isTintColor:(BOOL*)arg2 ;
-(NSString *)title;
-(void)dealloc;
-(void)setHighlighted:(BOOL)arg1 ;
@end

