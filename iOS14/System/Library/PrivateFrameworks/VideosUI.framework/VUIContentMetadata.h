/*
* Generated on Thursday, January 14, 2021 at 2:24:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/


@class NSDictionary, NSString, NSNumber, NSDate;

@interface VUIContentMetadata : NSObject {

	NSDictionary* _metadataDictionary;
	NSDictionary* _contentTypeMap;

}

@property (nonatomic,readonly) NSString * type; 
@property (nonatomic,readonly) unsigned long long contentType; 
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSString * mediaDescription; 
@property (nonatomic,readonly) NSString * artworkURLFormat; 
@property (nonatomic,readonly) NSNumber * artworkWidth; 
@property (nonatomic,readonly) NSNumber * artworkHeight; 
@property (nonatomic,readonly) NSString * previewFrameURLFormat; 
@property (nonatomic,readonly) NSNumber * previewFrameWidth; 
@property (nonatomic,readonly) NSNumber * previewFrameHeight; 
@property (nonatomic,readonly) NSString * showArtworkURLFormat; 
@property (nonatomic,readonly) NSNumber * showArtworkWidth; 
@property (nonatomic,readonly) NSNumber * showArtworkHeight; 
@property (nonatomic,readonly) NSString * ratingName; 
@property (nonatomic,readonly) NSString * ratingAuxiliaryName; 
@property (nonatomic,readonly) NSString * ratingSystem; 
@property (nonatomic,readonly) NSString * ratingDomain; 
@property (nonatomic,readonly) NSDate * releasedDate; 
@property (nonatomic,readonly) NSString * formattedReleaseDate; 
@property (nonatomic,readonly) NSDate * rentalExpiration; 
@property (nonatomic,readonly) NSString * genre; 
@property (nonatomic,readonly) NSNumber * duration; 
@property (nonatomic,readonly) NSNumber * tomatoPercentage; 
@property (nonatomic,readonly) unsigned long long tomatoFreshness; 
@property (nonatomic,readonly) NSNumber * commonSenseRecommendedAge; 
@property (nonatomic,readonly) NSNumber * videoResolutionClass; 
@property (nonatomic,readonly) NSNumber * videoDynamicRange; 
@property (nonatomic,readonly) NSNumber * hasClosedCaptions; 
@property (nonatomic,readonly) NSNumber * hasADLocales; 
@property (nonatomic,readonly) NSNumber * hasSDHLocales; 
@property (nonatomic,readonly) NSNumber * hasDolbyAtmos; 
@property (nonatomic,readonly) NSString * showTitle; 
@property (nonatomic,readonly) NSString * seasonTitle; 
@property (nonatomic,readonly) NSNumber * seasonNumber; 
@property (nonatomic,readonly) NSNumber * episodeNumber; 
@property (nonatomic,readonly) NSNumber * episodeIndexInSeries; 
@property (nonatomic,readonly) BOOL isAdultContent; 
@property (nonatomic,readonly) NSNumber * ratingValue; 
@property (nonatomic,readonly) NSString * showCanonicalId; 
-(NSNumber *)episodeNumber;
-(NSString *)genre;
-(NSNumber *)seasonNumber;
-(NSNumber *)artworkHeight;
-(NSNumber *)ratingValue;
-(NSNumber *)artworkWidth;
-(unsigned long long)contentType;
-(NSString *)ratingSystem;
-(NSString *)showTitle;
-(id)initWithDictionary:(id)arg1 ;
-(NSNumber *)videoDynamicRange;
-(NSString *)type;
-(NSNumber *)duration;
-(NSString *)title;
-(NSString *)mediaDescription;
-(NSString *)formattedReleaseDate;
-(NSDate *)releasedDate;
-(NSNumber *)hasClosedCaptions;
-(NSNumber *)hasADLocales;
-(NSNumber *)hasSDHLocales;
-(NSNumber *)tomatoPercentage;
-(NSNumber *)commonSenseRecommendedAge;
-(NSString *)ratingName;
-(NSString *)ratingAuxiliaryName;
-(unsigned long long)tomatoFreshness;
-(NSNumber *)videoResolutionClass;
-(NSNumber *)hasDolbyAtmos;
-(NSDate *)rentalExpiration;
-(NSNumber *)episodeIndexInSeries;
-(NSString *)showArtworkURLFormat;
-(NSNumber *)showArtworkWidth;
-(NSNumber *)showArtworkHeight;
-(NSString *)seasonTitle;
-(NSString *)ratingDomain;
-(BOOL)isAdultContent;
-(NSString *)artworkURLFormat;
-(NSString *)previewFrameURLFormat;
-(NSNumber *)previewFrameWidth;
-(NSNumber *)previewFrameHeight;
-(NSString *)showCanonicalId;
@end

