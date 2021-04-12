/*
* Generated on Thursday, January 14, 2021 at 2:22:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/


@protocol OS_dispatch_queue;
#import <PhotosUI/PhotosUI-Structs.h>
@class NSCache, NSMutableDictionary, NSObject, PXPlacesSearchProvider, NSTimer;

@interface PUSearchHomeThumbnailManager : NSObject {

	NSCache* _cache;
	NSMutableDictionary* _metadataPlist;
	NSObject*<OS_dispatch_queue> _metadataQueue;
	PXPlacesSearchProvider* _placesProvider;
	NSTimer* _diskTimer;
	NSMutableDictionary* _thumbnailsToWrite;

}

@property (nonatomic,retain) NSCache * cache;                                         //@synthesize cache=_cache - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * metadataPlist;                     //@synthesize metadataPlist=_metadataPlist - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> metadataQueue;              //@synthesize metadataQueue=_metadataQueue - In the implementation block
@property (nonatomic,retain) PXPlacesSearchProvider * placesProvider;                 //@synthesize placesProvider=_placesProvider - In the implementation block
@property (nonatomic,retain) NSTimer * diskTimer;                                     //@synthesize diskTimer=_diskTimer - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * thumbnailsToWrite;                 //@synthesize thumbnailsToWrite=_thumbnailsToWrite - In the implementation block
+(id)_filePathForHash:(id)arg1 ;
+(id)_filePathForMetadataPlist;
+(id)_thumbnailFilePath;
-(NSCache *)cache;
-(id)init;
-(NSTimer *)diskTimer;
-(void)setCache:(NSCache *)arg1 ;
-(NSMutableDictionary *)metadataPlist;
-(void)thumbnailForKey:(id)arg1 type:(long long)arg2 traitCollection:(id)arg3 withSize:(CGSize)arg4 completion:(/*^block*/id)arg5 ;
-(void)_fetchImageForLocation:(id)arg1 size:(CGSize)arg2 traitCollection:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_setInMemoryThumbnail:(id)arg1 forHashString:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)metadataQueue;
-(void)_setInMemoryAndPersistToDiskThumbnail:(id)arg1 forHashString:(id)arg2 ;
-(void)_createThumbnailDirectoryIfNeeded;
-(id)_hashStringForKey:(id)arg1 size:(CGSize)arg2 interfaceStyle:(long long)arg3 displayScale:(double)arg4 ;
-(void)_setMetadataDate:(id)arg1 forKey:(id)arg2 ;
-(void)_writeMetadataPlistToDisk;
-(void)setMetadataPlist:(NSMutableDictionary *)arg1 ;
-(id)_imageForHomeZeroKeywordWithMapImage:(id)arg1 ;
-(void)setMetadataQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(PXPlacesSearchProvider *)placesProvider;
-(void)setPlacesProvider:(PXPlacesSearchProvider *)arg1 ;
-(void)setDiskTimer:(NSTimer *)arg1 ;
-(NSMutableDictionary *)thumbnailsToWrite;
-(void)setThumbnailsToWrite:(NSMutableDictionary *)arg1 ;
@end

