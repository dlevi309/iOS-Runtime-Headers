/*
* Generated on Thursday, January 14, 2021 at 2:21:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)_modelObjectWithUniqueContentItemIDForModelObject:(id)arg1 ;
-(void)setShouldUsePlaylistEntry:(BOOL)arg1 ;
-(BOOL)shouldUsePlaylistEntry;
-(id)modelObjectWithStoreItemMetadata:(id)arg1 sourceModelObject:(id)arg2 userIdentity:(id)arg3 ;
@end

