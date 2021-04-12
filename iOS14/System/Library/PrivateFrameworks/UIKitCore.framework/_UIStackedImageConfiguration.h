/*
* Generated on Thursday, January 14, 2021 at 2:20:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIImage, _UIFocusAnimationConfiguration;

@interface _UIStackedImageConfiguration : NSObject <NSCopying> {

	BOOL _overlayFixedFrame;
	BOOL _adjustMotionForSize;
	BOOL _flatImageContainsCornerRadius;
	BOOL _useSeparateUnfocusedShadowImage;
	BOOL _allowsNonOpaqueShadow;
	BOOL _boostBrightness;
	BOOL _hueShift;
	BOOL _disableMask;
	BOOL _focusCursorEnabled;
	BOOL _fullBleedCenteredGrowth;
	unsigned long long _maximumParallaxImages;
	double _maximumParallaxDepth;
	double _overlayDepth;
	double _zDepth;
	double _rotationAmount;
	double _scaleSizeIncrease;
	double _pressedScaleAdjustment;
	double _unmaskedOverlayScaleFactor;
	double _cornerRadius;
	double _continuousCornerRadiusEnabled;
	double _specularHighlightHorizontalPositionSensitivity;
	double _specularHighlightVerticalPosition;
	double _specularHighlightVerticalPositionSensitivity;
	double _specularOpacity;
	double _defaultFocusedShadowOpacity;
	double _defaultHighlightedShadowOpacity;
	double _defaultUnfocusedShadowOpacity;
	double _fullBleedFocusedShadowOpacity;
	double _fullBleedUnfocusedShadowOpacity;
	double _focusCursorShadowOpacityAdjustment;
	double _defaultFocusedShadowRadius;
	double _defaultHighlightedShadowRadius;
	double _defaultUnfocusedShadowRadius;
	double _fullBleedFocusedShadowRadius;
	double _fullBleedUnfocusedShadowRadius;
	double _defaultFocusedShadowVerticalOffset;
	double _defaultHighlightedShadowVerticalOffset;
	double _defaultUnfocusedShadowVerticalOffset;
	double _defaultSelectedShadowVerticalOffset;
	UIImage* _placeholderImage;
	double _focusCursorBorderWidth;
	double _radiosityOffset;
	double _radiosityStrength;
	double _shadowSelectionDuration;
	double _shadowUnselectionDuration;
	double _repositionUnselectionDuration;
	double _layerSelectionDuration;
	double _layerUnselectionDuration;
	double _minimumFocusDuration;
	double _pressedDuration;
	double _unpressedDuration;
	double _fullBleedOffset;
	CGPoint _translationOffset;

}

@property (assign,nonatomic) unsigned long long maximumParallaxImages;                                                 //@synthesize maximumParallaxImages=_maximumParallaxImages - In the implementation block
@property (assign,nonatomic) double maximumParallaxDepth;                                                              //@synthesize maximumParallaxDepth=_maximumParallaxDepth - In the implementation block
@property (assign,nonatomic) double overlayDepth;                                                                      //@synthesize overlayDepth=_overlayDepth - In the implementation block
@property (assign,nonatomic) BOOL overlayFixedFrame;                                                                   //@synthesize overlayFixedFrame=_overlayFixedFrame - In the implementation block
@property (assign,nonatomic) double zDepth;                                                                            //@synthesize zDepth=_zDepth - In the implementation block
@property (assign,nonatomic) BOOL adjustMotionForSize;                                                                 //@synthesize adjustMotionForSize=_adjustMotionForSize - In the implementation block
@property (assign,nonatomic) double rotationAmount;                                                                    //@synthesize rotationAmount=_rotationAmount - In the implementation block
@property (assign,nonatomic) double scaleSizeIncrease;                                                                 //@synthesize scaleSizeIncrease=_scaleSizeIncrease - In the implementation block
@property (assign,nonatomic) double pressedScaleAdjustment;                                                            //@synthesize pressedScaleAdjustment=_pressedScaleAdjustment - In the implementation block
@property (assign,nonatomic) CGPoint translationOffset;                                                                //@synthesize translationOffset=_translationOffset - In the implementation block
@property (assign,nonatomic) double unmaskedOverlayScaleFactor;                                                        //@synthesize unmaskedOverlayScaleFactor=_unmaskedOverlayScaleFactor - In the implementation block
@property (assign,nonatomic) double cornerRadius;                                                                      //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (assign,getter=isContinuousCornerRadiusEnabled,nonatomic) double continuousCornerRadiusEnabled;              //@synthesize continuousCornerRadiusEnabled=_continuousCornerRadiusEnabled - In the implementation block
@property (assign,nonatomic) BOOL flatImageContainsCornerRadius;                                                       //@synthesize flatImageContainsCornerRadius=_flatImageContainsCornerRadius - In the implementation block
@property (assign,nonatomic) double specularHighlightHorizontalPositionSensitivity;                                    //@synthesize specularHighlightHorizontalPositionSensitivity=_specularHighlightHorizontalPositionSensitivity - In the implementation block
@property (assign,nonatomic) double specularHighlightVerticalPosition;                                                 //@synthesize specularHighlightVerticalPosition=_specularHighlightVerticalPosition - In the implementation block
@property (assign,nonatomic) double specularHighlightVerticalPositionSensitivity;                                      //@synthesize specularHighlightVerticalPositionSensitivity=_specularHighlightVerticalPositionSensitivity - In the implementation block
@property (assign,nonatomic) double specularOpacity;                                                                   //@synthesize specularOpacity=_specularOpacity - In the implementation block
@property (assign,nonatomic) double defaultFocusedShadowOpacity;                                                       //@synthesize defaultFocusedShadowOpacity=_defaultFocusedShadowOpacity - In the implementation block
@property (assign,nonatomic) double defaultHighlightedShadowOpacity;                                                   //@synthesize defaultHighlightedShadowOpacity=_defaultHighlightedShadowOpacity - In the implementation block
@property (assign,nonatomic) double defaultUnfocusedShadowOpacity;                                                     //@synthesize defaultUnfocusedShadowOpacity=_defaultUnfocusedShadowOpacity - In the implementation block
@property (assign,nonatomic) double fullBleedFocusedShadowOpacity;                                                     //@synthesize fullBleedFocusedShadowOpacity=_fullBleedFocusedShadowOpacity - In the implementation block
@property (assign,nonatomic) double fullBleedUnfocusedShadowOpacity;                                                   //@synthesize fullBleedUnfocusedShadowOpacity=_fullBleedUnfocusedShadowOpacity - In the implementation block
@property (assign,nonatomic) double focusCursorShadowOpacityAdjustment;                                                //@synthesize focusCursorShadowOpacityAdjustment=_focusCursorShadowOpacityAdjustment - In the implementation block
@property (assign,nonatomic) double defaultFocusedShadowRadius;                                                        //@synthesize defaultFocusedShadowRadius=_defaultFocusedShadowRadius - In the implementation block
@property (assign,nonatomic) double defaultHighlightedShadowRadius;                                                    //@synthesize defaultHighlightedShadowRadius=_defaultHighlightedShadowRadius - In the implementation block
@property (assign,nonatomic) double defaultUnfocusedShadowRadius;                                                      //@synthesize defaultUnfocusedShadowRadius=_defaultUnfocusedShadowRadius - In the implementation block
@property (assign,nonatomic) double fullBleedFocusedShadowRadius;                                                      //@synthesize fullBleedFocusedShadowRadius=_fullBleedFocusedShadowRadius - In the implementation block
@property (assign,nonatomic) double fullBleedUnfocusedShadowRadius;                                                    //@synthesize fullBleedUnfocusedShadowRadius=_fullBleedUnfocusedShadowRadius - In the implementation block
@property (assign,nonatomic) double defaultFocusedShadowVerticalOffset;                                                //@synthesize defaultFocusedShadowVerticalOffset=_defaultFocusedShadowVerticalOffset - In the implementation block
@property (assign,nonatomic) double defaultHighlightedShadowVerticalOffset;                                            //@synthesize defaultHighlightedShadowVerticalOffset=_defaultHighlightedShadowVerticalOffset - In the implementation block
@property (assign,nonatomic) double defaultUnfocusedShadowVerticalOffset;                                              //@synthesize defaultUnfocusedShadowVerticalOffset=_defaultUnfocusedShadowVerticalOffset - In the implementation block
@property (assign,nonatomic) double defaultSelectedShadowVerticalOffset;                                               //@synthesize defaultSelectedShadowVerticalOffset=_defaultSelectedShadowVerticalOffset - In the implementation block
@property (assign,nonatomic) BOOL useSeparateUnfocusedShadowImage;                                                     //@synthesize useSeparateUnfocusedShadowImage=_useSeparateUnfocusedShadowImage - In the implementation block
@property (nonatomic,retain) UIImage * placeholderImage;                                                               //@synthesize placeholderImage=_placeholderImage - In the implementation block
@property (assign,nonatomic) BOOL allowsNonOpaqueShadow;                                                               //@synthesize allowsNonOpaqueShadow=_allowsNonOpaqueShadow - In the implementation block
@property (assign,nonatomic) BOOL boostBrightness;                                                                     //@synthesize boostBrightness=_boostBrightness - In the implementation block
@property (assign,nonatomic) BOOL hueShift;                                                                            //@synthesize hueShift=_hueShift - In the implementation block
@property (assign,nonatomic) BOOL disableMask;                                                                         //@synthesize disableMask=_disableMask - In the implementation block
@property (assign,nonatomic) BOOL focusCursorEnabled;                                                                  //@synthesize focusCursorEnabled=_focusCursorEnabled - In the implementation block
@property (assign,nonatomic) double focusCursorBorderWidth;                                                            //@synthesize focusCursorBorderWidth=_focusCursorBorderWidth - In the implementation block
@property (assign,nonatomic) double radiosityOffset;                                                                   //@synthesize radiosityOffset=_radiosityOffset - In the implementation block
@property (assign,nonatomic) double radiosityStrength;                                                                 //@synthesize radiosityStrength=_radiosityStrength - In the implementation block
@property (nonatomic,copy,readonly) _UIFocusAnimationConfiguration * focusAnimationConfiguration; 
@property (assign,nonatomic) double shadowSelectionDuration;                                                           //@synthesize shadowSelectionDuration=_shadowSelectionDuration - In the implementation block
@property (assign,nonatomic) double shadowUnselectionDuration;                                                         //@synthesize shadowUnselectionDuration=_shadowUnselectionDuration - In the implementation block
@property (assign,nonatomic) double repositionUnselectionDuration;                                                     //@synthesize repositionUnselectionDuration=_repositionUnselectionDuration - In the implementation block
@property (assign,nonatomic) double layerSelectionDuration;                                                            //@synthesize layerSelectionDuration=_layerSelectionDuration - In the implementation block
@property (assign,nonatomic) double layerUnselectionDuration;                                                          //@synthesize layerUnselectionDuration=_layerUnselectionDuration - In the implementation block
@property (assign,nonatomic) double minimumFocusDuration;                                                              //@synthesize minimumFocusDuration=_minimumFocusDuration - In the implementation block
@property (assign,nonatomic) double pressedDuration;                                                                   //@synthesize pressedDuration=_pressedDuration - In the implementation block
@property (assign,nonatomic) double unpressedDuration;                                                                 //@synthesize unpressedDuration=_unpressedDuration - In the implementation block
@property (assign,nonatomic) BOOL fullBleedCenteredGrowth;                                                             //@synthesize fullBleedCenteredGrowth=_fullBleedCenteredGrowth - In the implementation block
@property (assign,nonatomic) double fullBleedOffset;                                                                   //@synthesize fullBleedOffset=_fullBleedOffset - In the implementation block
+(id)newStandardConfiguration;
+(id)newAppIconConfiguration;
-(double)zDepth;
-(void)setDefaultHighlightedShadowVerticalOffset:(double)arg1 ;
-(void)setBoostBrightness:(BOOL)arg1 ;
-(void)setHueShift:(BOOL)arg1 ;
-(void)setDefaultUnfocusedShadowVerticalOffset:(double)arg1 ;
-(void)setUseSeparateUnfocusedShadowImage:(BOOL)arg1 ;
-(void)setDefaultSelectedShadowVerticalOffset:(double)arg1 ;
-(void)setDisableMask:(BOOL)arg1 ;
-(void)setRadiosityOffset:(double)arg1 ;
-(void)setFocusCursorEnabled:(BOOL)arg1 ;
-(void)setFocusCursorBorderWidth:(double)arg1 ;
-(void)setRadiosityStrength:(double)arg1 ;
-(void)setShadowSelectionDuration:(double)arg1 ;
-(void)setLayerSelectionDuration:(double)arg1 ;
-(void)setUnpressedDuration:(double)arg1 ;
-(void)setShadowUnselectionDuration:(double)arg1 ;
-(void)setLayerUnselectionDuration:(double)arg1 ;
-(double)overlayDepth;
-(void)setRepositionUnselectionDuration:(double)arg1 ;
-(double)layerSelectionDuration;
-(void)setPressedDuration:(double)arg1 ;
-(void)setFullBleedCenteredGrowth:(BOOL)arg1 ;
-(void)setFullBleedOffset:(double)arg1 ;
-(void)_highContrastFocusIndicatorChanged:(id)arg1 ;
-(unsigned long long)maximumParallaxImages;
-(BOOL)overlayFixedFrame;
-(double)maximumParallaxDepth;
-(BOOL)adjustMotionForSize;
-(double)scaleSizeIncrease;
-(CGPoint)translationOffset;
-(double)pressedScaleAdjustment;
-(double)unmaskedOverlayScaleFactor;
-(double)specularOpacity;
-(double)isContinuousCornerRadiusEnabled;
-(BOOL)flatImageContainsCornerRadius;
-(id)init;
-(double)specularHighlightVerticalPosition;
-(double)defaultUnfocusedShadowOpacity;
-(double)specularHighlightHorizontalPositionSensitivity;
-(double)defaultFocusedShadowOpacity;
-(double)specularHighlightVerticalPositionSensitivity;
-(double)defaultHighlightedShadowOpacity;
-(double)fullBleedFocusedShadowOpacity;
-(double)fullBleedUnfocusedShadowOpacity;
-(double)focusCursorShadowOpacityAdjustment;
-(double)defaultFocusedShadowRadius;
-(double)defaultHighlightedShadowRadius;
-(double)defaultUnfocusedShadowRadius;
-(BOOL)boostBrightness;
-(double)fullBleedFocusedShadowRadius;
-(double)fullBleedUnfocusedShadowRadius;
-(double)radiosityOffset;
-(double)defaultFocusedShadowVerticalOffset;
-(double)defaultHighlightedShadowVerticalOffset;
-(double)defaultUnfocusedShadowVerticalOffset;
-(double)defaultSelectedShadowVerticalOffset;
-(BOOL)useSeparateUnfocusedShadowImage;
-(BOOL)allowsNonOpaqueShadow;
-(BOOL)focusCursorEnabled;
-(double)focusCursorBorderWidth;
-(double)radiosityStrength;
-(double)shadowSelectionDuration;
-(double)shadowUnselectionDuration;
-(double)repositionUnselectionDuration;
-(double)pressedDuration;
-(double)layerUnselectionDuration;
-(double)unpressedDuration;
-(BOOL)fullBleedCenteredGrowth;
-(double)fullBleedOffset;
-(void)setMinimumFocusDuration:(double)arg1 ;
-(double)cornerRadius;
-(double)minimumFocusDuration;
-(BOOL)hueShift;
-(UIImage *)placeholderImage;
-(void)setRotationAmount:(double)arg1 ;
-(void)setZDepth:(double)arg1 ;
-(void)setPlaceholderImage:(UIImage *)arg1 ;
-(_UIFocusAnimationConfiguration *)focusAnimationConfiguration;
-(void)setCornerRadius:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)disableMask;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(void)setOverlayDepth:(double)arg1 ;
-(void)setOverlayFixedFrame:(BOOL)arg1 ;
-(void)setMaximumParallaxImages:(unsigned long long)arg1 ;
-(void)setMaximumParallaxDepth:(double)arg1 ;
-(void)setAdjustMotionForSize:(BOOL)arg1 ;
-(double)rotationAmount;
-(void)setScaleSizeIncrease:(double)arg1 ;
-(void)setPressedScaleAdjustment:(double)arg1 ;
-(void)setTranslationOffset:(CGPoint)arg1 ;
-(void)setUnmaskedOverlayScaleFactor:(double)arg1 ;
-(void)setContinuousCornerRadiusEnabled:(double)arg1 ;
-(void)setFlatImageContainsCornerRadius:(BOOL)arg1 ;
-(void)setSpecularHighlightVerticalPosition:(double)arg1 ;
-(void)setSpecularHighlightHorizontalPositionSensitivity:(double)arg1 ;
-(void)setSpecularOpacity:(double)arg1 ;
-(void)setSpecularHighlightVerticalPositionSensitivity:(double)arg1 ;
-(void)setAllowsNonOpaqueShadow:(BOOL)arg1 ;
-(void)setDefaultFocusedShadowOpacity:(double)arg1 ;
-(void)setDefaultHighlightedShadowOpacity:(double)arg1 ;
-(void)setDefaultUnfocusedShadowOpacity:(double)arg1 ;
-(void)setFullBleedFocusedShadowOpacity:(double)arg1 ;
-(void)setFullBleedUnfocusedShadowOpacity:(double)arg1 ;
-(void)setFocusCursorShadowOpacityAdjustment:(double)arg1 ;
-(void)setDefaultFocusedShadowRadius:(double)arg1 ;
-(void)setDefaultHighlightedShadowRadius:(double)arg1 ;
-(void)setDefaultUnfocusedShadowRadius:(double)arg1 ;
-(void)setFullBleedFocusedShadowRadius:(double)arg1 ;
-(void)setFullBleedUnfocusedShadowRadius:(double)arg1 ;
-(void)setDefaultFocusedShadowVerticalOffset:(double)arg1 ;
@end

