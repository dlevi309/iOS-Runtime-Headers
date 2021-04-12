/*
* Generated on Thursday, January 14, 2021 at 2:29:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Health/Plugins/ActivityAchievementsPlugin.bundle/ActivityAchievementsPlugin
*/

@class ACHAchievementStore, ACHTemplateStore;


@protocol ACHAchievementsProfileExtending <NSObject>
@property (nonatomic,readonly) ACHAchievementStore * achievementStore; 
@property (nonatomic,readonly) ACHTemplateStore * templateStore; 
@required
-(void)requestImmediateUpdateForTemplateSource:(id)arg1;
-(void)registerTemplateSource:(id)arg1 awardingSource:(id)arg2;
-(ACHTemplateStore *)templateStore;
-(void)requestIncrementalEvaluationForAwardingSource:(id)arg1 evaluationBlock:(/*^block*/id)arg2;
-(void)deregisterTemplateSource:(id)arg1 awardingSource:(id)arg2;
-(ACHAchievementStore *)achievementStore;

@end

