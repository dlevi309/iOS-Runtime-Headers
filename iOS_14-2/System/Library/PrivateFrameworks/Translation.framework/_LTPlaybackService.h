/*
* Generated on Thursday, January 14, 2021 at 2:23:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/


#import <Translation/Translation-Structs.h>
@interface _LTPlaybackService : NSObject {

	AudioStreamBasicDescription _asbd;
	unsigned _sessionID;
	OpaqueAudioQueueRef _audioQueue;
	opaque_pthread_mutex_t _waitForStateChange;
	opaque_pthread_cond_t _stateChangeCondition;
	long long _state;

}

@property (nonatomic,readonly) long long state;              //@synthesize state=_state - In the implementation block
-(id)start;
-(void)stop;
-(void)reset;
-(long long)state;
-(void)handleMediaServerReset;
-(BOOL)isAudioQueueRunning;
-(void)waitForAudioQueueStop;
-(void)signalQueueRunningStateChanged;
-(void)dealloc;
-(id)initWithAudioSessionID:(unsigned)arg1 ASBD:(AudioStreamBasicDescription)arg2 ;
-(id)enqueue:(id)arg1 packetCount:(long long)arg2 packetDescriptions:(id)arg3 ;
-(void)flushAndStop;
@end

