/*
* Generated on Monday, March 1, 2021 at 2:35:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol SBWallpaperServerDelegate <NSObject>
@required
-(void)wallpaperServer:(id)arg1 fetchThumbnailDataForVariant:(long long)arg2 completionHandler:(/*^block*/id)arg3;
-(void)wallpaperServer:(id)arg1 setWallpaperVideoWithWallpaperMode:(id)arg2 cropRect:(CGRect)arg3 wallpaperMode:(long long)arg4 completionHandler:(/*^block*/id)arg5;
-(void)wallpaperServer:(id)arg1 setWallpaperColorName:(id)arg2 forVariants:(long long)arg3 completionHandler:(/*^block*/id)arg4;
-(void)wallpaperServer:(id)arg1 setWallpaperGradient:(id)arg2 forVariants:(long long)arg3 completionHandler:(/*^block*/id)arg4;
-(void)wallpaperServer:(id)arg1 restoreDefaultWallpaperWithCompletionHandler:(/*^block*/id)arg2;

@end

