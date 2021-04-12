/*
* Generated on Monday, March 1, 2021 at 2:31:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
*/


#import <AVFAudio/AVFAudio-Structs.h>
@class NSArray, AVMusicTrack, NSDictionary;

@interface AVAudioSequencer : NSObject {

	void* _impl;

}

@property (assign,nonatomic) double currentPositionInSeconds; 
@property (assign,nonatomic) double currentPositionInBeats; 
@property (getter=isPlaying,nonatomic,readonly) BOOL playing; 
@property (assign,nonatomic) float rate; 
@property (nonatomic,readonly) NSArray * tracks; 
@property (nonatomic,readonly) AVMusicTrack * tempoTrack; 
@property (nonatomic,readonly) NSDictionary * userInfo; 
-(id)init;
-(void)dealloc;
-(NSDictionary *)userInfo;
-(void)stop;
-(void)setRate:(float)arg1 ;
-(float)rate;
-(BOOL)isPlaying;
-(void)prepareToPlay;
-(BOOL)startAndReturnError:(id*)arg1 ;
-(NSArray *)tracks;
-(id)initWithImpl:(AVAudioSequencerImpl*)arg1 ;
-(id)initWithAudioEngine:(id)arg1 ;
-(unsigned long long)numberOfTracks;
-(void)cleanTracks;
-(void)setupTrackArray;
-(void)setupTracks;
-(BOOL)loadFromURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)loadFromData:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)writeToURL:(id)arg1 SMPTEResolution:(long long)arg2 replaceExisting:(BOOL)arg3 error:(id*)arg4 ;
-(id)dataWithSMPTEResolution:(long long)arg1 error:(id*)arg2 ;
-(id)getTempoTrack;
-(double)secondsForBeats:(double)arg1 ;
-(double)beatsForSeconds:(double)arg1 ;
-(void)setTrackArray:(id)arg1 ;
-(id)trackArray;
-(void)setTempoTrack:(AVMusicTrack *)arg1 ;
-(AVMusicTrack *)tempoTrack;
-(double)currentPositionInSeconds;
-(unsigned long long)hostTimeForBeats:(double)arg1 error:(id*)arg2 ;
-(double)beatsForHostTime:(unsigned long long)arg1 error:(id*)arg2 ;
-(void)setCurrentPositionInSeconds:(double)arg1 ;
-(double)currentPositionInBeats;
-(void)setCurrentPositionInBeats:(double)arg1 ;
@end

