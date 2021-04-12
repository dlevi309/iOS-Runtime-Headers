/*
* Generated on Thursday, January 14, 2021 at 2:21:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MPModelObject.h>

@class NSString, MPModelArtist, MPModelAlbum, MPModelCurator, MPModelMediaClip, MPModelMovie, MPModelPlaylist, MPModelRadioStation, MPModelSocialPerson, MPModelSong, MPModelTVEpisode, MPModelTVSeason, MPModelTVShow, MPModelTVShowCreator;

@interface MPModelStoreBrowseContentItem : MPModelObject

@property (assign,nonatomic) unsigned long long itemType; 
@property (nonatomic,copy) NSString * artistUploadedContentType; 
@property (nonatomic,retain) MPModelArtist * artist; 
@property (nonatomic,retain) MPModelAlbum * album; 
@property (nonatomic,retain) MPModelCurator * curator; 
@property (nonatomic,retain) MPModelMediaClip * mediaClip; 
@property (nonatomic,retain) MPModelMovie * movie; 
@property (nonatomic,retain) MPModelPlaylist * playlist; 
@property (nonatomic,retain) MPModelRadioStation * radioStation; 
@property (nonatomic,retain) MPModelSocialPerson * socialPerson; 
@property (nonatomic,retain) MPModelSong * song; 
@property (nonatomic,retain) MPModelTVEpisode * episode; 
@property (nonatomic,retain) MPModelTVSeason * season; 
@property (nonatomic,retain) MPModelTVShow * show; 
@property (nonatomic,retain) MPModelTVShowCreator * showCreator; 
@property (assign,nonatomic) long long detailedItemType; 
+(id)__itemType_KEY;
+(id)__album_KEY;
+(id)__show_KEY;
+(id)requiredStoreLibraryPersonalizationProperties;
+(id)__song_KEY;
+(id)__detailedItemType_KEY;
+(id)__playlist_KEY;
+(id)__socialPerson_KEY;
+(id)__movie_KEY;
+(id)__season_KEY;
+(id)__showCreator_KEY;
+(id)__radioStation_KEY;
+(id)__artistUploadedContentType_KEY;
+(id)__curator_KEY;
+(id)__episode_KEY;
+(id)__artist_KEY;
+(id)__mediaClip_KEY;
-(id)innerObject;
-(id)personalizationScopedPropertiesForProperties:(id)arg1 ;
-(id)relativeModelObjectForStoreLibraryPersonalization;
-(id)objectWithStoreLibraryPersonalizationRelativeModelObject:(id)arg1 ;
@end

