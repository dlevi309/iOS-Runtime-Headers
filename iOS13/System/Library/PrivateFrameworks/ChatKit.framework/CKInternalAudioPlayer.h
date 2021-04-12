/*
* Generated on Monday, March 1, 2021 at 2:31:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <libobjc.A.dylib/AVAudioPlayerDelegate.h>

@protocol CKInternalAudioPlayerDelegate;
@class AVAudioPlayer, AVPlayer, AVPlayerItem, NSString;

@interface CKInternalAudioPlayer : NSObject <AVAudioPlayerDelegate> {

	AVAudioPlayer* _avAudioPlayer;
	AVPlayer* _avPlayer;
	AVPlayerItem* _playerItem;
	long long _avPlayerState;
	BOOL _avPlayerPrepareRequested;
	BOOL _avPlayerPlayRequested;
	long long _playerType;
	id<CKInternalAudioPlayerDelegate> _delegate;

}

@property (nonatomic,readonly) long long playerType;                                         //@synthesize playerType=_playerType - In the implementation block
@property (assign,nonatomic,__weak) id<CKInternalAudioPlayerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) float volume; 
@property (getter=isPlaying,nonatomic,readonly) BOOL playing; 
@property (nonatomic,readonly) double currentTime; 
@property (nonatomic,readonly) double duration; 
@property (readonly) double deviceCurrentTime; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<CKInternalAudioPlayerDelegate>)delegate;
-(void)setDelegate:(id<CKInternalAudioPlayerDelegate>)arg1 ;
-(void)pause;
-(void)stop;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(double)duration;
-(double)currentTime;
-(float)volume;
-(void)setVolume:(float)arg1 ;
-(BOOL)isPlaying;
-(void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(BOOL)arg2 ;
-(void)prepareToPlay;
-(BOOL)playAtTime:(double)arg1 ;
-(double)deviceCurrentTime;
-(id)initWithContentsOfURL:(id)arg1 playerType:(long long)arg2 ;
-(long long)playerType;
-(void)_playerItemDidEndNotification:(id)arg1 ;
-(void)_handleAVPlayerItemStateChange;
-(BOOL)_playAtTime:(double)arg1 ;
-(void)_notifyPlayerDidPrepareAudioFileSuccessfully:(BOOL)arg1 ;
-(void)_notifyPlayerDidFinishSuccessfully:(BOOL)arg1 ;
@end

