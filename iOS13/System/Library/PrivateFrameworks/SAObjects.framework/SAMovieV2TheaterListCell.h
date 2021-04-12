/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

