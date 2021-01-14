/*
* Generated on Thursday, January 14, 2021 at 2:25:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol SBWallpaperServerDelegate <NSObject>
@required
-(void)wallpaperServer:(id)arg1 setWallpaperColor:(id)arg2 darkColor:(id)arg3 forVariants:(long long)arg4 completionHandler:(/*^block*/id)arg5;
-(void)wallpaperServer:(id)arg1 fetchOriginalVideoURLDataForVariant:(long long)arg2 completionHandler:(/*^block*/id)arg3;
-(void)wallpaperServer:(id)arg1 restoreDefaultWallpaperWithCompletionHandler:(/*^block*/id)arg2;
-(void)wallpaperServer:(id)arg1 fetchThumbnailDataForVariant:(long long)arg2 completionHandler:(/*^block*/id)arg3;
-(void)wallpaperServer:(id)arg1 fetchOriginalImageDataForVariant:(long long)arg2 completionHandler:(/*^block*/id)arg3;
-(void)wallpaperServer:(id)arg1 setWallpaperColorName:(id)arg2 forVariants:(long long)arg3 completionHandler:(/*^block*/id)arg4;
-(void)wallpaperServer:(id)arg1 fetchContentCutoutBoundsForVariant:(long long)arg2 orientation:(long long)arg3 completionHandler:(/*^block*/id)arg4;
-(void)wallpaperServer:(id)arg1 setWallpaperGradient:(id)arg2 forVariants:(long long)arg3 completionHandler:(/*^block*/id)arg4;
-(void)wallpaperServer:(id)arg1 setWallpaperVideoWithWallpaperMode:(id)arg2 cropRect:(CGRect)arg3 wallpaperMode:(long long)arg4 completionHandler:(/*^block*/id)arg5;

@end

