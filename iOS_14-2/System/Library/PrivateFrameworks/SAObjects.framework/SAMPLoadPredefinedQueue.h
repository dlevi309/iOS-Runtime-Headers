/*
* Generated on Thursday, January 14, 2021 at 2:23:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SADomainCommand.h>

@class NSArray, NSString, NSNumber;

@interface SAMPLoadPredefinedQueue : SADomainCommand

@property (assign,nonatomic) BOOL dryRun; 
@property (nonatomic,copy) NSArray * hashedRouteUIDs; 
@property (assign,nonatomic) int mediaItemType; 
@property (nonatomic,copy) NSString * requesterSharedUserId; 
@property (nonatomic,copy) NSString * sharedUserIdFromPlayableMusicAccount; 
@property (assign,nonatomic) BOOL shouldShuffle; 
@property (nonatomic,copy) NSNumber * startPlaying; 
+(id)loadPredefinedQueue;
+(id)loadPredefinedQueueWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)af_addEntriesToAnalyticsContext:(id)arg1 ;
-(void)setDryRun:(BOOL)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSString *)sharedUserIdFromPlayableMusicAccount;
-(void)setSharedUserIdFromPlayableMusicAccount:(NSString *)arg1 ;
-(int)mediaItemType;
-(void)setMediaItemType:(int)arg1 ;
-(BOOL)mutatingCommand;
-(NSNumber *)startPlaying;
-(BOOL)dryRun;
-(void)setStartPlaying:(NSNumber *)arg1 ;
-(NSArray *)hashedRouteUIDs;
-(void)setHashedRouteUIDs:(NSArray *)arg1 ;
-(NSString *)requesterSharedUserId;
-(void)setRequesterSharedUserId:(NSString *)arg1 ;
-(BOOL)shouldShuffle;
-(void)setShouldShuffle:(BOOL)arg1 ;
@end

