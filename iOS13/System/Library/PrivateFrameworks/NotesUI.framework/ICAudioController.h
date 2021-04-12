/*
* Generated on Monday, March 1, 2021 at 2:34:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
*/


@class AVPlayer, ICAttachment, NSObject;

@interface ICAudioController : NSObject {

	AVPlayer* _currentPlayer;
	ICAttachment* _currentAttachment;
	NSObject* _playbackTimeObserver;

}

@property (nonatomic,retain) AVPlayer * currentPlayer;                      //@synthesize currentPlayer=_currentPlayer - In the implementation block
@property (nonatomic,retain) ICAttachment * currentAttachment;              //@synthesize currentAttachment=_currentAttachment - In the implementation block
@property (nonatomic,retain) NSObject * playbackTimeObserver;               //@synthesize playbackTimeObserver=_playbackTimeObserver - In the implementation block
@property (nonatomic,readonly) BOOL isPlaying; 
+(id)sharedAudioController;
+(void)pauseIfPlaying;
-(id)init;
-(void)dealloc;
-(void)pause;
-(void)stop;
-(void)play;
-(BOOL)isPlaying;
-(void)seekToTime:(double)arg1 ;
-(void)play:(id)arg1 ;
-(void)togglePlayPause;
-(void)updateTime:(double)arg1 duration:(double)arg2 ;
-(ICAttachment *)currentAttachment;
-(long long)remotePause:(id)arg1 ;
-(long long)remotePlay:(id)arg1 ;
-(long long)remoteStop:(id)arg1 ;
-(long long)remoteTogglePlayPause:(id)arg1 ;
-(long long)remoteSkipBackward:(id)arg1 ;
-(long long)remoteSkipForward:(id)arg1 ;
-(void)attachmentWillBeDeletedNotification:(id)arg1 ;
-(AVPlayer *)currentPlayer;
-(void)notifyPlaying;
-(void)updateNowPlayingInfo;
-(void)notifyPaused;
-(void)notifyStopped;
-(NSObject *)playbackTimeObserver;
-(void)setPlaybackTimeObserver:(NSObject *)arg1 ;
-(void)setCurrentPlayer:(AVPlayer *)arg1 ;
-(void)setCurrentAttachment:(ICAttachment *)arg1 ;
-(void)skipBackByInterval:(double)arg1 ;
-(void)skipAheadByInterval:(double)arg1 ;
@end

