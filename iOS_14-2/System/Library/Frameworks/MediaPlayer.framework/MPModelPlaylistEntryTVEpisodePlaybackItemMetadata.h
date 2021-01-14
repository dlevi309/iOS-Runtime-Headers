/*
* Generated on Thursday, January 14, 2021 at 2:21:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)episode;
-(id)modelGenericObject;
-(void)setEpisode:(id)arg1 ;
-(void)_invalidateModelObjectPlaybackItemMetadata;
-(unsigned long long)hash;
-(void)setPlaylistEntry:(MPModelPlaylistEntry *)arg1 ;
-(MPModelPlaylistEntry *)playlistEntry;
-(BOOL)isEqual:(id)arg1 ;
@end

