/*
* Generated on Thursday, January 14, 2021 at 2:25:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WallpaperKit.framework/WallpaperKit
*/

@class NSURL, NSString;


@protocol WKWallpaperRepresenting <WKHashable>
@property (nonatomic,copy,readonly) NSURL * thumbnailImageURL; 
@property (getter=isAppearanceAware,nonatomic,readonly) BOOL appearanceAware; 
@property (getter=hasDistinctWallpapersForLocations,nonatomic,readonly) BOOL distinctWallpapersForLocations; 
@property (getter=isDynamicWallpaperBundle,nonatomic,readonly) BOOL dynamicWallpaperBundle; 
@property (nonatomic,copy,readonly) NSString * identifierString; 
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,readonly) unsigned long long contentSource; 
@required
-(NSURL *)thumbnailImageURL;
-(NSString *)name;
-(BOOL)isAppearanceAware;
-(id)fileBasedWallpaperForLocation:(id)arg1 andAppearance:(id)arg2;
-(unsigned long long)contentSource;
-(NSString *)identifierString;
-(unsigned long long)wallpaperBackingTypeForLocation:(id)arg1;
-(id)valueBasedWallpaperForLocation:(id)arg1 andAppearance:(id)arg2;
-(BOOL)hasDistinctWallpapersForLocations;
-(BOOL)isDynamicWallpaperBundle;
-(id)fileBasedWallpaperForLocation:(id)arg1;
-(id)valueBasedWallpaperForLocation:(id)arg1;

@end

