/*
* Generated on Monday, March 1, 2021 at 2:31:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <libobjc.A.dylib/CKAudioPlayerDelegate.h>

@protocol CKAudioControllerDelegate;
@class CKAudioPlayer, NSMutableArray, NSArray, CKMediaObject, NSString;

@interface CKAudioController : NSObject <CKAudioPlayerDelegate> {

	unsigned long long _currentIndex;
	CKAudioPlayer* _listenAudioPlayer;
	BOOL _shouldUseSpeaker;
	BOOL _shouldStopPlayingWhenSilent;
	BOOL _shouldDuckOthers;
	BOOL _shouldUseAVPlayer;
	BOOL _playing;
	BOOL _paused;
	BOOL _interrupted;
	NSMutableArray* _mediaObjects;
	id<CKAudioControllerDelegate> _delegate;
	CKAudioPlayer* _audioPlayer;

}

@property (assign,getter=isPaused,nonatomic) BOOL paused;                                          //@synthesize paused=_paused - In the implementation block
@property (setter=_setMediaObjects:,nonatomic,retain) NSMutableArray * _mediaObjects;              //@synthesize mediaObjects=_mediaObjects - In the implementation block
@property (nonatomic,retain) CKAudioPlayer * audioPlayer;                                          //@synthesize audioPlayer=_audioPlayer - In the implementation block
@property (assign,nonatomic) BOOL interrupted;                                                     //@synthesize interrupted=_interrupted - In the implementation block
@property (assign,getter=isPlaying,nonatomic) BOOL playing;                                        //@synthesize playing=_playing - In the implementation block
@property (nonatomic,readonly) NSArray * mediaObjects; 
@property (assign,nonatomic,__weak) id<CKAudioControllerDelegate> delegate;                        //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL shouldUseSpeaker;                                                //@synthesize shouldUseSpeaker=_shouldUseSpeaker - In the implementation block
@property (assign,nonatomic) BOOL shouldStopPlayingWhenSilent;                                     //@synthesize shouldStopPlayingWhenSilent=_shouldStopPlayingWhenSilent - In the implementation block
@property (assign,nonatomic) BOOL shouldDuckOthers;                                                //@synthesize shouldDuckOthers=_shouldDuckOthers - In the implementation block
@property (assign,nonatomic) BOOL shouldUseAVPlayer;                                               //@synthesize shouldUseAVPlayer=_shouldUseAVPlayer - In the implementation block
@property (nonatomic,readonly) CKMediaObject * currentMediaObject; 
@property (nonatomic,readonly) double currentMediaObjectTime; 
@property (nonatomic,readonly) double currentMediaObjectDuration; 
@property (assign,nonatomic) float volume; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<CKAudioControllerDelegate>)delegate;
-(void)setDelegate:(id<CKAudioControllerDelegate>)arg1 ;
-(void)pause;
-(void)stop;
-(BOOL)isPaused;
-(void)setPaused:(BOOL)arg1 ;
-(void)play;
-(float)volume;
-(void)setVolume:(float)arg1 ;
-(BOOL)isPlaying;
-(void)applicationWillResignActive;
-(BOOL)interrupted;
-(CKAudioPlayer *)audioPlayer;
-(void)setAudioPlayer:(CKAudioPlayer *)arg1 ;
-(void)prepareToPlay;
-(void)setInterrupted:(BOOL)arg1 ;
-(void)setPlaying:(BOOL)arg1 ;
-(NSArray *)mediaObjects;
-(NSMutableArray *)_mediaObjects;
-(void)setShouldUseSpeaker:(BOOL)arg1 ;
-(void)playAfterDelay:(double)arg1 ;
-(id)initWithMediaObjects:(id)arg1 ;
-(CKMediaObject *)currentMediaObject;
-(double)currentMediaObjectTime;
-(void)addMediaObject:(id)arg1 ;
-(void)setShouldUseAVPlayer:(BOOL)arg1 ;
-(void)setShouldStopPlayingWhenSilent:(BOOL)arg1 ;
-(void)setShouldDuckOthers:(BOOL)arg1 ;
-(void)_setMediaObjects:(id)arg1 ;
-(void)audioSessionInterruption:(id)arg1 ;
-(unsigned long long)audioSessionControllerOptions;
-(BOOL)shouldUseSpeaker;
-(BOOL)shouldStopPlayingWhenSilent;
-(BOOL)shouldDuckOthers;
-(void)audioPlayerDidFinishPlaying:(id)arg1 ;
-(BOOL)shouldUseAVPlayer;
-(void)playListenSound:(/*^block*/id)arg1 ;
-(void)_notifyPlayerDidPrepareMediaObject:(id)arg1 successfully:(BOOL)arg2 ;
-(void)playListenEndSound:(/*^block*/id)arg1 ;
-(void)audioPlayerCurrentTimeDidChange:(id)arg1 ;
-(void)audioPlayerDidPrepareAudioToPlay:(id)arg1 successfully:(BOOL)arg2 ;
-(void)addMediaObjects:(id)arg1 ;
-(double)currentMediaObjectDuration;
@end

