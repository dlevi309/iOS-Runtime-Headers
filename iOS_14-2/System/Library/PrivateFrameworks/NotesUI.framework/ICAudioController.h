/*
* Generated on Thursday, January 14, 2021 at 2:26:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)isPlaying;
-(id)init;
-(void)pause;
-(void)play;
-(void)stop;
-(void)play:(id)arg1 ;
-(void)togglePlayPause;
-(void)seekToTime:(double)arg1 ;
-(void)dealloc;
-(void)updateTime:(double)arg1 duration:(double)arg2 ;
-(AVPlayer *)currentPlayer;
-(void)setCurrentPlayer:(AVPlayer *)arg1 ;
-(long long)remotePause:(id)arg1 ;
-(long long)remoteStop:(id)arg1 ;
-(long long)remoteSkipBackward:(id)arg1 ;
-(long long)remoteSkipForward:(id)arg1 ;
-(ICAttachment *)currentAttachment;
-(long long)remotePlay:(id)arg1 ;
-(long long)remoteTogglePlayPause:(id)arg1 ;
-(void)attachmentWillBeDeletedNotification:(id)arg1 ;
-(void)notifyPlaying;
-(void)updateNowPlayingInfo;
-(void)notifyPaused;
-(void)notifyStopped;
-(NSObject *)playbackTimeObserver;
-(void)setPlaybackTimeObserver:(NSObject *)arg1 ;
-(void)setCurrentAttachment:(ICAttachment *)arg1 ;
-(void)skipBackByInterval:(double)arg1 ;
-(void)skipAheadByInterval:(double)arg1 ;
@end

