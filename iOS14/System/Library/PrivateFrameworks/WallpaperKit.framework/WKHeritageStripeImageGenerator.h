/*
* Generated on Thursday, January 14, 2021 at 2:25:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WallpaperKit.framework/WallpaperKit
*/


@protocol OS_dispatch_queue;
@class NSObject, NSCache;

@interface WKHeritageStripeImageGenerator : NSObject {

	NSObject*<OS_dispatch_queue> __wallpaperRequestQueue;
	NSCache* __wallpaperCache;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> _wallpaperRequestQueue;              //@synthesize _wallpaperRequestQueue=__wallpaperRequestQueue - In the implementation block
@property (nonatomic,retain) NSCache * _wallpaperCache;                                        //@synthesize _wallpaperCache=__wallpaperCache - In the implementation block
+(id)defaultImageGenerator;
-(id)init;
-(id)thumbnailImageWithBackgroundColor:(id)arg1 appearanceAware:(BOOL)arg2 ;
-(NSCache *)_wallpaperCache;
-(NSObject*<OS_dispatch_queue>)_wallpaperRequestQueue;
-(void)requestWallpaperImageWithBackgroundColor:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)set_wallpaperRequestQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)set_wallpaperCache:(NSCache *)arg1 ;
@end

