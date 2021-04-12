/*
* Generated on Thursday, January 14, 2021 at 2:23:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SAUISnippet.h>

@class NSString, SALocalSearchReviewList;

@interface SAMovieV2ReviewListSnippet : SAUISnippet

@property (nonatomic,copy) NSString * movieName; 
@property (nonatomic,retain) SALocalSearchReviewList * reviewList; 
+(id)reviewListSnippet;
+(id)reviewListSnippetWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(SALocalSearchReviewList *)reviewList;
-(NSString *)movieName;
-(void)setReviewList:(SALocalSearchReviewList *)arg1 ;
-(void)setMovieName:(NSString *)arg1 ;
@end

