/*
* Generated on Thursday, January 14, 2021 at 2:21:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPModelObject.h>

@class NSString, MPModelArtist, MPModelGenre, NSDate, NSDateComponents, MPModelSong;

@interface MPModelAlbum : MPModelObject

@property (nonatomic,copy) NSString * title; 
@property (nonatomic,retain) MPModelArtist * artist; 
@property (nonatomic,retain) MPModelGenre * genre; 
@property (assign,nonatomic) long long trackCount; 
@property (assign,nonatomic) long long maximumItemTrackNumber; 
@property (assign,nonatomic) long long discCount; 
@property (assign,nonatomic) BOOL hasCleanContent; 
@property (assign,nonatomic) BOOL hasExplicitContent; 
@property (assign,getter=isCompilation,nonatomic) BOOL compilation; 
@property (assign,getter=isClassical,nonatomic) BOOL classical; 
@property (assign,getter=isLibraryAdded,nonatomic) BOOL libraryAdded; 
@property (nonatomic,copy) NSDate * libraryAddedDate; 
@property (assign,getter=isLibraryAddEligible,nonatomic) BOOL libraryAddEligible; 
@property (assign,nonatomic) float volumeNormalization; 
@property (nonatomic,copy) NSDateComponents * releaseDateComponents; 
@property (nonatomic,retain) MPModelSong * representativeSong; 
@property (assign,nonatomic) long long year; 
@property (nonatomic,copy) id artworkCatalogBlock; 
@property (nonatomic,copy) NSString * copyrightText; 
@property (assign,nonatomic) long long keepLocalEnableState; 
@property (assign,nonatomic) long long keepLocalManagedStatus; 
@property (nonatomic,copy) NSDate * lastDevicePlaybackDate; 
@property (assign,getter=isPreorder,nonatomic) BOOL preorder; 
@property (nonatomic,copy) NSString * editorNotes; 
@property (nonatomic,copy) NSString * shortEditorNotes; 
@property (nonatomic,copy) id songPopularityBlock; 
@property (nonatomic,copy,readonly) NSDate * downloadedDate; 
+(id)__editorNotes_KEY;
+(id)__hasCleanContent_KEY;
+(id)__releaseDateComponents_KEY;
+(id)requiredStoreLibraryPersonalizationProperties;
+(id)kindWithVariants:(unsigned long long)arg1 songKind:(id)arg2 options:(unsigned long long)arg3 ;
+(id)__preorder_KEY;
+(id)kindWithSongKind:(id)arg1 ;
+(id)kindWithSongKind:(id)arg1 options:(unsigned long long)arg2 ;
+(id)kindWithVariants:(unsigned long long)arg1 songKind:(id)arg2 ;
+(id)__representativeSong_KEY;
+(id)__maximumItemTrackNumber_KEY;
+(id)__discCount_KEY;
+(id)__compilation_KEY;
+(id)__classical_KEY;
+(id)__songPopularityBlock_KEY;
+(id)__title_KEY;
+(id)__year_KEY;
+(id)__genre_KEY;
+(id)__copyrightText_KEY;
+(id)__trackCount_KEY;
+(id)__volumeNormalization_KEY;
+(id)__keepLocalEnableState_KEY;
+(id)__keepLocalManagedStatus_KEY;
+(id)__libraryAdded_KEY;
+(id)__libraryAddedDate_KEY;
+(id)__lastDevicePlaybackDate_KEY;
+(id)__libraryAddEligible_KEY;
+(id)__downloadedDate_KEY;
+(id)__artist_KEY;
+(id)__shortEditorNotes_KEY;
+(id)__hasExplicitContent_KEY;
+(id)__artworkCatalogBlock_KEY;
+(BOOL)supportsLibraryAddStatusObservation;
+(id)requiredLibraryAddStatusObservationProperties;
+(id)requiredLibraryRemovalProperties;
+(BOOL)supportsLibraryRemoval;
+(BOOL)supportsKeepLocalStatusObservation;
+(id)requiredKeepLocalStatusObservationProperties;
-(id)contentItemCollectionInfo;
-(id)artworkCatalog;
-(id)songPopularityForIdentifiers:(id)arg1 ;
-(id)personalizationScopedPropertiesForProperties:(id)arg1 ;
-(id)relativeModelObjectForStoreLibraryPersonalization;
-(id)objectWithStoreLibraryPersonalizationRelativeModelObject:(id)arg1 ;
-(MPLibraryAddStatusObserverConfiguration)libraryAddStatusObserverConfiguration;
-(long long)libraryRemovalSupportedOptions;
-(id)newKeepLocalStatusObserverConfiguration;
-(id)humanDescription;
@end

