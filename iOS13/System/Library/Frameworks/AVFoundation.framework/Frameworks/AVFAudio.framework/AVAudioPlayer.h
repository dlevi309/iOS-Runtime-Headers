/*
* Generated on Monday, March 1, 2021 at 2:31:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
*/


@class NSString, NSURL, NSData, NSDictionary, AVAudioFormat, NSArray;

@interface AVAudioPlayer : NSObject {

	id _impl;
	NSString* _currentDevice;

}

@property (getter=isPlaying,readonly) BOOL playing; 
@property (readonly) unsigned long long numberOfChannels; 
@property (readonly) double duration; 
@property (copy) NSString * currentDevice;                              //@synthesize currentDevice=_currentDevice - In the implementation block
@property (__weak) id<AVAudioPlayerDelegate> delegate; 
@property (readonly) NSURL * url; 
@property (readonly) NSData * data; 
@property (assign) float pan; 
@property (assign) float volume; 
@property (assign) BOOL enableRate; 
@property (assign) float rate; 
@property (assign) double currentTime; 
@property (readonly) double deviceCurrentTime; 
@property (assign) long long numberOfLoops; 
@property (readonly) NSDictionary * settings; 
@property (readonly) AVAudioFormat * format; 
@property (getter=isMeteringEnabled) BOOL meteringEnabled; 
@property (nonatomic,copy) NSArray * channelAssignments; 
-(id)init;
-(void)dealloc;
-(void)finalize;
-(id<AVAudioPlayerDelegate>)delegate;
-(void)setDelegate:(id<AVAudioPlayerDelegate>)arg1 ;
-(NSData *)data;
-(void)pause;
-(void)stop;
-(id)initWithContentsOfURL:(id)arg1 error:(id*)arg2 ;
-(NSURL *)url;
-(double)duration;
-(NSString *)currentDevice;
-(AVAudioFormat *)format;
-(id)initWithData:(id)arg1 error:(id*)arg2 ;
-(NSDictionary *)settings;
-(void)setAudioSession:(id)arg1 ;
-(BOOL)play;
-(id)impl;
-(void)setPan:(float)arg1 ;
-(float)pan;
-(double)currentTime;
-(float)volume;
-(void)setVolume:(float)arg1 ;
-(void)setRate:(float)arg1 ;
-(float)rate;
-(BOOL)isPlaying;
-(unsigned long long)numberOfChannels;
-(BOOL)prepareToPlay;
-(void)handleInterruption:(id)arg1 ;
-(id)audioSession;
-(void)beginInterruption;
-(void)endInterruptionWithFlags:(id)arg1 ;
-(void)endInterruption;
-(id)initBase;
-(void)setCurrentTime:(double)arg1 ;
-(BOOL)isMeteringEnabled;
-(void)setMeteringEnabled:(BOOL)arg1 ;
-(void)updateMeters;
-(float)peakPowerForChannel:(unsigned long long)arg1 ;
-(float)averagePowerForChannel:(unsigned long long)arg1 ;
-(id)initWithContentsOfURL:(id)arg1 fileTypeHint:(id)arg2 error:(id*)arg3 ;
-(id)initWithData:(id)arg1 fileTypeHint:(id)arg2 error:(id*)arg3 ;
-(BOOL)playAtTime:(double)arg1 ;
-(void)setVolume:(float)arg1 fadeDuration:(double)arg2 ;
-(void)setEnableRate:(BOOL)arg1 ;
-(BOOL)enableRate;
-(double)deviceCurrentTime;
-(void)setNumberOfLoops:(long long)arg1 ;
-(long long)numberOfLoops;
-(NSArray *)channelAssignments;
-(void)setChannelAssignments:(NSArray *)arg1 ;
-(BOOL)mixToUplink;
-(void)setMixToUplink:(BOOL)arg1 ;
-(void)setCurrentDevice:(NSString *)arg1 ;
-(void)privRemoveSessionListener;
-(void)finishedPlaying:(id)arg1 ;
-(void)decodeError:(id)arg1 ;
@end

