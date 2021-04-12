/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SADomainObject.h>

@class NSArray, SAMovieV2MovieDetailSnippet, NSString, NSNumber, NSDate;

@interface SAMovieV2MovieListCell : SADomainObject

@property (nonatomic,copy) NSArray * displayableShowtimes; 
@property (nonatomic,retain) SAMovieV2MovieDetailSnippet * movieDetailSnippet; 
@property (nonatomic,copy) NSString * movieName; 
@property (nonatomic,copy) NSArray * posterImages; 
@property (nonatomic,copy) NSNumber * qualityRating; 
@property (nonatomic,copy) NSString * rating; 
@property (nonatomic,copy) NSDate * theatricalReleaseDate; 
+(id)movieListCell;
+(id)movieListCellWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSString *)rating;
-(void)setRating:(NSString *)arg1 ;
-(NSString *)movieName;
-(void)setMovieName:(NSString *)arg1 ;
-(id)encodedClassName;
-(NSArray *)displayableShowtimes;
-(void)setDisplayableShowtimes:(NSArray *)arg1 ;
-(SAMovieV2MovieDetailSnippet *)movieDetailSnippet;
-(void)setMovieDetailSnippet:(SAMovieV2MovieDetailSnippet *)arg1 ;
-(NSArray *)posterImages;
-(void)setPosterImages:(NSArray *)arg1 ;
-(NSNumber *)qualityRating;
-(void)setQualityRating:(NSNumber *)arg1 ;
-(NSDate *)theatricalReleaseDate;
-(void)setTheatricalReleaseDate:(NSDate *)arg1 ;
@end

