/*
* Generated on Thursday, January 14, 2021 at 2:28:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
*/


#import <OpusKit/OpusKit-Structs.h>
@class OKPresentation, NSURL, NSString;

@interface OKMediaItem : NSObject {

	OKPresentation* _presentation;
	NSURL* _uniqueURL;
	NSString* _uniqueURLNormalisedString;
	unsigned long long _uniqueURLHash;

}

@property (assign,nonatomic) OKPresentation * presentation;                            //@synthesize presentation=_presentation - In the implementation block
@property (nonatomic,copy,readonly) NSString * uniqueURLNormalisedString;              //@synthesize uniqueURLNormalisedString=_uniqueURLNormalisedString - In the implementation block
@property (nonatomic,copy,readonly) NSURL * uniqueURL;                                 //@synthesize uniqueURL=_uniqueURL - In the implementation block
+(id)scheme;
+(BOOL)isRemote;
+(id)urlForMediaObject:(id)arg1 ;
-(void)setMediaObject:(id)arg1 ;
-(void)setPresentation:(OKPresentation *)arg1 ;
-(id)mediaObject;
-(OKPresentation *)presentation;
-(unsigned long long)hash;
-(id)resourceURL;
-(void)invalidate;
-(id)avAsset;
-(id)metadata;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(id)uniquePath;
-(id)prepareCaches:(BOOL)arg1 colorSpace:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(NSURL *)uniqueURL;
-(id)metadataWithCompletionHandler:(/*^block*/id)arg1 force:(BOOL)arg2 cache:(BOOL)arg3 ;
-(id)detectRegionsOfInterestWithCompletionHandler:(/*^block*/id)arg1 force:(BOOL)arg2 cache:(BOOL)arg3 colorSpace:(id)arg4 ;
-(id)thumbnailImageForResolution:(unsigned long long)arg1 aspectRatio:(double)arg2 scale:(double)arg3 quality:(double)arg4 colorSpace:(id)arg5 completionHandler:(/*^block*/id)arg6 force:(BOOL)arg7 cache:(BOOL)arg8 ;
-(id)resourceURLWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)importMediaToDirectoryURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSString *)uniqueURLNormalisedString;
-(void)invalidateDiskCachedMetadata;
-(void)invalidateDiskCachedThumbnailImages;
-(void)invalidateMemoryCachedMetadata;
-(void)invalidateMemoryCachedThumbnailImages;
-(id)memoryCachedMetadata;
-(id)diskCachedMetadata;
-(void)setMemoryCachedMetadata:(id)arg1 ;
-(id)createMetadataWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setDiskCachedMetadata:(id)arg1 ;
-(id)operationWithBlock:(/*^block*/id)arg1 completionHandlerWithObject:(/*^block*/id)arg2 ;
-(id)metadataWithProgress:(/*^block*/id)arg1 error:(id*)arg2 ;
-(id)memoryCachedThumbnailImageForResolution:(unsigned long long)arg1 ;
-(id)diskCachedThumbnailImageForResolution:(unsigned long long)arg1 ;
-(void)setMemoryCachedThumbnailImage:(id)arg1 forResolution:(unsigned long long)arg2 ;
-(id)createThumbnailImageForResolution:(unsigned long long)arg1 withMetadata:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setDiskCachedThumbnailImage:(id)arg1 forResolution:(unsigned long long)arg2 ;
-(id)avAssetWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)wantsTemporaryDiskCache;
-(BOOL)wantsMemoryCachedMetadata;
-(id)_resourcesDiskCacheManager;
-(BOOL)wantsDiskCachedMetadata;
-(BOOL)wantsMemoryCachedThumbnailForResolution:(unsigned long long)arg1 ;
-(BOOL)wantsDiskCachedThumbnailForResolution:(unsigned long long)arg1 ;
-(id)initWithUniqueURL:(id)arg1 ;
-(id)thumbnailImageForResolution:(unsigned long long)arg1 aspectRatio:(double)arg2 scale:(double)arg3 quality:(double)arg4 colorSpace:(id)arg5 ;
-(id)regionsOfInterestWithColorSpace:(id)arg1 ;
-(BOOL)hasDiskCachedMetadata:(id*)arg1 ;
-(BOOL)hasDiskCachedThumbnailImage:(id*)arg1 forResolution:(unsigned long long)arg2 ;
@end

