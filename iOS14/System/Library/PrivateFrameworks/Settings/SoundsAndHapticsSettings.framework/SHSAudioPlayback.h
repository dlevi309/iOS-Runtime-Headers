/*
* Generated on Thursday, January 14, 2021 at 2:28:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Settings/SoundsAndHapticsSettings.framework/SoundsAndHapticsSettings
*/


@class NSString, AVAudioSession, AVQueuePlayer, AVPlayerLooper, AVPlayerItem;

@interface SHSAudioPlayback : NSObject {

	NSString* _ringtoneIdentifier;
	AVAudioSession* __audioSession;
	AVQueuePlayer* __queuePlayer;
	AVPlayerLooper* __playerLooper;
	AVPlayerItem* __currentItem;
	id __serverConnectionDiedToken;

}

@property (nonatomic,retain) NSString * ringtoneIdentifier;               //@synthesize ringtoneIdentifier=_ringtoneIdentifier - In the implementation block
@property (nonatomic,retain) AVAudioSession * _audioSession;              //@synthesize _audioSession=__audioSession - In the implementation block
@property (nonatomic,retain) AVQueuePlayer * _queuePlayer;                //@synthesize _queuePlayer=__queuePlayer - In the implementation block
@property (nonatomic,retain) AVPlayerLooper * _playerLooper;              //@synthesize _playerLooper=__playerLooper - In the implementation block
@property (nonatomic,retain) AVPlayerItem * _currentItem;                 //@synthesize _currentItem=__currentItem - In the implementation block
@property (nonatomic,retain) id _serverConnectionDiedToken;               //@synthesize _serverConnectionDiedToken=__serverConnectionDiedToken - In the implementation block
-(void)stopPlayback;
-(id)init;
-(AVAudioSession *)_audioSession;
-(AVPlayerItem *)_currentItem;
-(AVPlayerLooper *)_playerLooper;
-(AVQueuePlayer *)_queuePlayer;
-(void)dealloc;
-(NSString *)ringtoneIdentifier;
-(void)set_playerLooper:(AVPlayerLooper *)arg1 ;
-(void)set_queuePlayer:(AVQueuePlayer *)arg1 ;
-(void)set_currentItem:(AVPlayerItem *)arg1 ;
-(void)setRingtoneIdentifier:(NSString *)arg1 ;
-(void)set_audioSession:(AVAudioSession *)arg1 ;
-(void)setAudioSessionCategory;
-(void)playRingtoneWithIdentifier:(id)arg1 loop:(BOOL)arg2 ;
-(BOOL)isPlayingRingtone;
-(void)stopRingtoneWithFadeOut:(float)arg1 ;
-(id)_serverConnectionDiedToken;
-(void)set_serverConnectionDiedToken:(id)arg1 ;
@end

