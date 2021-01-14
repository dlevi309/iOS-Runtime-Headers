/*
* Generated on Thursday, January 14, 2021 at 2:25:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WallpaperKit.framework/WallpaperKit
*/

#import <libobjc.A.dylib/NAIdentifiable.h>
#import <libobjc.A.dylib/WKWallpaperRepresenting.h>

@class NSURL, NSString, NSMutableDictionary;

@interface WKWallpaperBundle : NSObject <NAIdentifiable, WKWallpaperRepresenting> {

	BOOL _appearanceAware;
	BOOL _distinctWallpapersForLocations;
	BOOL _dynamicWallpaperBundle;
	NSURL* _thumbnailImageURL;
	long long _version;
	long long _identifier;
	NSString* _name;
	NSString* _family;
	NSMutableDictionary* __defaultAppearanceWallpapers;
	NSMutableDictionary* __darkAppearanceWallpapers;
	NSURL* __bundleURL;

}

@property (nonatomic,retain) NSMutableDictionary * _defaultAppearanceWallpapers;                                          //@synthesize _defaultAppearanceWallpapers=__defaultAppearanceWallpapers - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * _darkAppearanceWallpapers;                                             //@synthesize _darkAppearanceWallpapers=__darkAppearanceWallpapers - In the implementation block
@property (nonatomic,retain) NSURL * _bundleURL;                                                                          //@synthesize _bundleURL=__bundleURL - In the implementation block
@property (nonatomic,readonly) long long version;                                                                         //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) long long identifier;                                                                      //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                                                                      //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * family;                                                                    //@synthesize family=_family - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSURL * thumbnailImageURL;                                                            //@synthesize thumbnailImageURL=_thumbnailImageURL - In the implementation block
@property (getter=isAppearanceAware,nonatomic,readonly) BOOL appearanceAware;                                             //@synthesize appearanceAware=_appearanceAware - In the implementation block
@property (getter=hasDistinctWallpapersForLocations,nonatomic,readonly) BOOL distinctWallpapersForLocations;              //@synthesize distinctWallpapersForLocations=_distinctWallpapersForLocations - In the implementation block
@property (getter=isDynamicWallpaperBundle,nonatomic,readonly) BOOL dynamicWallpaperBundle;                               //@synthesize dynamicWallpaperBundle=_dynamicWallpaperBundle - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifierString; 
@property (nonatomic,readonly) unsigned long long contentSource; 
+(id)na_identity;
+(BOOL)shouldLoadWallpaperBundleAtURL:(id)arg1 ;
+(id)createTemporaryWallpaperBundleWithImages:(id)arg1 videoAssetURLs:(id)arg2 wallpaperOptions:(id)arg3 error:(id*)arg4 ;
-(id)initWithURL:(id)arg1 ;
-(NSURL *)thumbnailImageURL;
-(NSString *)family;
-(NSString *)name;
-(BOOL)isAppearanceAware;
-(id)fileBasedWallpaperForLocation:(id)arg1 andAppearance:(id)arg2 ;
-(NSURL *)_bundleURL;
-(unsigned long long)hash;
-(unsigned long long)contentSource;
-(long long)identifier;
-(long long)version;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)identifierString;
-(void)_loadBundle;
-(id)initWithDynamicDictionary:(id)arg1 identifier:(long long)arg2 ;
-(void)_loadDynamicWallpaper:(id)arg1 ;
-(NSMutableDictionary *)_defaultAppearanceWallpapers;
-(void)_raiseInvalidMetadataExceptionForMetadataKeypath:(id)arg1 ;
-(void)_processAssetDictionary:(id)arg1 forLocation:(id)arg2 ;
-(unsigned long long)wallpaperBackingTypeForLocation:(id)arg1 ;
-(id)_stillWallpaperWithMetadataDictionary:(id)arg1 wallpaperAppearance:(id)arg2 ;
-(id)_liveWallpaperWithMetadataDictionary:(id)arg1 wallpaperAppearance:(id)arg2 ;
-(id)_stripeWallpaperWithMetadataDictionary:(id)arg1 wallpaperAppearance:(id)arg2 ;
-(NSMutableDictionary *)_darkAppearanceWallpapers;
-(id)valueBasedWallpaperForLocation:(id)arg1 andAppearance:(id)arg2 ;
-(id)_processCommonFileBackedWallpaperMetadataWithDictionary:(id)arg1 wallpaperAppearance:(id)arg2 ;
-(BOOL)hasDistinctWallpapersForLocations;
-(BOOL)isDynamicWallpaperBundle;
-(id)fileBasedWallpaperForLocation:(id)arg1 ;
-(id)valueBasedWallpaperForLocation:(id)arg1 ;
-(void)set_defaultAppearanceWallpapers:(NSMutableDictionary *)arg1 ;
-(void)set_darkAppearanceWallpapers:(NSMutableDictionary *)arg1 ;
-(void)set_bundleURL:(NSURL *)arg1 ;
@end

