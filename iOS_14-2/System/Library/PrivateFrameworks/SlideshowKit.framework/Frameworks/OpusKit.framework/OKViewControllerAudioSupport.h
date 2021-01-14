/*
* Generated on Thursday, January 14, 2021 at 2:28:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

