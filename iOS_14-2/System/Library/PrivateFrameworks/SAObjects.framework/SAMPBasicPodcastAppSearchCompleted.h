/*
* Generated on Thursday, January 14, 2021 at 2:23:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class NSArray, NSString;

@interface SAMPBasicPodcastAppSearchCompleted : SABaseCommand <SAServerBoundCommand>

@property (nonatomic,copy) NSArray * podcastCollections; 
@property (nonatomic,copy) NSArray * podcastStations; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)basicPodcastAppSearchCompleted;
+(id)basicPodcastAppSearchCompletedWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSArray *)podcastCollections;
-(void)setPodcastCollections:(NSArray *)arg1 ;
-(NSArray *)podcastStations;
-(void)setPodcastStations:(NSArray *)arg1 ;
@end

