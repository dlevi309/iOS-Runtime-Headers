/*
* Generated on Thursday, January 14, 2021 at 2:21:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MPModelMoviePlaybackItemMetadata.h>

@class MPModelGenericObject, MPModelPlaylistEntry;

@interface MPModelPlaylistEntryMoviePlaybackItemMetadata : MPModelMoviePlaybackItemMetadata {

	MPModelGenericObject* _modelGenericObject;
	MPModelPlaylistEntry* _playlistEntry;

}

@property (nonatomic,retain) MPModelPlaylistEntry * playlistEntry;              //@synthesize playlistEntry=_playlistEntry - In the implementation block
+(id)requiredProperties;
-(id)movie;
-(id)modelGenericObject;
-(void)_invalidateModelObjectPlaybackItemMetadata;
-(unsigned long long)hash;
-(void)setMovie:(id)arg1 ;
-(void)setPlaylistEntry:(MPModelPlaylistEntry *)arg1 ;
-(MPModelPlaylistEntry *)playlistEntry;
-(BOOL)isEqual:(id)arg1 ;
@end

