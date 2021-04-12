/*
* Generated on Monday, March 1, 2021 at 2:35:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
*/


@protocol OKViewControllerAudioSupport <NSObject>
@optional
-(void)setPlaybackAudioVolume:(double)arg1;
-(void)beginFadingWithDuration:(double)arg1;
-(double)requiredDuckLevel;
-(void)beginDuckingToLevel:(double)arg1 fadeDuration:(double)arg2;
-(void)endDucking;
-(void)endFading;

@end

