/*
* Generated on Monday, March 1, 2021 at 2:31:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(void)finalize;
-(id<AVAudioRecorderDelegate>)delegate;
-(void)setDelegate:(id<AVAudioRecorderDelegate>)arg1 ;
-(void)pause;
-(void)stop;
-(NSURL *)url;
-(AVAudioFormat *)format;
-(NSDictionary *)settings;
-(void)setAudioSession:(AVAudioSession *)arg1 ;
-(AudioRecorderImpl*)impl;
-(double)currentTime;
-(id)baseInit;
-(BOOL)record;
-(void)handleInterruption:(id)arg1 ;
-(AVAudioSession *)audioSession;
-(BOOL)isRecording;
-(void)beginInterruption;
-(void)endInterruption;
-(BOOL)isMeteringEnabled;
-(void)setMeteringEnabled:(BOOL)arg1 ;
-(void)updateMeters;
-(float)peakPowerForChannel:(unsigned long long)arg1 ;
-(float)averagePowerForChannel:(unsigned long long)arg1 ;
-(double)deviceCurrentTime;
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
-(BOOL)deleteRecording;
-(void)endInterruptionWithFlags;
-(void)setProcessToTap:(int)arg1 ;
-(int)processToTap;
-(BOOL)instantaneousMetering;
-(void)setInstantaneousMetering:(BOOL)arg1 ;
@end

