/*
* Generated on Thursday, January 14, 2021 at 2:27:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUI.framework/IMSharedUI
*/

#import <IMSharedUI/IMAudioPlayerDelegate.h>

@protocol IMAudioControllerDelegate;
@class IMAudioPlayer, NSMutableArray, NSURL, NSArray, NSString;

@interface IMAudioController : NSObject <IMAudioPlayerDelegate> {

	unsigned long long _currentIndex;
	IMAudioPlayer* _listenAudioPlayer;
	NSMutableArray* _audioURLs;
	BOOL _shouldUseSpeaker;
	BOOL _shouldStopPlayingWhenSilent;
	BOOL _shouldDuckOthers;
	BOOL _shouldUseAVPlayer;
	BOOL _playing;
	BOOL _paused;
	BOOL _interrupted;
	NSURL* _currentURL;
	id<IMAudioControllerDelegate> _delegate;
	IMAudioPlayer* _audioPlayer;

}

@property (assign,getter=isPaused,nonatomic) BOOL paused;                                //@synthesize paused=_paused - In the implementation block
@property (nonatomic,retain) IMAudioPlayer * audioPlayer;                                //@synthesize audioPlayer=_audioPlayer - In the implementation block
@property (assign,nonatomic) BOOL interrupted;                                           //@synthesize interrupted=_interrupted - In the implementation block
@property (assign,getter=isPlaying,nonatomic) BOOL playing;                              //@synthesize playing=_playing - In the implementation block
@property (nonatomic,retain) IMAudioPlayer * listenAudioPlayer;                          //@synthesize listenAudioPlayer=_listenAudioPlayer - In the implementation block
@property (assign,nonatomic) BOOL shouldUseSpeaker;                                      //@synthesize shouldUseSpeaker=_shouldUseSpeaker - In the implementation block
@property (assign,nonatomic) BOOL shouldStopPlayingWhenSilent;                           //@synthesize shouldStopPlayingWhenSilent=_shouldStopPlayingWhenSilent - In the implementation block
@property (assign,nonatomic) BOOL shouldDuckOthers;                                      //@synthesize shouldDuckOthers=_shouldDuckOthers - In the implementation block
@property (assign,nonatomic) BOOL shouldUseAVPlayer;                                     //@synthesize shouldUseAVPlayer=_shouldUseAVPlayer - In the implementation block
@property (nonatomic,readonly) NSURL * currentURL;                                       //@synthesize currentURL=_currentURL - In the implementation block
@property (nonatomic,readonly) double currentMediaObjectTime; 
@property (nonatomic,readonly) double currentMediaObjectDuration; 
@property (assign,nonatomic) float volume; 
@property (nonatomic,copy,readonly) NSArray * audioURLs; 
@property (assign,nonatomic,__weak) id<IMAudioControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)audioControllerClass;
+(id)audioControllerWithContentsOfURLs:(id)arg1 ;
-(BOOL)isPlaying;
-(void)setVolume:(float)arg1 ;
-(id<IMAudioControllerDelegate>)delegate;
-(void)pause;
-(void)setPlaying:(BOOL)arg1 ;
-(void)setPaused:(BOOL)arg1 ;
-(void)play;
-(IMAudioPlayer *)audioPlayer;
-(void)stop;
-(unsigned long long)audioSessionControllerOptions;
-(BOOL)shouldUseSpeaker;
-(BOOL)shouldStopPlayingWhenSilent;
-(BOOL)shouldDuckOthers;
-(void)setAudioPlayer:(IMAudioPlayer *)arg1 ;
-(void)audioPlayerDidFinishPlaying:(id)arg1 ;
-(BOOL)shouldUseAVPlayer;
-(void)playListenSound:(/*^block*/id)arg1 ;
-(void)playListenEndSound:(/*^block*/id)arg1 ;
-(void)audioPlayerCurrentTimeDidChange:(id)arg1 ;
-(void)audioPlayerDidPrepareAudioToPlay:(id)arg1 successfully:(BOOL)arg2 ;
-(double)currentMediaObjectDuration;
-(NSArray *)audioURLs;
-(void)prepareToPlay;
-(void)setInterrupted:(BOOL)arg1 ;
-(void)setDelegate:(id<IMAudioControllerDelegate>)arg1 ;
-(BOOL)interrupted;
-(void)playAfterDelay:(double)arg1 ;
-(void)setShouldUseSpeaker:(BOOL)arg1 ;
-(id)currentMediaObject;
-(double)currentMediaObjectTime;
-(float)volume;
-(void)setShouldUseAVPlayer:(BOOL)arg1 ;
-(void)setShouldStopPlayingWhenSilent:(BOOL)arg1 ;
-(void)setShouldDuckOthers:(BOOL)arg1 ;
-(BOOL)isPaused;
-(void)dealloc;
-(NSURL *)currentURL;
-(id)initWithContentsOfURLs:(id)arg1 ;
-(void)_notifyPlayerDidPrepareAudioURL:(id)arg1 successfully:(BOOL)arg2 ;
-(void)setListenAudioPlayer:(IMAudioPlayer *)arg1 ;
-(void)_playSoundWithURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)addContentsOfURL:(id)arg1 ;
-(void)addContentsOfURLs:(id)arg1 ;
-(IMAudioPlayer *)listenAudioPlayer;
@end

