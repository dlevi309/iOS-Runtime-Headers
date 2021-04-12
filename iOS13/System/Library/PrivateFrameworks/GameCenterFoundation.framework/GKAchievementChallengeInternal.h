/*
* Generated on Monday, March 1, 2021 at 2:34:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
*/

#import <GameCenterFoundation/GKChallengeInternal.h>

@class GKAchievementInternal;

@interface GKAchievementChallengeInternal : GKChallengeInternal {

	GKAchievementInternal* _achievement;

}

@property (nonatomic,copy) GKAchievementInternal * achievement;              //@synthesize achievement=_achievement - In the implementation block
+(id)internalRepresentation;
+(id)secureCodedPropertyKeys;
-(void)dealloc;
-(unsigned long long)type;
-(id)titleText;
-(GKAchievementInternal *)achievement;
-(void)setAchievement:(GKAchievementInternal *)arg1 ;
-(id)serverRepresentationForReceivingPlayer:(id)arg1 ;
@end

