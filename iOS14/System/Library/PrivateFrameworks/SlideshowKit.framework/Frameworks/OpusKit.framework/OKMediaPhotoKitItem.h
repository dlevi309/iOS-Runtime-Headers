/*
* Generated on Thursday, January 14, 2021 at 2:28:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
*/

#import <OpusKit/OpusKit-Structs.h>
#import <OpusKit/OKMediaItem.h>

@class PHAsset;

@interface OKMediaPhotoKitItem : OKMediaItem {

	PHAsset* _asset;

}

@property (retain) PHAsset * asset;              //@synthesize asset=_asset - In the implementation block
+(id)scheme;
+(BOOL)isRemote;
+(id)urlForMediaObject:(id)arg1 ;
+(id)urlForPHAsset:(id)arg1 ;
-(void)setAsset:(PHAsset *)arg1 ;
-(void)setMediaObject:(id)arg1 ;
-(id)init;
-(PHAsset *)asset;
-(id)mediaObject;
-(id)initWithPHAsset:(id)arg1 ;
-(void)dealloc;
-(id)resourceURLWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)importMediaToDirectoryURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)createMetadataWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)createThumbnailImageForResolution:(unsigned long long)arg1 withMetadata:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)avAssetWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)wantsTemporaryDiskCache;
-(BOOL)wantsDiskCachedMetadata;
-(BOOL)wantsDiskCachedThumbnailForResolution:(unsigned long long)arg1 ;
-(void)_resolveAssetIfNeeded;
-(CGRect)_faceAreaRect;
@end

