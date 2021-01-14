/*
* Generated on Thursday, January 14, 2021 at 2:23:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SADomainCommand.h>

@class NSArray, NSString, SAMPPodcastStation;

@interface SAMPPlayPodcastStation : SADomainCommand

@property (nonatomic,copy) NSArray * hashedRouteUIDs; 
@property (nonatomic,copy) NSString * requesterSharedUserId; 
@property (nonatomic,copy) NSString * sharedUserIdFromPlayableITunesAccount; 
@property (assign,nonatomic) BOOL startPlaying; 
@property (nonatomic,retain) SAMPPodcastStation * station; 
+(id)playPodcastStation;
+(id)playPodcastStationWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)af_addEntriesToAnalyticsContext:(id)arg1 ;
-(SAMPPodcastStation *)station;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(BOOL)mutatingCommand;
-(void)setStation:(SAMPPodcastStation *)arg1 ;
-(BOOL)startPlaying;
-(void)setStartPlaying:(BOOL)arg1 ;
-(NSString *)sharedUserIdFromPlayableITunesAccount;
-(void)setSharedUserIdFromPlayableITunesAccount:(NSString *)arg1 ;
-(NSArray *)hashedRouteUIDs;
-(void)setHashedRouteUIDs:(NSArray *)arg1 ;
-(NSString *)requesterSharedUserId;
-(void)setRequesterSharedUserId:(NSString *)arg1 ;
@end

