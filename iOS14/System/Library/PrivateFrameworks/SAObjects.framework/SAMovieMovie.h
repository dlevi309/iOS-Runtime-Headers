/*
* Generated on Thursday, January 14, 2021 at 2:23:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SADomainObject.h>

@class NSArray, NSURL, NSNumber, NSString, SALocalSearchReviewList, NSDate;

@interface SAMovieMovie : SADomainObject

@property (nonatomic,copy) NSArray * actors; 
@property (nonatomic,copy) NSArray * directors; 
@property (nonatomic,copy) NSArray * genres; 
@property (nonatomic,copy) NSURL * hiResTrailerUri; 
@property (nonatomic,copy) NSURL * iTunesUri; 
@property (assign,nonatomic) BOOL is3d; 
@property (nonatomic,copy) NSNumber * isAvailableOnItunesForPurchase; 
@property (nonatomic,copy) NSNumber * isAvailableOnItunesForRent; 
@property (nonatomic,copy) NSURL * lowResTrailerUri; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSArray * posterImages; 
@property (nonatomic,copy) NSURL * posterUri; 
@property (nonatomic,copy) NSNumber * qualityRating; 
@property (nonatomic,copy) NSString * rating; 
@property (nonatomic,retain) SALocalSearchReviewList * reviews; 
@property (nonatomic,copy) NSURL * rottenTomatoesUri; 
@property (assign,nonatomic) long long runtimeInMinutes; 
@property (nonatomic,copy) NSArray * studios; 
@property (nonatomic,copy) NSString * synopsis; 
@property (nonatomic,copy) NSString * theaterShowtimeSearchRegionDescription; 
@property (nonatomic,copy) NSArray * theaterShowtimes; 
@property (nonatomic,copy) NSDate * theatricalReleaseDate; 
+(id)movie;
+(id)movieWithDictionary:(id)arg1 context:(id)arg2 ;
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
-(SALocalSearchReviewList *)reviews;
-(void)setRating:(NSString *)arg1 ;
-(NSString *)name;
-(void)setReviews:(SALocalSearchReviewList *)arg1 ;
-(NSArray *)studios;
-(void)setActors:(NSArray *)arg1 ;
-(NSArray *)directors;
-(void)setDirectors:(NSArray *)arg1 ;
-(void)setGenres:(NSArray *)arg1 ;
-(NSURL *)hiResTrailerUri;
-(void)setHiResTrailerUri:(NSURL *)arg1 ;
-(NSURL *)lowResTrailerUri;
-(NSNumber *)isAvailableOnItunesForPurchase;
-(void)setIsAvailableOnItunesForPurchase:(NSNumber *)arg1 ;
-(NSNumber *)isAvailableOnItunesForRent;
-(void)setIsAvailableOnItunesForRent:(NSNumber *)arg1 ;
-(void)setLowResTrailerUri:(NSURL *)arg1 ;
-(NSURL *)posterUri;
-(void)setPosterUri:(NSURL *)arg1 ;
-(NSURL *)rottenTomatoesUri;
-(void)setRottenTomatoesUri:(NSURL *)arg1 ;
-(long long)runtimeInMinutes;
-(void)setRuntimeInMinutes:(long long)arg1 ;
-(void)setStudios:(NSArray *)arg1 ;
-(void)setSynopsis:(NSString *)arg1 ;
-(NSString *)theaterShowtimeSearchRegionDescription;
-(void)setName:(NSString *)arg1 ;
-(void)setTheaterShowtimeSearchRegionDescription:(NSString *)arg1 ;
-(NSArray *)theaterShowtimes;
-(void)setTheaterShowtimes:(NSArray *)arg1 ;
-(void)setIs3d:(BOOL)arg1 ;
-(NSString *)synopsis;
-(NSURL *)iTunesUri;
@end

