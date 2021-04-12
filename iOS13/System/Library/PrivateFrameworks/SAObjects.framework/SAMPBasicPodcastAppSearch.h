/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SADomainCommand.h>

@class NSString;

@interface SAMPBasicPodcastAppSearch : SADomainCommand

@property (assign,nonatomic) BOOL acceptPodcastCollections; 
@property (assign,nonatomic) BOOL acceptPodcastStations; 
@property (assign,nonatomic) long long maxResults; 
@property (nonatomic,copy) NSString * query; 
+(id)basicPodcastAppSearch;
+(id)basicPodcastAppSearchWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)query;
-(void)setQuery:(NSString *)arg1 ;
-(id)groupIdentifier;
-(long long)maxResults;
-(void)setMaxResults:(long long)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(BOOL)mutatingCommand;
-(BOOL)acceptPodcastCollections;
-(void)setAcceptPodcastCollections:(BOOL)arg1 ;
-(BOOL)acceptPodcastStations;
-(void)setAcceptPodcastStations:(BOOL)arg1 ;
@end

