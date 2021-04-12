/*
* Generated on Thursday, January 14, 2021 at 2:23:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SAUISnippet.h>

@class NSArray, NSString, NSNumber, NSURL, SAMovieV2ReviewListSnippet, SAUIAppPunchOut, SAMovieV2ShowtimeSnippet, SAMovieV2TheaterShowtimeListSnippet, NSDate;

@interface SAMovieV2MovieDetailSnippet : SAUISnippet

@property (nonatomic,copy) NSArray * actors; 
@property (nonatomic,copy) NSString * adamId; 
@property (nonatomic,copy) NSArray * alternateProviderPunchouts; 
@property (nonatomic,copy) NSNumber * availableOnItunesForPurchase; 
@property (nonatomic,copy) NSNumber * availableOnItunesForRent; 
@property (assign,nonatomic) BOOL canBeFavorited; 
@property (nonatomic,copy) NSString * canonicalId; 
@property (nonatomic,copy) NSArray * directors; 
@property (nonatomic,copy) NSArray * genres; 
@property (nonatomic,copy) NSURL * hiresTrailerUri; 
@property (nonatomic,copy) NSURL * iTunesUri; 
@property (assign,nonatomic) BOOL is3d; 
@property (assign,nonatomic) BOOL isContainerItem; 
@property (nonatomic,copy) NSURL * lowresTrailerUri; 
@property (nonatomic,copy) NSURL * movieIdentifier; 
@property (nonatomic,retain) SAMovieV2ReviewListSnippet * movieReviewListSnippet; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,retain) SAUIAppPunchOut * playOnItunesPunchout; 
@property (nonatomic,copy) NSNumber * playTrailer; 
@property (nonatomic,copy) NSArray * posterImages; 
@property (nonatomic,copy) NSNumber * qualityRating; 
@property (nonatomic,copy) NSString * rating; 
@property (assign,nonatomic) long long runtimeInMinutes; 
@property (nonatomic,retain) SAMovieV2ShowtimeSnippet * showtimeSnippet; 
@property (nonatomic,copy) NSArray * studios; 
@property (nonatomic,copy) NSString * synopsis; 
@property (nonatomic,retain) SAMovieV2TheaterShowtimeListSnippet * theaterShowtimeListSnippet; 
@property (nonatomic,copy) NSString * theaterShowtimeSearchRegionDescription; 
@property (nonatomic,copy) NSDate * theatricalReleaseDate; 
@property (nonatomic,retain) SAUIAppPunchOut * videosPunchout; 
+(id)movieDetailSnippet;
+(id)movieDetailSnippetWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)rating;
-(id)groupIdentifier;
-(NSArray *)posterImages;
-(void)setPosterImages:(NSArray *)arg1 ;
-(NSNumber *)qualityRating;
-(void)setQualityRating:(NSNumber *)arg1 ;
-(NSDate *)theatricalReleaseDate;
-(void)setTheatricalReleaseDate:(NSDate *)arg1 ;
-(BOOL)is3d;
-(id)encodedClassName;
-(void)setITunesUri:(NSURL *)arg1 ;
-(NSArray *)actors;
-(NSArray *)genres;
-(void)setRating:(NSString *)arg1 ;
-(NSNumber *)playTrailer;
-(NSString *)name;
-(SAMovieV2TheaterShowtimeListSnippet *)theaterShowtimeListSnippet;
-(void)setPlayTrailer:(NSNumber *)arg1 ;
-(SAMovieV2ShowtimeSnippet *)showtimeSnippet;
-(void)setShowtimeSnippet:(SAMovieV2ShowtimeSnippet *)arg1 ;
-(NSArray *)studios;
-(void)setTheaterShowtimeListSnippet:(SAMovieV2TheaterShowtimeListSnippet *)arg1 ;
-(NSArray *)alternateProviderPunchouts;
-(void)setAlternateProviderPunchouts:(NSArray *)arg1 ;
-(NSNumber *)availableOnItunesForPurchase;
-(void)setAvailableOnItunesForPurchase:(NSNumber *)arg1 ;
-(NSNumber *)availableOnItunesForRent;
-(void)setAvailableOnItunesForRent:(NSNumber *)arg1 ;
-(BOOL)canBeFavorited;
-(void)setCanBeFavorited:(BOOL)arg1 ;
-(NSURL *)hiresTrailerUri;
-(void)setHiresTrailerUri:(NSURL *)arg1 ;
-(BOOL)isContainerItem;
-(void)setIsContainerItem:(BOOL)arg1 ;
-(NSURL *)lowresTrailerUri;
-(void)setLowresTrailerUri:(NSURL *)arg1 ;
-(NSURL *)movieIdentifier;
-(void)setMovieIdentifier:(NSURL *)arg1 ;
-(SAMovieV2ReviewListSnippet *)movieReviewListSnippet;
-(void)setMovieReviewListSnippet:(SAMovieV2ReviewListSnippet *)arg1 ;
-(SAUIAppPunchOut *)playOnItunesPunchout;
-(void)setPlayOnItunesPunchout:(SAUIAppPunchOut *)arg1 ;
-(SAUIAppPunchOut *)videosPunchout;
-(void)setVideosPunchout:(SAUIAppPunchOut *)arg1 ;
-(NSString *)canonicalId;
-(void)setCanonicalId:(NSString *)arg1 ;
-(void)setActors:(NSArray *)arg1 ;
-(NSArray *)directors;
-(void)setDirectors:(NSArray *)arg1 ;
-(void)setGenres:(NSArray *)arg1 ;
-(long long)runtimeInMinutes;
-(void)setRuntimeInMinutes:(long long)arg1 ;
-(void)setStudios:(NSArray *)arg1 ;
-(void)setSynopsis:(NSString *)arg1 ;
-(NSString *)theaterShowtimeSearchRegionDescription;
-(void)setName:(NSString *)arg1 ;
-(void)setTheaterShowtimeSearchRegionDescription:(NSString *)arg1 ;
-(void)setIs3d:(BOOL)arg1 ;
-(NSString *)synopsis;
-(NSURL *)iTunesUri;
-(NSString *)adamId;
-(void)setAdamId:(NSString *)arg1 ;
@end

