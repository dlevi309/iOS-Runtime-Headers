/*
* Generated on Monday, March 1, 2021 at 2:34:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActivityAchievementsDaemon.framework/ActivityAchievementsDaemon
*/


@protocol ACHAchievementStoreObserving <NSObject>
@optional
-(void)achievementStoreDidFinishInitialFetch:(id)arg1;

@required
-(void)achievementStore:(id)arg1 didAddAchievements:(id)arg2;
-(void)achievementStore:(id)arg1 didUpdateAchievements:(id)arg2;
-(void)achievementStore:(id)arg1 didRemoveAchievements:(id)arg2;

@end

