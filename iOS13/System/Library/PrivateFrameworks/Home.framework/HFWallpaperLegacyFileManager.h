/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/


@class NSURL;

@interface HFWallpaperLegacyFileManager : NSObject {

	NSURL* _wallpaperFolderURL;

}

@property (nonatomic,retain) NSURL * wallpaperFolderURL;              //@synthesize wallpaperFolderURL=_wallpaperFolderURL - In the implementation block
-(id)init;
-(NSURL *)wallpaperFolderURL;
-(id)filenameForType:(long long)arg1 variant:(long long)arg2 ;
-(void)migrateCache:(/*^block*/id)arg1 ;
-(id)clearAllWallpapers;
-(void)setWallpaperFolderURL:(NSURL *)arg1 ;
@end

