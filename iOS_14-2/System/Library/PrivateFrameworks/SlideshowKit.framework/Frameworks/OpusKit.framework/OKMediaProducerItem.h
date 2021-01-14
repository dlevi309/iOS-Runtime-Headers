/*
* Generated on Thursday, January 14, 2021 at 2:28:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)_fileURL;
-(void)setMediaObject:(id)arg1 ;
-(id)mediaObject;
-(void)dealloc;
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

