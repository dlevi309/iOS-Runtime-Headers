/*
* Generated on Monday, March 1, 2021 at 2:34:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
*/

#import <GameCenterFoundation/GKInternalRepresentation.h>

@class NSString, GKPlayerInternal;

@interface GKTournamentParticipantInternal : GKInternalRepresentation {

	BOOL _cheatingIndicator;
	NSString* _tournamentID;
	GKPlayerInternal* _player;
	long long _score;
	long long _playerGroup;
	long long _replayCount;
	long long _participantState;

}

@property (nonatomic,retain) NSString * tournamentID;                 //@synthesize tournamentID=_tournamentID - In the implementation block
@property (nonatomic,retain) GKPlayerInternal * player;               //@synthesize player=_player - In the implementation block
@property (assign,nonatomic) long long score;                         //@synthesize score=_score - In the implementation block
@property (assign,nonatomic) long long playerGroup;                   //@synthesize playerGroup=_playerGroup - In the implementation block
@property (assign,nonatomic) long long replayCount;                   //@synthesize replayCount=_replayCount - In the implementation block
@property (assign,nonatomic) long long participantState;              //@synthesize participantState=_participantState - In the implementation block
@property (assign,nonatomic) BOOL cheatingIndicator;                  //@synthesize cheatingIndicator=_cheatingIndicator - In the implementation block
+(id)secureCodedPropertyKeys;
-(long long)score;
-(void)setScore:(long long)arg1 ;
-(GKPlayerInternal *)player;
-(void)setPlayer:(GKPlayerInternal *)arg1 ;
-(long long)participantState;
-(void)setParticipantState:(long long)arg1 ;
-(void)setPlayerGroup:(long long)arg1 ;
-(long long)playerGroup;
-(NSString *)tournamentID;
-(void)setTournamentID:(NSString *)arg1 ;
-(long long)replayCount;
-(void)setReplayCount:(long long)arg1 ;
-(BOOL)cheatingIndicator;
-(void)setCheatingIndicator:(BOOL)arg1 ;
@end

