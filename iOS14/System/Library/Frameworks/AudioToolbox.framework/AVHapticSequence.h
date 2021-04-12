/*
* Generated on Thursday, January 14, 2021 at 2:21:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AudioToolbox.framework/AudioToolbox
*/


@class AVHapticPlayer;

@interface AVHapticSequence : NSObject {

	AVHapticPlayer* _player;
	unsigned long long _seqID;
	double _lastStartTime;
	unsigned long long _eventBehavior;
	BOOL _loopIsEnabled;
	float _loopLength;
	float _playbackRate;
	double _duration;
	unsigned long long _channelCount;
	unsigned long long _activeChannel;

}

@property (__weak) AVHapticPlayer * player;                        //@synthesize player=_player - In the implementation block
@property (assign) unsigned long long seqID;                       //@synthesize seqID=_seqID - In the implementation block
@property (assign) double duration;                                //@synthesize duration=_duration - In the implementation block
@property (assign) double lastStartTime;                           //@synthesize lastStartTime=_lastStartTime - In the implementation block
@property (assign) unsigned long long activeChannel;               //@synthesize activeChannel=_activeChannel - In the implementation block
@property (assign) unsigned long long eventBehavior; 
@property (assign) BOOL loopingEnabled; 
@property (assign) float playbackRate; 
@property (readonly) unsigned long long channelCount;              //@synthesize channelCount=_channelCount - In the implementation block
@property (copy) id completionHandler; 
-(AVHapticPlayer *)player;
-(void)setPlaybackRate:(float)arg1 ;
-(unsigned long long)channelCount;
-(void)setPlayer:(AVHapticPlayer *)arg1 ;
-(void)setDuration:(double)arg1 ;
-(float)playbackRate;
-(unsigned long long)seqID;
-(id)init;
-(void)setCompletionHandler:(id)arg1 ;
-(unsigned long long)activeChannel;
-(BOOL)loopingEnabled;
-(BOOL)stopAtTime:(double)arg1 error:(id*)arg2 ;
-(id)completionHandler;
-(id)initWithData:(id)arg1 player:(id)arg2 error:(id*)arg3 ;
-(BOOL)playAtTime:(double)arg1 offset:(double)arg2 error:(id*)arg3 ;
-(BOOL)prepareToPlayAndReturnError:(id*)arg1 ;
-(BOOL)activateChannelByIndex:(unsigned long long)arg1 atTime:(double)arg2 error:(id*)arg3 ;
-(BOOL)setVolume:(float)arg1 atTime:(double)arg2 error:(id*)arg3 ;
-(void)setActiveChannel:(unsigned long long)arg1 ;
-(unsigned long long)eventBehavior;
-(void)setEventBehavior:(unsigned long long)arg1 ;
-(void)setSeqID:(unsigned long long)arg1 ;
-(id)initWithEvents:(id)arg1 player:(id)arg2 error:(id*)arg3 ;
-(unsigned long long)getChannelCount;
-(id)initWithDictionary:(id)arg1 player:(id)arg2 error:(id*)arg3 ;
-(BOOL)setLoopingEnabled:(BOOL)arg1 error:(id*)arg2 ;
-(BOOL)setLoopLength:(float)arg1 error:(id*)arg2 ;
-(BOOL)pauseAtTime:(double)arg1 error:(id*)arg2 ;
-(BOOL)resumeAtTime:(double)arg1 error:(id*)arg2 ;
-(BOOL)seekToTime:(double)arg1 error:(id*)arg2 ;
-(BOOL)setParameter:(unsigned long long)arg1 value:(float)arg2 channel:(unsigned long long)arg3 atTime:(double)arg4 error:(id*)arg5 ;
-(BOOL)cancelAndReturnError:(id*)arg1 ;
-(double)lastStartTime;
-(void)setLastStartTime:(double)arg1 ;
-(void)setLoopingEnabled:(BOOL)arg1 ;
-(double)duration;
-(void)dealloc;
@end

