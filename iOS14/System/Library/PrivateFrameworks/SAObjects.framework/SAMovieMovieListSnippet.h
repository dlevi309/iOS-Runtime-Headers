/*
* Generated on Thursday, January 14, 2021 at 2:23:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SAUISnippet.h>

@class NSArray;

@interface SAMovieMovieListSnippet : SAUISnippet

@property (nonatomic,copy) NSArray * movies; 
@property (assign,nonatomic) BOOL shouldShowRottenTomatoesRating; 
+(id)movieListSnippet;
+(id)movieListSnippetWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSArray *)movies;
-(id)encodedClassName;
-(BOOL)shouldShowRottenTomatoesRating;
-(void)setShouldShowRottenTomatoesRating:(BOOL)arg1 ;
-(void)setMovies:(NSArray *)arg1 ;
@end

