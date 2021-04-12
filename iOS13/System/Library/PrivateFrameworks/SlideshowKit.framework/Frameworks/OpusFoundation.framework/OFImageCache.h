/*
* Generated on Monday, March 1, 2021 at 2:35:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
*/


@protocol OS_dispatch_queue;
#import <OpusFoundation/OpusFoundation-Structs.h>
@class NSObject, NSString, NSMutableDictionary;

@interface OFImageCache : NSObject {

	NSObject*<OS_dispatch_queue> _serialDiskSaveQueue;
	NSString* _diskCacheDirectory;
	NSMutableDictionary* _diskCacheDirectoryForURLs;
	BOOL _useAsynchronousSerialDiskSaveQueue;
	unsigned long long _imageFormat;

}

@property (assign,nonatomic) BOOL useAsynchronousSerialDiskSaveQueue;              //@synthesize useAsynchronousSerialDiskSaveQueue=_useAsynchronousSerialDiskSaveQueue - In the implementation block
@property (assign,nonatomic) unsigned long long imageFormat;                       //@synthesize imageFormat=_imageFormat - In the implementation block
+(unsigned long long)alignResolution:(unsigned long long)arg1 ;
+(unsigned long long)bestResolutionForSize:(CGSize)arg1 ;
-(id)init;
-(void)dealloc;
-(unsigned long long)imageFormat;
-(void)setImageFormat:(unsigned long long)arg1 ;
-(void)invalidateDiskCaches;
-(void)invalidateMemoryCaches;
-(void)_didReceiveMemoryWarningNotification;
-(void)_didEnterBackgroundNotification;
-(void)_willTerminateNotification;
-(id)_diskCacheDirectoryForURL:(id)arg1 ;
-(id)_diskCacheFilePathForURL:(id)arg1 withResolution:(unsigned long long)arg2 ;
-(id)_diskCacheResolutionsForURL:(id)arg1 ;
-(id)initWithDiskCacheDirectory:(id)arg1 ;
-(void)invalidateDiskCacheForURL:(id)arg1 ;
-(void)purgeDiskCache:(unsigned long long)arg1 progressBlock:(/*^block*/id)arg2 ;
-(void)setImage:(CGImageRef)arg1 withResolution:(unsigned long long)arg2 forURL:(id)arg3 ;
-(CGImageRef)imageForURL:(id)arg1 withResolution:(unsigned long long)arg2 ;
-(BOOL)hasImageForURL:(id)arg1 withResolution:(unsigned long long)arg2 ;
-(CGImageRef)imageFromBestDiskCacheForURL:(id)arg1 withResolution:(unsigned long long)arg2 ;
-(CGImageRef)bestImageDiskCacheForURL:(id)arg1 ;
-(BOOL)useAsynchronousSerialDiskSaveQueue;
-(void)setUseAsynchronousSerialDiskSaveQueue:(BOOL)arg1 ;
@end

