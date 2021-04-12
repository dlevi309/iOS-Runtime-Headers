/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPModelObject.h>

@class NSString, NSDate, MPModelTVShow, MPModelTVEpisode;

@interface MPModelTVSeason : MPModelObject

@property (assign,nonatomic) long long number; 
@property (nonatomic,copy) NSString * descriptionText; 
@property (assign,nonatomic) long long year; 
@property (assign,nonatomic) long long episodesCount; 
@property (assign,nonatomic) BOOL hasCleanContent; 
@property (assign,nonatomic) BOOL hasExplicitContent; 
@property (nonatomic,copy) NSDate * libraryAddedDate; 
@property (assign,getter=isLibraryAdded,nonatomic) BOOL libraryAdded; 
@property (assign,getter=isLibraryAddEligible,nonatomic) BOOL libraryAddEligible; 
@property (assign,nonatomic) long long sortType; 
@property (nonatomic,retain) MPModelTVShow * show; 
@property (nonatomic,retain) MPModelTVEpisode * representativeEpisode; 
@property (nonatomic,copy) id artworkCatalogBlock; 
@property (nonatomic,copy,readonly) NSDate * downloadedDate; 
+(id)__artworkCatalogBlock_KEY;
+(id)__libraryAdded_KEY;
+(id)__libraryAddedDate_KEY;
+(id)__libraryAddEligible_KEY;
+(id)__year_KEY;
+(id)__downloadedDate_KEY;
+(id)__descriptionText_KEY;
+(id)__show_KEY;
+(id)__hasExplicitContent_KEY;
+(id)kindWithEpisodeKind:(id)arg1 ;
+(BOOL)supportsLibraryAddStatusObservation;
+(id)requiredLibraryAddStatusObservationProperties;
+(id)__hasCleanContent_KEY;
+(id)__number_KEY;
+(id)__episodesCount_KEY;
+(id)__sortType_KEY;
+(id)__representativeEpisode_KEY;
-(id)humanDescription;
-(id)artworkCatalog;
-(MPLibraryAddStatusObserverConfiguration)libraryAddStatusObserverConfiguration;
@end

