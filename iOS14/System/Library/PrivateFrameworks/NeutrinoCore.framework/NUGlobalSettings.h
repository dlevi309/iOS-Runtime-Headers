/*
* Generated on Thursday, January 14, 2021 at 2:25:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface NUGlobalSettings : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _settings;

}
+(unsigned long long)videoCompositorDebugMode;
+(void)setImageSourceDisableRAW:(BOOL)arg1 ;
+(void)setVideoCompositorDebugMode:(unsigned long long)arg1 ;
+(BOOL)allAssetsCanUseHDRPipeline;
+(void)setTileAssemblyCABased:(BOOL)arg1 ;
+(void)setRunNeutrinoSynchronously:(BOOL)arg1 ;
+(void)setDisablePacked10BitPixelFormats:(BOOL)arg1 ;
+(BOOL)runNeutrinoSynchronously;
+(void)setAllAssetsCanUseHDRPipeline:(BOOL)arg1 ;
+(void)reset;
+(BOOL)deviceDisableMetal;
+(id)globalSettings;
+(BOOL)disablePacked10BitPixelFormats;
+(void)setCacheNodeDirectoryURL:(id)arg1 ;
+(BOOL)deviceDisableOpenGL;
+(BOOL)devicePrintRenderer;
+(void)setDevicePrintRenderer:(BOOL)arg1 ;
+(long long)deviceDefaultSampleMode;
+(void)setDeviceDefaultSampleMode:(long long)arg1 ;
+(long long)storagePoolNonPurgeableLimit;
+(void)setStoragePoolNonPurgeableLimit:(long long)arg1 ;
+(long long)storagePoolPurgeableLimit;
+(void)setStoragePoolPurgeableLimit:(long long)arg1 ;
+(double)storagePoolMigrationDelay;
+(void)setStoragePoolMigrationDelay:(double)arg1 ;
+(BOOL)surfaceStorageFactoryUsePool;
+(void)setSurfaceStorageFactoryUsePool:(BOOL)arg1 ;
+(BOOL)bufferStorageFactoryUsePool;
+(void)setBufferStorageFactoryUsePool:(BOOL)arg1 ;
+(BOOL)imageRenderJobUseSurfaceRenderer;
+(void)setImageRenderJobUseSurfaceRenderer:(BOOL)arg1 ;
+(BOOL)imageRenderJobUseTextureRenderer;
+(void)setImageRenderJobUseTextureRenderer:(BOOL)arg1 ;
+(double)renderJSPipelineTimeout;
+(void)setRenderJSPipelineTimeout:(double)arg1 ;
+(BOOL)rendererUseHalfFloat;
+(void)setRendererUseHalfFloat:(BOOL)arg1 ;
+(BOOL)rendererClampToAlpha;
+(void)setRendererClampToAlpha:(BOOL)arg1 ;
+(BOOL)rendererUseP3Linear;
+(void)setRendererUseP3Linear:(BOOL)arg1 ;
+(long long)imageTileSize;
+(void)setImageTileSize:(long long)arg1 ;
+(long long)imageTileBorder;
+(void)setImageTileBorder:(long long)arg1 ;
+(BOOL)imageSourceDisableRAW;
+(BOOL)imageSourceDisableCacheImmediately;
+(void)setImageSourceDisableCacheImmediately:(BOOL)arg1 ;
+(long long)cacheNodeCacheSizeLimit;
+(void)setCacheNodeCacheSizeLimit:(long long)arg1 ;
+(long long)cacheNodeFilePermissions;
+(void)setCacheNodeFilePermissions:(long long)arg1 ;
+(double)cacheNodeImageCompression;
+(void)setCacheNodeImageCompression:(double)arg1 ;
+(BOOL)isViewDebugEnabled;
+(void)setViewDebugEnabled:(BOOL)arg1 ;
+(id)cacheNodeDirectoryURL;
+(BOOL)renderVideoLive;
+(void)setRenderVideoLive:(BOOL)arg1 ;
+(BOOL)platformHasWideColor;
+(void)setPlatformHasWideColor:(BOOL)arg1 ;
+(id)pipelineSourceURL;
+(void)setPipelineSourceURL:(id)arg1 ;
+(BOOL)imageLayerDebug;
+(void)setImageLayerDebug:(BOOL)arg1 ;
+(BOOL)displayDisableDeepColor;
+(void)setDisplayDisableDeepColor:(BOOL)arg1 ;
+(BOOL)displayForceDeepColor;
+(void)setDisplayForceDeepColor:(BOOL)arg1 ;
+(BOOL)displayDisableColorMatching;
+(void)setDisplayDisableColorMatching:(BOOL)arg1 ;
+(BOOL)renderTransparencyOverBlack;
+(void)setRenderTransparencyOverBlack:(BOOL)arg1 ;
+(BOOL)renderTransparencyOpaque;
+(void)setRenderTransparencyOpaque:(BOOL)arg1 ;
+(void)setUpCacheNodeDirectoryWithComponent:(id)arg1 ;
+(BOOL)logPeakRenderCIUsuage;
+(void)setLogPeakRenderCIUsuage:(BOOL)arg1 ;
+(BOOL)tileAssemblyCABased;
+(BOOL)enableHDRSupport;
+(void)setEnableHDRSupport:(BOOL)arg1 ;
+(double)HLGOpticalScale;
+(BOOL)alwaysRequireHardwareVideoEncoder;
+(void)setAlwaysRequireHardwareVideoEncoder:(BOOL)arg1 ;
-(id)init;
-(void)setSetting:(id)arg1 forKey:(id)arg2 ;
-(void)reset;
-(id)settingForKey:(id)arg1 defaultValue:(/*^block*/id)arg2 ;
-(id)_settingForKey:(id)arg1 defaultValue:(/*^block*/id)arg2 ;
-(BOOL)boolSettingForKey:(id)arg1 defaultValue:(/*^block*/id)arg2 ;
-(long long)integerSettingForKey:(id)arg1 defaultValue:(/*^block*/id)arg2 ;
-(double)doubleSettingForKey:(id)arg1 defaultValue:(/*^block*/id)arg2 ;
-(id)stringSettingForKey:(id)arg1 defaultValue:(/*^block*/id)arg2 ;
-(id)urlSettingForKey:(id)arg1 defaultValue:(/*^block*/id)arg2 ;
@end

