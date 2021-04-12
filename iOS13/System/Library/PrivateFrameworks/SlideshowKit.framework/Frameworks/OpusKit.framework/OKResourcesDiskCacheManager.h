/*
* Generated on Monday, March 1, 2021 at 2:35:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
*/


@protocol OS_dispatch_queue;
@class NSURL, NSObject;

@interface OKResourcesDiskCacheManager : NSObject {

	NSURL* _baseURL;
	NSObject*<OS_dispatch_queue> _globalQueue;
	NSObject*<OS_dispatch_queue> _accessQueue;

}
+(id)sharedManager;
+(id)temporaryManagerWithIdentifier:(id)arg1 ;
+(id)_sharedResourcesDirectoryURL;
-(id)init;
-(void)dealloc;
-(id)resourcesDirectoryURL;
-(id)initWithBaseURL:(id)arg1 ;
-(BOOL)hasMetadataForMediaItem:(id)arg1 metadata:(id*)arg2 error:(id*)arg3 ;
-(id)metadataForMediaItem:(id)arg1 error:(id*)arg2 ;
-(BOOL)setMetadata:(id)arg1 forMediaItem:(id)arg2 error:(id*)arg3 ;
-(void)performAsynchronousResourceAccessUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)removeMetadataForMediaItem:(id)arg1 error:(id*)arg2 ;
-(BOOL)hasThumbnailForMediaItem:(id)arg1 resolution:(unsigned long long)arg2 thumbnail:(id*)arg3 error:(id*)arg4 ;
-(id)thumbnailForMediaItem:(id)arg1 resolution:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)setThumbnail:(id)arg1 forMediaItem:(id)arg2 resolution:(unsigned long long)arg3 error:(id*)arg4 ;
-(BOOL)removeThumbnailsForMediaItem:(id)arg1 error:(id*)arg2 ;
-(BOOL)removeAllCaches:(id*)arg1 ;
-(void)_performAsynchronousResourceAccessUsingBlock:(/*^block*/id)arg1 ;
-(id)_cachedResourceDirectoryURLForMediaItem:(id)arg1 ;
-(BOOL)_writeResources:(id*)arg1 byResourcesAccessor:(/*^block*/id)arg2 ;
-(BOOL)_writeCachedMediaItem:(id)arg1 error:(id*)arg2 byResourcesAccessor:(/*^block*/id)arg3 ;
-(id)_cacheResourceMetadataURLForMediaItem:(id)arg1 ;
-(BOOL)_readCachedMediaItem:(id)arg1 error:(id*)arg2 byMetadataAccessor:(/*^block*/id)arg3 ;
-(BOOL)_writeCachedMediaItem:(id)arg1 error:(id*)arg2 byMetadataAccessor:(/*^block*/id)arg3 ;
-(id)_cacheResourceThumbnailURLForMediaItem:(id)arg1 resolution:(unsigned long long)arg2 ;
-(id)_cacheResourceThumbnailsURLForMediaItem:(id)arg1 ;
-(BOOL)_readCachedMediaItem:(id)arg1 resolution:(unsigned long long)arg2 error:(id*)arg3 byThumbnailAccessor:(/*^block*/id)arg4 ;
-(BOOL)_writeCachedMediaItem:(id)arg1 resolution:(unsigned long long)arg2 error:(id*)arg3 byThumbnailAccessor:(/*^block*/id)arg4 ;
-(BOOL)_writeCachedMediaItem:(id)arg1 error:(id*)arg2 byThumbnailsAccessor:(/*^block*/id)arg3 ;
-(id)cachedMediaItemURLs:(id*)arg1 ;
-(BOOL)removeMediaItem:(id)arg1 error:(id*)arg2 ;
-(BOOL)removeMediaItemsAtPath:(id)arg1 error:(id*)arg2 ;
-(BOOL)removeThumbnailForMediaItem:(id)arg1 resolution:(unsigned long long)arg2 error:(id*)arg3 ;
@end

