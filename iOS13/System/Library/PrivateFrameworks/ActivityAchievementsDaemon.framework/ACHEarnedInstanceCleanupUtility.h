/*
* Generated on Monday, March 1, 2021 at 2:34:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActivityAchievementsDaemon.framework/ActivityAchievementsDaemon
*/


@class ACHEarnedInstanceStore;

@interface ACHEarnedInstanceCleanupUtility : NSObject {

	ACHEarnedInstanceStore* _earnedInstanceStore;

}

@property (nonatomic,retain) ACHEarnedInstanceStore * earnedInstanceStore;              //@synthesize earnedInstanceStore=_earnedInstanceStore - In the implementation block
-(ACHEarnedInstanceStore *)earnedInstanceStore;
-(void)setEarnedInstanceStore:(ACHEarnedInstanceStore *)arg1 ;
-(id)_cleanupFirstWorkoutAchievements;
-(id)_cleanupBestWorkoutAchievements;
-(id)_cleanupLongestMoveStreakAchievements;
-(id)_cleanupNewExerciseRecordAchievements;
-(id)initWithEarnedInstanceStore:(id)arg1 ;
-(void)performCleanup;
@end

