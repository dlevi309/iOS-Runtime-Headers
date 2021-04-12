/*
* Generated on Monday, March 1, 2021 at 2:34:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActivityAchievementsUI.framework/ActivityAchievementsUI
*/

#import <ActivityAchievementsUI/AAUIAchievementsDataProvider.h>

@class NSArray;

@interface AAUIMockAchievementsDataProvider : AAUIAchievementsDataProvider {

	NSArray* _achievements;

}
-(id)init;
-(long long)numberOfSections;
-(long long)numberOfItemsInSection:(long long)arg1 ;
-(id)_monthStringFromTemplateName:(id)arg1 ;
-(void)startFetching;
-(void)stopFetching;
-(id)headerStringForSection:(long long)arg1 isRecentAndRelevant:(BOOL)arg2 ;
-(id)recentAndRelevantAchievementAtIndexPath:(id)arg1 ;
-(id)achievementAtIndexPath:(id)arg1 ;
-(id)_achievementForTemplate:(id)arg1 earnedInstanceCount:(long long)arg2 earnedInstanceOffset:(long long)arg3 earnedInstanceValue:(long long)arg4 goalValue:(long long)arg5 progressValue:(long long)arg6 ;
-(id)_ACHDateComponentIntervalWithMonthOffset:(unsigned long long)arg1 ;
-(id)_currentMonthlyChallengeAchievementForTemplate:(id)arg1 localizableSuffix:(id)arg2 goalValue:(long long)arg3 progressValue:(long long)arg4 isEarned:(BOOL)arg5 ;
-(id)_dateComponentsWithDayOffset:(long long)arg1 ;
-(id)_fitnessUIAssetsURLWithKey:(id)arg1 value:(id)arg2 ;
@end

