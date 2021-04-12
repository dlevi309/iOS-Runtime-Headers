/*
* Generated on Thursday, January 14, 2021 at 2:23:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
*/

#import <SpringBoardFoundation/SpringBoardFoundation-Structs.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@protocol SBFWallpaperConfigurationManagerDelegate, SBFProceduralWallpaperProvider;
@class NSMutableDictionary, NSArray, SBFMagnifyMode, SBFWallpaperConfiguration, NSString;

@interface SBFWallpaperConfigurationManager : NSObject <BSDescriptionProviding> {

	NSMutableDictionary* _wallpaperImageCache;
	int _externalNotificationToken;
	unsigned long long _batchChangeCount;
	long long _batchNotifyVariants;
	BOOL _enableWallpaperDimming;
	BOOL _cachedVariantsShareWallpaperConfiguration;
	BOOL _cachedVariantsShareWallpaperConfigurationValid;
	NSArray* _dataStores;
	id<SBFWallpaperConfigurationManagerDelegate> _delegate;
	double _wallpaperScale;
	long long _wallpaperMode;
	long long _wallpaperSizeType;
	id<SBFProceduralWallpaperProvider> _proceduralWallpaperProvider;
	SBFMagnifyMode* _magnifyMode;
	CGSize _wallpaperSize;

}

@property (assign,nonatomic) BOOL cachedVariantsShareWallpaperConfiguration;                                                                           //@synthesize cachedVariantsShareWallpaperConfiguration=_cachedVariantsShareWallpaperConfiguration - In the implementation block
@property (assign,getter=isCachedVariantsShareWallpaperConfigurationValid,nonatomic) BOOL cachedVariantsShareWallpaperConfigurationValid;              //@synthesize cachedVariantsShareWallpaperConfigurationValid=_cachedVariantsShareWallpaperConfigurationValid - In the implementation block
@property (nonatomic,copy,readonly) NSArray * dataStores;                                                                                              //@synthesize dataStores=_dataStores - In the implementation block
@property (assign,nonatomic,__weak) id<SBFWallpaperConfigurationManagerDelegate> delegate;                                                             //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) CGSize wallpaperSize;                                                                                                   //@synthesize wallpaperSize=_wallpaperSize - In the implementation block
@property (nonatomic,readonly) CGSize wallpaperSizeIncludingParallaxOverhang; 
@property (nonatomic,readonly) double wallpaperScale;                                                                                                  //@synthesize wallpaperScale=_wallpaperScale - In the implementation block
@property (assign,nonatomic) long long wallpaperMode;                                                                                                  //@synthesize wallpaperMode=_wallpaperMode - In the implementation block
@property (assign,nonatomic) BOOL enableWallpaperDimming;                                                                                              //@synthesize enableWallpaperDimming=_enableWallpaperDimming - In the implementation block
@property (nonatomic,readonly) long long wallpaperSizeType;                                                                                            //@synthesize wallpaperSizeType=_wallpaperSizeType - In the implementation block
@property (nonatomic,readonly) long long parallaxDeviceType; 
@property (nonatomic,copy,readonly) SBFWallpaperConfiguration * lockScreenWallpaperConfiguration; 
@property (nonatomic,copy,readonly) SBFWallpaperConfiguration * homeScreenWallpaperConfiguration; 
@property (nonatomic,readonly) BOOL variantsShareWallpaperConfiguration; 
@property (nonatomic,readonly) unsigned long long numberOfCachedStaticImages; 
@property (assign,nonatomic,__weak) id<SBFProceduralWallpaperProvider> proceduralWallpaperProvider;                                                    //@synthesize proceduralWallpaperProvider=_proceduralWallpaperProvider - In the implementation block
@property (nonatomic,retain) SBFMagnifyMode * magnifyMode;                                                                                             //@synthesize magnifyMode=_magnifyMode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(void)regenerateStaticWallpaperThumbnailImages;
-(void)setWallpaperMode:(long long)arg1 ;
-(id)wallpaperConfigurationForVariant:(long long)arg1 includingValuesForTypes:(unsigned long long)arg2 wallpaperMode:(long long)arg3 ;
-(id)succinctDescription;
-(id)wallpaperImageForVariant:(long long)arg1 wallpaperMode:(long long)arg2 ;
-(BOOL)hasWallpaperImageForVariant:(long long)arg1 wallpaperMode:(long long)arg2 ;
-(id)init;
-(void)wallpaperDidChangeForVariants:(long long)arg1 shouldNotify:(BOOL)arg2 ;
-(void)beginChangeBatch;
-(id<SBFWallpaperConfigurationManagerDelegate>)delegate;
-(void)removeWallpaperGradientForVariants:(long long)arg1 ;
-(void)notifyDelegateOfChangesToVariants:(long long)arg1 ;
-(long long)wallpaperMode;
-(void)restoreDefaultWallpaperForAllVariantsAndNotify:(BOOL)arg1 ;
-(void)setProceduralWallpaperProvider:(id<SBFProceduralWallpaperProvider>)arg1 ;
-(BOOL)setWallpaperImage:(id)arg1 originalImage:(id)arg2 forVariants:(long long)arg3 options:(unsigned long long)arg4 ;
-(void)setCachedVariantsShareWallpaperConfiguration:(BOOL)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)removeWallpaperImageHashDataForVariants:(long long)arg1 ;
-(id)wallpaperOptionsForVariant:(long long)arg1 wallpaperMode:(long long)arg2 ;
-(void)performMigrationWithFailureHandler:(/*^block*/id)arg1 ;
-(id)lockScreenWallpaperConfigurationIncludingValuesForTypes:(unsigned long long)arg1 ;
-(void)setEnableWallpaperDimming:(BOOL)arg1 ;
-(void)removeAllDataExceptForTypes:(unsigned long long)arg1 variants:(long long)arg2 variantsShareWallpaperConfiguration:(BOOL)arg3 ;
-(void)regenerateThumbnailsIfNecessary;
-(double)wallpaperScale;
-(BOOL)setWallpaperImageHashData:(id)arg1 forVariants:(long long)arg2 wallpaperMode:(long long)arg3 ;
-(BOOL)safeMigrateWallpaperImageIfNecessaryForVariant:(long long)arg1 representingVariants:(long long)arg2 wallpaperMode:(long long)arg3 ;
-(BOOL)setWallpaperImage:(id)arg1 adjustedImage:(id)arg2 thumbnailData:(id)arg3 imageHashData:(id)arg4 wallpaperOptions:(id)arg5 forVariants:(long long)arg6 wallpaperMode:(long long)arg7 ;
-(SBFMagnifyMode *)magnifyMode;
-(void)clearCacheForVariants:(long long)arg1 memoryOnly:(BOOL)arg2 ;
-(void)clearDelayedChangeNotifications;
-(Class)proceduralWallpaperClassForIdentifier:(id)arg1 ;
-(CGRect)cropRectForViewPort:(CGRect)arg1 portrait:(BOOL)arg2 zoomScale:(double)arg3 parallaxFactor:(double)arg4 forImageSize:(CGSize)arg5 contentScaleFactor:(double)arg6 ;
-(void)setMagnifyMode:(SBFMagnifyMode *)arg1 ;
-(void)removeWallpaperOptionsForVariants:(long long)arg1 ;
-(void)regenerateThumbnailIfNecessaryForVariant:(long long)arg1 wallpaperMode:(long long)arg2 ;
-(void)setDelegate:(id<SBFWallpaperConfigurationManagerDelegate>)arg1 ;
-(id)wallpaperOriginalImageForVariant:(long long)arg1 wallpaperMode:(long long)arg2 ;
-(long long)effectiveSharedVariantForVariants:(long long)arg1 ;
-(id)initWithWallpaperDataStores:(id)arg1 wallpaperSize:(CGSize)arg2 scale:(double)arg3 sizeType:(long long)arg4 ;
-(BOOL)cachedVariantsShareWallpaperConfiguration;
-(BOOL)setWallpaperImage:(id)arg1 originalImage:(id)arg2 thumbnailData:(id)arg3 imageHashData:(id)arg4 wallpaperOptions:(id)arg5 forVariants:(long long)arg6 options:(unsigned long long)arg7 wallpaperMode:(long long)arg8 isMigrating:(BOOL)arg9 ;
-(void)removeWallpaperImagesForVariants:(long long)arg1 ;
-(NSString *)description;
-(BOOL)variantsShareWallpaperConfiguration;
-(BOOL)setVideoURL:(id)arg1 forVariant:(long long)arg2 shoudCrop:(BOOL)arg3 relativeCropRect:(CGRect)arg4 wallpaperMode:(long long)arg5 ;
-(void)removeWallpaperColorForVariants:(long long)arg1 ;
-(void)getBestCropRect:(out CGRect*)arg1 zoomScale:(out double*)arg2 forImageSize:(CGSize)arg3 portrait:(BOOL)arg4 parallaxFactor:(double)arg5 ;
-(id)wallpaperConfigurationForVariant:(long long)arg1 includingValuesForTypes:(unsigned long long)arg2 ;
-(BOOL)setWallpaperThumbnailFromFullsizeImage:(id)arg1 forVariant:(long long)arg2 wallpaperMode:(long long)arg3 ;
-(id<SBFProceduralWallpaperProvider>)proceduralWallpaperProvider;
-(id)wallpaperImageHashDataForVariant:(long long)arg1 wallpaperMode:(long long)arg2 ;
-(id)videoURLForVariant:(long long)arg1 wallpaperMode:(long long)arg2 ;
-(id)homeScreenWallpaperConfigurationIncludingValuesForTypes:(unsigned long long)arg1 ;
-(id)wallpaperThumbnailImageForVariant:(long long)arg1 wallpaperMode:(long long)arg2 ;
-(CGRect)cropRectForOldCropRect:(CGRect)arg1 portrait:(BOOL)arg2 zoomScale:(double)arg3 oldParallaxFactor:(double)arg4 forImageSize:(CGSize)arg5 newZoomScale:(double*)arg6 ;
-(BOOL)setWallpaperOptions:(id)arg1 forVariants:(long long)arg2 wallpaperMode:(long long)arg3 ;
-(id)thumbnailDataForImage:(id)arg1 ;
-(SBFWallpaperConfiguration *)lockScreenWallpaperConfiguration;
-(id)normalizeImage:(id)arg1 ;
-(id)wallpaperConfigurationForVariant:(long long)arg1 ;
-(void)removeWallpaperImagesForVariants:(long long)arg1 variantsShareWallpaperConfiguration:(BOOL)arg2 ;
-(NSArray *)dataStores;
-(void)removeVideoForVariants:(long long)arg1 ;
-(void)saveCroppedVideo:(id)arg1 toURL:(id)arg2 cropRect:(CGRect)arg3 completionHandler:(/*^block*/id)arg4 ;
-(long long)parallaxDeviceType;
-(id)wallpaperThumbnailImageForFulfillingLookupForConfiguration:(id)arg1 ;
-(long long)wallpaperTypeForSharedWallpaperConfigurationForTypes:(unsigned long long)arg1 ;
-(BOOL)setWallpaperGradient:(id)arg1 forVariants:(long long)arg2 ;
-(BOOL)setWallpaperColorName:(id)arg1 forVariants:(long long)arg2 ;
-(double)thumbnailWidth;
-(double)parallaxFactorForCropRect:(CGRect)arg1 portrait:(BOOL)arg2 forImageSize:(CGSize)arg3 zoomScale:(double)arg4 ;
-(void)endChangeBatch;
-(BOOL)setProceduralWallpaperIdentifier:(id)arg1 options:(id)arg2 forVariants:(long long)arg3 ;
-(CGSize)wallpaperSizeIncludingParallaxOverhang;
-(id)initWithWallpaperDataStores:(id)arg1 ;
-(void)clearCacheForVariants:(long long)arg1 ;
-(BOOL)setWallpaperThumbnailData:(id)arg1 forVariant:(long long)arg2 wallpaperMode:(long long)arg3 ;
-(void)wallpaperWillChangeForVariants:(long long)arg1 ;
-(id)proceduralWallpaperInfoForVariant:(long long)arg1 ;
-(BOOL)setWallpaperColor:(id)arg1 forVariants:(long long)arg2 ;
-(void)setCachedVariantsShareWallpaperConfigurationValid:(BOOL)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(void)safeMigrateWallpaperImageIfNecessary;
-(void)migrateWallpaperOptionsForImageIfNecessaryForVariant:(long long)arg1 representingVariants:(long long)arg2 ;
-(BOOL)setWallpaperThumbnailData:(id)arg1 forVariant:(long long)arg2 ;
-(id)migratedWallpaperOptionsForWallpaperOptions:(id)arg1 originalImageSize:(CGSize)arg2 ;
-(id)wallpaperThumbnailImageDataForVariant:(long long)arg1 wallpaperMode:(long long)arg2 ;
-(void)removeDataForTypes:(unsigned long long)arg1 variants:(long long)arg2 variantsShareWallpaperConfiguration:(BOOL)arg3 ;
-(id)succinctDescriptionBuilder;
-(id)wallpaperThumbnailImageDataForFulfillingLookupForConfiguration:(id)arg1 ;
-(BOOL)enableWallpaperDimming;
-(BOOL)setWallpaperImage:(id)arg1 wallpaperOptions:(id)arg2 forVariants:(long long)arg3 ;
-(id)cleanedProceduralWallpaperInfo:(id)arg1 ;
-(BOOL)isVideoSupportedByDefaultForVariant:(long long)arg1 ;
-(void)removeWallpaperImageDataTypes:(unsigned long long)arg1 forVariants:(long long)arg2 ;
-(BOOL)isVideoSupportedForVariant:(long long)arg1 ;
-(BOOL)setWallpaperOptions:(id)arg1 forVariants:(long long)arg2 ;
-(SBFWallpaperConfiguration *)homeScreenWallpaperConfiguration;
-(void)removeAllDataExceptForType:(long long)arg1 variants:(long long)arg2 variantsShareWallpaperConfiguration:(BOOL)arg3 ;
-(void)delayNotifyingChangeForVariants:(long long)arg1 ;
-(unsigned long long)numberOfCachedStaticImages;
-(id)fallbackWallpaperConfigurationForVarient:(long long)arg1 ;
-(void)setWallpaperBundle:(id)arg1 appearance:(id)arg2 ;
-(BOOL)variantsShareWallpaperConfigurationForTypes:(unsigned long long)arg1 ;
-(void)removeProceduralWallpaperForVariants:(long long)arg1 ;
-(BOOL)isInChangeBatch;
-(CGSize)wallpaperSize;
-(BOOL)isCachedVariantsShareWallpaperConfigurationValid;
-(void)dealloc;
-(BOOL)isProceduralWallpaperInfoValid:(id)arg1 ;
-(long long)wallpaperSizeType;
-(BOOL)setWallpaperConfigurationFromDefaultWallpaperConfiguration:(id)arg1 forVariants:(long long)arg2 wallpaperMode:(long long)arg3 name:(id)arg4 ;
-(id)wallpaperColorForVariant:(long long)arg1 fromDataStore:(id)arg2 colorName:(id*)arg3 ;
@end

