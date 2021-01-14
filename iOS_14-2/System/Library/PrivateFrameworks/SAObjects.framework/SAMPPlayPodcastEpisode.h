/*
* Generated on Thursday, January 14, 2021 at 2:23:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SADomainCommand.h>

@class NSString, NSArray, SAMPPodcast;

@interface SAMPPlayPodcastEpisode : SADomainCommand

@property (nonatomic,copy) NSString * assetInfo; 
@property (nonatomic,copy) NSArray * hashedRouteUIDs; 
@property (nonatomic,retain) SAMPPodcast * podcastEpisode; 
@property (nonatomic,copy) NSString * requesterSharedUserId; 
@property (nonatomic,copy) NSString * sharedUserIdFromPlayableITunesAccount; 
@property (assign,nonatomic) BOOL startPlaying; 
+(id)playPodcastEpisode;
+(id)playPodcastEpisodeWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)af_addEntriesToAnalyticsContext:(id)arg1 ;
-(id)groupIdentifier;
-(NSString *)assetInfo;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(BOOL)mutatingCommand;
-(void)setAssetInfo:(NSString *)arg1 ;
-(BOOL)startPlaying;
-(void)setStartPlaying:(BOOL)arg1 ;
-(NSString *)sharedUserIdFromPlayableITunesAccount;
-(void)setSharedUserIdFromPlayableITunesAccount:(NSString *)arg1 ;
-(NSArray *)hashedRouteUIDs;
-(void)setHashedRouteUIDs:(NSArray *)arg1 ;
-(SAMPPodcast *)podcastEpisode;
-(void)setPodcastEpisode:(SAMPPodcast *)arg1 ;
-(NSString *)requesterSharedUserId;
-(void)setRequesterSharedUserId:(NSString *)arg1 ;
@end

