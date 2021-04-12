/*
* Generated on Thursday, January 14, 2021 at 2:28:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setMediaObject:(id)arg1 ;
-(void)setMediaItem:(MPMediaItem *)arg1 ;
-(id)init;
-(MPMediaItem *)mediaItem;
-(id)mediaObject;
-(void)dealloc;
-(id)initWithMPMediaItem:(id)arg1 ;
-(id)resourceURLWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)importMediaToDirectoryURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)createMetadataWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)createThumbnailImageForResolution:(unsigned long long)arg1 withMetadata:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)avAssetWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)wantsDiskCachedMetadata;
-(void)_resolveAssetIfNeeded;
@end

