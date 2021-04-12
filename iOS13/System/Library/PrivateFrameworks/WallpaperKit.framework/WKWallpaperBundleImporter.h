/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WallpaperKit.framework/WallpaperKit
*/


@protocol OS_dispatch_queue;
@class NSObject, NSArray, NSDictionary;

@interface WKWallpaperBundleImporter : NSObject {

	NSObject*<OS_dispatch_queue> __bundleImportQueue;
	NSArray* __wallpaperTypesOrdering;
	NSDictionary* __wallpaperTypeToBundleCollection;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> _bundleImportQueue;              //@synthesize _bundleImportQueue=__bundleImportQueue - In the implementation block
@property (nonatomic,retain) NSArray * _wallpaperTypesOrdering;                            //@synthesize _wallpaperTypesOrdering=__wallpaperTypesOrdering - In the implementation block
@property (nonatomic,retain) NSDictionary * _wallpaperTypeToBundleCollection;              //@synthesize _wallpaperTypeToBundleCollection=__wallpaperTypeToBundleCollection - In the implementation block
@property (nonatomic,readonly) long long numberOfWallpaperBundleCollections; 
+(id)defaultWallpaperBundleImporter;
+(id)wallpapersConfigurationFileURL;
-(id)init;
-(long long)numberOfWallpaperBundleCollections;
-(unsigned long long)wallpaperTypeAtIndex:(unsigned long long)arg1 ;
-(id)wallpaperBundleCollectionForWallpaperType:(unsigned long long)arg1 ;
-(void)_raiseInvalidMetadataExceptionForMetadataKeypath:(id)arg1 ;
-(id)wallpaperBundleWithIdentifier:(unsigned long long)arg1 ;
-(NSObject*<OS_dispatch_queue>)_bundleImportQueue;
-(void)_loadWallpapersFromDisk;
-(NSArray *)_wallpaperTypesOrdering;
-(NSDictionary *)_wallpaperTypeToBundleCollection;
-(void)set_bundleImportQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)set_wallpaperTypesOrdering:(NSArray *)arg1 ;
-(void)set_wallpaperTypeToBundleCollection:(NSDictionary *)arg1 ;
@end

