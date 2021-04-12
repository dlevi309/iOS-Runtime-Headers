/*
* Generated on Thursday, January 14, 2021 at 2:25:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WallpaperKit.framework/WallpaperKit
*/


@protocol OS_dispatch_queue;
@class NSObject, NSFileManager, NSDictionary;

@interface WKLegacyWallpaperBundleLoader : NSObject {

	NSObject*<OS_dispatch_queue> __loadingQueue;
	NSFileManager* __fileManager;
	NSDictionary* __wallpaperBundleLookup;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> _loadingQueue;              //@synthesize _loadingQueue=__loadingQueue - In the implementation block
@property (nonatomic,retain) NSFileManager * _fileManager;                            //@synthesize _fileManager=__fileManager - In the implementation block
@property (nonatomic,retain) NSDictionary * _wallpaperBundleLookup;                   //@synthesize _wallpaperBundleLookup=__wallpaperBundleLookup - In the implementation block
+(id)legacyWallpaperDirectories;
+(id)defaultWallpaperBundleLoader;
-(id)init;
-(NSFileManager *)_fileManager;
-(NSObject*<OS_dispatch_queue>)_loadingQueue;
-(void)_loadAllValidWallpaperBundlesFromLegacyLocation;
-(void)set_wallpaperBundleLookup:(NSDictionary *)arg1 ;
-(NSDictionary *)_wallpaperBundleLookup;
-(id)wallpaperBundleForIdentifier:(long long)arg1 ;
-(void)set_loadingQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)set_fileManager:(NSFileManager *)arg1 ;
@end

