/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MPModelObject.h>

@class MPModelSong, MPModelAlbum, MPModelArtist, MPModelMediaClip, MPModelPlaylist, MPModelPlaylistEntry, MPModelTVEpisode, MPModelTVSeason, MPModelTVShow, MPModelMovie, MPModelPodcast, MPModelPodcastEpisode, MPModelRadioStation;

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
+(id)__album_KEY;
+(id)__artist_KEY;
+(id)__playlist_KEY;
+(id)__radioStation_KEY;
+(id)__season_KEY;
+(id)__show_KEY;
+(id)__mediaClip_KEY;
+(id)__movie_KEY;
+(id)__song_KEY;
+(id)requiredStoreLibraryPersonalizationProperties;
+(id)genericObjectWithModelObject:(id)arg1 ;
+(id)kindWithRelationshipKinds:(id)arg1 ;
+(id)__playlistEntry_KEY;
+(id)__tvEpisode_KEY;
+(id)__podcast_KEY;
+(id)__podcastEpisode_KEY;
-(long long)type;
-(id)anyObject;
-(id)identifiers;
-(id)humanDescription;
-(id)artworkCatalog;
-(id)mediaItemPropertyValues;
-(id)personalizationScopedPropertiesForProperties:(id)arg1 ;
-(id)relativeModelObjectForStoreLibraryPersonalization;
-(id)objectWithStoreLibraryPersonalizationRelativeModelObject:(id)arg1 ;
-(id)copyWithIdentifiers:(id)arg1 block:(/*^block*/id)arg2 ;
-(id)flattenedGenericObject;
@end

