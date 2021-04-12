/*
* Generated on Thursday, January 14, 2021 at 2:23:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SADomainCommand.h>

@class NSString, NSArray;

@interface SAMPPlayPodcasts : SADomainCommand

@property (nonatomic,copy) NSString * episodePlaybackOrder; 
@property (nonatomic,copy) NSArray * hashedRouteUIDs; 
@property (nonatomic,copy) NSString * requesterSharedUserId; 
@property (nonatomic,copy) NSString * sharedUserIdFromPlayableITunesAccount; 
@property (assign,nonatomic) BOOL startPlaying; 
+(id)playPodcasts;
+(id)playPodcastsWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)af_addEntriesToAnalyticsContext:(id)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSString *)episodePlaybackOrder;
-(void)setEpisodePlaybackOrder:(NSString *)arg1 ;
-(BOOL)startPlaying;
-(void)setStartPlaying:(BOOL)arg1 ;
-(NSString *)sharedUserIdFromPlayableITunesAccount;
-(void)setSharedUserIdFromPlayableITunesAccount:(NSString *)arg1 ;
-(NSArray *)hashedRouteUIDs;
-(void)setHashedRouteUIDs:(NSArray *)arg1 ;
-(NSString *)requesterSharedUserId;
-(void)setRequesterSharedUserId:(NSString *)arg1 ;
@end

