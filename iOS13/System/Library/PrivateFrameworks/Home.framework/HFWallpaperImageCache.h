/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/


@protocol HMFLocking, HFProcessedWallpaperSource;
@class BSUIMappedImageCache, NSArray;

@interface HFWallpaperImageCache : NSObject {

	id<HMFLocking> _lock;
	id<HFProcessedWallpaperSource> _processedWallpaperSource;
	BSUIMappedImageCache* _imageCache;

}

@property (nonatomic,retain) BSUIMappedImageCache * imageCache;                          //@synthesize imageCache=_imageCache - In the implementation block
@property (retain) id<HFProcessedWallpaperSource> processedWallpaperSource;              //@synthesize processedWallpaperSource=_processedWallpaperSource - In the implementation block
@property (nonatomic,readonly) NSArray * supportedProcessedVariants; 
-(id)init;
-(BSUIMappedImageCache *)imageCache;
-(void)setImageCache:(BSUIMappedImageCache *)arg1 ;
-(void)setProcessedWallpaperSource:(id<HFProcessedWallpaperSource>)arg1 ;
-(id<HFProcessedWallpaperSource>)processedWallpaperSource;
-(id)imageForVariant:(long long)arg1 wallpaper:(id)arg2 withOriginalImageGenerator:(/*^block*/id)arg3 ;
-(NSArray *)supportedProcessedVariants;
-(void)saveVariantsForWallpaper:(id)arg1 originalImage:(id)arg2 ;
-(void)pruneUnusedWallpaperVariants:(id)arg1 ;
-(id)_cacheKeyForWallpaper:(id)arg1 withVariant:(long long)arg2 ;
@end

