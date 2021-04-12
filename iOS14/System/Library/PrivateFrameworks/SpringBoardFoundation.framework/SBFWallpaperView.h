/*
* Generated on Thursday, January 14, 2021 at 2:23:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
*/

#import <SpringBoardFoundation/SpringBoardFoundation-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PTSettingsKeyObserver.h>
#import <libobjc.A.dylib/SBFLegibilitySettingsProvider.h>

@protocol SBFLegibilitySettingsProviderDelegate, SBFWallpaperViewDelegate, SBFWallpaperViewInternalObserver;
@class SBFWallpaperSettings, UIView, _UILegibilitySettingsProvider, _UILegibilitySettings, UIColor, NSTimer, SBFWallpaperParallaxSettings, UIImage, NSString;

@interface SBFWallpaperView : UIView <PTSettingsKeyObserver, SBFLegibilitySettingsProvider> {

	SBFWallpaperSettings* _wallpaperSettings;
	UIView* _parallaxView;
	double _zoomFactor;
	double _contentScaleFactor;
	long long _variant;
	unsigned long long _transformOptions;
	_UILegibilitySettingsProvider* _legibilitySettingsProvider;
	_UILegibilitySettings* _legibilitySettings;
	UIColor* _lastAverageColor;
	NSTimer* _colorSampleTimer;
	BOOL _shouldGenerateBlurredImagesWhenVisible;
	BOOL _generatingBlurredImages;
	SBFWallpaperParallaxSettings* _parallaxSettings;
	BOOL _wantsRasterization;
	long long _disallowRasterizationBlockCount;
	BOOL _needsWallpaperDimmingTreatment;
	BOOL _parallaxEnabled;
	BOOL _continuousColorSamplingEnabled;
	BOOL _wallpaperAnimationEnabled;
	BOOL _rotating;
	BOOL _hasVideo;
	BOOL _sharesContentsAcrossVariants;
	id<SBFLegibilitySettingsProviderDelegate> _delegate;
	UIView* _contentView;
	long long _wallpaperMode;
	id<SBFWallpaperViewDelegate> _wallpaperDelegate;
	UIImage* _untreatedWallpaperImage;
	double _parallaxFactor;
	NSString* _wallpaperName;
	NSString* _cacheGroup;
	id<SBFWallpaperViewInternalObserver> _internalObserver;

}

@property (nonatomic,retain) UIImage * untreatedWallpaperImage;                                         //@synthesize untreatedWallpaperImage=_untreatedWallpaperImage - In the implementation block
@property (nonatomic,copy,readonly) NSString * cacheGroup;                                              //@synthesize cacheGroup=_cacheGroup - In the implementation block
@property (nonatomic,copy,readonly) NSString * variantCacheIdentifier; 
@property (nonatomic,copy,readonly) NSString * cacheUniqueIdentifier; 
@property (assign,nonatomic,__weak) id<SBFWallpaperViewInternalObserver> internalObserver;              //@synthesize internalObserver=_internalObserver - In the implementation block
@property (nonatomic,readonly) BOOL needsImmediateLayoutBeforeRotation; 
@property (nonatomic,retain) UIView * contentView;                                                      //@synthesize contentView=_contentView - In the implementation block
@property (assign,nonatomic) long long variant;                                                         //@synthesize variant=_variant - In the implementation block
@property (nonatomic,readonly) long long wallpaperType; 
@property (nonatomic,readonly) long long wallpaperMode;                                                 //@synthesize wallpaperMode=_wallpaperMode - In the implementation block
@property (nonatomic,readonly) BOOL needsWallpaperDimmingTreatment;                                     //@synthesize needsWallpaperDimmingTreatment=_needsWallpaperDimmingTreatment - In the implementation block
@property (assign,nonatomic,__weak) id<SBFWallpaperViewDelegate> wallpaperDelegate;                     //@synthesize wallpaperDelegate=_wallpaperDelegate - In the implementation block
@property (nonatomic,readonly) UIImage * wallpaperImage; 
@property (assign,nonatomic) double zoomFactor;                                                         //@synthesize zoomFactor=_zoomFactor - In the implementation block
@property (assign,nonatomic) BOOL parallaxEnabled;                                                      //@synthesize parallaxEnabled=_parallaxEnabled - In the implementation block
@property (assign,nonatomic) double parallaxFactor;                                                     //@synthesize parallaxFactor=_parallaxFactor - In the implementation block
@property (nonatomic,readonly) CGRect cropRect; 
@property (nonatomic,readonly) double cropZoomScale; 
@property (nonatomic,readonly) BOOL supportsCropping; 
@property (assign,nonatomic) BOOL continuousColorSamplingEnabled;                                       //@synthesize continuousColorSamplingEnabled=_continuousColorSamplingEnabled - In the implementation block
@property (assign,nonatomic) BOOL wallpaperAnimationEnabled;                                            //@synthesize wallpaperAnimationEnabled=_wallpaperAnimationEnabled - In the implementation block
@property (assign,getter=isRotating,nonatomic) BOOL rotating;                                           //@synthesize rotating=_rotating - In the implementation block
@property (nonatomic,copy,readonly) NSString * wallpaperName;                                           //@synthesize wallpaperName=_wallpaperName - In the implementation block
@property (nonatomic,readonly) BOOL hasVideo;                                                           //@synthesize hasVideo=_hasVideo - In the implementation block
@property (assign,nonatomic) BOOL sharesContentsAcrossVariants;                                         //@synthesize sharesContentsAcrossVariants=_sharesContentsAcrossVariants - In the implementation block
@property (nonatomic,readonly) BOOL hasContentOutsideVisibleBounds; 
@property (assign,nonatomic) unsigned long long transformOptions;                                       //@synthesize transformOptions=_transformOptions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) _UILegibilitySettings * legibilitySettings; 
@property (assign,nonatomic,__weak) id<SBFLegibilitySettingsProviderDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
+(BOOL)_allowsParallax;
+(BOOL)_allowsRasterization;
+(BOOL)_shouldScaleForParallax;
+(Class)wallpaperViewClassForWallpaperType:(long long)arg1 ;
+(Class)wallpaperViewClassForConfiguration:(id)arg1 ;
-(void)preheatImageData;
-(void)_beginDisallowRasterizationBlock;
-(CGRect)cropRect;
-(id)_blurredImage;
-(double)contrast;
-(double)contrastInRect:(CGRect)arg1 ;
-(BOOL)wallpaperAnimationEnabled;
-(id)_material_generateImageFromImage:(id)arg1 forBackdropParameters:(SCD_Struct_SB17)arg2 traitCollection:(id)arg3 ;
-(void)updateLegibilitySettingsForAverageColor:(id)arg1 ;
-(void)_updateContentViewScale;
-(void)_updateGeneratingBlurs;
-(UIImage *)wallpaperImage;
-(id)averageColorInRect:(CGRect)arg1 withSmudgeRadius:(double)arg2 ;
-(void)_updateRasterizationState;
-(void)prepareToDisappear;
-(BOOL)_needsFallbackImageForBackdropGeneratedImage:(id)arg1 ;
-(id)_displayedImage;
-(void)setGeneratesBlurredImages:(BOOL)arg1 ;
-(void)setInternalObserver:(id<SBFWallpaperViewInternalObserver>)arg1 ;
-(void)setVariant:(long long)arg1 withAnimationFactory:(id)arg2 ;
-(double)parallaxFactor;
-(id)_primaryColorOverride;
-(id<SBFLegibilitySettingsProviderDelegate>)delegate;
-(void)_applyParallaxSettings;
-(id)blurredImage;
-(void)_setLegibilitySettings:(id)arg1 notify:(BOOL)arg2 ;
-(NSString *)cacheUniqueIdentifier;
-(void)_endDisallowRasterizationBlock;
-(id)_cacheKeyForParameters:(SCD_Struct_SB17)arg1 includingTint:(BOOL)arg2 downsampleFactor:(double)arg3 traitCollection:(id)arg4 ;
-(long long)wallpaperMode;
-(id)_generateImageFromImage:(id)arg1 forBackdropParameters:(SCD_Struct_SB17)arg2 includeTint:(BOOL)arg3 traitCollection:(id)arg4 ;
-(BOOL)parallaxEnabled;
-(void)setHidden:(BOOL)arg1 ;
-(void)_handleVariantChange;
-(void)_removeParallax;
-(BOOL)needsImmediateLayoutBeforeRotation;
-(void)setZoomFactor:(double)arg1 withAnimationFactory:(id)arg2 ;
-(void)setWallpaperDelegate:(id<SBFWallpaperViewDelegate>)arg1 ;
-(BOOL)_isParallaxEnabled;
-(void)setUntreatedWallpaperImage:(UIImage *)arg1 ;
-(long long)variant;
-(id)_computeAverageColor;
-(unsigned long long)transformOptions;
-(void)_updateScaleFactor;
-(void)setParallaxEnabled:(BOOL)arg1 ;
-(id<SBFWallpaperViewInternalObserver>)internalObserver;
-(void)_notifyBlursInvalidated;
-(void)prepareToAppear;
-(void)_stopGeneratingBlurredImages;
-(UIImage *)untreatedWallpaperImage;
-(BOOL)needsWallpaperDimmingTreatment;
-(id)imageForBackdropParameters:(SCD_Struct_SB17)arg1 includeTint:(BOOL)arg2 overrideTraitCollection:(id)arg3 ;
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(void)setVariant:(long long)arg1 ;
-(void)setWallpaperAnimationEnabled:(BOOL)arg1 ;
-(void)_addParallax;
-(void)setRotating:(BOOL)arg1 ;
-(double)contrastInRect:(CGRect)arg1 contrastWithinBoxes:(double*)arg2 contrastBetweenBoxes:(double*)arg3 ;
-(double)_contrastInContentViewRect:(CGRect)arg1 contrastWithinBoxes:(double*)arg2 contrastBetweenBoxes:(double*)arg3 ;
-(id<SBFWallpaperViewDelegate>)wallpaperDelegate;
-(double)zoomFactor;
-(BOOL)isDisplayingWallpaperWithConfiguration:(id)arg1 forVariant:(long long)arg2 ;
-(BOOL)sharesContentsAcrossVariants;
-(id)_averageColorInContentViewRect:(CGRect)arg1 smudgeRadius:(double)arg2 ;
-(BOOL)supportsCropping;
-(void)_handleVisibilityChange;
-(void)setTransformOptions:(unsigned long long)arg1 ;
-(NSString *)cacheGroup;
-(long long)wallpaperType;
-(BOOL)_isVisible;
-(void)setContentsRect:(CGRect)arg1 ;
-(void)_startGeneratingBlurredImages;
-(id)_backdrop_generateImageFromImage:(id)arg1 forBackdropParameters:(SCD_Struct_SB17)arg2 includeTint:(BOOL)arg3 traitCollection:(id)arg4 ;
-(void)resetLegibilitySettingsForAverageColor:(id)arg1 ;
-(BOOL)_isParallaxActive;
-(void)setDelegate:(id<SBFLegibilitySettingsProviderDelegate>)arg1 ;
-(double)cropZoomScale;
-(id)initWithFrame:(CGRect)arg1 configuration:(id)arg2 variant:(long long)arg3 cacheGroup:(id)arg4 delegate:(id)arg5 options:(unsigned long long)arg6 ;
-(void)_updateParallax;
-(void)setContinuousColorSamplingEnabled:(BOOL)arg1 ;
-(id)_fallbackImageWithOriginalSize:(CGSize)arg1 ;
-(BOOL)_dontUseShadow;
-(void)layoutSubviews;
-(void)setParallaxFactor:(double)arg1 ;
-(void)setZoomFactor:(double)arg1 ;
-(id)_imageForBackdropParameters:(SCD_Struct_SB17)arg1 includeTint:(BOOL)arg2 overrideTraitCollection:(id)arg3 ;
-(BOOL)hasContentOutsideVisibleBounds;
-(double)contentScaleFactor;
-(void)_updateLegibilitySettingsForAverageColor:(id)arg1 force:(BOOL)arg2 notify:(BOOL)arg3 ;
-(id)snapshotImage;
-(void)didMoveToWindow;
-(BOOL)continuousColorSamplingEnabled;
-(void)legibilitySettingsDidChange;
-(void)setCropRect:(CGRect)arg1 zoomScale:(double)arg2 ;
-(BOOL)wantsRasterization;
-(NSString *)wallpaperName;
-(NSString *)variantCacheIdentifier;
-(void)setSharesContentsAcrossVariants:(BOOL)arg1 ;
-(_UILegibilitySettings *)legibilitySettings;
-(void)setContentView:(UIView *)arg1 ;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(void)invalidate;
-(UIView *)contentView;
-(BOOL)isRotating;
-(void)dealloc;
-(BOOL)hasVideo;
@end

