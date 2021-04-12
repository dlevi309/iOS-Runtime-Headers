/*
* Generated on Thursday, January 14, 2021 at 2:21:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MPModelObject.h>

@class MPModelSong, MPModelAlbum, MPModelArtist, MPModelMediaClip, MPModelPlaylist, MPModelPlaylistEntry, MPModelTVEpisode, MPModelTVSeason, MPModelTVShow, MPModelMovie, MPModelPodcast, MPModelPodcastEpisode, MPModelRadioStation, MPModelComposer, MPModelGenre, MPModelCurator, MPModelSocialPerson;

@interface MPModelGenericObject : MPModelObject

@property (nonatomic,retain) MPModelSong * song; 
@property (nonatomic,retain) MPModelAlbum * album; 
@property (nonatomic,retain) MPModelArtist * artist; 
@property (nonatomic,retain) MPModelMediaClip * mediaClip; 
@property (nonatomic,retain) MPModelPlaylist * playlist; 
@property (nonatomic,retain) MPModelPlaylistEntry * playlistEntry; 
@property (nonatomic,retain) MPModelTVEpisode * tvEpisode; 
@property (nonatomic,retain) MPModelTVSeason * season; 
@property (nonatomic,retain) MPModelTVShow * show; 
@property (nonatomic,retain) MPModelMovie * movie; 
@property (nonatomic,retain) MPModelPodcast * podcast; 
@property (nonatomic,retain) MPModelPodcastEpisode * podcastEpisode; 
@property (nonatomic,retain) MPModelRadioStation * radioStation; 
@property (nonatomic,retain) MPModelComposer * composer; 
@property (nonatomic,retain) MPModelGenre * genre; 
@property (nonatomic,retain) MPModelCurator * curator; 
@property (nonatomic,retain) MPModelSocialPerson * socialPerson; 
+(id)__album_KEY;
+(id)__show_KEY;
+(id)requiredStoreLibraryPersonalizationProperties;
+(id)__song_KEY;
+(id)__playlist_KEY;
+(id)kindWithRelationshipKinds:(id)arg1 ;
+(id)__socialPerson_KEY;
+(id)__movie_KEY;
+(id)__season_KEY;
+(id)__radioStation_KEY;
+(id)__curator_KEY;
+(id)__genre_KEY;
+(id)__composer_KEY;
+(id)__artist_KEY;
+(id)__mediaClip_KEY;
+(id)genericObjectWithModelObject:(id)arg1 ;
+(id)__playlistEntry_KEY;
+(id)relationshipKeyForGenericObjectType:(long long)arg1 ;
+(id)__tvEpisode_KEY;
+(id)__podcast_KEY;
+(id)__podcastEpisode_KEY;
-(id)identifiers;
-(id)anyObject;
-(id)mediaItemPropertyValues;
-(long long)type;
-(id)artworkCatalog;
-(id)personalizationScopedPropertiesForProperties:(id)arg1 ;
-(id)relativeModelObjectForStoreLibraryPersonalization;
-(id)objectWithStoreLibraryPersonalizationRelativeModelObject:(id)arg1 ;
-(id)copyWithIdentifiers:(id)arg1 block:(/*^block*/id)arg2 ;
-(id)copyWithIdentifiers:(id)arg1 propertySet:(id)arg2 ;
-(id)mergeWithObject:(id)arg1 ;
-(id)humanDescription;
-(id)flattenedGenericObject;
@end

