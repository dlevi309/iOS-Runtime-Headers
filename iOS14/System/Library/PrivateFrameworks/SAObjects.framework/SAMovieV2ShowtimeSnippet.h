/*
* Generated on Thursday, January 14, 2021 at 2:23:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SAUISnippet.h>

@class SAUIImageResource, NSString, NSArray, SALocalSearchBusiness2;

@interface SAMovieV2ShowtimeSnippet : SAUISnippet

@property (nonatomic,retain) SAUIImageResource * attributionLogo; 
@property (nonatomic,copy) NSString * movieName; 
@property (nonatomic,copy) NSArray * showtimes; 
@property (nonatomic,retain) SALocalSearchBusiness2 * theater; 
@property (nonatomic,copy) NSString * theaterName; 
+(id)showtimeSnippet;
+(id)showtimeSnippetWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSString *)theaterName;
-(void)setTheaterName:(NSString *)arg1 ;
-(SALocalSearchBusiness2 *)theater;
-(NSString *)movieName;
-(NSArray *)showtimes;
-(void)setShowtimes:(NSArray *)arg1 ;
-(void)setTheater:(SALocalSearchBusiness2 *)arg1 ;
-(SAUIImageResource *)attributionLogo;
-(void)setAttributionLogo:(SAUIImageResource *)arg1 ;
-(void)setMovieName:(NSString *)arg1 ;
@end

