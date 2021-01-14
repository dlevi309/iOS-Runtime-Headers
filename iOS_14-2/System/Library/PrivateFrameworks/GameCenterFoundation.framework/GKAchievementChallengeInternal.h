/*
* Generated on Thursday, January 14, 2021 at 2:24:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
*/

#import <GameCenterFoundation/GKChallengeInternal.h>

@class GKAchievementInternal;

@interface GKAchievementChallengeInternal : GKChallengeInternal {

	GKAchievementInternal* _achievement;

}

@property (nonatomic,copy) GKAchievementInternal * achievement;              //@synthesize achievement=_achievement - In the implementation block
+(id)secureCodedPropertyKeys;
+(id)internalRepresentation;
-(GKAchievementInternal *)achievement;
-(id)titleText;
-(unsigned long long)type;
-(void)setAchievement:(GKAchievementInternal *)arg1 ;
-(void)dealloc;
-(id)serverRepresentationForReceivingPlayer:(id)arg1 ;
@end

