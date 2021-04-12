/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(SALocalSearchBusiness2 *)business;
-(void)setBusiness:(SALocalSearchBusiness2 *)arg1 ;
-(NSArray *)movies;
-(void)setMovies:(NSArray *)arg1 ;
-(id)encodedClassName;
@end

