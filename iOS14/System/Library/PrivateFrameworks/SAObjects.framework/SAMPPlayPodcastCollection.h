/*
* Generated on Thursday, January 14, 2021 at 2:23:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SADomainCommand.h>

@class NSString, NSArray, SAMPPodcastCollection;

@interface SAMPPlayPodcastCollection : SADomainCommand

@property (nonatomic,copy) NSString * assetInfo; 
@property (nonatomic,copy) NSString * episodePlaybackOrder; 
@property (nonatomic,copy) NSArray * hashedRouteUIDs; 
@property (nonatomic,retain) SAMPPodcastCollection * podcastCollection; 
@property (nonatomic,copy) NSString * requesterSharedUserId; 
@property (nonatomic,copy) NSString * sharedUserIdFromPlayableITunesAccount; 
@property (assign,nonatomic) BOOL startPlaying; 
+(id)playPodcastCollection;
+(id)playPodcastCollectionWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)af_addEntriesToAnalyticsContext:(id)arg1 ;
-(id)groupIdentifier;
-(NSString *)assetInfo;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSString *)episodePlaybackOrder;
-(void)setEpisodePlaybackOrder:(NSString *)arg1 ;
-(BOOL)mutatingCommand;
-(void)setAssetInfo:(NSString *)arg1 ;
-(BOOL)startPlaying;
-(SAMPPodcastCollection *)podcastCollection;
-(void)setPodcastCollection:(SAMPPodcastCollection *)arg1 ;
-(void)setStartPlaying:(BOOL)arg1 ;
-(NSString *)sharedUserIdFromPlayableITunesAccount;
-(void)setSharedUserIdFromPlayableITunesAccount:(NSString *)arg1 ;
-(NSArray *)hashedRouteUIDs;
-(void)setHashedRouteUIDs:(NSArray *)arg1 ;
-(NSString *)requesterSharedUserId;
-(void)setRequesterSharedUserId:(NSString *)arg1 ;
@end

