/*
* Generated on Thursday, January 14, 2021 at 2:25:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/

#import <MediaPlayer/MPAVController.h>
#import <libobjc.A.dylib/MPCPlaybackEngineImplementation.h>

@class MPCPlaybackEngine, NSString, NSMutableSet, MPAVItem, MPQueuePlayer, MPVideoView, AVPictureInPictureController;

@interface _MPCAVController : MPAVController <MPCPlaybackEngineImplementation> {

	BOOL _hasPlayedSuccessfully;
	MPCPlaybackEngine* _playbackEngine;
	long long _actionAtQueueEnd;
	NSString* _firstPlaybackItemIdentifier;
	NSMutableSet* _failedItemsIdentifiers;

}

@property (nonatomic,copy) NSString * firstPlaybackItemIdentifier;                                                    //@synthesize firstPlaybackItemIdentifier=_firstPlaybackItemIdentifier - In the implementation block
@property (nonatomic,retain) NSMutableSet * failedItemsIdentifiers;                                                   //@synthesize failedItemsIdentifiers=_failedItemsIdentifiers - In the implementation block
@property (nonatomic,__weak,readonly) MPCPlaybackEngine * playbackEngine;                                             //@synthesize playbackEngine=_playbackEngine - In the implementation block
@property (assign,nonatomic) long long actionAtQueueEnd;                                                              //@synthesize actionAtQueueEnd=_actionAtQueueEnd - In the implementation block
@property (nonatomic,retain) id<MPAVQueueController> queueController; 
@property (nonatomic,readonly) MPAVItem * currentItem; 
@property (nonatomic,readonly) MPQueuePlayer * queuePlayer; 
@property (assign,nonatomic) double currentTime; 
@property (nonatomic,readonly) long long state; 
@property (nonatomic,readonly) long long stateBeforeInterruption; 
@property (nonatomic,readonly) MPVideoView * videoView; 
@property (nonatomic,readonly) AVPictureInPictureController * pictureInPictureController; 
@property (assign,nonatomic) BOOL wantsPictureInPicture; 
@property (assign,nonatomic) BOOL automaticallyHidesVideoLayersForMusicVideosWhenApplicationBackgrounds; 
@property (assign,nonatomic) BOOL hasPlayedSuccessfully;                                                              //@synthesize hasPlayedSuccessfully=_hasPlayedSuccessfully - In the implementation block
@property (assign,nonatomic) BOOL autoPlayWhenLikelyToKeepUp; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)prefersApplicationAudioSession;
-(void)_contentsChanged;
-(long long)actionAtQueueEnd;
-(void)_setState:(long long)arg1 ;
-(void)_itemDidSignificantlyChangeElapsedTime:(double)arg1 rate:(float)arg2 ;
-(id)initWithPlaybackEngine:(id)arg1 ;
-(void)_itemWillChange:(id)arg1 ;
-(void)_networkPolicyItemCellularRestrictedNotification:(id)arg1 ;
-(void)_queueDidEndWithReason:(id)arg1 lastItem:(id)arg2 ;
-(void)togglePlaybackWithOptions:(unsigned long long)arg1 ;
-(void)_setQueueController:(id)arg1 deferItemLoading:(BOOL)arg2 ;
-(BOOL)hasPlayedSuccessfully;
-(void)setFailedItemsIdentifiers:(NSMutableSet *)arg1 ;
-(void)_streamBufferFull:(id)arg1 ;
-(void)queueController:(id)arg1 didChangeActionAtQueueEnd:(long long)arg2 ;
-(void)setFirstPlaybackItemIdentifier:(NSString *)arg1 ;
-(NSMutableSet *)failedItemsIdentifiers;
-(void)reloadWithPlaybackContext:(id)arg1 identifier:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_configureAudioSession;
-(void)updateAudioSession;
-(void)queueController:(id)arg1 didIncrementVersionForSegment:(id)arg2 ;
-(void)_itemPlaybackDidEndNotification:(id)arg1 ;
-(void)playbackHasStartedForItem:(id)arg1 ;
-(void)queueController:(id)arg1 didChangeShuffleType:(long long)arg2 ;
-(void)_connectAVPlayer;
-(void)loadSessionWithQueueController:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setActionAtQueueEnd:(long long)arg1 ;
-(void)_itemFailedToPlayToEnd:(id)arg1 ;
-(void)endPlayback;
-(void)_enforcingPolicy:(BOOL)arg1 ;
-(void)_connectAVPlayerDeferringItemLoading:(BOOL)arg1 ;
-(void)_playbackUserDefaultsEQPresetDidChangeNotification:(id)arg1 ;
-(void)handlePlaybackErrorWithUserInfo:(id)arg1 ;
-(void)_firstVideoFrameDisplayed:(id)arg1 ;
-(void)_updateStateForPlaybackPrevention;
-(void)_streamRanDry:(id)arg1 ;
-(void)setHasPlayedSuccessfully:(BOOL)arg1 ;
-(void)_itemDidChange:(id)arg1 ;
-(MPCPlaybackEngine *)playbackEngine;
-(id)_expectedAssetTypesForPlaybackMode:(long long)arg1 ;
-(void)_streamLikelyToKeepUp:(id)arg1 ;
-(void)queueController:(id)arg1 didChangeRepeatType:(long long)arg2 ;
-(BOOL)becomeActiveWithError:(id*)arg1 ;
-(void)_streamUnlikelyToKeepUp:(id)arg1 ;
-(NSString *)firstPlaybackItemIdentifier;
-(void)playWithOptions:(unsigned long long)arg1 ;
@end

