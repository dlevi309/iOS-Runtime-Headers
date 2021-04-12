/*
* Generated on Monday, March 1, 2021 at 2:32:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/

#import <MediaPlayer/MPAVController.h>

@class MPCPlaybackEngine, MPAVItem, NSMutableSet;

@interface _MPCAVController : MPAVController {

	BOOL _playedSuccessfully;
	BOOL _allowsNewPlaybackErrorItem;
	MPCPlaybackEngine* _playbackEngine;
	long long _actionAtQueueEnd;
	MPAVItem* _firstPlaybackErrorItem;
	NSMutableSet* _failedItemsIdentifiers;

}

@property (assign,nonatomic) BOOL allowsNewPlaybackErrorItem;                                   //@synthesize allowsNewPlaybackErrorItem=_allowsNewPlaybackErrorItem - In the implementation block
@property (assign,nonatomic,__weak) MPAVItem * firstPlaybackErrorItem;                          //@synthesize firstPlaybackErrorItem=_firstPlaybackErrorItem - In the implementation block
@property (nonatomic,retain) NSMutableSet * failedItemsIdentifiers;                             //@synthesize failedItemsIdentifiers=_failedItemsIdentifiers - In the implementation block
@property (nonatomic,__weak,readonly) MPCPlaybackEngine * playbackEngine;                       //@synthesize playbackEngine=_playbackEngine - In the implementation block
@property (assign,getter=hasPlayedSuccessfully,nonatomic) BOOL playedSuccessfully;              //@synthesize playedSuccessfully=_playedSuccessfully - In the implementation block
@property (assign,nonatomic) long long actionAtQueueEnd;                                        //@synthesize actionAtQueueEnd=_actionAtQueueEnd - In the implementation block
+(BOOL)prefersApplicationAudioSession;
-(void)_contentsChanged;
-(void)_setState:(long long)arg1 ;
-(void)_itemPlaybackDidEndNotification:(id)arg1 ;
-(void)queueController:(id)arg1 didChangeRepeatType:(long long)arg2 ;
-(void)queueController:(id)arg1 didChangeShuffleType:(long long)arg2 ;
-(void)queueController:(id)arg1 didIncrementVersionForSegment:(id)arg2 ;
-(void)endPlayback;
-(id)_expectedAssetTypesForPlaybackMode:(long long)arg1 ;
-(void)reloadWithPlaybackContext:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_updateStateForPlaybackPrevention;
-(void)_itemDidChange:(id)arg1 ;
-(void)_itemWillChange:(id)arg1 ;
-(void)_configureAudioSession;
-(void)_connectAVPlayer;
-(void)_streamBufferFull:(id)arg1 ;
-(void)_streamLikelyToKeepUp:(id)arg1 ;
-(void)playbackHasStartedForItem:(id)arg1 ;
-(void)handlePlaybackErrorWithUserInfo:(id)arg1 ;
-(void)_queueDidEndWithReason:(id)arg1 lastItem:(id)arg2 ;
-(void)_itemDidSignificantlyChangeElapsedTime:(double)arg1 rate:(float)arg2 ;
-(MPCPlaybackEngine *)playbackEngine;
-(id)initWithPlaybackEngine:(id)arg1 ;
-(long long)actionAtQueueEnd;
-(void)setActionAtQueueEnd:(long long)arg1 ;
-(id)initWithPlaybackEngine:(id)arg1 options:(unsigned long long)arg2 ;
-(void)_playbackUserDefaultsEQPresetDidChangeNotification:(id)arg1 ;
-(NSMutableSet *)failedItemsIdentifiers;
-(void)setPlayedSuccessfully:(BOOL)arg1 ;
-(void)setAllowsNewPlaybackErrorItem:(BOOL)arg1 ;
-(MPAVItem *)firstPlaybackErrorItem;
-(BOOL)hasPlayedSuccessfully;
-(void)updateAudioSession;
-(BOOL)allowsNewPlaybackErrorItem;
-(void)setFirstPlaybackErrorItem:(MPAVItem *)arg1 ;
-(void)_networkPolicyItemCellularRestrictedNotification:(id)arg1 ;
-(void)setFailedItemsIdentifiers:(NSMutableSet *)arg1 ;
@end

