/*
* Generated on Thursday, January 14, 2021 at 2:23:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(void)setMaxResults:(long long)arg1 ;
-(long long)maxResults;
-(BOOL)mutatingCommand;
-(void)setQuery:(NSString *)arg1 ;
-(BOOL)acceptPodcastCollections;
-(void)setAcceptPodcastCollections:(BOOL)arg1 ;
-(BOOL)acceptPodcastStations;
-(void)setAcceptPodcastStations:(BOOL)arg1 ;
@end

