/*
* Generated on Thursday, January 14, 2021 at 2:24:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
*/

#import <GameCenterFoundation/GKChallenge.h>

@class GKAchievement;

@interface GKAchievementChallenge : GKChallenge {

	GKAchievement* _achievement;

}

@property (nonatomic,retain) GKAchievement * achievement;              //@synthesize achievement=_achievement - In the implementation block
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
-(GKAchievement *)achievement;
-(id)titleText;
-(BOOL)detailsLoaded;
-(void)loadDetailsWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)description;
-(id)initWithInternalRepresentation:(id)arg1 ;
-(void)setAchievement:(GKAchievement *)arg1 ;
-(void)dealloc;
-(id)detailGoalTextForPlayer:(id)arg1 withAchievement:(id)arg2 ;
@end

