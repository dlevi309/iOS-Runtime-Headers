/*
* Generated on Monday, March 1, 2021 at 2:35:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
*/

#import <OpusKit/OKMediaItem.h>

@interface OKMediaImportedItem : OKMediaItem
+(id)scheme;
+(id)urlForMediaObject:(id)arg1 ;
-(id)mediaObject;
-(void)setMediaObject:(id)arg1 ;
-(id)resourceURLWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)importMediaToDirectoryURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)invalidateDiskCachedThumbnailImages;
-(id)diskCachedMetadata;
-(id)createMetadataWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)diskCachedThumbnailImageForResolution:(unsigned long long)arg1 ;
-(id)createThumbnailImageForResolution:(unsigned long long)arg1 withMetadata:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setDiskCachedThumbnailImage:(id)arg1 forResolution:(unsigned long long)arg2 ;
-(BOOL)wantsTemporaryDiskCache;
-(BOOL)wantsMemoryCachedMetadata;
-(BOOL)wantsDiskCachedMetadata;
-(BOOL)wantsDiskCachedThumbnailForResolution:(unsigned long long)arg1 ;
-(BOOL)hasDiskCachedMetadata:(id*)arg1 ;
-(BOOL)hasDiskCachedThumbnailImage:(id*)arg1 forResolution:(unsigned long long)arg2 ;
-(id)initWithImportedResourceURL:(id)arg1 ;
@end

