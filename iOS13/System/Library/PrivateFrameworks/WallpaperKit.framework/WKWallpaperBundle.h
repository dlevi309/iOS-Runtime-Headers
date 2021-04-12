/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WallpaperKit.framework/WallpaperKit
*/


@class NSString, NSURL, NSMutableDictionary;

@interface WKWallpaperBundle : NSObject {

	BOOL _appearanceAware;
	BOOL _distintWallpapersForLocations;
	BOOL _dynamicWallpaperBundle;
	unsigned long long _version;
	unsigned long long _identifier;
	NSString* _name;
	NSString* _family;
	NSURL* _thumbnailImageURL;
	NSURL* __bundleURL;
	NSMutableDictionary* __defaultAppearanceWallpapers;
	NSMutableDictionary* __darkAppearanceWallpapers;

}

@property (nonatomic,retain) NSURL * _bundleURL;                                                                        //@synthesize _bundleURL=__bundleURL - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * _defaultAppearanceWallpapers;                                        //@synthesize _defaultAppearanceWallpapers=__defaultAppearanceWallpapers - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * _darkAppearanceWallpapers;                                           //@synthesize _darkAppearanceWallpapers=__darkAppearanceWallpapers - In the implementation block
@property (nonatomic,readonly) unsigned long long version;                                                              //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) unsigned long long identifier;                                                           //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                                                                    //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * family;                                                                  //@synthesize family=_family - In the implementation block
@property (nonatomic,copy,readonly) NSURL * thumbnailImageURL;                                                          //@synthesize thumbnailImageURL=_thumbnailImageURL - In the implementation block
@property (getter=isAppearanceAware,nonatomic,readonly) BOOL appearanceAware;                                           //@synthesize appearanceAware=_appearanceAware - In the implementation block
@property (getter=hasDistintWallpapersForLocations,nonatomic,readonly) BOOL distintWallpapersForLocations;              //@synthesize distintWallpapersForLocations=_distintWallpapersForLocations - In the implementation block
@property (getter=isDynamicWallpaperBundle,nonatomic,readonly) BOOL dynamicWallpaperBundle;                             //@synthesize dynamicWallpaperBundle=_dynamicWallpaperBundle - In the implementation block
+(BOOL)shouldLoadWallpaperBundleAtURL:(id)arg1 ;
-(NSString *)name;
-(id)initWithURL:(id)arg1 ;
-(unsigned long long)identifier;
-(unsigned long long)version;
-(NSURL *)_bundleURL;
-(NSString *)family;
-(NSURL *)thumbnailImageURL;
-(id)fileBasedWallpaperForLocation:(id)arg1 andAppearance:(id)arg2 ;
-(BOOL)isAppearanceAware;
-(void)_loadBundle;
-(BOOL)isDynamicWallpaperBundle;
-(id)valueBasedWallpaperForLocation:(id)arg1 ;
-(BOOL)hasDistintWallpapersForLocations;
-(unsigned long long)wallpaperBackingTypeForLocation:(id)arg1 ;
-(id)fileBasedWallpaperForLocation:(id)arg1 ;
-(void)_loadDynamicWallpaper:(id)arg1 ;
-(NSMutableDictionary *)_defaultAppearanceWallpapers;
-(void)_raiseInvalidMetadataExceptionForMetadataKeypath:(id)arg1 ;
-(void)_processAssetDictionary:(id)arg1 forLocation:(id)arg2 ;
-(id)_stillWallpaperWithMetadataDictionary:(id)arg1 wallpaperAppearance:(id)arg2 ;
-(id)_liveWallpaperWithMetadataDictionary:(id)arg1 wallpaperAppearance:(id)arg2 ;
-(NSMutableDictionary *)_darkAppearanceWallpapers;
-(id)valueBasedWallpaperForLocation:(id)arg1 andAppearance:(id)arg2 ;
-(id)_processCommonFileBackedWallpaperMetadataWithDictionary:(id)arg1 wallpaperAppearance:(id)arg2 ;
-(id)initWithDynamicDictionary:(id)arg1 identifier:(unsigned long long)arg2 ;
-(void)set_bundleURL:(NSURL *)arg1 ;
-(void)set_defaultAppearanceWallpapers:(NSMutableDictionary *)arg1 ;
-(void)set_darkAppearanceWallpapers:(NSMutableDictionary *)arg1 ;
@end

