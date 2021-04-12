/*
* Generated on Thursday, January 14, 2021 at 2:28:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoUniverse.framework/NanoUniverse
*/


@protocol NUAnimatable, NUAnimationObserver;
@interface NUAnimation : NSObject {

	 _ctrl1;
	 _ctrl2;
	[75 _values];
	int _valuesCount;
	float _prevTime;
	float _pauseTime;
	BOOL _repeat;
	BOOL _paused;
	float _startTime;
	float _duration;
	float _delay;
	int _frameInterval;
	unsigned long long _function;
	unsigned long long _key;
	id<NUAnimatable> _animatable;
	id<NUAnimationObserver> _observer;
	 _from;
	 _to;

}

@property (assign,nonatomic) float startTime;                                      //@synthesize startTime=_startTime - In the implementation block
@property (assign,nonatomic) float duration;                                       //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) float delay;                                          //@synthesize delay=_delay - In the implementation block
@property (assign,nonatomic) int frameInterval;                                    //@synthesize frameInterval=_frameInterval - In the implementation block
@property (assign,nonatomic)  from;                                                //@synthesize from=_from - In the implementation block
@property (assign,nonatomic)  to;                                                  //@synthesize to=_to - In the implementation block
@property (assign,getter=isRepeat,nonatomic) BOOL repeat;                          //@synthesize repeat=_repeat - In the implementation block
@property (assign,getter=isPaused,nonatomic) BOOL paused;                          //@synthesize paused=_paused - In the implementation block
@property (assign,nonatomic) unsigned long long function;                          //@synthesize function=_function - In the implementation block
@property (assign,nonatomic) unsigned long long key;                               //@synthesize key=_key - In the implementation block
@property (assign,nonatomic,__weak) id<NUAnimatable> animatable;                   //@synthesize animatable=_animatable - In the implementation block
@property (assign,nonatomic,__weak) id<NUAnimationObserver> observer;              //@synthesize observer=_observer - In the implementation block
-()to;
-()from;
-(BOOL)update:(float)arg1 ;
-(void)setDuration:(float)arg1 ;
-(void)apply:(float)arg1 ;
-(void)setObserver:(id<NUAnimationObserver>)arg1 ;
-(id<NUAnimationObserver>)observer;
-(void)setTo:;
-(unsigned long long)function;
-(void)setDelay:(float)arg1 ;
-(void)setStartTime:(float)arg1 ;
-(void)setPaused:(BOOL)arg1 ;
-(void)setFrameInterval:(int)arg1 ;
-(int)frameInterval;
-(float)delay;
-(void)setFrom:;
-(void)setFunction:(unsigned long long)arg1 ;
-(unsigned long long)key;
-(float)duration;
-(float)startTime;
-(BOOL)isPaused;
-(void)setKey:(unsigned long long)arg1 ;
-(id)initWithAnimatable:(id)arg1 value:(unsigned long long)arg2 ;
-(id)initWithAnimatable:(id)arg1 from:(unsigned long long)arg2 ;
-(id)initWithAnimatable:(id)arg1 from:(unsigned long long)arg2 ;
-(void)setRepeat:(BOOL)arg1 ;
-(id<NUAnimatable>)animatable;
-(id)initWithAnimatable:(id)arg1 values:(2*)arg2 count:(int)arg3 key:(unsigned long long)arg4 ;
-(BOOL)isRepeat;
-(void)setAnimatable:(id<NUAnimatable>)arg1 ;
@end

