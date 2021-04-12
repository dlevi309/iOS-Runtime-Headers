/*
* Generated on Monday, March 1, 2021 at 2:32:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(id<SBFWallpaperConfigurationManagerDelegate>)delegate;
-(void)setDelegate:(id<SBFWallpaperConfigurationManagerDelegate>)arg1 ;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(BOOL)setWallpaperColorName:(id)arg1 forVariants:(long long)arg2 ;
-(BOOL)setWallpaperGradient:(id)arg1 forVariants:(long long)arg2 ;
-(double)thumbnailWidth;
-(long long)wallpaperMode;
-(void)setWallpaperMode:(long long)arg1 ;
-(id)wallpaperOptionsForVariant:(long long)arg1 wallpaperMode:(long long)arg2 ;
-(id)wallpaperImageForVariant:(long long)arg1 wallpaperMode:(long long)arg2 ;
-(BOOL)hasWallpaperImageForVariant:(long long)arg1 wallpaperMode:(long long)arg2 ;
-(id)wallpaperOriginalImageForVariant:(long long)arg1 wallpaperMode:(long long)arg2 ;
-(BOOL)setWallpaperThumbnailData:(id)arg1 forVariant:(long long)arg2 wallpaperMode:(long long)arg3 ;
-(void)removeWallpaperImageDataTypes:(unsigned long long)arg1 forVariants:(long long)arg2 ;
-(BOOL)setWallpaperImageHashData:(id)arg1 forVariants:(long long)arg2 wallpaperMode:(long long)arg3 ;
-(id)wallpaperImageHashDataForVariant:(long long)arg1 wallpaperMode:(long long)arg2 ;
-(void)removeWallpaperImageHashDataForVariants:(long long)arg1 ;
-(id)proceduralWallpaperInfoForVariant:(long long)arg1 ;
-(void)removeProceduralWallpaperForVariants:(long long)arg1 ;
-(BOOL)setWallpaperOptions:(id)arg1 forVariants:(long long)arg2 wallpaperMode:(long long)arg3 ;
-(void)removeWallpaperOptionsForVariants:(long long)arg1 ;
-(BOOL)setWallpaperColor:(id)arg1 forVariants:(long long)arg2 ;
-(void)removeWallpaperColorForVariants:(long long)arg1 ;
-(void)removeWallpaperGradientForVariants:(long long)arg1 ;
-(id)wallpaperConfigurationForVariant:(long long)arg1 includingValuesForTypes:(unsigned long long)arg2 wallpaperMode:(long long)arg3 ;
-(id)wallpaperConfigurationForVariant:(long long)arg1 includingValuesForTypes:(unsigned long long)arg2 ;
-(void)clearCacheForVariants:(long long)arg1 ;
-(id)initWithWallpaperDataStores:(id)arg1 wallpaperSize:(CGSize)arg2 scale:(double)arg3 sizeType:(long long)arg4 ;
-(id)initWithWallpaperDataStores:(id)arg1 ;
-(long long)wallpaperSizeType;
-(CGSize)wallpaperSize;
-(long long)parallaxDeviceType;
-(void)notifyDelegateOfChangesToVariants:(long long)arg1 ;
-(BOOL)isInChangeBatch;
-(BOOL)isVideoSupportedByDefaultForVariant:(long long)arg1 ;
-(BOOL)isVideoSupportedForVariant:(long long)arg1 ;
-(NSArray *)dataStores;
-(BOOL)isProceduralWallpaperInfoValid:(id)arg1 ;
-(id)cleanedProceduralWallpaperInfo:(id)arg1 ;
-(id)wallpaperColorForVariant:(long long)arg1 fromDataStore:(id)arg2 colorName:(id*)arg3 ;
-(id)fallbackWallpaperConfigurationForVarient:(long long)arg1 ;
-(id)wallpaperThumbnailImageForFulfillingLookupForConfiguration:(id)arg1 ;
-(id)wallpaperThumbnailImageDataForFulfillingLookupForConfiguration:(id)arg1 ;
-(id)wallpaperConfigurationForVariant:(long long)arg1 ;
-(BOOL)variantsShareWallpaperConfigurationForTypes:(unsigned long long)arg1 ;
-(id)wallpaperThumbnailImageDataForVariant:(long long)arg1 wallpaperMode:(long long)arg2 ;
-(id)wallpaperThumbnailImageForVariant:(long long)arg1 wallpaperMode:(long long)arg2 ;
-(double)wallpaperScale;
-(BOOL)setWallpaperImage:(id)arg1 adjustedImage:(id)arg2 thumbnailData:(id)arg3 wallpaperOptions:(id)arg4 forVariants:(long long)arg5 wallpaperMode:(long long)arg6 ;
-(BOOL)setWallpaperImage:(id)arg1 originalImage:(id)arg2 thumbnailData:(id)arg3 wallpaperOptions:(id)arg4 forVariants:(long long)arg5 options:(unsigned long long)arg6 wallpaperMode:(long long)arg7 isMigrating:(BOOL)arg8 ;
-(id)normalizeImage:(id)arg1 ;
-(id)hashDataForImage:(id)arg1 ;
-(id)thumbnailDataForImage:(id)arg1 ;
-(long long)effectiveSharedVariantForVariants:(long long)arg1 ;
-(void)wallpaperWillChangeForVariants:(long long)arg1 ;
-(void)removeAllDataExceptForTypes:(unsigned long long)arg1 variants:(long long)arg2 variantsShareWallpaperConfiguration:(BOOL)arg3 ;
-(void)wallpaperDidChangeForVariants:(long long)arg1 shouldNotify:(BOOL)arg2 ;
-(BOOL)variantsShareWallpaperConfiguration;
-(void)removeWallpaperImagesForVariants:(long long)arg1 variantsShareWallpaperConfiguration:(BOOL)arg2 ;
-(BOOL)isCachedVariantsShareWallpaperConfigurationValid;
-(BOOL)cachedVariantsShareWallpaperConfiguration;
-(void)setCachedVariantsShareWallpaperConfiguration:(BOOL)arg1 ;
-(void)setCachedVariantsShareWallpaperConfigurationValid:(BOOL)arg1 ;
-(long long)wallpaperTypeForSharedWallpaperConfigurationForTypes:(unsigned long long)arg1 ;
-(void)beginChangeBatch;
-(void)removeDataForTypes:(unsigned long long)arg1 variants:(long long)arg2 variantsShareWallpaperConfiguration:(BOOL)arg3 ;
-(BOOL)setWallpaperConfigurationFromDefaultWallpaperConfigurationSet:(id)arg1 ;
-(BOOL)setWallpaperConfigurationFromDefaultWallpaperConfiguration:(id)arg1 forVariants:(long long)arg2 wallpaperMode:(long long)arg3 name:(id)arg4 ;
-(void)clearDelayedChangeNotifications;
-(void)endChangeBatch;
-(BOOL)setWallpaperImage:(id)arg1 originalImage:(id)arg2 forVariants:(long long)arg3 options:(unsigned long long)arg4 ;
-(BOOL)setVideoURL:(id)arg1 forVariant:(long long)arg2 shoudCrop:(BOOL)arg3 relativeCropRect:(CGRect)arg4 wallpaperMode:(long long)arg5 ;
-(void)restoreDefaultWallpaperForAllVariantsAndNotify:(BOOL)arg1 ;
-(void)migrateWallpaperOptionsForImageIfNecessaryForVariant:(long long)arg1 representingVariants:(long long)arg2 ;
-(void)safeMigrateWallpaperImageIfNecessary;
-(void)regenerateThumbnailsIfNecessary;
-(id)migratedWallpaperOptionsForWallpaperOptions:(id)arg1 originalImageSize:(CGSize)arg2 ;
-(SBFMagnifyMode *)magnifyMode;
-(CGRect)cropRectForOldCropRect:(CGRect)arg1 portrait:(BOOL)arg2 zoomScale:(double)arg3 oldParallaxFactor:(double)arg4 forImageSize:(CGSize)arg5 newZoomScale:(double*)arg6 ;
-(double)parallaxFactorForCropRect:(CGRect)arg1 portrait:(BOOL)arg2 forImageSize:(CGSize)arg3 zoomScale:(double)arg4 ;
-(BOOL)safeMigrateWallpaperImageIfNecessaryForVariant:(long long)arg1 representingVariants:(long long)arg2 wallpaperMode:(long long)arg3 ;
-(BOOL)setWallpaperThumbnailFromFullsizeImage:(id)arg1 forVariant:(long long)arg2 wallpaperMode:(long long)arg3 ;
-(void)regenerateThumbnailIfNecessaryForVariant:(long long)arg1 wallpaperMode:(long long)arg2 ;
-(void)saveCroppedVideo:(id)arg1 toURL:(id)arg2 cropRect:(CGRect)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id<SBFProceduralWallpaperProvider>)proceduralWallpaperProvider;
-(Class)proceduralWallpaperClassForIdentifier:(id)arg1 ;
-(void)removeAllDataExceptForType:(long long)arg1 variants:(long long)arg2 variantsShareWallpaperConfiguration:(BOOL)arg3 ;
-(void)removeVideoForVariants:(long long)arg1 ;
-(void)delayNotifyingChangeForVariants:(long long)arg1 ;
-(CGRect)cropRectForViewPort:(CGRect)arg1 portrait:(BOOL)arg2 zoomScale:(double)arg3 parallaxFactor:(double)arg4 forImageSize:(CGSize)arg5 contentScaleFactor:(double)arg6 ;
-(CGSize)wallpaperSizeIncludingParallaxOverhang;
-(id)lockScreenWallpaperConfigurationIncludingValuesForTypes:(unsigned long long)arg1 ;
-(id)homeScreenWallpaperConfigurationIncludingValuesForTypes:(unsigned long long)arg1 ;
-(SBFWallpaperConfiguration *)lockScreenWallpaperConfiguration;
-(SBFWallpaperConfiguration *)homeScreenWallpaperConfiguration;
-(BOOL)setWallpaperImage:(id)arg1 wallpaperOptions:(id)arg2 forVariants:(long long)arg3 ;
-(BOOL)setWallpaperThumbnailData:(id)arg1 forVariant:(long long)arg2 ;
-(void)removeWallpaperImagesForVariants:(long long)arg1 ;
-(BOOL)setWallpaperOptions:(id)arg1 forVariants:(long long)arg2 ;
-(unsigned long long)numberOfCachedStaticImages;
-(void)performMigrationWithFailureHandler:(/*^block*/id)arg1 ;
-(void)regenerateStaticWallpaperThumbnailImages;
-(id)videoURLForVariant:(long long)arg1 wallpaperMode:(long long)arg2 ;
-(BOOL)setProceduralWallpaperIdentifier:(id)arg1 options:(id)arg2 forVariants:(long long)arg3 ;
-(void)getBestCropRect:(out CGRect*)arg1 zoomScale:(out double*)arg2 forImageSize:(CGSize)arg3 portrait:(BOOL)arg4 parallaxFactor:(double)arg5 ;
-(BOOL)enableWallpaperDimming;
-(void)setEnableWallpaperDimming:(BOOL)arg1 ;
-(void)setProceduralWallpaperProvider:(id<SBFProceduralWallpaperProvider>)arg1 ;
-(void)setMagnifyMode:(SBFMagnifyMode *)arg1 ;
@end

