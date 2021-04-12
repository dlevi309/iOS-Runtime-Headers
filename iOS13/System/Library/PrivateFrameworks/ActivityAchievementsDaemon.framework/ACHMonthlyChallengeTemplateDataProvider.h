/*
* Generated on Monday, March 1, 2021 at 2:34:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActivityAchievementsDaemon.framework/ActivityAchievementsDaemon
*/


@class NSDate, NSCalendar, ACHAchievementStore, HDProfile, ACHActivitySummaryUtility;

@interface ACHMonthlyChallengeTemplateDataProvider : NSObject {

	NSDate* _currentDateOverride;
	NSCalendar* _currentCalendarOverride;
	ACHAchievementStore* _achievementStore;
	HDProfile* _profile;
	ACHActivitySummaryUtility* _activitySummaryUtility;
	NSCalendar* _currentCalendar;
	NSDate* _currentDate;

}

@property (assign,nonatomic,__weak) ACHAchievementStore * achievementStore;                          //@synthesize achievementStore=_achievementStore - In the implementation block
@property (assign,nonatomic,__weak) HDProfile * profile;                                             //@synthesize profile=_profile - In the implementation block
@property (assign,nonatomic,__weak) ACHActivitySummaryUtility * activitySummaryUtility;              //@synthesize activitySummaryUtility=_activitySummaryUtility - In the implementation block
@property (nonatomic,retain) NSCalendar * currentCalendar;                                           //@synthesize currentCalendar=_currentCalendar - In the implementation block
@property (nonatomic,retain) NSDate * currentDate;                                                   //@synthesize currentDate=_currentDate - In the implementation block
-(NSCalendar *)currentCalendar;
-(HDProfile *)profile;
-(void)setProfile:(HDProfile *)arg1 ;
-(NSDate *)currentDate;
-(BOOL)isWheelchairUser;
-(void)setCurrentDate:(NSDate *)arg1 ;
-(void)setCurrentDateOverride:(id)arg1 ;
-(ACHAchievementStore *)achievementStore;
-(void)setAchievementStore:(ACHAchievementStore *)arg1 ;
-(void)setCurrentCalendar:(NSCalendar *)arg1 ;
-(void)setActivitySummaryUtility:(ACHActivitySummaryUtility *)arg1 ;
-(BOOL)isDate:(id)arg1 betweenStartDate:(id)arg2 andEndDate:(id)arg3 ;
-(id)existingMonthlyChallengeTemplates;
-(unsigned long long)monthlyChallengeTypeForMonth:(id)arg1 ;
-(ACHActivitySummaryUtility *)activitySummaryUtility;
-(id)initWithProfile:(id)arg1 achievementStore:(id)arg2 activitySummaryUtility:(id)arg3 ;
-(long long)numberOfEarnedInstancesOfTemplateWithUniqueName:(id)arg1 inDateComponentInterval:(id)arg2 withCalendar:(id)arg3 ;
-(BOOL)monthlyChallengeExistsForMonth:(id)arg1 ;
-(BOOL)hasMinimumActiveDays;
-(void)setCurrentCalendarOverride:(id)arg1 ;
@end

