/*
* Generated on Thursday, January 14, 2021 at 2:22:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(float)pan;
-(BOOL)isPlaying;
-(AVAudioFormat *)format;
-(void)setVolume:(float)arg1 ;
-(void)finalize;
-(id)init;
-(id<AVAudioPlayerDelegate>)delegate;
-(void)pause;
-(NSString *)currentDevice;
-(long long)numberOfLoops;
-(void)setNumberOfLoops:(long long)arg1 ;
-(void)setCurrentTime:(double)arg1 ;
-(id)initBase;
-(void)setRate:(float)arg1 ;
-(BOOL)play;
-(void)updateMeters;
-(void)stop;
-(NSURL *)url;
-(id)initWithData:(id)arg1 error:(id*)arg2 ;
-(BOOL)prepareToPlay;
-(id)initWithContentsOfURL:(id)arg1 error:(id*)arg2 ;
-(void)setDelegate:(id<AVAudioPlayerDelegate>)arg1 ;
-(double)currentTime;
-(float)rate;
-(unsigned long long)numberOfChannels;
-(NSData *)data;
-(NSDictionary *)settings;
-(void)setAudioSession:(id)arg1 ;
-(void)endInterruption;
-(void)beginInterruption;
-(void)endInterruptionWithFlags:(id)arg1 ;
-(float)averagePowerForChannel:(unsigned long long)arg1 ;
-(BOOL)isMeteringEnabled;
-(void)handleInterruption:(id)arg1 ;
-(void)setPan:(float)arg1 ;
-(float)peakPowerForChannel:(unsigned long long)arg1 ;
-(float)volume;
-(id)initWithContentsOfURL:(id)arg1 fileTypeHint:(id)arg2 error:(id*)arg3 ;
-(id)initWithData:(id)arg1 fileTypeHint:(id)arg2 error:(id*)arg3 ;
-(void)setVolume:(float)arg1 fadeDuration:(double)arg2 ;
-(void)setEnableRate:(BOOL)arg1 ;
-(double)duration;
-(BOOL)enableRate;
-(NSArray *)channelAssignments;
-(void)setChannelAssignments:(NSArray *)arg1 ;
-(BOOL)mixToUplink;
-(void)setMixToUplink:(BOOL)arg1 ;
-(void)privRemoveSessionListener;
-(void)finishedPlaying:(id)arg1 ;
-(void)decodeError:(id)arg1 ;
-(BOOL)playAtTime:(double)arg1 ;
-(double)deviceCurrentTime;
-(void)setMeteringEnabled:(BOOL)arg1 ;
-(void)setCurrentDevice:(NSString *)arg1 ;
-(id)audioSession;
-(void)dealloc;
-(id)impl;
@end

