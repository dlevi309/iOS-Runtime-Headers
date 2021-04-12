/*
* Generated on Thursday, January 14, 2021 at 2:24:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
*/

#import <GameCenterFoundation/GKChallenge.h>

@class GKScore, GKLeaderboard;

@interface GKScoreChallenge : GKChallenge {

	GKScore* _score;

}

@property (nonatomic,readonly) GKLeaderboard * leaderboard; 
@property (nonatomic,retain) GKScore * score;                            //@synthesize score=_score - In the implementation block
+(BOOL)instancesRespondToSelector:(SEL)arg1 ;
-(id)iconSource;
-(id)composeGoalText;
-(id)smallIconURLString;
-(id)listGoalText;
-(id)detailGoalText;
-(id)alertGoalText;
-(id)listTitleText;
-(id)iconURLString;
-(void)setInternal:(id)arg1 ;
-(GKScore *)score;
-(void)setScore:(GKScore *)arg1 ;
-(id)titleText;
-(BOOL)detailsLoaded;
-(void)loadDetailsWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)description;
-(id)initWithInternalRepresentation:(id)arg1 ;
-(GKLeaderboard *)leaderboard;
-(void)dealloc;
-(id)detailGoalTextForPlayer:(id)arg1 withLeaderboard:(id)arg2 ;
@end

