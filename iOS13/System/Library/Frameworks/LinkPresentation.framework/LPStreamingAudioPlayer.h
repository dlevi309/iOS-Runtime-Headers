/*
* Generated on Monday, March 1, 2021 at 2:31:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,getter=isActive,nonatomic) BOOL active; 
@property (getter=isMuted,nonatomic,readonly) BOOL muted; 
@property (getter=isPlaying,nonatomic,readonly) BOOL playing; 
@property (getter=isFullScreen,nonatomic,readonly) BOOL fullScreen; 
@property (nonatomic,readonly) BOOL usesSharedAudioSession; 
@property (nonatomic,readonly) BOOL shouldUnmuteWhenUserAdjustsVolume; 
@property (nonatomic,readonly) unsigned long long lastInteractionTimestamp; 
@property (nonatomic,readonly) double unobscuredAreaFraction; 
+(id)playerWithAudio:(id)arg1 ;
-(void)dealloc;
-(BOOL)isActive;
-(void)pause;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(float)progress;
-(unsigned long long)state;
-(void)setActive:(BOOL)arg1 ;
-(void)play;
-(BOOL)isPlaying;
-(void)addClient:(id)arg1 ;
-(void)removeClient:(id)arg1 ;
-(void)transitionToState:(unsigned long long)arg1 ;
-(BOOL)isMuted;
-(BOOL)isFullScreen;
-(BOOL)usesSharedAudioSession;
-(BOOL)shouldUnmuteWhenUserAdjustsVolume;
-(id)initWithAudio:(id)arg1 ;
-(void)dispatchDidChangeProgressToAllClients:(float)arg1 ;
-(void)dispatchDidFailToPlayToAllClients;
-(void)dispatchDidTransitionToStateToAllClients:(unsigned long long)arg1 ;
@end

