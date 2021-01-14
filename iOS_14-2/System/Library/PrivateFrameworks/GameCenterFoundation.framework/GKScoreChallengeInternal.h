/*
* Generated on Thursday, January 14, 2021 at 2:24:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
*/

#import <GameCenterFoundation/GKChallengeInternal.h>

@class GKScoreInternal, GKLeaderboardInternal;

@interface GKScoreChallengeInternal : GKChallengeInternal {

	GKScoreInternal* _score;
	GKLeaderboardInternal* _leaderboard;

}

@property (nonatomic,copy) GKScoreInternal * score;                            //@synthesize score=_score - In the implementation block
@property (nonatomic,retain) GKLeaderboardInternal * leaderboard;              //@synthesize leaderboard=_leaderboard - In the implementation block
+(id)secureCodedPropertyKeys;
+(id)internalRepresentation;
-(GKScoreInternal *)score;
-(void)setScore:(GKScoreInternal *)arg1 ;
-(id)titleText;
-(unsigned long long)type;
-(GKLeaderboardInternal *)leaderboard;
-(void)setLeaderboard:(GKLeaderboardInternal *)arg1 ;
-(void)dealloc;
-(id)serverRepresentationForReceivingPlayer:(id)arg1 ;
@end

