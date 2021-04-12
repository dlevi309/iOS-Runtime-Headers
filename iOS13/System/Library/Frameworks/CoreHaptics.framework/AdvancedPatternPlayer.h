/*
* Generated on Monday, March 1, 2021 at 2:32:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign) BOOL isMuted; 
@property (assign) BOOL loopEnabled; 
@property (assign) double loopEnd; 
@property (assign) float playbackRate; 
@property (copy) id completionHandler; 
-(id)init;
-(void)dealloc;
-(BOOL)seekToOffset:(double)arg1 error:(id*)arg2 ;
-(CHHapticEngine *)engine;
-(BOOL)running;
-(void)setEngine:(CHHapticEngine *)arg1 ;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(BOOL)paused;
-(BOOL)sendParameters:(id)arg1 atTime:(double)arg2 error:(id*)arg3 ;
-(BOOL)startAtTime:(double)arg1 error:(id*)arg2 ;
-(BOOL)stopAtTime:(double)arg1 error:(id*)arg2 ;
-(void)finishInit;
-(void)setIsMuted:(BOOL)arg1 ;
-(BOOL)isMuted;
-(BOOL)activateChannelByIndex:(unsigned long long)arg1 atTime:(double)arg2 error:(id*)arg3 ;
-(BOOL)setVolume:(float)arg1 atTime:(double)arg2 error:(id*)arg3 ;
-(float)playbackRate;
-(void)setPlaybackRate:(float)arg1 ;
-(BOOL)pauseAtTime:(double)arg1 error:(id*)arg2 ;
-(BOOL)resumeAtTime:(double)arg1 error:(id*)arg2 ;
-(BOOL)cancelAndReturnError:(id*)arg1 ;
-(void)resetState;
-(void)doSetMute:(BOOL)arg1 ;
-(BOOL)scheduleParameterCurve:(id)arg1 atTime:(double)arg2 error:(id*)arg3 ;
-(double)patternDuration;
-(void)clearExternalResources:(id)arg1 ;
-(void)setSeekOffset:(double)arg1 ;
-(void)setLoopEnd:(double)arg1 ;
-(double)seekOffset;
-(void)setRunning;
-(BOOL)doStartFromPausedAtTime:(double)arg1 error:(id*)arg2 ;
-(BOOL)doStartFromStoppedAtTime:(double)arg1 error:(id*)arg2 ;
-(void)setPaused;
-(BOOL)doResumeAtTime:(double)arg1 error:(id*)arg2 ;
-(BOOL)loopEnabled;
-(void)setLoopEnabled:(BOOL)arg1 ;
-(double)loopEnd;
-(id)initWithPattern:(id)arg1 engine:(id)arg2 privileged:(BOOL)arg3 error:(id*)arg4 ;
-(id)initWithRingtoneData:(id)arg1 engine:(id)arg2 error:(id*)arg3 ;
@end

