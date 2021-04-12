/*
* Generated on Monday, March 1, 2021 at 2:35:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Health/Plugins/ActivityAchievementsPlugin.bundle/ActivityAchievementsPlugin
*/

@class ACHAchievementStore, ACHTemplateStore;


@protocol ACHAchievementsProfileExtending <NSObject>
@property (nonatomic,readonly) ACHAchievementStore * achievementStore; 
@property (nonatomic,readonly) ACHTemplateStore * templateStore; 
@required
-(ACHTemplateStore *)templateStore;
-(ACHAchievementStore *)achievementStore;
-(void)registerTemplateSource:(id)arg1 awardingSource:(id)arg2;
-(void)deregisterTemplateSource:(id)arg1 awardingSource:(id)arg2;
-(void)requestImmediateUpdateForTemplateSource:(id)arg1;
-(void)requestIncrementalEvaluationForAwardingSource:(id)arg1 evaluationBlock:(/*^block*/id)arg2;

@end

