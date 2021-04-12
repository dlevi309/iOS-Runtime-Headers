/*
* Generated on Monday, March 1, 2021 at 2:32:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	long long _logicalContentOrientation;
	NSString* _cacheGroup;
	id<SBFWallpaperViewInternalObserver> _internalObserver;

}

@property (nonatomic,retain) UIImage * untreatedWallpaperImage;                                         //@synthesize untreatedWallpaperImage=_untreatedWallpaperImage - In the implementation block
@property (assign,nonatomic) long long logicalContentOrientation;                                       //@synthesize logicalContentOrientation=_logicalContentOrientation - In the implementation block
@property (nonatomic,copy,readonly) NSString * cacheGroup;                                              //@synthesize cacheGroup=_cacheGroup - In the implementation block
@property (nonatomic,copy,readonly) NSString * variantCacheIdentifier; 
@property (nonatomic,copy,readonly) NSString * cacheUniqueIdentifier; 
@property (assign,nonatomic,__weak) id<SBFWallpaperViewInternalObserver> internalObserver;              //@synthesize internalObserver=_internalObserver - In the implementation block
@property (nonatomic,readonly) BOOL needsImmediateLayoutBeforeRotation; 
@property (nonatomic,retain) UIView * contentView;                                                      //@synthesize contentView=_contentView - In the implementation block
@property (assign,nonatomic) long long variant;                                                         //@synthesize variant=_variant - In the implementation block
@property (nonatomic,readonly) long long wallpaperType; 
@property (nonatomic,readonly) long long wallpaperMode;                                                 //@synthesize wallpaperMode=_wallpaperMode - In the implementation block
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
+(Class)wallpaperViewClassForWallpaperType:(long long)arg1 ;
+(BOOL)_allowsRasterization;
+(BOOL)_shouldScaleForParallax;
+(Class)wallpaperViewClassForConfiguration:(id)arg1 ;
-(void)dealloc;
-(void)invalidate;
-(id<SBFLegibilitySettingsProviderDelegate>)delegate;
-(void)setDelegate:(id<SBFLegibilitySettingsProviderDelegate>)arg1 ;
-(long long)variant;
-(double)contrast;
-(double)contentScaleFactor;
-(void)setHidden:(BOOL)arg1 ;
-(UIView *)contentView;
-(void)setContentView:(UIView *)arg1 ;
-(void)layoutSubviews;
-(void)didMoveToWindow;
-(void)_updateScaleFactor;
-(BOOL)_isVisible;
-(BOOL)isRotating;
-(_UILegibilitySettings *)legibilitySettings;
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(void)setContentsRect:(CGRect)arg1 ;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(void)setRotating:(BOOL)arg1 ;
-(id)_displayedImage;
-(CGRect)cropRect;
-(void)setVariant:(long long)arg1 ;
-(BOOL)hasVideo;
-(double)zoomFactor;
-(NSString *)cacheGroup;
-(BOOL)parallaxEnabled;
-(void)setParallaxEnabled:(BOOL)arg1 ;
-(void)setZoomFactor:(double)arg1 ;
-(double)parallaxFactor;
-(BOOL)supportsCropping;
-(long long)wallpaperMode;
-(void)setParallaxFactor:(double)arg1 ;
-(long long)wallpaperType;
-(UIImage *)wallpaperImage;
-(id)initWithFrame:(CGRect)arg1 configuration:(id)arg2 variant:(long long)arg3 cacheGroup:(id)arg4 delegate:(id)arg5 options:(unsigned long long)arg6 ;
-(BOOL)isDisplayingWallpaperWithConfiguration:(id)arg1 forVariant:(long long)arg2 ;
-(id)_computeAverageColor;
-(id)averageColorInRect:(CGRect)arg1 withSmudgeRadius:(double)arg2 ;
-(double)contrastInRect:(CGRect)arg1 contrastWithinBoxes:(double*)arg2 contrastBetweenBoxes:(double*)arg3 ;
-(id)snapshotImage;
-(void)_updateContentViewScale;
-(NSString *)wallpaperName;
-(void)_notifyBlursInvalidated;
-(void)_handleVariantChange;
-(void)setWallpaperAnimationEnabled:(BOOL)arg1 ;
-(void)updateLegibilitySettingsForAverageColor:(id)arg1 ;
-(id)_imageForBackdropParameters:(SCD_Struct_SB17)arg1 includeTint:(BOOL)arg2 overrideTraitCollection:(id)arg3 ;
-(BOOL)wallpaperAnimationEnabled;
-(BOOL)_needsFallbackImageForBackdropGeneratedImage:(id)arg1 ;
-(void)_updateParallaxSettings;
-(void)_updateRasterizationState;
-(void)_updateLegibilitySettingsForAverageColor:(id)arg1 force:(BOOL)arg2 notify:(BOOL)arg3 ;
-(void)setZoomFactor:(double)arg1 withAnimationFactory:(id)arg2 ;
-(void)_beginDisallowRasterizationBlock;
-(void)_endDisallowRasterizationBlock;
-(void)setVariant:(long long)arg1 withAnimationFactory:(id)arg2 ;
-(void)_setLegibilitySettings:(id)arg1 notify:(BOOL)arg2 ;
-(id)_primaryColorOverride;
-(BOOL)_dontUseShadow;
-(void)legibilitySettingsDidChange;
-(id)_averageColorInContentViewRect:(CGRect)arg1 smudgeRadius:(double)arg2 ;
-(double)contrastInRect:(CGRect)arg1 ;
-(double)_contrastInContentViewRect:(CGRect)arg1 contrastWithinBoxes:(double*)arg2 contrastBetweenBoxes:(double*)arg3 ;
-(void)_updateGeneratingBlurs;
-(id)_blurredImage;
-(void)_handleVisibilityChange;
-(id)_generateImageFromImage:(id)arg1 forBackdropParameters:(SCD_Struct_SB17)arg2 includeTint:(BOOL)arg3 traitCollection:(id)arg4 ;
-(id)_cacheKeyForParameters:(SCD_Struct_SB17)arg1 includingTint:(BOOL)arg2 downsampleFactor:(double)arg3 traitCollection:(id)arg4 ;
-(id)_backdrop_generateImageFromImage:(id)arg1 forBackdropParameters:(SCD_Struct_SB17)arg2 includeTint:(BOOL)arg3 traitCollection:(id)arg4 ;
-(id)_material_generateImageFromImage:(id)arg1 forBackdropParameters:(SCD_Struct_SB17)arg2 traitCollection:(id)arg3 ;
-(id)_fallbackImageWithOriginalSize:(CGSize)arg1 ;
-(NSString *)cacheUniqueIdentifier;
-(NSString *)variantCacheIdentifier;
-(BOOL)sharesContentsAcrossVariants;
-(void)_applyParallaxSettings;
-(void)_startGeneratingBlurredImages;
-(void)_stopGeneratingBlurredImages;
-(void)_addParallax;
-(void)_removeParallax;
-(void)setCropRect:(CGRect)arg1 zoomScale:(double)arg2 ;
-(void)prepareToAppear;
-(void)prepareToDisappear;
-(double)cropZoomScale;
-(void)setTransformOptions:(unsigned long long)arg1 ;
-(void)resetLegibilitySettingsForAverageColor:(id)arg1 ;
-(void)setGeneratesBlurredImages:(BOOL)arg1 ;
-(id)blurredImage;
-(id)imageForBackdropParameters:(SCD_Struct_SB17)arg1 includeTint:(BOOL)arg2 overrideTraitCollection:(id)arg3 ;
-(void)preheatImageData;
-(BOOL)wantsRasterization;
-(BOOL)needsImmediateLayoutBeforeRotation;
-(BOOL)hasContentOutsideVisibleBounds;
-(id<SBFWallpaperViewDelegate>)wallpaperDelegate;
-(void)setWallpaperDelegate:(id<SBFWallpaperViewDelegate>)arg1 ;
-(UIImage *)untreatedWallpaperImage;
-(void)setUntreatedWallpaperImage:(UIImage *)arg1 ;
-(BOOL)continuousColorSamplingEnabled;
-(void)setContinuousColorSamplingEnabled:(BOOL)arg1 ;
-(void)setSharesContentsAcrossVariants:(BOOL)arg1 ;
-(unsigned long long)transformOptions;
-(long long)logicalContentOrientation;
-(void)setLogicalContentOrientation:(long long)arg1 ;
-(id<SBFWallpaperViewInternalObserver>)internalObserver;
-(void)setInternalObserver:(id<SBFWallpaperViewInternalObserver>)arg1 ;
@end

