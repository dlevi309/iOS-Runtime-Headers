/*
* Generated on Thursday, January 14, 2021 at 2:21:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreHaptics.framework/CoreHaptics
*/

#import <libobjc.A.dylib/CHHapticAdvancedPatternPlayerExtended.h>
#import <libobjc.A.dylib/PatternPlayerDetails.h>

@class CHHapticEngine, AVHapticSequence, NSArray, NSString;

@interface AdvancedPatternPlayer : NSObject <CHHapticAdvancedPatternPlayerExtended, PatternPlayerDetails> {

	CHHapticEngine* _engine;
	AVHapticSequence* _sequence;
	double _patternDuration;
	double _loopEnd;
	int _state;
	NSArray* _events;
	int _muteState;
	double _seekOffset;
	/*^block*/id _completionHandler;

}

@property (__weak) CHHapticEngine * engine;                         //@synthesize engine=_engine - In the implementation block
@property (readonly) double patternDuration; 
@property (assign) double seekOffset;                               //@synthesize seekOffset=_seekOffset - In the implementation block
@property (readonly) BOOL running; 
@property (readonly) BOOL paused; 
@property (assign) BOOL loopEnabled; 
@property (assign) double loopEnd; 
@property (assign) float playbackRate; 
@property (assign) BOOL isMuted; 
@property (copy) id completionHandler; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CHHapticEngine *)engine;
-(void)setPlaybackRate:(float)arg1 ;
-(BOOL)running;
-(void)setEngine:(CHHapticEngine *)arg1 ;
-(float)playbackRate;
-(id)init;
-(void)setCompletionHandler:(id)arg1 ;
-(BOOL)startAtTime:(double)arg1 error:(id*)arg2 ;
-(BOOL)sendParameters:(id)arg1 atTime:(double)arg2 error:(id*)arg3 ;
-(BOOL)stopAtTime:(double)arg1 error:(id*)arg2 ;
-(id)completionHandler;
-(double)loopEnd;
-(BOOL)activateChannelByIndex:(unsigned long long)arg1 atTime:(double)arg2 error:(id*)arg3 ;
-(BOOL)setVolume:(float)arg1 atTime:(double)arg2 error:(id*)arg3 ;
-(void)resetState;
-(BOOL)seekToOffset:(double)arg1 error:(id*)arg2 ;
-(BOOL)pauseAtTime:(double)arg1 error:(id*)arg2 ;
-(BOOL)resumeAtTime:(double)arg1 error:(id*)arg2 ;
-(BOOL)cancelAndReturnError:(id*)arg1 ;
-(void)setPaused;
-(void)clearExternalResources:(id)arg1 ;
-(void)doSetMute:(BOOL)arg1 ;
-(BOOL)scheduleParameterCurve:(id)arg1 atTime:(double)arg2 error:(id*)arg3 ;
-(double)patternDuration;
-(void)setSeekOffset:(double)arg1 ;
-(void)setLoopEnd:(double)arg1 ;
-(void)finishInit;
-(double)seekOffset;
-(void)setRunning;
-(BOOL)doStartFromPausedAtTime:(double)arg1 error:(id*)arg2 ;
-(BOOL)loopEnabled;
-(BOOL)doStartFromStoppedAtTime:(double)arg1 error:(id*)arg2 ;
-(BOOL)doResumeAtTime:(double)arg1 error:(id*)arg2 ;
-(void)setLoopEnabled:(BOOL)arg1 ;
-(id)initWithRingtoneData:(id)arg1 engine:(id)arg2 error:(id*)arg3 ;
-(id)initWithPattern:(id)arg1 engine:(id)arg2 privileged:(BOOL)arg3 error:(id*)arg4 ;
-(BOOL)paused;
-(void)setIsMuted:(BOOL)arg1 ;
-(BOOL)isMuted;
-(void)dealloc;
@end

