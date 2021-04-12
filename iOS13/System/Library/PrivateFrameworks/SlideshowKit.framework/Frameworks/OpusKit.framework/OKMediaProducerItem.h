/*
* Generated on Monday, March 1, 2021 at 2:35:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
*/

#import <OpusKit/OKMediaItem.h>

@class OKProducerPlugin;

@interface OKMediaProducerItem : OKMediaItem {

	OKProducerPlugin* _plugin;

}
+(id)scheme;
+(id)urlForMediaObject:(id)arg1 ;
+(id)urlForProducerPluginIdentifier:(id)arg1 andResourcePath:(id)arg2 ;
-(void)dealloc;
-(id)_fileURL;
-(id)mediaObject;
-(void)setMediaObject:(id)arg1 ;
-(id)parseDate:(id)arg1 ;
-(id)resourceURLWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)importMediaToDirectoryURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)createMetadataWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)createThumbnailImageForResolution:(unsigned long long)arg1 withMetadata:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)wantsTemporaryDiskCache;
-(BOOL)wantsDiskCachedMetadata;
-(BOOL)wantsDiskCachedThumbnailForResolution:(unsigned long long)arg1 ;
-(id)initWithProducerPluginIdentifier:(id)arg1 andResourcePath:(id)arg2 ;
@end

