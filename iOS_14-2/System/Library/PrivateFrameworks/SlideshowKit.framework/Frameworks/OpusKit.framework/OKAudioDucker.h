/*
* Generated on Thursday, January 14, 2021 at 2:28:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setVolume:(float)arg1 ;
-(id)init;
-(float)volume;
-(void)cancel;
-(void)dealloc;
-(void)beginFadingWithDuration:(double)arg1 ;
-(void)beginDuckingToLevel:(double)arg1 fadeDuration:(double)arg2 ;
-(void)endDucking;
-(void)endFading;
-(void)setSetVolumeBlock:(/*^block*/id)arg1 ;
-(void)endFading:(BOOL)arg1 ;
-(void)_handleTimerEvent;
@end

