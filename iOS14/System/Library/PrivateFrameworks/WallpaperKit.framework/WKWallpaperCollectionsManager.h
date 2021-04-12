/*
* Generated on Thursday, January 14, 2021 at 2:25:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WallpaperKit.framework/WallpaperKit
*/


@class NSFileManager, NSNotificationCenter, NSMutableArray, NSMapTable;

@interface WKWallpaperCollectionsManager : NSObject {

	NSFileManager* __fileManager;
	NSNotificationCenter* __notificationCenter;
	NSMutableArray* __wallpaperCollections;
	NSMapTable* __wallpaperCollectionLookupTable;

}

@property (nonatomic,retain) NSFileManager * _fileManager;                              //@synthesize _fileManager=__fileManager - In the implementation block
@property (nonatomic,retain) NSNotificationCenter * _notificationCenter;                //@synthesize _notificationCenter=__notificationCenter - In the implementation block
@property (nonatomic,retain) NSMutableArray * _wallpaperCollections;                    //@synthesize _wallpaperCollections=__wallpaperCollections - In the implementation block
@property (nonatomic,retain) NSMapTable * _wallpaperCollectionLookupTable;              //@synthesize _wallpaperCollectionLookupTable=__wallpaperCollectionLookupTable - In the implementation block
@property (nonatomic,readonly) long long numberOfWallpaperCollections; 
+(id)defaultWallpaperCollectionsManager;
-(id)init;
-(NSFileManager *)_fileManager;
-(NSNotificationCenter *)_notificationCenter;
-(void)set_notificationCenter:(NSNotificationCenter *)arg1 ;
-(void)set_fileManager:(NSFileManager *)arg1 ;
-(id)wallpaperCollectionWithIdentifier:(id)arg1 ;
-(void)_loadCollections;
-(void)_loadSystemWallpaperCollections;
-(NSMutableArray *)_wallpaperCollections;
-(NSMapTable *)_wallpaperCollectionLookupTable;
-(long long)numberOfWallpaperCollections;
-(id)wallpaperCollectionAtIndex:(long long)arg1 ;
-(void)set_wallpaperCollections:(NSMutableArray *)arg1 ;
-(void)set_wallpaperCollectionLookupTable:(NSMapTable *)arg1 ;
@end

