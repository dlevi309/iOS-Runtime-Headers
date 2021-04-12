/*
* Generated on Monday, March 1, 2021 at 2:31:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
*/


@class NSHashTable;

@interface LPMediaPlaybackManager : NSObject {

	NSHashTable* _mediaPlayers;

}
+(id)shared;
-(id)init;
-(void)volumeChanged:(id)arg1 ;
-(void)_updateAudioSessionCategory;
-(id)audioSession;
-(BOOL)releaseDecodingResourcesForInactivePlayers;
-(void)addMediaPlayer:(id)arg1 ;
-(void)removeMediaPlayer:(id)arg1 ;
-(void)mediaPlayer:(id)arg1 didChangePlayingState:(BOOL)arg2 ;
-(void)mediaPlayer:(id)arg1 didChangeMutedState:(BOOL)arg2 ;
-(void)_deactivateAllPlayingMediaPlayersExcept:(id)arg1 ;
-(BOOL)_sharedSessionHasPlayingAudio;
@end

