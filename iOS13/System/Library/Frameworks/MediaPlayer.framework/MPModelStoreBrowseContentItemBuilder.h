/*
* Generated on Monday, March 1, 2021 at 2:31:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPStoreModelObjectBuilder.h>

@class MPStoreModelAlbumBuilder, MPStoreModelArtistBuilder, MPStoreModelCuratorBuilder, MPStoreModelTVEpisodeBuilder, MPStoreModelMovieBuilder, MPStoreModelRadioStationBuilder, MPStoreModelSocialPersonBuilder, MPStoreModelPlaylistBuilder, MPStoreModelTVSeasonBuilder, MPStoreModelSongBuilder, MPStoreModelTVShowBuilder, MPStoreModelTVShowCreatorBuilder;

@interface MPModelStoreBrowseContentItemBuilder : MPStoreModelObjectBuilder {

	SCD_Struct_MP0 _requestedBrowseContentItemProperties;
	MPStoreModelAlbumBuilder* _albumBuilder;
	MPStoreModelArtistBuilder* _artistBuilder;
	MPStoreModelCuratorBuilder* _curatorBuilder;
	MPStoreModelTVEpisodeBuilder* _episodeBuilder;
	MPStoreModelMovieBuilder* _movieBuilder;
	MPStoreModelRadioStationBuilder* _radioStationBuilder;
	MPStoreModelSocialPersonBuilder* _socialPersonBuilder;
	MPStoreModelPlaylistBuilder* _playlistBuilder;
	MPStoreModelTVSeasonBuilder* _seasonBuilder;
	MPStoreModelSongBuilder* _songBuilder;
	MPStoreModelTVShowBuilder* _showBuilder;
	MPStoreModelTVShowCreatorBuilder* _showCreatorBuilder;
	BOOL _shouldFakeEpisodes;
	BOOL _allowsRadioStations;
	BOOL _allowsVideoContent;

}

@property (assign,nonatomic) BOOL allowsRadioStations;              //@synthesize allowsRadioStations=_allowsRadioStations - In the implementation block
@property (assign,nonatomic) BOOL allowsVideoContent;               //@synthesize allowsVideoContent=_allowsVideoContent - In the implementation block
+(id)allSupportedProperties;
-(id)initWithRequestedPropertySet:(id)arg1 ;
-(long long)contentItemTypeForRawResponseKindIdentifierValue:(long long)arg1 ;
-(long long)contentItemTypeForRawResponseKindIdentifiers:(id)arg1 ;
-(long long)contentItemTypeForStoreItemMetadata:(id)arg1 ;
-(long long)contentItemTypeForMusicAPIType:(id)arg1 ;
-(id)modelObjectWithStoreItemMetadata:(id)arg1 sourceModelObject:(id)arg2 userIdentity:(id)arg3 ;
-(BOOL)allowsRadioStations;
-(void)setAllowsRadioStations:(BOOL)arg1 ;
-(BOOL)allowsVideoContent;
-(void)setAllowsVideoContent:(BOOL)arg1 ;
@end

