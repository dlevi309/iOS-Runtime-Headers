/*
* Generated on Thursday, January 14, 2021 at 2:27:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUI.framework/IMSharedUI
*/

#import <libobjc.A.dylib/AVAudioPlayerDelegate.h>

@protocol IMInternalAVAudioPlayerDelegate;
@class AVAudioPlayer, AVPlayer, AVPlayerItem, NSString;

@interface IMInternalAVAudioPlayer : NSObject <AVAudioPlayerDelegate> {

	AVAudioPlayer* _avAudioPlayer;
	AVPlayer* _avPlayer;
	AVPlayerItem* _playerItem;
	long long _avPlayerState;
	BOOL _avPlayerPrepareRequested;
	BOOL _avPlayerPlayRequested;
	long long _playerType;
	id<IMInternalAVAudioPlayerDelegate> _delegate;

}

@property (nonatomic,readonly) long long playerType;                                           //@synthesize playerType=_playerType - In the implementation block
@property (assign,nonatomic,__weak) id<IMInternalAVAudioPlayerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) float volume; 
@property (getter=isPlaying,nonatomic,readonly) BOOL playing; 
@property (nonatomic,readonly) double currentTime; 
@property (nonatomic,readonly) double duration; 
@property (readonly) double deviceCurrentTime; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(BOOL)isPlaying;
-(void)setVolume:(float)arg1 ;
-(id<IMInternalAVAudioPlayerDelegate>)delegate;
-(void)pause;
-(void)stop;
-(void)prepareToPlay;
-(void)setDelegate:(id<IMInternalAVAudioPlayerDelegate>)arg1 ;
-(void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(BOOL)arg2 ;
-(double)currentTime;
-(long long)playerType;
-(float)volume;
-(double)duration;
-(BOOL)playAtTime:(double)arg1 ;
-(id)initWithContentsOfURL:(id)arg1 playerType:(long long)arg2 ;
-(double)deviceCurrentTime;
-(BOOL)_playAtTime:(double)arg1 ;
-(void)_playerItemDidEndNotification:(id)arg1 ;
-(void)_handleAVPlayerItemStateChange;
-(void)_notifyPlayerDidPrepareAudioFileSuccessfully:(BOOL)arg1 ;
-(void)_notifyPlayerDidFinishSuccessfully:(BOOL)arg1 ;
-(void)dealloc;
@end

