/*
* Generated on Thursday, January 14, 2021 at 2:23:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SADomainCommand.h>

@class NSString, NSArray, SAMPCollection, NSNumber;

@interface SAMPSetQueue : SADomainCommand

@property (nonatomic,copy) NSString * assetInfo; 
@property (assign,nonatomic) BOOL dryRun; 
@property (nonatomic,copy) NSArray * filters; 
@property (nonatomic,copy) NSArray * hashedRouteUIDs; 
@property (nonatomic,retain) SAMPCollection * mediaItems; 
@property (nonatomic,copy) NSString * recommendationId; 
@property (nonatomic,copy) NSString * requesterSharedUserId; 
@property (nonatomic,copy) NSString * sharedUserIdFromPlayableMusicAccount; 
@property (assign,nonatomic) BOOL shouldOverrideManuallyCuratedUpNext; 
@property (assign,nonatomic) BOOL shouldReloadQueue; 
@property (assign,nonatomic) BOOL shouldShuffle; 
@property (nonatomic,copy) NSArray * sort; 
@property (nonatomic,copy) NSNumber * startPlaying; 
+(id)setQueue;
+(id)setQueueWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)af_addEntriesToAnalyticsContext:(id)arg1 ;
-(void)setDryRun:(BOOL)arg1 ;
-(void)setFilters:(NSArray *)arg1 ;
-(id)groupIdentifier;
-(NSString *)assetInfo;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSArray *)filters;
-(NSString *)recommendationId;
-(void)setRecommendationId:(NSString *)arg1 ;
-(NSString *)sharedUserIdFromPlayableMusicAccount;
-(void)setSharedUserIdFromPlayableMusicAccount:(NSString *)arg1 ;
-(NSArray *)sort;
-(BOOL)mutatingCommand;
-(void)setAssetInfo:(NSString *)arg1 ;
-(NSNumber *)startPlaying;
-(void)setSort:(NSArray *)arg1 ;
-(BOOL)dryRun;
-(void)setStartPlaying:(NSNumber *)arg1 ;
-(SAMPCollection *)mediaItems;
-(NSArray *)hashedRouteUIDs;
-(void)setHashedRouteUIDs:(NSArray *)arg1 ;
-(void)setMediaItems:(SAMPCollection *)arg1 ;
-(NSString *)requesterSharedUserId;
-(void)setRequesterSharedUserId:(NSString *)arg1 ;
-(BOOL)shouldOverrideManuallyCuratedUpNext;
-(void)setShouldOverrideManuallyCuratedUpNext:(BOOL)arg1 ;
-(BOOL)shouldReloadQueue;
-(void)setShouldReloadQueue:(BOOL)arg1 ;
-(BOOL)shouldShuffle;
-(void)setShouldShuffle:(BOOL)arg1 ;
@end

