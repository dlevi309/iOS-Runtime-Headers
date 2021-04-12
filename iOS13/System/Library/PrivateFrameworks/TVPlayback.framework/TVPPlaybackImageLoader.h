/*
* Generated on Monday, March 1, 2021 at 2:35:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
*/


@protocol TVPPlaybackImageLoader <NSObject>
@required
-(void)invalidate;
-(id)loadImagesForTimes:(id)arg1 maxSize:(CGSize)arg2 withHandler:(/*^block*/id)arg3;
-(void)cancelImageLoadingForIdentifiers:(id)arg1;
-(double)closestImageTimeForTime:(double)arg1;

@end

