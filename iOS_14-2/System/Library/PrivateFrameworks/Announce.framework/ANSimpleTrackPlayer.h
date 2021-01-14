/*
* Generated on Thursday, January 14, 2021 at 2:29:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Announce.framework/Announce
*/

#import <Announce/ANTrackPlayer.h>

@class AVAudioPlayer;

@interface ANSimpleTrackPlayer : ANTrackPlayer {

	AVAudioPlayer* _currentPlayer;

}

@property (retain) AVAudioPlayer * currentPlayer;              //@synthesize currentPlayer=_currentPlayer - In the implementation block
-(id)initWithOptions:(unsigned long long)arg1 ;
-(void)playWithCompletionHandler:(/*^block*/id)arg1 ;
-(AVAudioPlayer *)currentPlayer;
-(void)setCurrentPlayer:(AVAudioPlayer *)arg1 ;
-(id)initWithOptions:(unsigned long long)arg1 audioSession:(id)arg2 ;
-(id)_nextPlayer:(id)arg1 ;
-(id)_previousPlayer:(id)arg1 ;
-(BOOL)playInternalSync;
-(id)whatIsPlaying;
-(void)stopInternalSync;
-(void)nextInternalSync;
-(void)previousInternalSync;
-(void)handleInterruptionDelay:(double)arg1 ;
-(int)numberActivePlayers;
-(id)startNextPlaybackOnDidFinish:(id)arg1 ;
@end

