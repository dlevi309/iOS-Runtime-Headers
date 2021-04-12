/*
* Generated on Thursday, January 14, 2021 at 2:23:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
*/


@protocol OS_dispatch_queue;
@class NSString, NSObject, SBFMappedImageCache;

@interface SBFWallpaperCache : NSObject {

	NSString* _path;
	NSObject*<OS_dispatch_queue> _queue;
	SBFMappedImageCache* _imageCache;

}

@property (nonatomic,readonly) SBFMappedImageCache * imageCache;              //@synthesize imageCache=_imageCache - In the implementation block
+(id)wallpaperCache;
-(id)initWithOptions:(id)arg1 ;
-(void)warmupForKey:(id)arg1 ;
-(id)imageForKey:(id)arg1 generatingIfNecessaryWithBlock:(/*^block*/id)arg2 ;
-(id)colorBoxesForKey:(id)arg1 generatingIfNeceesaryFromImage:(id)arg2 ;
-(void)removeEverythingWithCompletion:(/*^block*/id)arg1 ;
-(id)imageForKey:(id)arg1 generatingIfNecessaryWithBlock:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(SBFMappedImageCache *)imageCache;
@end

