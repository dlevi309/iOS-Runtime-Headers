/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)movieName;
-(void)setMovieName:(NSString *)arg1 ;
-(id)encodedClassName;
-(void)setReviewList:(SALocalSearchReviewList *)arg1 ;
-(SALocalSearchReviewList *)reviewList;
@end

