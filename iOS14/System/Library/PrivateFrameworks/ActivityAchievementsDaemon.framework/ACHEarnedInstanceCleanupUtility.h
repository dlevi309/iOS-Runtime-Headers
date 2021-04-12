/*
* Generated on Thursday, January 14, 2021 at 2:26:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActivityAchievementsDaemon.framework/ActivityAchievementsDaemon
*/


@class ACHEarnedInstanceStore, HDProfile;

@interface ACHEarnedInstanceCleanupUtility : NSObject {

	ACHEarnedInstanceStore* _earnedInstanceStore;
	HDProfile* _profile;

}

@property (nonatomic,retain) ACHEarnedInstanceStore * earnedInstanceStore;              //@synthesize earnedInstanceStore=_earnedInstanceStore - In the implementation block
@property (nonatomic,retain) HDProfile * profile;                                       //@synthesize profile=_profile - In the implementation block
-(void)setProfile:(HDProfile *)arg1 ;
-(ACHEarnedInstanceStore *)earnedInstanceStore;
-(void)setEarnedInstanceStore:(ACHEarnedInstanceStore *)arg1 ;
-(HDProfile *)profile;
-(void)performCleanup;
-(id)_cleanupFirstWorkoutAchievements;
-(id)_cleanupBestWorkoutAchievements;
-(id)_cleanupLongestMoveStreakAchievements;
-(id)_cleanupNewExerciseRecordAchievements;
-(id)_cleanupLifetimeMoveGoalAchievements;
-(long long)_historicalEvaluationAdjustment;
-(id)initWithEarnedInstanceStore:(id)arg1 profile:(id)arg2 ;
@end

