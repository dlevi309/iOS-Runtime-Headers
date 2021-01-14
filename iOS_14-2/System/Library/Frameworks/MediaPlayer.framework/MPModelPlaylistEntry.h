/*
* Generated on Thursday, January 14, 2021 at 2:21:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPModelObject.h>

@class MPModelPlaylist, MPModelSong, MPModelTVEpisode, MPModelMovie, MPModelSocialPerson, MPArtworkCatalog;

@interface MPModelPlaylistEntry : MPModelObject

@property (nonatomic,retain) MPModelPlaylist * playlist; 
@property (assign,nonatomic) long long position; 
@property (nonatomic,retain) MPModelSong * song; 
@property (nonatomic,retain) MPModelTVEpisode * tvEpisode; 
@property (nonatomic,retain) MPModelMovie * movie; 
@property (nonatomic,retain) MPModelSocialPerson * socialContributor; 
@property (nonatomic,retain) MPArtworkCatalog * _artworkCatalog; 
+(id)requiredStoreLibraryPersonalizationProperties;
+(id)__song_KEY;
+(id)__position_KEY;
+(id)__socialContributor_KEY;
+(id)___artworkCatalog_KEY;
+(id)__playlist_KEY;
+(id)__movie_KEY;
+(id)kindWithKinds:(id)arg1 ;
+(BOOL)supportsLibraryAddStatusObservation;
+(id)requiredLibraryAddStatusObservationProperties;
+(id)requiredLibraryRemovalProperties;
+(BOOL)supportsLibraryRemoval;
+(BOOL)supportsKeepLocalStatusObservation;
+(id)requiredKeepLocalStatusObservationProperties;
+(id)__tvEpisode_KEY;
-(id)anyObject;
-(id)mediaItemPropertyValues;
-(long long)type;
-(id)personalizationScopedPropertiesForProperties:(id)arg1 ;
-(id)relativeModelObjectForStoreLibraryPersonalization;
-(id)objectWithStoreLibraryPersonalizationRelativeModelObject:(id)arg1 ;
-(MPLibraryAddStatusObserverConfiguration)libraryAddStatusObserverConfiguration;
-(long long)libraryRemovalSupportedOptions;
-(id)newKeepLocalStatusObserverConfiguration;
-(id)humanDescription;
@end

