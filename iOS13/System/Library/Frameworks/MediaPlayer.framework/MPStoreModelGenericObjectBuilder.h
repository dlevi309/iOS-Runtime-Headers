/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MPStoreModelObjectBuilder.h>

@class NSMapTable, MPStoreModelAlbumBuilder, MPStoreModelArtistBuilder, MPStoreModelMovieBuilder, MPStoreModelPlaylistBuilder, MPStoreModelSongBuilder, MPStoreModelTVEpisodeBuilder, MPStoreModelTVSeasonBuilder, MPStoreModelTVShowBuilder;

@interface MPStoreModelGenericObjectBuilder : MPStoreModelObjectBuilder {

	NSMapTable* _baseContentItemIDToOccurrenceCount;
	MPStoreModelAlbumBuilder* _albumBuilder;
	MPStoreModelArtistBuilder* _artistBuilder;
	MPStoreModelMovieBuilder* _movieBuilder;
	MPStoreModelPlaylistBuilder* _playlistBuilder;
	MPStoreModelSongBuilder* _songBuilder;
	MPStoreModelTVEpisodeBuilder* _tvEpisodeBuilder;
	MPStoreModelTVSeasonBuilder* _tvSeasonBuilder;
	MPStoreModelTVShowBuilder* _tvShowBuilder;
	BOOL _shouldUsePlaylistEntry;

}

@property (assign,nonatomic) BOOL shouldUsePlaylistEntry;              //@synthesize shouldUsePlaylistEntry=_shouldUsePlaylistEntry - In the implementation block
-(id)modelObjectWithStoreItemMetadata:(id)arg1 sourceModelObject:(id)arg2 userIdentity:(id)arg3 ;
-(id)_modelObjectWithUniqueContentItemIDForModelObject:(id)arg1 ;
-(BOOL)shouldUsePlaylistEntry;
-(void)setShouldUsePlaylistEntry:(BOOL)arg1 ;
@end

