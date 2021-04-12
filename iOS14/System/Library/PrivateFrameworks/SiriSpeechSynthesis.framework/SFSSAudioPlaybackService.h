/*
* Generated on Thursday, January 14, 2021 at 2:29:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriSpeechSynthesis.framework/SiriSpeechSynthesis
*/


#import <SiriSpeechSynthesis/SiriSpeechSynthesis-Structs.h>
@class NSString, NSCondition;

@interface SFSSAudioPlaybackService : NSObject {

	double _enqueuedSampleCount;
	BOOL _discontinuedDuringPlayback;
	unsigned _sessionID;
	OpaqueAudioQueueRef _audioQueue;
	NSString* _outputRoute;
	NSCondition* _audioQueueStateCondition;
	AudioStreamBasicDescription _asbd;

}

@property (nonatomic,retain) NSCondition * audioQueueStateCondition;              //@synthesize audioQueueStateCondition=_audioQueueStateCondition - In the implementation block
@property (nonatomic,readonly) AudioStreamBasicDescription asbd;                  //@synthesize asbd=_asbd - In the implementation block
@property (nonatomic,readonly) OpaqueAudioQueueRef audioQueue;                    //@synthesize audioQueue=_audioQueue - In the implementation block
@property (assign,nonatomic) unsigned sessionID;                                  //@synthesize sessionID=_sessionID - In the implementation block
@property (nonatomic,readonly) NSString * outputRoute;                            //@synthesize outputRoute=_outputRoute - In the implementation block
@property (nonatomic,readonly) BOOL discontinuedDuringPlayback;                   //@synthesize discontinuedDuringPlayback=_discontinuedDuringPlayback - In the implementation block
-(unsigned)sessionID;
-(void)setSessionID:(unsigned)arg1 ;
-(AudioStreamBasicDescription)asbd;
-(id)start;
-(void)pause;
-(void)stop;
-(void)reset;
-(void)handleMediaServerReset;
-(BOOL)isAudioQueueRunning;
-(void)waitForAudioQueueStop;
-(id)enqueue:(id)arg1 packetCount:(long long)arg2 packetDescriptions:(id)arg3 ;
-(void)flushAndStop;
-(OpaqueAudioQueueRef)audioQueue;
-(BOOL)discontinuedDuringPlayback;
-(id)initWithAudioSessionID:(unsigned)arg1 asbd:(AudioStreamBasicDescription)arg2 ;
-(NSString *)outputRoute;
-(void)signalQueueRunningStateChange;
-(void)waitForQueueRunningStateChange;
-(NSCondition *)audioQueueStateCondition;
-(void)setAudioQueueStateCondition:(NSCondition *)arg1 ;
@end
