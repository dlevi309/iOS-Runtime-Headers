/*
* Generated on Thursday, January 14, 2021 at 2:29:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Announce.framework/Announce
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class AVAudioSession, NSObject;

@interface ANAudioSessionManager : NSObject {

	AVAudioSession* _audioSession;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_source> _timer;

}

@property (nonatomic,readonly) AVAudioSession * audioSession;                   //@synthesize audioSession=_audioSession - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> timer;               //@synthesize timer=_timer - In the implementation block
-(NSObject*<OS_dispatch_source>)timer;
-(void)setTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)_cancelTimer;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)_deactivateAudioSession;
-(AVAudioSession *)audioSession;
-(void)dealloc;
-(void)_handleTimerExpired;
-(id)initWithAudioSession:(id)arg1 queue:(id)arg2 ;
-(BOOL)activateAudioSessionWithError:(id*)arg1 ;
-(void)deactivateAudioSession;
@end

