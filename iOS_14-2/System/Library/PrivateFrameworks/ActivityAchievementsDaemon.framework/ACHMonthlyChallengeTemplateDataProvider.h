/*
* Generated on Thursday, January 14, 2021 at 2:26:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setProfile:(HDProfile *)arg1 ;
-(NSDate *)currentDate;
-(void)setAchievementStore:(ACHAchievementStore *)arg1 ;
-(void)setCurrentDate:(NSDate *)arg1 ;
-(BOOL)isWheelchairUser;
-(NSCalendar *)currentCalendar;
-(ACHActivitySummaryUtility *)activitySummaryUtility;
-(HDProfile *)profile;
-(void)setActivitySummaryUtility:(ACHActivitySummaryUtility *)arg1 ;
-(ACHAchievementStore *)achievementStore;
-(void)setCurrentCalendar:(NSCalendar *)arg1 ;
-(BOOL)isDate:(id)arg1 betweenStartDate:(id)arg2 andEndDate:(id)arg3 ;
-(id)existingMonthlyChallengeTemplates;
-(unsigned long long)monthlyChallengeTypeForMonth:(id)arg1 ;
-(id)initWithProfile:(id)arg1 achievementStore:(id)arg2 activitySummaryUtility:(id)arg3 ;
-(long long)numberOfEarnedInstancesOfTemplateWithUniqueName:(id)arg1 inDateComponentInterval:(id)arg2 withCalendar:(id)arg3 ;
-(BOOL)monthlyChallengeExistsForMonth:(id)arg1 ;
-(long long)currentActivityMoveMode;
-(unsigned long long)currentExperienceType;
-(BOOL)hasMinimumActiveDays;
-(void)setCurrentDateOverride:(id)arg1 ;
-(void)setCurrentCalendarOverride:(id)arg1 ;
@end

