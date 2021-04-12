/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)__album_KEY;
+(id)__artist_KEY;
+(id)__playlist_KEY;
+(id)__radioStation_KEY;
+(id)__season_KEY;
+(id)__show_KEY;
+(id)__itemType_KEY;
+(id)__detailedItemType_KEY;
+(id)__artistUploadedContentType_KEY;
+(id)__curator_KEY;
+(id)__mediaClip_KEY;
+(id)__movie_KEY;
+(id)__socialPerson_KEY;
+(id)__song_KEY;
+(id)__episode_KEY;
+(id)__showCreator_KEY;
+(id)requiredStoreLibraryPersonalizationProperties;
-(id)innerObject;
-(id)personalizationScopedPropertiesForProperties:(id)arg1 ;
-(id)relativeModelObjectForStoreLibraryPersonalization;
-(id)objectWithStoreLibraryPersonalizationRelativeModelObject:(id)arg1 ;
@end

