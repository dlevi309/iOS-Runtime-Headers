/*
* Generated on Thursday, January 14, 2021 at 2:27:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActivityAchievementsUI.framework/ActivityAchievementsUI
*/

#import <ActivityAchievementsUI/AAUIAchievementsDataProvider.h>

@class NSArray;

@interface AAUIMockAchievementsDataProvider : AAUIAchievementsDataProvider {

	NSArray* _achievements;

}
-(id)init;
-(long long)numberOfItemsInSection:(long long)arg1 ;
-(long long)numberOfSections;
-(id)_monthStringFromTemplateName:(id)arg1 ;
-(void)startFetching;
-(void)addInitialLoadObserver:(id)arg1 ;
-(void)removeInitialLoadObserver:(id)arg1 ;
-(void)addRecentAndRelevantSectionObserver:(id)arg1 ;
-(void)removeRecentAndRelevantSectionObserver:(id)arg1 ;
-(void)addMainSectionObserver:(id)arg1 ;
-(void)removeMainSectionObserver:(id)arg1 ;
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

