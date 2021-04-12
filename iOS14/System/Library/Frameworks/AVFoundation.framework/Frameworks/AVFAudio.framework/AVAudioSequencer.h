/*
* Generated on Thursday, January 14, 2021 at 2:22:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)isPlaying;
-(BOOL)startAndReturnError:(id*)arg1 ;
-(NSDictionary *)userInfo;
-(id)init;
-(void)cleanTracks;
-(id)trackArray;
-(id)initWithAudioEngine:(id)arg1 ;
-(unsigned long long)numberOfTracks;
-(void)setupTrackArray;
-(void)setupTracks;
-(BOOL)loadFromURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)loadFromData:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)dataWithSMPTEResolution:(long long)arg1 error:(id*)arg2 ;
-(AVMusicTrack *)tempoTrack;
-(NSArray *)tracks;
-(BOOL)writeToURL:(id)arg1 SMPTEResolution:(long long)arg2 replaceExisting:(BOOL)arg3 error:(id*)arg4 ;
-(id)getTempoTrack;
-(double)secondsForBeats:(double)arg1 ;
-(double)beatsForSeconds:(double)arg1 ;
-(void)setTrackArray:(id)arg1 ;
-(void)setTempoTrack:(AVMusicTrack *)arg1 ;
-(double)currentPositionInSeconds;
-(unsigned long long)hostTimeForBeats:(double)arg1 error:(id*)arg2 ;
-(double)beatsForHostTime:(unsigned long long)arg1 error:(id*)arg2 ;
-(double)currentPositionInBeats;
-(void)setCurrentPositionInSeconds:(double)arg1 ;
-(void)setCurrentPositionInBeats:(double)arg1 ;
-(void)setRate:(float)arg1 ;
-(id)initWithImpl:(AVAudioSequencerImpl*)arg1 ;
-(void)stop;
-(void)prepareToPlay;
-(float)rate;
-(void)dealloc;
@end

