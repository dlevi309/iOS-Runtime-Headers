/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
*/

#import <libvoiced_tts.dylib/libvoiced_tts.dylib-Structs.h>
#import <libobjc.A.dylib/AFAudioPowerProviding.h>

@class NSString, NSDate;

@interface VSAudioPlaybackService : NSObject <AFAudioPowerProviding> {

	BOOL _discontinuedDuringPlayback;
	unsigned _sessionID;
	OpaqueAudioQueueRef _audioQueue;
	NSString* _outputRoute;
	long long _state;
	double _enqueuedSampleCount;
	NSDate* _audioQueueStartDate;
	NSDate* _audioQueueFutureEndDate;
	AudioStreamBasicDescription _asbd;
	opaque_pthread_cond_t _stateChangeCondition;
	opaque_pthread_mutex_t _waitForStateChangeMutex;
	AudioTimeStamp _audioStartTimeStamp;

}

@property (assign,nonatomic) AudioStreamBasicDescription asbd;                            //@synthesize asbd=_asbd - In the implementation block
@property (assign,nonatomic) OpaqueAudioQueueRef audioQueue;                              //@synthesize audioQueue=_audioQueue - In the implementation block
@property (assign,nonatomic) long long state;                                             //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) opaque_pthread_mutex_t waitForStateChangeMutex;              //@synthesize waitForStateChangeMutex=_waitForStateChangeMutex - In the implementation block
@property (assign,nonatomic) opaque_pthread_cond_t stateChangeCondition;                  //@synthesize stateChangeCondition=_stateChangeCondition - In the implementation block
@property (assign,nonatomic) double enqueuedSampleCount;                                  //@synthesize enqueuedSampleCount=_enqueuedSampleCount - In the implementation block
@property (assign,nonatomic) AudioTimeStamp audioStartTimeStamp;                          //@synthesize audioStartTimeStamp=_audioStartTimeStamp - In the implementation block
@property (nonatomic,retain) NSDate * audioQueueStartDate;                                //@synthesize audioQueueStartDate=_audioQueueStartDate - In the implementation block
@property (nonatomic,retain) NSDate * audioQueueFutureEndDate;                            //@synthesize audioQueueFutureEndDate=_audioQueueFutureEndDate - In the implementation block
@property (nonatomic,retain) NSString * outputRoute;                                      //@synthesize outputRoute=_outputRoute - In the implementation block
@property (assign,nonatomic) unsigned sessionID;                                          //@synthesize sessionID=_sessionID - In the implementation block
@property (nonatomic,readonly) BOOL discontinuedDuringPlayback;                           //@synthesize discontinuedDuringPlayback=_discontinuedDuringPlayback - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)durationOfAudioDataLength:(unsigned long long)arg1 withAudioDescription:(AudioStreamBasicDescription)arg2 ;
+(unsigned long long)bytesOfDuration:(double)arg1 withAudioDescription:(AudioStreamBasicDescription)arg2 ;
-(void)dealloc;
-(void)pause;
-(void)stop;
-(id)start;
-(long long)state;
-(void)reset;
-(void)setState:(long long)arg1 ;
-(unsigned)sessionID;
-(void)setSessionID:(unsigned)arg1 ;
-(void)willBeginAccessPower;
-(BOOL)getAveragePower:(float*)arg1 andPeakPower:(float*)arg2 ;
-(void)didEndAccessPower;
-(OpaqueAudioQueueRef)audioQueue;
-(BOOL)discontinuedDuringPlayback;
-(id)enqueue:(id)arg1 packetCount:(long long)arg2 packetDescriptions:(id)arg3 ;
-(id)audioPowerProvider;
-(AudioStreamBasicDescription)asbd;
-(void)setAsbd:(AudioStreamBasicDescription)arg1 ;
-(id)initWithAudioSessionID:(unsigned)arg1 asbd:(AudioStreamBasicDescription)arg2 ;
-(NSString *)outputRoute;
-(void)flushAndStop;
-(void)handleMediaServerReset;
-(void)waitForAudioQueueStop;
-(void)signalQueueRunningStateChange;
-(BOOL)isAudioQueueRunning;
-(BOOL)isAudioQueueStalled;
-(void)setAudioQueue:(OpaqueAudioQueueRef)arg1 ;
-(void)setOutputRoute:(NSString *)arg1 ;
-(opaque_pthread_mutex_t)waitForStateChangeMutex;
-(void)setWaitForStateChangeMutex:(opaque_pthread_mutex_t)arg1 ;
-(opaque_pthread_cond_t)stateChangeCondition;
-(void)setStateChangeCondition:(opaque_pthread_cond_t)arg1 ;
-(double)enqueuedSampleCount;
-(void)setEnqueuedSampleCount:(double)arg1 ;
-(AudioTimeStamp)audioStartTimeStamp;
-(void)setAudioStartTimeStamp:(AudioTimeStamp)arg1 ;
-(NSDate *)audioQueueStartDate;
-(void)setAudioQueueStartDate:(NSDate *)arg1 ;
-(NSDate *)audioQueueFutureEndDate;
-(void)setAudioQueueFutureEndDate:(NSDate *)arg1 ;
@end

