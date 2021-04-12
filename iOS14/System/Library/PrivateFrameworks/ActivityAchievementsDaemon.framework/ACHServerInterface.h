/*
* Generated on Thursday, January 14, 2021 at 2:26:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActivityAchievementsDaemon.framework/ActivityAchievementsDaemon
*/


@protocol ACHServerInterface <NSObject>
@required
-(void)remote_fetchAllTemplatesWithCompletion:(/*^block*/id)arg1;
-(void)remote_addTemplate:(id)arg1 completion:(/*^block*/id)arg2;
-(void)remote_removeTemplate:(id)arg1 completion:(/*^block*/id)arg2;
-(void)remote_removeAllTemplatesWithCompletion:(/*^block*/id)arg1;
-(void)remote_fetchAllEarnedInstancesWithCompletion:(/*^block*/id)arg1;
-(void)remote_addEarnedInstance:(id)arg1 completion:(/*^block*/id)arg2;
-(void)remote_removeEarnedInstance:(id)arg1 completion:(/*^block*/id)arg2;
-(void)remote_removeAllEarnedInstancesWithCompletion:(/*^block*/id)arg1;
-(void)remote_fetchAllAchievementsWithCompletion:(/*^block*/id)arg1;
-(void)remote_fetchAchievementWithTemplateUniqueName:(id)arg1 completion:(/*^block*/id)arg2;
-(void)remote_fetchEphemeralAchievementWithTemplateUniqueName:(id)arg1 completion:(/*^block*/id)arg2;
-(void)remote_forceAwardingSchedulerWithCompletion:(/*^block*/id)arg1;
-(void)remote_runMonthlyChallengesWithCompletion:(/*^block*/id)arg1;
-(void)remote_fetchActivityChallengeAssetsServerURLWithCompletion:(/*^block*/id)arg1;
-(void)remote_setActivityChallengeAssetsServerURL:(id)arg1 completion:(/*^block*/id)arg2;
-(void)remote_availableMobileAssetsWithCompletion:(/*^block*/id)arg1;

@end

