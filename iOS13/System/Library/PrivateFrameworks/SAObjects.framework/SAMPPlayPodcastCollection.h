/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSArray *)hashedRouteUIDs;
-(void)setHashedRouteUIDs:(NSArray *)arg1 ;
-(NSString *)assetInfo;
-(void)setAssetInfo:(NSString *)arg1 ;
-(BOOL)startPlaying;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(BOOL)mutatingCommand;
-(void)setStartPlaying:(BOOL)arg1 ;
-(NSString *)requesterSharedUserId;
-(void)setRequesterSharedUserId:(NSString *)arg1 ;
-(SAMPPodcastCollection *)podcastCollection;
-(void)setPodcastCollection:(SAMPPodcastCollection *)arg1 ;
-(NSString *)sharedUserIdFromPlayableITunesAccount;
-(void)setSharedUserIdFromPlayableITunesAccount:(NSString *)arg1 ;
-(NSString *)episodePlaybackOrder;
-(void)setEpisodePlaybackOrder:(NSString *)arg1 ;
@end

