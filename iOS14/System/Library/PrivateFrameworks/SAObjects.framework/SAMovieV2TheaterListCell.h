/*
* Generated on Thursday, January 14, 2021 at 2:23:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SADomainObject.h>

@class SADistance, NSString, SAMovieV2MovieListSnippet;

@interface SAMovieV2TheaterListCell : SADomainObject

@property (nonatomic,retain) SADistance * relativeDistance; 
@property (nonatomic,copy) NSString * theaterAddress; 
@property (nonatomic,copy) NSString * theaterName; 
@property (nonatomic,retain) SAMovieV2MovieListSnippet * theaterShowtimeListSnippet; 
+(id)theaterListCell;
+(id)theaterListCellWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(SAMovieV2MovieListSnippet *)theaterShowtimeListSnippet;
-(SADistance *)relativeDistance;
-(void)setRelativeDistance:(SADistance *)arg1 ;
-(NSString *)theaterName;
-(void)setTheaterName:(NSString *)arg1 ;
-(NSString *)theaterAddress;
-(void)setTheaterAddress:(NSString *)arg1 ;
-(void)setTheaterShowtimeListSnippet:(SAMovieV2MovieListSnippet *)arg1 ;
@end

