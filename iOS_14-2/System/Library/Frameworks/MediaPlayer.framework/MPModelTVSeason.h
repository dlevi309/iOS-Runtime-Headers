/*
* Generated on Thursday, January 14, 2021 at 2:21:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)__hasCleanContent_KEY;
+(id)__show_KEY;
+(id)kindWithEpisodeKind:(id)arg1 ;
+(id)__descriptionText_KEY;
+(id)__number_KEY;
+(id)__sortType_KEY;
+(id)__episodesCount_KEY;
+(id)__representativeEpisode_KEY;
+(id)__year_KEY;
+(id)__libraryAdded_KEY;
+(id)__libraryAddedDate_KEY;
+(id)__libraryAddEligible_KEY;
+(id)__downloadedDate_KEY;
+(id)__hasExplicitContent_KEY;
+(id)__artworkCatalogBlock_KEY;
+(BOOL)supportsLibraryAddStatusObservation;
+(id)requiredLibraryAddStatusObservationProperties;
-(id)artworkCatalog;
-(MPLibraryAddStatusObserverConfiguration)libraryAddStatusObserverConfiguration;
-(id)humanDescription;
@end

