/*
* Generated on Thursday, January 14, 2021 at 2:22:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
*/

#import <AVFAudio/AVFAudio-Structs.h>
#import <AVFAudio/AVAudioSessionParticipant.h>

@class AVAudioSession, NSURL, NSDictionary, AVAudioFormat, NSArray;

@interface AVAudioRecorder : NSObject <AVAudioSessionParticipant> {

	void* _impl;

}

@property (assign,nonatomic) int processToTap; 
@property (assign,nonatomic) BOOL instantaneousMetering; 
@property (getter=isRecording,readonly) BOOL recording; 
@property (readonly) NSURL * url; 
@property (readonly) NSDictionary * settings; 
@property (readonly) AVAudioFormat * format; 
@property (__weak) id<AVAudioRecorderDelegate> delegate; 
@property (readonly) double currentTime; 
@property (readonly) double deviceCurrentTime; 
@property (getter=isMeteringEnabled) BOOL meteringEnabled; 
@property (nonatomic,copy) NSArray * channelAssignments; 
@property (retain) AVAudioSession * audioSession; 
-(BOOL)record;
-(BOOL)isRecording;
-(AVAudioFormat *)format;
-(void)finalize;
-(id)init;
-(id<AVAudioRecorderDelegate>)delegate;
-(void)pause;
-(void)updateMeters;
-(void)stop;
-(NSURL *)url;
-(void)setDelegate:(id<AVAudioRecorderDelegate>)arg1 ;
-(id)baseInit;
-(double)currentTime;
-(NSDictionary *)settings;
-(void)setAudioSession:(AVAudioSession *)arg1 ;
-(void)endInterruption;
-(void)beginInterruption;
-(float)averagePowerForChannel:(unsigned long long)arg1 ;
-(BOOL)isMeteringEnabled;
-(void)handleInterruption:(id)arg1 ;
-(float)peakPowerForChannel:(unsigned long long)arg1 ;
-(NSArray *)channelAssignments;
-(void)setChannelAssignments:(NSArray *)arg1 ;
-(void)finishedRecording;
-(void)privCommonCleanup;
-(void)privRemoveSessionPropertyListeners;
-(id)initWithURL:(id)arg1 format:(id)arg2 error:(id*)arg3 ;
-(id)initWithURL:(id)arg1 settings:(id)arg2 error:(id*)arg3 ;
-(BOOL)prepareToRecord;
-(BOOL)recordAtTime:(double)arg1 ;
-(BOOL)recordForDuration:(double)arg1 ;
-(BOOL)recordAtTime:(double)arg1 forDuration:(double)arg2 ;
-(int)processToTap;
-(BOOL)deleteRecording;
-(void)endInterruptionWithFlags;
-(void)setProcessToTap:(int)arg1 ;
-(BOOL)instantaneousMetering;
-(void)setInstantaneousMetering:(BOOL)arg1 ;
-(double)deviceCurrentTime;
-(void)setMeteringEnabled:(BOOL)arg1 ;
-(AVAudioSession *)audioSession;
-(void)dealloc;
-(AudioRecorderImpl*)impl;
@end

