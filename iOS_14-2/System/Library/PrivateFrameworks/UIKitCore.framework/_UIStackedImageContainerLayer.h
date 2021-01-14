/*
* Generated on Thursday, January 14, 2021 at 2:20:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <QuartzCore/CALayer.h>
#import <libobjc.A.dylib/CALayerDelegate.h>

@protocol UINamedLayerStack;
@class NSString, NSArray, CALayer, CATransformLayer, _UIStackedImageLayerDelegate, UIView, _UIStackedImageConfiguration;

@interface _UIStackedImageContainerLayer : CALayer <CALayerDelegate> {

	BOOL _animatingToNormalState;
	BOOL _animatingStateChange;
	double _selectionStartTime;
	double _selectionDuration;
	long long _selectionStyle;
	double _idleModeFocusSizeOffset;
	CGSize _radiosityImageScale;
	BOOL _radiosityNeedsLayout;
	double _scale;
	NSString* _imageStackContentsGravity;
	double _radiosityRequestTime;
	double _rotationAmount;
	CGPoint _translationOffset;
	double _maximumParallaxDepth;
	BOOL _nonOpaqueShadow;
	BOOL _singleLayerNoMask;
	BOOL _layerStackSupportsInflation;
	BOOL _layerStackInflated;
	unsigned long long _layerStackInflationSeed;
	BOOL _deferredInflationPending;
	id _flatImage;
	NSArray* _parallaxImages;
	NSArray* _parallaxLayerDepths;
	CALayer* _imageLayersContainer;
	NSArray* _imageLayers;
	CALayer* _flatLayer;
	CALayer* _maskLayer;
	CALayer* _radiosityLayer;
	CALayer* _selectedPlaceholderLayer;
	CALayer* _shadowLayer;
	CALayer* _unfocusedShadowLayer;
	CALayer* _specularLayer;
	CALayer* _cursorLayer;
	CALayer* _cursorLayerContainer;
	CALayer* _focusKeylineStrokeLayer;
	CALayer* _overlayLayer;
	CALayer* _overlayContainerLayer;
	CALayer* _unmaskedOverlayLayer;
	CALayer* _unmaskedOverlayContainerLayer;
	CATransformLayer* _imagePerspectiveTransformLayer;
	CATransformLayer* _imageRotationTransformLayer;
	CATransformLayer* _maskPerspectiveTransformLayer;
	CATransformLayer* _maskRotationTransformLayer;
	CATransformLayer* _unmaskedOverlayPerspectiveTransformLayer;
	CATransformLayer* _unmaskedOverlayRotationTransformLayer;
	CATransformLayer* _cursorRotationTransformLayer;
	CALayer* _frontmostPerspectiveTransformLayer;
	CATransformLayer* _frontmostRotationTransformLayer;
	_UIStackedImageLayerDelegate* _layoutDelegate;
	UIView* _animationView;
	_UIStackedImageConfiguration* _configuration;
	id<UINamedLayerStack> _layerStack;
	unsigned long long _controlState;
	CGPoint _focusDirection;

}

@property (nonatomic,retain) _UIStackedImageConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,retain) id<UINamedLayerStack> layerStack;                          //@synthesize layerStack=_layerStack - In the implementation block
@property (assign,nonatomic) unsigned long long controlState;                           //@synthesize controlState=_controlState - In the implementation block
@property (assign,getter=isPressed,nonatomic) BOOL pressed; 
@property (assign,getter=isSelected,nonatomic) BOOL selected; 
@property (assign,nonatomic) CGPoint focusDirection;                                    //@synthesize focusDirection=_focusDirection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_layerStackObservingKeys;
+(CGSize)_scaledSizeForSize:(CGSize)arg1 focusSizeIncrease:(double)arg2 selectionStyle:(long long)arg3 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)removeAllAnimations;
-(BOOL)_isSelected;
-(void)layoutSublayers;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setPressed:(BOOL)arg1 ;
-(id)init;
-(id)_contentLayers;
-(id)_flatLayer;
-(CGRect)_cursorBounds;
-(void)_setFlatImage:(id)arg1 ;
-(void)_updateShadowWithAnimationCoordinator:(id)arg1 ;
-(id)_randomImage;
-(void)_updateSpecularLayerContents;
-(void)_setDefaultParallaxLayerDepths;
-(void)_showImageLayers;
-(void)_updateNonOpaqueShadowStateFromLayerStack;
-(id)_preferredLayoutDelegateForLayer:(id)arg1 ;
-(CGRect)_positionAndSizeForLayerImage:(id)arg1 ;
-(CGRect)_displayFrameForModelFrame:(CGRect)arg1 ;
-(BOOL)_radiosityEnabled;
-(void)_updateShadowBounds;
-(void)_updateShadowPositionWithOffset:(CGPoint)arg1 ;
-(void)_updateOverlayLayout;
-(BOOL)_isFocusedOrFocusedIdle;
-(void)_updateLayerForSelection;
-(void)_layoutRadiosityLayer;
-(CGSize)_scaledSizeForCurrentState;
-(void)_updateCornerRadiusFromConfig;
-(void)_updateRadiosityFromLayerStack;
-(void)_updateSingleLayerNoMaskFromLayerStack;
-(void)_setImageStackContentsGravity:(id)arg1 ;
-(void)_setupFrontmostTransformLayers;
-(void)_resetAnimatingToNormalState;
-(void)_setParallaxImages:(id)arg1 ;
-(void)_setLayerStackInflated:(BOOL)arg1 seed:(unsigned long long)arg2 ;
-(BOOL)_aspectMatchesLayerStack;
-(CATransform3D)_scaleTransformForCurrentState;
-(CATransform3D)_specularTransformForCurrentState;
-(void)_setControlState:(unsigned long long)arg1 animated:(BOOL)arg2 focusAnimationCoordinator:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)_shadowLayer;
-(unsigned long long)_primaryControlStateForState:(unsigned long long)arg1 ;
-(CGSize)_roundedBoundsSize;
-(void)_removeLayerFromSuperlayer:(id)arg1 ;
-(void)setPressed:(BOOL)arg1 animated:(BOOL)arg2 ;
-(CGSize)_focusCursorInsetSizeForSize:(CGSize)arg1 ;
-(void)_applyFocusDirectionTransform;
-(BOOL)_isFocusedIdle;
-(double)_focusedScaleFactorForCurrentBounds;
-(void)_updateImageLayerFilterChains;
-(id<UINamedLayerStack>)layerStack;
-(void)_updateLayerForSelectionWithAnimationCoordinator:(id)arg1 ;
-(void)_wrapLayerInView:(id)arg1 ;
-(void)setPressed:(BOOL)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(CGImageRef)_cgImageForLayeredImage:(id)arg1 ;
-(void)_updatePerspective;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 focusAnimationCoordinator:(id)arg3 ;
-(void)_setFocusDirection:(CGPoint)arg1 duration:(double)arg2 ;
-(void)setControlState:(unsigned long long)arg1 animated:(BOOL)arg2 focusAnimationCoordinator:(id)arg3 ;
-(double)_idleModeFocusSizeOffset;
-(void)_applyFocusDirectionTransformWithAnimationCoordinator:(id)arg1 ;
-(double)_focusedShadowRadius;
-(CGPoint)_layerStackToDisplayScaleFactor;
-(id)_imageStackContentsGravity;
-(double)_getShadowOpacity;
-(void)_updateRotationAndTranslation:(id)arg1 ;
-(void)_updateFocusKeylineStrokeScale;
-(void)setLayerStack:(id<UINamedLayerStack>)arg1 ;
-(void)_updateFullBleedImageLayers;
-(void)_updateNormalImageLayers;
-(void)setFocusDirection:(CGPoint)arg1 ;
-(void)_updateContentProviderLayerFocusDirection;
-(void)_updateImageLayerFilterValues;
-(void)_updateOverlayContainerLayerHierarchy:(BOOL)arg1 ;
-(CATransform3D)_perspectiveTransformForCurrentState;
-(CATransform3D)_rotationTransformForCurrentFocusDirection;
-(void)_updateSpecularLayerContentsRect;
-(void)_updateFocusKeylineStrokeTranslation:(CGPoint)arg1 ;
-(void)setFocusDirection:(CGPoint)arg1 animated:(BOOL)arg2 ;
-(CATransform3D)_fixedFrameTransformForDepth:(double)arg1 fudgeFactor:(double)arg2 ;
-(BOOL)_configuredForNonOpaqueShadow;
-(id)_imageLayersContainer;
-(id)_layerBelowTitles;
-(void)_setSelectionStyle:(long long)arg1 ;
-(id)_overlayLayer;
-(void)_setOverlayLayer:(id)arg1 ;
-(id)_unmaskedOverlayLayer;
-(void)_setUnmaskedOverlayLayer:(id)arg1 ;
-(id)_parallaxLayerDepths;
-(void)_setParallaxLayerDepths:(id)arg1 ;
-(void)_setIdleModeFocusSizeOffset:(double)arg1 ;
-(CGPoint)focusDirection;
-(BOOL)isSelected;
-(void)setContentsScale:(double)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(BOOL)_isFocused;
-(id)actionForLayer:(id)arg1 forKey:(id)arg2 ;
-(long long)_selectionStyle;
-(_UIStackedImageConfiguration *)configuration;
-(unsigned long long)controlState;
-(BOOL)isPressed;
-(BOOL)_isNormal;
-(void)_deselect;
-(BOOL)_isHighlighted;
-(void)setControlState:(unsigned long long)arg1 ;
-(void)setRasterizationScale:(double)arg1 ;
-(void)setControlState:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(void)dealloc;
-(void)setConfiguration:(_UIStackedImageConfiguration *)arg1 ;
-(double)_unfocusedShadowRadius;
@end

