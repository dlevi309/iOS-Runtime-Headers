/*
* Generated on Thursday, January 14, 2021 at 2:24:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
*/

#import <GameCenterFoundation/GKGameInternal.h>

@class GKScoreInternal, NSDate;

@interface GKGameRecordInternal : GKGameInternal {

	GKScoreInternal* _score;
	NSDate* _lastPlayedDate;
	NSDate* _purchaseDate;
	unsigned short _achievements;
	short _achievementPoints;
	unsigned short _friendRank;
	unsigned short _maxFriendRank;
	unsigned _rank;
	unsigned _maxRank;

}

@property (nonatomic,retain) GKScoreInternal * score;                   //@synthesize score=_score - In the implementation block
@property (nonatomic,retain) NSDate * lastPlayedDate;                   //@synthesize lastPlayedDate=_lastPlayedDate - In the implementation block
@property (nonatomic,retain) NSDate * purchaseDate;                     //@synthesize purchaseDate=_purchaseDate - In the implementation block
@property (assign,nonatomic) unsigned short achievements;               //@synthesize achievements=_achievements - In the implementation block
@property (assign,nonatomic) short achievementPoints;                   //@synthesize achievementPoints=_achievementPoints - In the implementation block
@property (assign,nonatomic) unsigned short friendRank;                 //@synthesize friendRank=_friendRank - In the implementation block
@property (assign,nonatomic) unsigned short maxFriendRank;              //@synthesize maxFriendRank=_maxFriendRank - In the implementation block
@property (assign,nonatomic) unsigned rank;                             //@synthesize rank=_rank - In the implementation block
@property (assign,nonatomic) unsigned maxRank;                          //@synthesize maxRank=_maxRank - In the implementation block
+(id)secureCodedPropertyKeys;
+(id)gameRecordForGame:(id)arg1 ;
-(void)setRank:(unsigned)arg1 ;
-(short)achievementPoints;
-(unsigned short)maxFriendRank;
-(GKScoreInternal *)score;
-(void)setAchievements:(unsigned short)arg1 ;
-(unsigned short)achievements;
-(void)setScore:(GKScoreInternal *)arg1 ;
-(void)setPurchaseDate:(NSDate *)arg1 ;
-(NSDate *)lastPlayedDate;
-(void)setLastPlayedDate:(NSDate *)arg1 ;
-(NSDate *)purchaseDate;
-(unsigned)maxRank;
-(unsigned)rank;
-(unsigned short)friendRank;
-(void)dealloc;
-(void)setFriendRank:(unsigned short)arg1 ;
-(void)updateWithGame:(id)arg1 ;
-(void)setAchievementPoints:(short)arg1 ;
-(void)setMaxFriendRank:(unsigned short)arg1 ;
-(void)setMaxRank:(unsigned)arg1 ;
@end

