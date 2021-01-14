/*
* Generated on Thursday, January 14, 2021 at 2:20:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIAccessibilityContentSizeCategoryImageAdjusting.h>
#import <UIKit/UIAccessibilityContentSizeCategoryImageAdjustingInternal.h>
#import <UIKitCore/_UIImageContentLayoutTarget.h>
#import <UIKitCore/_UIImageContentEffect.h>

@class _UIImageContentLayout, UITraitCollection, UILayoutGuide, NSString, _UIImageLoader, UIView, UIImageSymbolConfiguration, _UIStackedImageContainerView, UIImage, NSArray, UIColor;

@interface UIImageView : UIView <UIAccessibilityContentSizeCategoryImageAdjusting, UIAccessibilityContentSizeCategoryImageAdjustingInternal, _UIImageContentLayoutTarget, _UIImageContentEffect> {

	id _storage;
	_UIImageContentLayout* _pendingImageContentLayout;
	UIEdgeInsets _cachedEdgeInsetsForEffects;
	UITraitCollection* _lastResolvedTraitCollection;
	long long _lastResolvedLayoutDirectionTrait;
	double _previousBaselineOffsetFromBottom;
	double _previousFirstBaselineOffsetFromTop;
	struct {
		unsigned canDrawContentIsValid : 1;
		unsigned canDrawContent : 1;
		unsigned suppressPixelAlignment : 1;
		unsigned previousPixelAlignment : 1;
		unsigned previousEdgeAntialiasing : 1;
		unsigned actionForLayerForKeyOverridden : 1;
	}  _imageViewFlags;
	BOOL _templateSettingsAreInvalid;
	BOOL _edgeInsetsForEffectsAreValid;
	BOOL _adjustsImageWhenAncestorFocused;
	BOOL _masksFocusEffectToContents;
	BOOL __symbolImagesIgnoreAccessibilitySizes;
	BOOL __animatesContents;
	UILayoutGuide* _focusedFrameGuide;

}

@property (assign,nonatomic) BOOL adjustsImageSizeForAccessibilityContentSizeCategory; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) _UIImageLoader * _imageLoader; 
@property (setter=_setPlaceholderView:,nonatomic,retain) UIView * _placeholderView; 
@property (assign,setter=_setDefaultRenderingMode:,nonatomic) long long _defaultRenderingMode; 
@property (nonatomic,readonly) UIEdgeInsets _edgeInsetsForEffects; 
@property (assign,setter=_setEdgeInsetsForEffectsAreValid:,nonatomic) BOOL _edgeInsetsForEffectsAreValid;                                        //@synthesize edgeInsetsForEffectsAreValid=_edgeInsetsForEffectsAreValid - In the implementation block
@property (assign,setter=_setMasksTemplateImages:,nonatomic) BOOL _masksTemplateImages; 
@property (nonatomic,readonly) BOOL _templateSettingsAreInvalid;                                                                                 //@synthesize templateSettingsAreInvalid=_templateSettingsAreInvalid - In the implementation block
@property (assign,setter=_setSymbolImagesIgnoreAccessibilitySizes:,nonatomic) BOOL _symbolImagesIgnoreAccessibilitySizes;                        //@synthesize _symbolImagesIgnoreAccessibilitySizes=__symbolImagesIgnoreAccessibilitySizes - In the implementation block
@property (setter=_setOverridingSymbolConfiguration:,nonatomic,retain) UIImageSymbolConfiguration * _overridingSymbolConfiguration; 
@property (assign,setter=_setSuppressPixelAlignment:,nonatomic) BOOL _suppressPixelAlignment; 
@property (assign,nonatomic) unsigned drawMode; 
@property (assign,setter=_setTemplateImageRenderingEffects:,nonatomic) unsigned long long _templateImageRenderingEffects; 
@property (assign,setter=_setAnimatesContents:,nonatomic) BOOL _animatesContents;                                                                //@synthesize _animatesContents=__animatesContents - In the implementation block
@property (assign,setter=_setLayeredImageCornerRadius:,nonatomic) double _layeredImageCornerRadius; 
@property (nonatomic,readonly) _UIStackedImageContainerView * _layeredImageContainer; 
@property (readonly) UILayoutGuide * imageContentGuide; 
@property (nonatomic,retain) UIImageSymbolConfiguration * symbolConfiguration; 
@property (nonatomic,retain) UIImage * image; 
@property (nonatomic,retain) UIImage * highlightedImage; 
@property (nonatomic,retain) UIImageSymbolConfiguration * preferredSymbolConfiguration; 
@property (assign,getter=isUserInteractionEnabled,nonatomic) BOOL userInteractionEnabled; 
@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted; 
@property (nonatomic,copy) NSArray * animationImages; 
@property (nonatomic,copy) NSArray * highlightedAnimationImages; 
@property (assign,nonatomic) double animationDuration; 
@property (assign,nonatomic) long long animationRepeatCount; 
@property (nonatomic,retain) UIColor * tintColor; 
@property (getter=isAnimating,nonatomic,readonly) BOOL animating; 
@property (assign,nonatomic) BOOL adjustsImageWhenAncestorFocused;                                                                               //@synthesize adjustsImageWhenAncestorFocused=_adjustsImageWhenAncestorFocused - In the implementation block
@property (readonly) UILayoutGuide * focusedFrameGuide;                                                                                          //@synthesize focusedFrameGuide=_focusedFrameGuide - In the implementation block
@property (nonatomic,readonly) UIView * overlayContentView; 
@property (assign,nonatomic) BOOL masksFocusEffectToContents;                                                                                    //@synthesize masksFocusEffectToContents=_masksFocusEffectToContents - In the implementation block
@property (nonatomic,readonly) long long semanticContentAttribute; 
@property (nonatomic,readonly) long long contentMode; 
@property (nonatomic,readonly) BOOL _hasContentGravity; 
@property (nonatomic,readonly) double preferredContentScaleFactor; 
@property (nonatomic,readonly) BOOL _layoutShouldFlipHorizontalOrientations; 
+(id)_surfacePropertiesForRenderingCIImageWithSize:(CGSize)arg1 pixelFormat:(unsigned)arg2 bytesPerElement:(unsigned long long)arg3 ;
+(BOOL)_canReuseIOSurface:(IOSurfaceRef)arg1 forRenderingCIImageWithIOSurfaceProperties:(id)arg2 ;
+(id)_sharedDecodingQueue;
-(void)setTranslatesAutoresizingMaskIntoConstraints:(BOOL)arg1 ;
-(double)animationDuration;
-(void)setSemanticContentAttribute:(long long)arg1 ;
-(CGSize)_intrinsicSizeWithinSize:(CGSize)arg1 ;
-(void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2 ;
-(void)tintColorDidChange;
-(void)decodeRestorableStateWithCoder:(id)arg1 ;
-(unsigned long long)defaultAccessibilityTraits;
-(void)setAdjustsImageSizeForAccessibilityContentSizeCategory:(BOOL)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setAnimating:(BOOL)arg1 ;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(void)encodeRestorableStateWithCoder:(id)arg1 ;
-(BOOL)adjustsImageSizeForAccessibilityContentSizeCategory;
-(id)initWithImage:(id)arg1 ;
-(UIEdgeInsets)alignmentRectInsets;
-(BOOL)_canDrawContent;
-(void)setContentCompressionResistancePriority:(float)arg1 forAxis:(long long)arg2 ;
-(void)_ancestorWillUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(BOOL)scalesLargeContentImage;
-(void)setHidden:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)_applySettingsForLegibilityStyle:(long long)arg1 ;
-(unsigned)drawMode;
-(double)_baselineOffsetFromBottom;
-(_UIImageLoader *)_imageLoader;
-(id)_activeImage;
-(BOOL)isAccessibilityElementByDefault;
-(void)setBackgroundColor:(id)arg1 ;
-(void)setContentScaleFactor:(double)arg1 ;
-(id)midlineGuide;
-(void)setPreferredSymbolConfiguration:(UIImageSymbolConfiguration *)arg1 ;
-(id)_generateBackdropMaskImage;
-(void)setBounds:(CGRect)arg1 ;
-(UIImage *)image;
-(void)_stopLoading;
-(id)_symbolConfigurationForImage:(id)arg1 ;
-(void)_cleanUpForStopAnimating;
-(void)_updateState;
-(NSArray *)animationImages;
-(id)_layoutForImage:(id)arg1 inSize:(CGSize)arg2 cachePerSize:(BOOL)arg3 forBaselineOffset:(BOOL)arg4 ;
-(void)_baselineOffsetParametersDidChangeHasBaselinePropertyChanged:(BOOL)arg1 ;
-(BOOL)_setImageViewContentsForCIImageBackedImage:(id)arg1 ;
-(id)_cachedPretiledImageForImage:(id)arg1 ;
-(BOOL)_setImageViewContentsForAnimatedImage:(id)arg1 ;
-(id)_layoutForImage:(id)arg1 inSize:(CGSize)arg2 ;
-(void)_updateContentsMultiplyColorAndSwizzleFromLayout:(id)arg1 ;
-(BOOL)_needsImageEffectsForImage:(id)arg1 ;
-(void)_invalidateImageLayouts;
-(id)_effectiveTintColorWithImage:(id)arg1 ;
-(id)_contentsMultiplyColorForEffectiveTintColor:(id)arg1 ;
-(BOOL)_needsImageEffectsForImage:(id)arg1 suppressColorizing:(BOOL)arg2 ;
-(NSArray *)highlightedAnimationImages;
-(BOOL)_isHasBaselinePropertyChangeable;
-(BOOL)_hasContentGravity;
-(void)drawRect:(CGRect)arg1 ;
-(void)_drawImageEffectsForImage:(id)arg1 inRect:(CGRect)arg2 suppressColor:(BOOL)arg3 ;
-(id)_currentHighlightedImage;
-(BOOL)_setImageViewContents:(id)arg1 ;
-(BOOL)_displayImageAsLayered:(id)arg1 ;
-(void)_configureForLayeredImage:(id)arg1 ;
-(_UIStackedImageContainerView *)_layeredImageContainer;
-(void)_teardownLayeredImage;
-(BOOL)_shouldTreatImageAsTemplate:(id)arg1 ;
-(void)_setDecompressingImage:(id)arg1 forType:(unsigned long long)arg2 ;
-(void)_invalidateTemplateSettings;
-(void)setAnimationImages:(NSArray *)arg1 ;
-(void)_clearPretiledImageCacheForImage:(id)arg1 ;
-(void)_updateImageViewForOldImage:(id)arg1 newImage:(id)arg2 ;
-(BOOL)_resolveImageForTrait:(id)arg1 previouslyDisplayedImage:(id)arg2 ;
-(void)_updateTemplateProperties;
-(void)setHighlightedAnimationImages:(NSArray *)arg1 ;
-(void)setAnimationRepeatCount:(long long)arg1 ;
-(void)_updatePretiledImageCacheForImage:(id)arg1 ;
-(BOOL)_animatesContents;
-(void)_updateResolvedImage;
-(id)_currentAnimationKeyframeImage;
-(BOOL)_recomputePretilingState;
-(void)_imageContentParametersDidChange;
-(UILayoutGuide *)imageContentGuide;
-(void)_setViewGeometry:(CGRect)arg1 forMetric:(int)arg2 ;
-(void)_mainQ_beginLoadingIfApplicable;
-(void)_updateMasking;
-(id)_imageContentGuideAllowingCreation:(BOOL)arg1 ;
-(id)_decompressingImageForType:(unsigned long long)arg1 ;
-(void)_updateVisibilityAndFrameOfPlaceholderView;
-(BOOL)_masksTemplateImages;
-(void)_templateSettingsDidChange;
-(BOOL)_symbolImagesIgnoreAccessibilitySizes;
-(BOOL)_getDrawModeCompositeOperation:(int*)arg1 whiteComponent:(double*)arg2 drawingAlpha:(double*)arg3 ;
-(void)setCGImageRef:(CGImageRef)arg1 ;
-(id)_adaptiveImageForImage:(id)arg1 assignedImage:(id)arg2 currentImage:(id)arg3 hasAdapted:(BOOL*)arg4 ;
-(id)_imageResolvingTraitCollectionForTraitCollection:(id)arg1 layoutDirection:(long long)arg2 ;
-(id)_resolvedImageFromImage:(id)arg1 forTrait:(id)arg2 ;
-(id)_existingOverlayView;
-(void)_loadImage:(id)arg1 delegate:(id)arg2 ;
-(void)_updateLayeredImageIsFocusedWithFocusedView:(id)arg1 focusAnimationCoordinator:(id)arg2 ;
-(void)_setOverlayContentView:(id)arg1 ;
-(UIView *)_placeholderView;
-(id)_applyImageEffectsToCIImage:(id)arg1 effectiveTintColor:(id)arg2 ;
-(void)layoutSubviews;
-(void)_mainQ_resetForLoader:(id)arg1 delegate:(id)arg2 ;
-(void)_kickoffQ_beginLoadingWithImageLoader:(id)arg1 ;
-(void)_mainQ_imageLoader:(id)arg1 finishedWithImage:(id)arg2 error:(id)arg3 ;
-(void)_decodeQ_imageLoader:(id)arg1 decodeImage:(id)arg2 layout:(id)arg3 ;
-(BOOL)_suppressPixelAlignment;
-(void)_mainQ_imageLoader:(id)arg1 finishedOrSkippedDecodingImage:(id)arg2 layout:(id)arg3 ;
-(UILayoutGuide *)focusedFrameGuide;
-(long long)animationRepeatCount;
-(id)_checkHighlightedImageForAdaptation:(id)arg1 hadAdapted:(BOOL*)arg2 ;
-(void)_setLayeredImageContainer:(id)arg1 ;
-(double)_layeredImageCornerRadius;
-(UIView *)overlayContentView;
-(void)_setLayeredImageCornerRadius:(double)arg1 ;
-(void)_setPlaceholderView:(id)arg1 ;
-(void)_loadImageWithURL:(id)arg1 ;
-(BOOL)_templateSettingsAreInvalid;
-(BOOL)_edgeInsetsForEffectsAreValid;
-(void)_setEdgeInsetsForEffectsAreValid:(BOOL)arg1 ;
-(BOOL)adjustsImageWhenAncestorFocused;
-(void)setAdjustsImageWhenAncestorFocused:(BOOL)arg1 ;
-(BOOL)masksFocusEffectToContents;
-(void)setMasksFocusEffectToContents:(BOOL)arg1 ;
-(void)_setSymbolImagesIgnoreAccessibilitySizes:(BOOL)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(id)largeContentImage;
-(void)_setOverridingSymbolConfiguration:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)_setTemplateImageRenderingEffects:(unsigned long long)arg1 ;
-(double)preferredContentScaleFactor;
-(BOOL)isHighlighted;
-(id)_effectForRenderingSource:(id)arg1 ;
-(void)displayLayer:(id)arg1 ;
-(void)startAnimating;
-(CGImageRef)imageRef;
-(void)_setDefaultRenderingMode:(long long)arg1 ;
-(double)_scaleFactorForImage;
-(unsigned long long)_templateImageRenderingEffects;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)_shouldInvalidateBaselineConstraintsForSize:(CGSize)arg1 oldSize:(CGSize)arg2 ;
-(void)_setAnimatesContents:(BOOL)arg1 ;
-(UIImage *)highlightedImage;
-(void)setHighlightedImage:(UIImage *)arg1 ;
-(UIImageSymbolConfiguration *)_overridingSymbolConfiguration;
-(void)stopAnimating;
-(void)setDrawMode:(unsigned)arg1 ;
-(BOOL)_layoutShouldFlipHorizontalOrientations;
-(id)_currentImage;
-(BOOL)isElementAccessibilityExposedToInterfaceBuilder;
-(BOOL)_hasBaseline;
-(void)_setSuppressPixelAlignment:(BOOL)arg1 ;
-(id)initWithImage:(id)arg1 highlightedImage:(id)arg2 ;
-(UIImageSymbolConfiguration *)preferredSymbolConfiguration;
-(long long)_defaultRenderingMode;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setSymbolConfiguration:(UIImageSymbolConfiguration *)arg1 ;
-(BOOL)isAnimating;
-(void)setContentMode:(long long)arg1 ;
-(CGSize)_baselineOffsetsAtSize:(CGSize)arg1 ;
-(id)_renditionForSource:(id)arg1 size:(CGSize)arg2 withCGImageProvider:(/*^block*/id)arg3 lazy:(BOOL)arg4 ;
-(UIImageSymbolConfiguration *)symbolConfiguration;
-(BOOL)useBlockyMagnificationInClassic;
-(void)_setMasksTemplateImages:(BOOL)arg1 ;
-(double)_firstBaselineOffsetFromTop;
-(UIEdgeInsets)_edgeInsetsForEffects;
-(void)dealloc;
-(id)_resolvedImageFromImage:(id)arg1 ;
-(id)_checkImageForAdaptation:(id)arg1 hasAdapted:(BOOL*)arg2 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setAnimationDuration:(double)arg1 ;
@end

