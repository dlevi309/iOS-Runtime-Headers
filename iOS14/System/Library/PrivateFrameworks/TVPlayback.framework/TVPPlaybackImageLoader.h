/*
* Generated on Thursday, January 14, 2021 at 2:28:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
*/


@protocol TVPPlaybackImageLoader <NSObject>
@required
-(void)invalidate;
-(id)loadImagesForTimes:(id)arg1 maxSize:(CGSize)arg2 withHandler:(/*^block*/id)arg3;
-(void)cancelImageLoadingForIdentifiers:(id)arg1;
-(double)closestImageTimeForTime:(double)arg1;

@end

