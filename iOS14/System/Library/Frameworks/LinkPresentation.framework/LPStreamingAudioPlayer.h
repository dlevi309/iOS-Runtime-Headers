/*
* Generated on Thursday, January 14, 2021 at 2:22:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
*/

#import <libobjc.A.dylib/LPMediaPlayer.h>

@class LPAudio, AVPlayerItem, AVPlayer, NSHashTable, NSString;

@interface LPStreamingAudioPlayer : NSObject <LPMediaPlayer> {

	LPAudio* _audio;
	AVPlayerItem* _item;
	AVPlayer* _player;
	id _timeObserver;
	id _endObserver;
	NSHashTable* _clients;
	unsigned long long _state;

}

@property (nonatomic,readonly) float progress; 
@property (nonatomic,readonly) unsigned long long state;                                 //@synthesize state=_state - In the implementation block
@property (assign,getter=isActive,nonatomic) BOOL active; 
@property (getter=isMuted,nonatomic,readonly) BOOL muted; 
@property (getter=isPlaying,nonatomic,readonly) BOOL playing; 
@property (getter=isFullScreen,nonatomic,readonly) BOOL fullScreen; 
@property (nonatomic,readonly) BOOL usesSharedAudioSession; 
@property (nonatomic,readonly) BOOL shouldUnmuteWhenUserAdjustsVolume; 
@property (nonatomic,readonly) unsigned long long lastInteractionTimestamp; 
@property (nonatomic,readonly) double unobscuredAreaFraction; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)playerWithAudio:(id)arg1 ;
-(void)addClient:(id)arg1 ;
-(BOOL)isFullScreen;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(BOOL)isPlaying;
-(void)setActive:(BOOL)arg1 ;
-(BOOL)usesSharedAudioSession;
-(float)progress;
-(void)pause;
-(void)transitionToState:(unsigned long long)arg1 ;
-(BOOL)isActive;
-(void)removeClient:(id)arg1 ;
-(void)play;
-(BOOL)shouldUnmuteWhenUserAdjustsVolume;
-(id)initWithAudio:(id)arg1 ;
-(void)dispatchDidChangeProgressToAllClients:(float)arg1 ;
-(void)dispatchDidFailToPlayToAllClients;
-(void)dispatchDidTransitionToStateToAllClients:(unsigned long long)arg1 ;
-(unsigned long long)state;
-(BOOL)isMuted;
-(void)dealloc;
@end

