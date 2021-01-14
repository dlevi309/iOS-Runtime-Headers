/*
* Generated on Thursday, January 14, 2021 at 2:26:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

