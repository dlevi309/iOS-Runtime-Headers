/*
* Generated on Monday, March 1, 2021 at 2:33:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
*/


@protocol NCAudioPlayerControllerDelegate;
@class AVPlayer;

@interface NCAudioPlayerController : NSObject {

	BOOL _audioSessionActive;
	float _rate;
	id<NCAudioPlayerControllerDelegate> _delegate;
	AVPlayer* _player;
	long long _playbackState;
	long long _status;
	double _duration;
	long long _timeControlStatus;

}

@property (assign,getter=isAudioSessionActive,nonatomic) BOOL audioSessionActive;              //@synthesize audioSessionActive=_audioSessionActive - In the implementation block
@property (assign,nonatomic) double duration;                                                  //@synthesize duration=_duration - In the implementation block
@property (nonatomic,retain) AVPlayer * player;                                                //@synthesize player=_player - In the implementation block
@property (assign,nonatomic) long long timeControlStatus;                                      //@synthesize timeControlStatus=_timeControlStatus - In the implementation block
@property (assign,nonatomic) float rate;                                                       //@synthesize rate=_rate - In the implementation block
@property (assign,nonatomic) long long status;                                                 //@synthesize status=_status - In the implementation block
@property (assign,nonatomic,__weak) id<NCAudioPlayerControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) float currentTime; 
@property (nonatomic,readonly) long long playbackState;                                        //@synthesize playbackState=_playbackState - In the implementation block
-(void)dealloc;
-(id)initWithURL:(id)arg1 ;
-(id<NCAudioPlayerControllerDelegate>)delegate;
-(void)setDelegate:(id<NCAudioPlayerControllerDelegate>)arg1 ;
-(void)pause;
-(void)stop;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(long long)status;
-(double)duration;
-(void)setStatus:(long long)arg1 ;
-(void)setDuration:(double)arg1 ;
-(void)play;
-(float)currentTime;
-(void)setRate:(float)arg1 ;
-(float)rate;
-(AVPlayer *)player;
-(void)setPlayer:(AVPlayer *)arg1 ;
-(id)initWithPlayer:(id)arg1 ;
-(long long)timeControlStatus;
-(void)seekToTime:(float)arg1 ;
-(long long)playbackState;
-(void)setPlaybackState:(long long)arg1 ;
-(void)setTimeControlStatus:(long long)arg1 ;
-(BOOL)isAudioSessionActive;
-(void)setAudioSessionActive:(BOOL)arg1 ;
-(void)handlePlayerItemDidPlayToEndTimeNotification:(id)arg1 ;
-(void)handlePlayerItemFailedToPlayToEndTimeNotification:(id)arg1 ;
-(void)deactivateAudioSession;
-(void)activateAudioSession;
-(void)handleAudioSessionInterruptionNotification:(id)arg1 ;
-(void)handleAudioSessionRouteChangeNotification:(id)arg1 ;
-(void)handleAudioSessionMediaServicesWereLostNotification:(id)arg1 ;
-(void)handleAudioSessionMediaServicesWereResetNotification:(id)arg1 ;
-(BOOL)shouldEnableProximityMonitoring;
-(BOOL)updateProximityMonitoring;
@end

