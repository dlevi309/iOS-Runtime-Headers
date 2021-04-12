/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
*/

#import <libobjc.A.dylib/SVVideoVolumeObserving.h>

@class SVPlayer, AVAudioSession, SVKeyValueObserver, NSString;

@interface SVVideoVolumeObserver : NSObject <SVVideoVolumeObserving> {

	BOOL _muted;
	float _volume;
	/*^block*/id _volumeChangeBlock;
	/*^block*/id _muteStateChangeBlock;
	SVPlayer* _player;
	AVAudioSession* _audioSession;
	SVKeyValueObserver* _outputVolumeObserver;
	SVKeyValueObserver* _muteStateObserver;

}

@property (nonatomic,readonly) SVPlayer * player;                                          //@synthesize player=_player - In the implementation block
@property (nonatomic,__weak,readonly) AVAudioSession * audioSession;                       //@synthesize audioSession=_audioSession - In the implementation block
@property (nonatomic,readonly) SVKeyValueObserver * outputVolumeObserver;                  //@synthesize outputVolumeObserver=_outputVolumeObserver - In the implementation block
@property (nonatomic,readonly) SVKeyValueObserver * muteStateObserver;                     //@synthesize muteStateObserver=_muteStateObserver - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL muted;                                                 //@synthesize muted=_muted - In the implementation block
@property (nonatomic,readonly) float volume;                                               //@synthesize volume=_volume - In the implementation block
@property (setter=onVolumeChange:,nonatomic,copy) id volumeChangeBlock;                    //@synthesize volumeChangeBlock=_volumeChangeBlock - In the implementation block
@property (setter=onMuteStateChange:,nonatomic,copy) id muteStateChangeBlock;              //@synthesize muteStateChangeBlock=_muteStateChangeBlock - In the implementation block
-(float)volume;
-(void)volumeChanged:(float)arg1 ;
-(BOOL)muted;
-(SVPlayer *)player;
-(AVAudioSession *)audioSession;
-(void)muteStateChanged:(BOOL)arg1 ;
-(id)initWithPlayer:(id)arg1 audioSession:(id)arg2 ;
-(void)updateWithVolume:(float)arg1 muted:(BOOL)arg2 ;
-(id)volumeChangeBlock;
-(id)muteStateChangeBlock;
-(void)onVolumeChange:(/*^block*/id)arg1 ;
-(void)onMuteStateChange:(/*^block*/id)arg1 ;
-(SVKeyValueObserver *)outputVolumeObserver;
-(SVKeyValueObserver *)muteStateObserver;
@end

