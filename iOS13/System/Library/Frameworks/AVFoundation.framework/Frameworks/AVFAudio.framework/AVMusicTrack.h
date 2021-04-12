/*
* Generated on Monday, March 1, 2021 at 2:31:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
*/


#import <AVFAudio/AVFAudio-Structs.h>
@class AVAudioUnit;

@interface AVMusicTrack : NSObject {

	void* _impl;

}

@property (nonatomic,retain) AVAudioUnit * destinationAudioUnit; 
@property (assign,nonatomic) unsigned destinationMIDIEndpoint; 
@property (assign,nonatomic) AVBeatRange loopRange; 
@property (assign,getter=isLoopingEnabled,nonatomic) BOOL loopingEnabled; 
@property (assign,nonatomic) long long numberOfLoops; 
@property (assign,nonatomic) double offsetTime; 
@property (assign,getter=isMuted,nonatomic) BOOL muted; 
@property (assign,getter=isSoloed,nonatomic) BOOL soloed; 
@property (assign,nonatomic) double lengthInBeats; 
@property (assign,nonatomic) double lengthInSeconds; 
@property (nonatomic,readonly) unsigned long long timeResolution; 
-(void)dealloc;
-(unsigned long long)index;
-(void)setMuted:(BOOL)arg1 ;
-(BOOL)isMuted;
-(id)initWithImpl:(MusicTrackImpl*)arg1 ;
-(AVBeatRange)loopRange;
-(OpaqueMusicTrackRef)track;
-(void)setLoopingEnabled:(BOOL)arg1 ;
-(void)setNumberOfLoops:(long long)arg1 ;
-(long long)numberOfLoops;
-(void)setDestinationAudioUnit:(AVAudioUnit *)arg1 ;
-(AVAudioUnit *)destinationAudioUnit;
-(void)setDestinationMIDIEndpoint:(unsigned)arg1 ;
-(unsigned)destinationMIDIEndpoint;
-(void)setLoopRange:(AVBeatRange)arg1 ;
-(BOOL)isLoopingEnabled;
-(double)offsetTime;
-(void)setOffsetTime:(double)arg1 ;
-(BOOL)isSoloed;
-(void)setSoloed:(BOOL)arg1 ;
-(BOOL)usesAutomatedParameters;
-(void)setUsesAutomatedParameters:(BOOL)arg1 ;
-(double)lengthInBeats;
-(void)setLengthInBeats:(double)arg1 ;
-(double)lengthInSeconds;
-(void)setLengthInSeconds:(double)arg1 ;
-(unsigned long long)timeResolution;
@end

