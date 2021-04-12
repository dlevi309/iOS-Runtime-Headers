/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/


@class NSURL;

@interface HFWallpaperFileManager : NSObject {

	NSURL* _wallpaperFolderURL;

}

@property (nonatomic,retain) NSURL * wallpaperFolderURL;              //@synthesize wallpaperFolderURL=_wallpaperFolderURL - In the implementation block
-(id)init;
-(NSURL *)wallpaperFolderURL;
-(void)setWallpaperFolderURL:(NSURL *)arg1 ;
-(id)filenameForWallpaper:(id)arg1 ;
-(BOOL)originalImageExistsForWallpaper:(id)arg1 ;
-(id)originalImageForWallpaper:(id)arg1 ;
-(void)saveOriginalImage:(id)arg1 forWallpaper:(id)arg2 ;
-(void)pruneUnusedOriginalWallpaperImages:(id)arg1 ;
@end

