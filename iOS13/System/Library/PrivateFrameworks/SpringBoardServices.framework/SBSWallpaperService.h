/*
* Generated on Monday, March 1, 2021 at 2:30:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(void)invalidate;
-(void)fetchThumbnailForVariant:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)setWallpaperWithVideoWithWallpaperMode:(id)arg1 cropRect:(CGRect)arg2 wallpaperMode:(long long)arg3 ;
-(BOOL)setWallpaperColorName:(id)arg1 forVariants:(unsigned long long)arg2 ;
-(BOOL)setWallpaperGradient:(id)arg1 forVariants:(unsigned long long)arg2 ;
-(void)restoreDefaultWallpaperWithCompletion:(/*^block*/id)arg1 ;
@end

