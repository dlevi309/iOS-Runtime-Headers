/*
* Generated on Thursday, January 14, 2021 at 2:23:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SADomainObject.h>

@class SAMicroblogTwitterPostAuthor, SAUIAppPunchOut, NSString, NSArray, SADecoratedString, NSURL;

@interface SAMicroblogAceMicroblogSearchResult : SADomainObject

@property (nonatomic,retain) SAMicroblogTwitterPostAuthor * globalAuthor; 
@property (nonatomic,retain) SAUIAppPunchOut * punchOut; 
@property (nonatomic,copy) NSString * query; 
@property (nonatomic,copy) NSArray * resultNews; 
@property (nonatomic,copy) NSArray * resultPosts; 
@property (nonatomic,copy) NSArray * resultUsers; 
@property (nonatomic,retain) SADecoratedString * summary; 
@property (nonatomic,copy) NSURL * webAddress; 
+(id)aceMicroblogSearchResult;
+(id)aceMicroblogSearchResultWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)query;
-(id)groupIdentifier;
-(void)setGlobalAuthor:(SAMicroblogTwitterPostAuthor *)arg1 ;
-(NSArray *)resultNews;
-(void)setResultNews:(NSArray *)arg1 ;
-(NSArray *)resultPosts;
-(void)setResultPosts:(NSArray *)arg1 ;
-(NSArray *)resultUsers;
-(void)setResultUsers:(NSArray *)arg1 ;
-(NSURL *)webAddress;
-(void)setWebAddress:(NSURL *)arg1 ;
-(id)encodedClassName;
-(SAUIAppPunchOut *)punchOut;
-(void)setPunchOut:(SAUIAppPunchOut *)arg1 ;
-(SADecoratedString *)summary;
-(void)setQuery:(NSString *)arg1 ;
-(void)setSummary:(SADecoratedString *)arg1 ;
-(SAMicroblogTwitterPostAuthor *)globalAuthor;
@end

