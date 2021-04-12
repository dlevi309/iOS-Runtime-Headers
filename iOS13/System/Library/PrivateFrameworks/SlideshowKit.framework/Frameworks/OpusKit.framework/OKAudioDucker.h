/*
* Generated on Monday, March 1, 2021 at 2:35:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject;

@interface OKAudioDucker : NSObject {

	float _volume;
	float _currentVolume;
	float _fadeToVolume;
	float _fadeFromVolume;
	float _duckLevel;
	double _startFadeTime;
	long long _duckState;
	double _fadeDuration;
	double _duckDuration;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_source> _timer;
	/*^block*/id _setVolumeBlock;

}

@property (assign,nonatomic) float volume;              //@synthesize volume=_volume - In the implementation block
-(id)init;
-(void)dealloc;
-(void)cancel;
-(float)volume;
-(void)setVolume:(float)arg1 ;
-(void)beginFadingWithDuration:(double)arg1 ;
-(void)beginDuckingToLevel:(double)arg1 fadeDuration:(double)arg2 ;
-(void)endDucking;
-(void)endFading;
-(void)setSetVolumeBlock:(/*^block*/id)arg1 ;
-(void)endFading:(BOOL)arg1 ;
-(void)_handleTimerEvent;
@end

