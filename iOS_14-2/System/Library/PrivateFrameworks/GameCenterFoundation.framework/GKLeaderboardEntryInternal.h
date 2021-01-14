/*
* Generated on Thursday, January 14, 2021 at 2:24:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
*/

#import <GameCenterFoundation/GKInternalRepresentation.h>

@class GKPlayerInternal, NSString, NSDate;

@interface GKLeaderboardEntryInternal : GKInternalRepresentation {

	GKPlayerInternal* _player;
	long long _rank;
	long long _score;
	NSString* _formattedScore;
	unsigned long long _context;
	NSDate* _date;
	long long _state;
	NSString* _baseLeaderboardID;

}

@property (nonatomic,retain) GKPlayerInternal * player;               //@synthesize player=_player - In the implementation block
@property (assign,nonatomic) long long rank;                          //@synthesize rank=_rank - In the implementation block
@property (assign,nonatomic) long long score;                         //@synthesize score=_score - In the implementation block
@property (nonatomic,copy) NSString * formattedScore;                 //@synthesize formattedScore=_formattedScore - In the implementation block
@property (assign,nonatomic) unsigned long long context;              //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) NSDate * date;                           //@synthesize date=_date - In the implementation block
@property (assign,nonatomic) long long state;                         //@synthesize state=_state - In the implementation block
@property (nonatomic,copy) NSString * baseLeaderboardID;              //@synthesize baseLeaderboardID=_baseLeaderboardID - In the implementation block
+(id)secureCodedPropertyKeys;
-(GKPlayerInternal *)player;
-(void)setRank:(long long)arg1 ;
-(void)setPlayer:(GKPlayerInternal *)arg1 ;
-(long long)score;
-(NSString *)formattedScore;
-(void)setScore:(long long)arg1 ;
-(void)setDate:(NSDate *)arg1 ;
-(unsigned long long)context;
-(NSString *)baseLeaderboardID;
-(void)setState:(long long)arg1 ;
-(long long)rank;
-(long long)state;
-(NSDate *)date;
-(void)setContext:(unsigned long long)arg1 ;
-(void)setBaseLeaderboardID:(NSString *)arg1 ;
-(void)setFormattedScore:(NSString *)arg1 ;
@end

