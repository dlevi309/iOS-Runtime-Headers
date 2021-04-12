/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)__playlist_KEY;
+(id)__movie_KEY;
+(id)__song_KEY;
+(id)requiredStoreLibraryPersonalizationProperties;
+(BOOL)supportsLibraryAddStatusObservation;
+(id)requiredLibraryAddStatusObservationProperties;
+(id)requiredLibraryRemovalProperties;
+(BOOL)supportsLibraryRemoval;
+(id)requiredKeepLocalStatusObservationProperties;
+(BOOL)supportsKeepLocalStatusObservation;
+(id)__tvEpisode_KEY;
+(id)kindWithKinds:(id)arg1 ;
+(id)__position_KEY;
+(id)__socialContributor_KEY;
+(id)___artworkCatalog_KEY;
-(long long)type;
-(id)anyObject;
-(id)humanDescription;
-(id)mediaItemPropertyValues;
-(id)personalizationScopedPropertiesForProperties:(id)arg1 ;
-(id)relativeModelObjectForStoreLibraryPersonalization;
-(id)objectWithStoreLibraryPersonalizationRelativeModelObject:(id)arg1 ;
-(MPLibraryAddStatusObserverConfiguration)libraryAddStatusObserverConfiguration;
-(long long)libraryRemovalSupportedOptions;
-(id)newKeepLocalStatusObserverConfiguration;
@end

