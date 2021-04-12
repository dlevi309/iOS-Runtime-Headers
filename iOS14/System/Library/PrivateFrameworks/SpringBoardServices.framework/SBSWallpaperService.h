/*
* Generated on Thursday, January 14, 2021 at 2:21:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
*/


@protocol OS_dispatch_queue;
#import <SpringBoardServices/SpringBoardServices-Structs.h>
@class SBSWallpaperClient, NSObject;

@interface SBSWallpaperService : NSObject {

	SBSWallpaperClient* _client;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	BOOL _wasInvalidated;

}
-(id)init;
-(void)fetchOriginalVideoURLForVariant:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)fetchThumbnailForVariant:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)restoreDefaultWallpaperWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)setWallpaperColor:(id)arg1 darkColor:(id)arg2 forVariants:(unsigned long long)arg3 ;
-(void)fetchOriginalImageForVariant:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)fetchContentCutoutBoundsForVariant:(long long)arg1 orientation:(long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)setWallpaperGradient:(id)arg1 forVariants:(unsigned long long)arg2 ;
-(void)invalidate;
-(BOOL)setWallpaperColorName:(id)arg1 forVariants:(unsigned long long)arg2 ;
-(BOOL)setWallpaperWithVideoWithWallpaperMode:(id)arg1 cropRect:(CGRect)arg2 wallpaperMode:(long long)arg3 ;
-(void)dealloc;
@end

