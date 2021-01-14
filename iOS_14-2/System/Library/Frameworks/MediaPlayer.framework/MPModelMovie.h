/*
* Generated on Thursday, January 14, 2021 at 2:21:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPModelObject.h>

@class NSString, NSArray, NSDictionary, NSDate, MPModelFileAsset, MPModelPlaybackPosition, MPModelStoreAsset;

@interface MPModelMovie : MPModelObject

@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSArray * clips; 
@property (nonatomic,copy) NSString * descriptionText; 
@property (assign,nonatomic) double duration; 
@property (assign,nonatomic) long long explicitRating; 
@property (nonatomic,copy) NSString * tagline; 
@property (nonatomic,copy) NSDictionary * movieInfoDictionary; 
@property (nonatomic,copy) NSDate * releaseDate; 
@property (nonatomic,retain) MPModelFileAsset * localFileAsset; 
@property (nonatomic,retain) MPModelPlaybackPosition * playbackPosition; 
@property (nonatomic,retain) MPModelStoreAsset * storeAsset; 
@property (nonatomic,copy) id artworkCatalogBlock; 
@property (nonatomic,copy) id editorialArtworkCatalogBlock; 
@property (assign,nonatomic) BOOL hasCloudSyncSource; 
@property (assign,getter=isLibraryAdded,nonatomic) BOOL libraryAdded; 
@property (nonatomic,copy) NSDate * libraryAddedDate; 
@property (assign,getter=isLibraryAddEligible,nonatomic) BOOL libraryAddEligible; 
@property (assign,nonatomic) long long keepLocalEnableState; 
@property (assign,nonatomic) long long keepLocalManagedStatus; 
@property (nonatomic,copy,readonly) NSDate * downloadedDate; 
@property (nonatomic,copy,readonly) NSDate * lastDevicePlaybackDate; 
+(id)requiredStoreLibraryPersonalizationProperties;
+(id)__editorialArtworkCatalogBlock_KEY;
+(id)__descriptionText_KEY;
+(id)__explicitRating_KEY;
+(id)__releaseDate_KEY;
+(id)kindWithVariants:(unsigned long long)arg1 options:(unsigned long long)arg2 ;
+(id)classesForSecureCoding;
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
+(id)__clips_KEY;
+(id)__tagline_KEY;
+(id)__movieInfoDictionary_KEY;
+(id)__artworkCatalogBlock_KEY;
+(BOOL)supportsLibraryAddStatusObservation;
+(id)requiredLibraryAddStatusObservationProperties;
+(id)requiredLibraryRemovalProperties;
+(BOOL)supportsLibraryRemoval;
+(BOOL)supportsKeepLocalStatusObservation;
+(id)requiredKeepLocalStatusObservationProperties;
-(id)editorialArtworkCatalog;
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

