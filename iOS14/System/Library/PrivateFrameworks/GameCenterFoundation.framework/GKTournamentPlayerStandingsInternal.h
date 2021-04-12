/*
* Generated on Thursday, January 14, 2021 at 2:24:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
*/

#import <GameCenterFoundation/GKInternalRepresentation.h>

@interface GKTournamentPlayerStandingsInternal : GKInternalRepresentation {

	long long _score;
	long long _topScore;
	long long _friendRank;
	long long _friendCount;
	long long _globalRank;
	long long _globalPlayerCount;
	long long _replayCount;
	long long _participantState;

}

@property (assign,nonatomic) long long score;                          //@synthesize score=_score - In the implementation block
@property (assign,nonatomic) long long topScore;                       //@synthesize topScore=_topScore - In the implementation block
@property (assign,nonatomic) long long friendRank;                     //@synthesize friendRank=_friendRank - In the implementation block
@property (assign,nonatomic) long long friendCount;                    //@synthesize friendCount=_friendCount - In the implementation block
@property (assign,nonatomic) long long globalRank;                     //@synthesize globalRank=_globalRank - In the implementation block
@property (assign,nonatomic) long long globalPlayerCount;              //@synthesize globalPlayerCount=_globalPlayerCount - In the implementation block
@property (assign,nonatomic) long long replayCount;                    //@synthesize replayCount=_replayCount - In the implementation block
@property (assign,nonatomic) long long participantState;               //@synthesize participantState=_participantState - In the implementation block
+(id)secureCodedPropertyKeys;
-(long long)score;
-(long long)friendCount;
-(void)setFriendCount:(long long)arg1 ;
-(void)setScore:(long long)arg1 ;
-(void)setParticipantState:(long long)arg1 ;
-(long long)participantState;
-(long long)friendRank;
-(long long)topScore;
-(long long)replayCount;
-(void)setReplayCount:(long long)arg1 ;
-(void)setTopScore:(long long)arg1 ;
-(void)setFriendRank:(long long)arg1 ;
-(long long)globalRank;
-(void)setGlobalRank:(long long)arg1 ;
-(long long)globalPlayerCount;
-(void)setGlobalPlayerCount:(long long)arg1 ;
@end

