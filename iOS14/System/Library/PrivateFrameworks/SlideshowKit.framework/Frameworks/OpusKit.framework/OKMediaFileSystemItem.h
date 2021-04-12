/*
* Generated on Thursday, January 14, 2021 at 2:28:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
*/

#import <OpusKit/OKMediaItem.h>

@interface OKMediaFileSystemItem : OKMediaItem
+(id)scheme;
+(id)urlForMediaObject:(id)arg1 ;
-(void)setMediaObject:(id)arg1 ;
-(id)initWithFileURL:(id)arg1 ;
-(id)mediaObject;
-(id)parseDate:(id)arg1 ;
-(id)_primaryURL;
-(id)resourceURLWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)importMediaToDirectoryURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)createMetadataWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)createThumbnailImageForResolution:(unsigned long long)arg1 withMetadata:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)avAssetWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)wantsTemporaryDiskCache;
-(BOOL)wantsDiskCachedMetadata;
-(BOOL)wantsDiskCachedThumbnailForResolution:(unsigned long long)arg1 ;
-(id)_secondaryURL;
@end

