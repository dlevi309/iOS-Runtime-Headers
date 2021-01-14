/*
* Generated on Thursday, January 14, 2021 at 2:21:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPModelObject.h>

@class NSString, MPModelFileAsset, MPModelPlaybackPosition, MPModelStoreAsset, MPModelTVSeason, MPModelTVShow, NSDate;

@interface MPModelTVEpisode : MPModelObject

@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * descriptionText; 
@property (assign,nonatomic) double duration; 
@property (assign,getter=isMusicShow,nonatomic) BOOL musicShow; 
@property (assign,nonatomic) long long episodeNumber; 
@property (nonatomic,retain) MPModelFileAsset * localFileAsset; 
@property (nonatomic,retain) MPModelPlaybackPosition * playbackPosition; 
@property (nonatomic,retain) MPModelStoreAsset * storeAsset; 
@property (nonatomic,retain) MPModelTVSeason * season; 
@property (nonatomic,retain) MPModelTVShow * show; 
@property (assign,nonatomic) long long explicitRating; 
@property (assign,nonatomic) BOOL hasCloudSyncSource; 
@property (nonatomic,copy) NSDate * releaseDate; 
@property (assign,nonatomic) long long episodeType; 
@property (nonatomic,copy) NSString * episodeTypeDisplayName; 
@property (assign,getter=isLibraryAdded,nonatomic) BOOL libraryAdded; 
@property (nonatomic,copy) NSDate * libraryAddedDate; 
@property (assign,getter=isLibraryAddEligible,nonatomic) BOOL libraryAddEligible; 
@property (assign,nonatomic) long long keepLocalEnableState; 
@property (assign,nonatomic) long long keepLocalManagedStatus; 
@property (nonatomic,copy) id artworkCatalogBlock; 
@property (nonatomic,copy,readonly) NSDate * downloadedDate; 
@property (nonatomic,copy,readonly) NSDate * lastDevicePlaybackDate; 
+(id)__show_KEY;
+(id)requiredStoreLibraryPersonalizationProperties;
+(id)__descriptionText_KEY;
+(id)__musicShow_KEY;
+(id)__episodeNumber_KEY;
+(id)__explicitRating_KEY;
+(id)__releaseDate_KEY;
+(id)__episodeType_KEY;
+(id)__episodeTypeDisplayName_KEY;
+(id)kindWithVariants:(unsigned long long)arg1 options:(unsigned long long)arg2 ;
+(id)__season_KEY;
+(id)__title_KEY;
+(id)kindWithVariants:(unsigned long long)arg1 ;
+(id)__duration_KEY;
+(id)__localFileAsset_KEY;
+(id)__keepLocalEnableState_KEY;
+(id)__keepLocalManagedStatus_KEY;
+(id)__libraryAdded_KEY;
+(id)__libraryAddedDate_KEY;
+(id)__lastDevicePlaybackDate_KEY;
+(id)__libraryAddEligible_KEY;
+(id)__hasCloudSyncSource_KEY;
+(id)__storeAsset_KEY;
+(id)__playbackPosition_KEY;
+(id)__downloadedDate_KEY;
+(id)__artworkCatalogBlock_KEY;
+(BOOL)supportsLibraryAddStatusObservation;
+(id)requiredLibraryAddStatusObservationProperties;
+(id)requiredLibraryRemovalProperties;
+(BOOL)supportsLibraryRemoval;
+(BOOL)supportsKeepLocalStatusObservation;
+(id)requiredKeepLocalStatusObservationProperties;
-(id)mediaItemPropertyValues;
-(id)artworkCatalog;
-(id)personalizationScopedPropertiesForProperties:(id)arg1 ;
-(id)relativeModelObjectForStoreLibraryPersonalization;
-(id)objectWithStoreLibraryPersonalizationRelativeModelObject:(id)arg1 ;
-(MPLibraryAddStatusObserverConfiguration)libraryAddStatusObserverConfiguration;
-(long long)libraryRemovalSupportedOptions;
-(id)newKeepLocalStatusObserverConfiguration;
-(id)humanDescription;
@end

