/*
* Generated on Thursday, January 14, 2021 at 2:23:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SADomainObject.h>

@class SALocalSearchBusiness2, NSArray;

@interface SAMovieV2MovieTheater : SADomainObject

@property (nonatomic,retain) SALocalSearchBusiness2 * business; 
@property (nonatomic,copy) NSArray * movies; 
+(id)movieTheater;
+(id)movieTheaterWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSArray *)movies;
-(id)encodedClassName;
-(SALocalSearchBusiness2 *)business;
-(void)setMovies:(NSArray *)arg1 ;
-(void)setBusiness:(SALocalSearchBusiness2 *)arg1 ;
@end

