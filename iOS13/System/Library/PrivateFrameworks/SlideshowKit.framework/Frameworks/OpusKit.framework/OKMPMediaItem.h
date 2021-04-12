/*
* Generated on Monday, March 1, 2021 at 2:35:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
*/

#import <OpusKit/OKMediaItem.h>

@class MPMediaItem;

@interface OKMPMediaItem : OKMediaItem {

	MPMediaItem* _mediaItem;

}

@property (retain) MPMediaItem * mediaItem;              //@synthesize mediaItem=_mediaItem - In the implementation block
+(id)scheme;
+(BOOL)isRemote;
+(id)urlForMediaObject:(id)arg1 ;
+(id)urlForMPAsset:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(MPMediaItem *)mediaItem;
-(void)setMediaItem:(MPMediaItem *)arg1 ;
-(id)mediaObject;
-(void)setMediaObject:(id)arg1 ;
-(id)resourceURLWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)importMediaToDirectoryURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)createMetadataWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)createThumbnailImageForResolution:(unsigned long long)arg1 withMetadata:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)avAssetWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)wantsDiskCachedMetadata;
-(void)_resolveAssetIfNeeded;
-(id)initWithMPMediaItem:(id)arg1 ;
@end

