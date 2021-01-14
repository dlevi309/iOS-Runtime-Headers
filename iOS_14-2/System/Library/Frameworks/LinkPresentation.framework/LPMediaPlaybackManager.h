/*
* Generated on Thursday, January 14, 2021 at 2:22:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
*/


@class NSHashTable;

@interface LPMediaPlaybackManager : NSObject {

	NSHashTable* _mediaPlayers;

}
+(id)shared;
-(BOOL)releaseDecodingResourcesForInactivePlayers;
-(id)init;
-(void)addMediaPlayer:(id)arg1 ;
-(void)removeMediaPlayer:(id)arg1 ;
-(void)mediaPlayer:(id)arg1 didChangePlayingState:(BOOL)arg2 ;
-(void)mediaPlayer:(id)arg1 didChangeMutedState:(BOOL)arg2 ;
-(void)_deactivateAllPlayingMediaPlayersExcept:(id)arg1 ;
-(BOOL)_sharedSessionHasPlayingAudio;
-(void)volumeChanged:(id)arg1 ;
-(void)_updateAudioSessionCategory;
-(id)audioSession;
@end

