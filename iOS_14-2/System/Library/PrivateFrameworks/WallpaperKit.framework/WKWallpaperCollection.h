/*
* Generated on Thursday, January 14, 2021 at 2:25:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WallpaperKit.framework/WallpaperKit
*/


@class NSBundle, NSMutableArray, NSFileManager, NSMapTable, NSUUID, NSString;

@interface WKWallpaperCollection : NSObject {

	unsigned long long _source;
	NSBundle* __bundleForLocalizationResources;
	NSMutableArray* __wallpaperBundles;
	NSFileManager* __fileManager;
	NSMapTable* __wallpaperLookupTable;

}

@property (nonatomic,retain) NSBundle * _bundleForLocalizationResources;                       //@synthesize _bundleForLocalizationResources=__bundleForLocalizationResources - In the implementation block
@property (nonatomic,retain) NSMutableArray * _wallpaperBundles;                               //@synthesize _wallpaperBundles=__wallpaperBundles - In the implementation block
@property (nonatomic,retain) NSFileManager * _fileManager;                                     //@synthesize _fileManager=__fileManager - In the implementation block
@property (nonatomic,retain) NSMapTable * _wallpaperLookupTable;                               //@synthesize _wallpaperLookupTable=__wallpaperLookupTable - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * identifier; 
@property (nonatomic,copy,readonly) NSString * displayName; 
@property (nonatomic,readonly) long long numberOfWallpapers; 
@property (nonatomic,readonly) unsigned long long source;                                      //@synthesize source=_source - In the implementation block
@property (getter=isDynamicCollection,nonatomic,readonly) BOOL dynamicCollection; 
-(id)initWithSource:(unsigned long long)arg1 ;
-(NSFileManager *)_fileManager;
-(NSUUID *)identifier;
-(NSString *)displayName;
-(unsigned long long)source;
-(long long)numberOfWallpapers;
-(void)set_fileManager:(NSFileManager *)arg1 ;
-(void)set_bundleForLocalizationResources:(NSBundle *)arg1 ;
-(NSMutableArray *)_wallpaperBundles;
-(NSMapTable *)_wallpaperLookupTable;
-(NSBundle *)_bundleForLocalizationResources;
-(BOOL)isDynamicCollection;
-(id)wallpaperBundleAtIndex:(long long)arg1 ;
-(BOOL)containsWallpaperRepresentingWithIdentifier:(id)arg1 ;
-(id)wallpaperRepresentingWithIdentifier:(id)arg1 ;
-(void)set_wallpaperBundles:(NSMutableArray *)arg1 ;
-(void)set_wallpaperLookupTable:(NSMapTable *)arg1 ;
@end

