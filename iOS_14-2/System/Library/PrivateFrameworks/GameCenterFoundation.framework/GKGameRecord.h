/*
* Generated on Thursday, January 14, 2021 at 2:24:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
*/

#import <GameCenterFoundation/GKGame.h>

@class GKPlayer, GKGameRecordInternal, NSDate, NSString;

@interface GKGameRecord : GKGame {

	GKPlayer* _player;

}

@property (retain,readonly) GKGameRecordInternal * internal; 
@property (nonatomic,retain) GKPlayer * player;                                         //@synthesize player=_player - In the implementation block
@property (nonatomic,readonly) BOOL played; 
@property (nonatomic,readonly) NSDate * lastPlayedDate; 
@property (nonatomic,readonly) NSDate * purchaseDate; 
@property (nonatomic,readonly) BOOL supportsAchievements; 
@property (nonatomic,readonly) unsigned long long achievements; 
@property (nonatomic,readonly) unsigned long long maxAchievements; 
@property (nonatomic,readonly) unsigned long long achievementPoints; 
@property (nonatomic,readonly) unsigned long long maxAchievementPoints; 
@property (nonatomic,readonly) BOOL supportsLeaderboards; 
@property (nonatomic,readonly) unsigned long long numberOfLeaderboards; 
@property (nonatomic,readonly) unsigned long long numberOfCategories; 
@property (nonatomic,readonly) unsigned long long rank; 
@property (nonatomic,readonly) unsigned long long maxRank; 
@property (nonatomic,readonly) unsigned long long friendRank; 
@property (nonatomic,readonly) unsigned long long maxFriendRank; 
@property (nonatomic,readonly) BOOL supportsLeaderboardSets; 
@property (nonatomic,readonly) unsigned long long numberOfLeaderboardSets; 
@property (nonatomic,readonly) NSString * defaultLeaderboardIdentifier; 
@property (nonatomic,readonly) BOOL isArcadeGame; 
@property (nonatomic,readonly) BOOL supportsChallenges; 
+(BOOL)supportsSecureCoding;
+(void)invalidateCaches;
+(id)gameRecordForPlayer:(id)arg1 game:(id)arg2 ;
+(id)cacheKeyForPlayer:(id)arg1 bundleIdentifier:(id)arg2 ;
+(id)internalRepresentationCache;
+(id)cacheKeyForPlayer:(id)arg1 game:(id)arg2 ;
+(id)internalRepresentationForPlayer:(id)arg1 game:(id)arg2 ;
+(void)loadGameRecordsForPlayer:(id)arg1 games:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
+(void)loadGameRecordsForPlayer:(id)arg1 bundleIDs:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
+(void)partitionGameRecords:(id)arg1 returniOS:(id*)arg2 returnMac:(id*)arg3 ;
+(id)cacheKeyForPlayer:(id)arg1 internal:(id)arg2 ;
+(void)loadGameRecordForPlayer:(id)arg1 game:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(GKPlayer *)player;
-(void)setPlayer:(GKPlayer *)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)played;
-(id)description;
-(id)initWithInternalRepresentation:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithInternalRepresentation:(id)arg1 player:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

