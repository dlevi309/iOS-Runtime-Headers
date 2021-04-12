/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MPModelTVEpisodePlaybackItemMetadata.h>

@class MPModelGenericObject, MPModelPlaylistEntry;

@interface MPModelPlaylistEntryTVEpisodePlaybackItemMetadata : MPModelTVEpisodePlaybackItemMetadata {

	MPModelGenericObject* _modelGenericObject;
	MPModelPlaylistEntry* _playlistEntry;

}

@property (nonatomic,retain) MPModelPlaylistEntry * playlistEntry;              //@synthesize playlistEntry=_playlistEntry - In the implementation block
+(id)requiredProperties;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)modelGenericObject;
-(void)_invalidateModelObjectPlaybackItemMetadata;
-(void)setEpisode:(id)arg1 ;
-(id)episode;
-(void)setPlaylistEntry:(MPModelPlaylistEntry *)arg1 ;
-(MPModelPlaylistEntry *)playlistEntry;
@end

