/*
* Generated on Thursday, January 14, 2021 at 2:20:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@protocol _UIFloatingContentViewDelegate;
@class _UIFloatingContentTransformView, _UIFloatingContentCornerRadiusAnimatingScreenScaleInheritingView, _UIFloatingContentCornerRadiusAnimatingView, UIView, NSMutableArray, _UIFocusAnimationConfiguration, UIImage, NSString;

@interface _UIFloatingContentView : UIView {

	id<_UIFloatingContentViewDelegate> _floatingContentViewDelegate;
	_UIFloatingContentTransformView* _transformView;
	_UIFloatingContentCornerRadiusAnimatingScreenScaleInheritingView* _containerView;
	_UIFloatingContentCornerRadiusAnimatingView* _highlightView;
	_UIFloatingContentCornerRadiusAnimatingView* _visualEffectContainerView;
	UIView* _shadowView;
	UIView* _contentView;
	UIView* _highContrastFocusIndicatorView;
	CFDictionaryRef _backgroundColorsByState;
	NSMutableArray* _contentMotionEffects;
	double _shadowOpacityLight;
	double _shadowOpacityDark;
	CGPoint _focusDirection;
	CGPoint _contentRotation;
	CGPoint _contentTranslation;
	BOOL _customScale;
	BOOL _symmetricScale;
	BOOL _stretchableShadowImage;
	BOOL _useShadowImage;
	BOOL _shadowEnabled;
	BOOL _contentOpaque;
	BOOL _scalesBackwards;
	BOOL _roundContentWhenDeselected;
	BOOL __disableOutsetShadowPath;
	BOOL _showsHighContrastFocusIndicator;
	double _cornerRadius;
	double _visualEffectContainerViewScaleFactor;
	_UIFocusAnimationConfiguration* _focusAnimationConfiguration;
	double _shadowRadius;
	double _shadowVerticalOffset;
	double _unfocusedShadowRadius;
	double _unfocusedShadowOpacity;
	double _unfocusedShadowVerticalOffset;
	UIImage* _shadowImage;
	unsigned long long _controlState;
	long long _highlightStyle;
	NSString* _cornerCurve;
	/*^block*/id _focusAnimationConfigurationHandler;
	CGPoint _focusScaleAnchorPoint;
	CGSize _shadowSize;
	CGSize _unfocusedShadowExpansion;
	CGSize _shadowExpansion;
	CGSize _asymmetricScaleFactor;
	CGSize _asymmetricFocusedSizeIncrease;
	CGRect _shadowContentsCenter;

}

@property (assign,nonatomic) BOOL scalesBackwards;                                                           //@synthesize scalesBackwards=_scalesBackwards - In the implementation block
@property (assign,nonatomic) BOOL roundContentWhenDeselected;                                                //@synthesize roundContentWhenDeselected=_roundContentWhenDeselected - In the implementation block
@property (assign,nonatomic) CGSize asymmetricScaleFactor;                                                   //@synthesize asymmetricScaleFactor=_asymmetricScaleFactor - In the implementation block
@property (assign,nonatomic) CGSize asymmetricFocusedSizeIncrease;                                           //@synthesize asymmetricFocusedSizeIncrease=_asymmetricFocusedSizeIncrease - In the implementation block
@property (assign,nonatomic) BOOL _disableOutsetShadowPath;                                                  //@synthesize _disableOutsetShadowPath=__disableOutsetShadowPath - In the implementation block
@property (assign,nonatomic) BOOL showsHighContrastFocusIndicator;                                           //@synthesize showsHighContrastFocusIndicator=_showsHighContrastFocusIndicator - In the implementation block
@property (assign,nonatomic) NSString * cornerCurve;                                                         //@synthesize cornerCurve=_cornerCurve - In the implementation block
@property (nonatomic,copy) id focusAnimationConfigurationHandler;                                            //@synthesize focusAnimationConfigurationHandler=_focusAnimationConfigurationHandler - In the implementation block
@property (assign,nonatomic,__weak) id<_UIFloatingContentViewDelegate> floatingContentDelegate; 
@property (nonatomic,readonly) UIView * contentView; 
@property (nonatomic,readonly) UIView * visualEffectContainerView; 
@property (assign,nonatomic) double cornerRadius;                                                            //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (assign,getter=isContinuousCornerEnabled,nonatomic) BOOL continuousCornerEnabled; 
@property (assign,nonatomic) double scaleFactor; 
@property (assign,nonatomic) double focusedSizeIncrease; 
@property (assign,nonatomic) CGPoint focusScaleAnchorPoint;                                                  //@synthesize focusScaleAnchorPoint=_focusScaleAnchorPoint - In the implementation block
@property (assign,nonatomic) double visualEffectContainerViewScaleFactor;                                    //@synthesize visualEffectContainerViewScaleFactor=_visualEffectContainerViewScaleFactor - In the implementation block
@property (nonatomic,copy) _UIFocusAnimationConfiguration * focusAnimationConfiguration;                     //@synthesize focusAnimationConfiguration=_focusAnimationConfiguration - In the implementation block
@property (assign,nonatomic) BOOL useShadowImage;                                                            //@synthesize useShadowImage=_useShadowImage - In the implementation block
@property (assign,getter=isShadowEnabled,nonatomic) BOOL shadowEnabled;                                      //@synthesize shadowEnabled=_shadowEnabled - In the implementation block
@property (assign,nonatomic) CGSize shadowSize;                                                              //@synthesize shadowSize=_shadowSize - In the implementation block
@property (assign,nonatomic) double shadowRadius;                                                            //@synthesize shadowRadius=_shadowRadius - In the implementation block
@property (assign,nonatomic) double shadowOpacity; 
@property (assign,nonatomic) double shadowVerticalOffset;                                                    //@synthesize shadowVerticalOffset=_shadowVerticalOffset - In the implementation block
@property (assign,nonatomic) double unfocusedShadowRadius;                                                   //@synthesize unfocusedShadowRadius=_unfocusedShadowRadius - In the implementation block
@property (assign,nonatomic) double unfocusedShadowOpacity;                                                  //@synthesize unfocusedShadowOpacity=_unfocusedShadowOpacity - In the implementation block
@property (assign,nonatomic) double unfocusedShadowVerticalOffset;                                           //@synthesize unfocusedShadowVerticalOffset=_unfocusedShadowVerticalOffset - In the implementation block
@property (assign,nonatomic) CGSize unfocusedShadowExpansion;                                                //@synthesize unfocusedShadowExpansion=_unfocusedShadowExpansion - In the implementation block
@property (assign,nonatomic) CGSize shadowExpansion;                                                         //@synthesize shadowExpansion=_shadowExpansion - In the implementation block
@property (nonatomic,retain) UIImage * shadowImage;                                                          //@synthesize shadowImage=_shadowImage - In the implementation block
@property (assign,nonatomic) CGRect shadowContentsCenter;                                                    //@synthesize shadowContentsCenter=_shadowContentsCenter - In the implementation block
@property (assign,nonatomic) unsigned long long controlState;                                                //@synthesize controlState=_controlState - In the implementation block
@property (assign,nonatomic) BOOL clipsContentToBounds; 
@property (assign,nonatomic) long long highlightStyle;                                                       //@synthesize highlightStyle=_highlightStyle - In the implementation block
@property (assign,getter=isContentOpaque,nonatomic) BOOL contentOpaque;                                      //@synthesize contentOpaque=_contentOpaque - In the implementation block
+(id)_defaultFocusAnimationConfiguration;
-(void)setScaleFactor:(double)arg1 ;
-(double)scaleFactor;
-(double)shadowRadius;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIImage *)shadowImage;
-(void)_updateHighContrastFocusIndicatorForPrimaryState:(unsigned long long)arg1 ;
-(double)shadowOpacity;
-(id)highlightView;
-(void)setShadowImage:(UIImage *)arg1 ;
-(void)setShadowRadius:(double)arg1 ;
-(BOOL)_applyKeyPathsAndRelativeValues:(id)arg1 forMotionEffect:(id)arg2 ;
-(void)setShadowOpacity:(double)arg1 ;
-(void)_updateScaleFactor;
-(void)setControlState:(unsigned long long)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)setVisualEffectContainerViewScaleFactor:(double)arg1 ;
-(BOOL)_shouldApplyCornerRadiusForPrimaryState:(unsigned long long)arg1 ;
-(void)_setControlState:(unsigned long long)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)_updateShadowContentsScaleForPrimaryState:(unsigned long long)arg1 ;
-(void)_updateContainerLayerQualityForPrimaryState:(unsigned long long)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(double)cornerRadius;
-(BOOL)_shouldAppearToFloatForPrimaryState:(unsigned long long)arg1 ;
-(void)_updateHighlightViewForPrimaryState:(unsigned long long)arg1 ;
-(void)_updateShadowOpacityForPrimaryState:(unsigned long long)arg1 ;
-(void)setShadowOpacity:(double)arg1 forUserInterfaceStyle:(long long)arg2 ;
-(double)visualEffectContainerViewScaleFactor;
-(void)layoutSubviews;
-(void)setFocusAnimationConfigurationHandler:(id)arg1 ;
-(CGSize)shadowSize;
-(void)setFrame:(CGRect)arg1 ;
-(double)shadowOpacityForUserInterfaceStyle:(long long)arg1 ;
-(void)setShowsHighContrastFocusIndicator:(BOOL)arg1 ;
-(id)focusAnimationConfigurationHandler;
-(void)_updateTransformForPrimaryState:(unsigned long long)arg1 ;
-(void)_updateHighContrastFocusIndicatorView;
-(NSString *)cornerCurve;
-(void)setContentMotionRotation:(CGPoint)arg1 translation:(CGPoint)arg2 ;
-(unsigned long long)controlState;
-(void)setUnfocusedShadowVerticalOffset:(double)arg1 ;
-(void)_layoutHighContrastFocusIndicator;
-(void)setAsymmetricFocusedSizeIncrease:(CGSize)arg1 ;
-(CGSize)asymmetricFocusedSizeIncrease;
-(double)unfocusedShadowVerticalOffset;
-(void)setRoundContentWhenDeselected:(BOOL)arg1 ;
-(void)setFocusAnimationConfiguration:(_UIFocusAnimationConfiguration *)arg1 ;
-(void)_uninstallContentMotionEffects;
-(BOOL)showsHighContrastFocusIndicator;
-(void)_layoutShadow;
-(id)transformView;
-(void)setCornerCurve:(NSString *)arg1 ;
-(void)setShadowVerticalOffset:(double)arg1 ;
-(BOOL)useShadowImage;
-(void)setShadowSize:(CGSize)arg1 ;
-(long long)highlightStyle;
-(_UIFocusAnimationConfiguration *)focusAnimationConfiguration;
-(BOOL)isShadowEnabled;
-(CGSize)shadowExpansion;
-(BOOL)isContentOpaque;
-(void)setShadowImage:(id)arg1 stretchable:(BOOL)arg2 ;
-(BOOL)scalesBackwards;
-(void)setFloatingContentDelegate:(id<_UIFloatingContentViewDelegate>)arg1 ;
-(void)setControlState:(unsigned long long)arg1 ;
-(void)setContinuousCornerEnabled:(BOOL)arg1 ;
-(void)setCornerRadius:(double)arg1 ;
-(UIView *)contentView;
-(id)_preferredConfigurationForFocusAnimation:(long long)arg1 inContext:(id)arg2 ;
-(void)setBackgroundColor:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)setUnfocusedShadowExpansion:(CGSize)arg1 ;
-(void)_installContentMotionEffects;
-(void)set_disableOutsetShadowPath:(BOOL)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setShadowExpansion:(CGSize)arg1 ;
-(void)setUnfocusedShadowOpacity:(double)arg1 ;
-(CGPathRef)_shadowPathForSize:(CGSize)arg1 radius:(double)arg2 ;
-(void)removeContentMotionEffect:(id)arg1 ;
-(void)setControlState:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(double)unfocusedShadowRadius;
-(void)setScalesBackwards:(BOOL)arg1 ;
-(BOOL)clipsContentToBounds;
-(void)setFocusScaleAnchorPoint:(CGPoint)arg1 ;
-(double)_currentShadowOpacity;
-(void)setUnfocusedShadowRadius:(double)arg1 ;
-(BOOL)roundContentWhenDeselected;
-(CGPoint)focusScaleAnchorPoint;
-(double)shadowVerticalOffset;
-(void)_updateCornerRadiusLayers;
-(void)setHighlightStyle:(long long)arg1 ;
-(CGSize)asymmetricScaleFactor;
-(void)setShadowEnabled:(BOOL)arg1 ;
-(void)setContentOpaque:(BOOL)arg1 ;
-(BOOL)isContinuousCornerEnabled;
-(void)_setShadowImageIfNeeded;
-(CGSize)unfocusedShadowExpansion;
-(BOOL)_disableOutsetShadowPath;
-(void)dealloc;
-(id<_UIFloatingContentViewDelegate>)floatingContentDelegate;
-(double)_effectiveShadowOpacity;
-(void)setAsymmetricScaleFactor:(CGSize)arg1 ;
-(void)setUseShadowImage:(BOOL)arg1 ;
-(id)backgroundColorForState:(unsigned long long)arg1 ;
-(void)setClipsContentToBounds:(BOOL)arg1 ;
-(void)_updateShadowLayer;
-(void)setShadowContentsCenter:(CGRect)arg1 ;
-(void)setFocusedSizeIncrease:(double)arg1 ;
-(CGRect)shadowContentsCenter;
-(unsigned long long)_primaryStateForState:(unsigned long long)arg1 ;
-(void)addContentMotionEffect:(id)arg1 ;
-(double)_effectiveShadowRadius;
-(double)unfocusedShadowOpacity;
-(double)focusedSizeIncrease;
-(UIView *)visualEffectContainerView;
@end

