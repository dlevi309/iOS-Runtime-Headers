/*
* Generated on Monday, March 1, 2021 at 2:32:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/


@protocol MPCPlayerResponseBuilder <MPCResponseMediaRemoteControllerChaining>
@optional
-(long long)playerState:(long long)arg1 chain:(id)arg2;
-(id)tracklistUniqueIdentifier:(id)arg1 chain:(id)arg2;
-(long long)playerRepeatType:(long long)arg1 chain:(id)arg2;
-(long long)playerShuffleType:(long long)arg1 chain:(id)arg2;
-(long long)playerQueueEndAction:(long long)arg1 chain:(id)arg2;
-(long long)playerLastChangeDirection:(long long)arg1 chain:(id)arg2;
-(long long)playerUpNextItemCount:(long long)arg1 chain:(id)arg2;
-(unsigned long long)playerNumberOfSections:(unsigned long long)arg1 chain:(id)arg2;
-(unsigned long long)playerNumberOfItems:(unsigned long long)arg1 inSection:(unsigned long long)arg2 chain:(id)arg3;
-(SCD_Struct_MP8*)playerItemDuration:(SCD_Struct_MP8)arg1 atIndexPath:(id)arg2 chain:(id)arg3;
-(id)playerItemLocalizedDurationString:(id)arg1 atIndexPath:(id)arg2 chain:(id)arg3;
-(id)playerItemExplicitBadge:(id)arg1 atIndexPath:(id)arg2 chain:(id)arg3;
-(long long)playerItemEditingStyleFlags:(long long)arg1 atIndexPath:(id)arg2 chain:(id)arg3;
-(BOOL)playerItemIsPlaceholder:(BOOL)arg1 atIndexPath:(id)arg2 chain:(id)arg3;
-(id)playerModelObject:(id)arg1 propertySet:(id)arg2 atIndexPath:(id)arg3 chain:(id)arg4;
-(id)playerPlayingItemIndexPath:(id)arg1 chain:(id)arg2;
-(long long)playerPlayingItemGlobalIndex:(long long)arg1 chain:(id)arg2;
-(long long)playerGlobalItemCount:(long long)arg1 chain:(id)arg2;
-(id)playerItemLanguageOptionGroups:(id)arg1 atIndexPath:(id)arg2 chain:(id)arg3;
-(id)playerItemCurrentLanguageOptions:(id)arg1 atIndexPath:(id)arg2 chain:(id)arg3;
-(BOOL)playerCommandSupported:(BOOL)arg1 command:(unsigned)arg2 chain:(id)arg3;
-(BOOL)playerCommandEnabled:(BOOL)arg1 command:(unsigned)arg2 chain:(id)arg3;
-(id)playerCommandOptionValue:(id)arg1 forKey:(id)arg2 command:(unsigned)arg3 chain:(id)arg4;
-(id)playerVideoView:(id)arg1 chain:(id)arg2;

@end

