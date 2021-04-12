/*
* Generated on Monday, March 1, 2021 at 2:32:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
*/


@protocol SBFWallpaperDataStore <NSObject>
@required
-(BOOL)setWallpaperColorName:(id)arg1 forVariants:(long long)arg2;
-(BOOL)setWallpaperGradient:(id)arg1 forVariants:(long long)arg2;
-(id)wallpaperOptionsForVariant:(long long)arg1 wallpaperMode:(long long)arg2;
-(id)wallpaperColorNameForVariant:(long long)arg1;
-(id)wallpaperImageForVariant:(long long)arg1 wallpaperMode:(long long)arg2;
-(BOOL)hasWallpaperImageForVariant:(long long)arg1 wallpaperMode:(long long)arg2;
-(id)wallpaperOriginalImageForVariant:(long long)arg1 wallpaperMode:(long long)arg2;
-(id)wallpaperThumbnailDataForVariant:(long long)arg1 wallpaperMode:(long long)arg2;
-(BOOL)setWallpaperImage:(id)arg1 forVariant:(long long)arg2 wallpaperMode:(long long)arg3;
-(BOOL)setWallpaperOriginalImage:(id)arg1 forVariant:(long long)arg2 wallpaperMode:(long long)arg3;
-(BOOL)setWallpaperThumbnailData:(id)arg1 forVariant:(long long)arg2 wallpaperMode:(long long)arg3;
-(void)moveWallpaperImageDataTypes:(unsigned long long)arg1 fromVariant:(long long)arg2 toVariant:(long long)arg3;
-(void)removeWallpaperImageDataTypes:(unsigned long long)arg1 forVariants:(long long)arg2;
-(BOOL)setWallpaperImageHashData:(id)arg1 forVariants:(long long)arg2 wallpaperMode:(long long)arg3;
-(id)wallpaperImageHashDataForVariant:(long long)arg1 wallpaperMode:(long long)arg2;
-(void)removeWallpaperImageHashDataForVariants:(long long)arg1;
-(id)unverifiedVideoURLForVariant:(long long)arg1 wallpaperMode:(long long)arg2;
-(id)verifiedVideoURLForVariant:(long long)arg1 wallpaperMode:(long long)arg2;
-(id)verifiedOriginalVideoURLForVariant:(long long)arg1 wallpaperMode:(long long)arg2;
-(BOOL)setVideoURL:(id)arg1 forVariant:(long long)arg2 wallpaperMode:(long long)arg3;
-(BOOL)setOriginalVideoURL:(id)arg1 forVariant:(long long)arg2 wallpaperMode:(long long)arg3;
-(void)removeVideoForVariant:(long long)arg1;
-(id)proceduralWallpaperInfoForVariant:(long long)arg1;
-(BOOL)setProceduralWallpaperInfo:(id)arg1 forVariants:(long long)arg2;
-(void)removeProceduralWallpaperForVariants:(long long)arg1;
-(BOOL)setWallpaperOptions:(id)arg1 forVariants:(long long)arg2 wallpaperMode:(long long)arg3;
-(void)removeWallpaperOptionsForVariants:(long long)arg1;
-(id)wallpaperColorForVariant:(long long)arg1;
-(BOOL)setWallpaperColor:(id)arg1 forVariants:(long long)arg2;
-(void)removeWallpaperColorForVariants:(long long)arg1;
-(id)wallpaperGradientForVariant:(long long)arg1;
-(void)removeWallpaperGradientForVariants:(long long)arg1;

@end

