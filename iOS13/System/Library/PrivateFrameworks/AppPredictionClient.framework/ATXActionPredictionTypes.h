/*
* Generated on Monday, March 1, 2021 at 2:32:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
*/


@interface ATXActionPredictionTypes : NSObject
+(id)engagementTypeToString:(unsigned long long)arg1 ;
+(id)actionExperienceToString:(unsigned long long)arg1 ;
+(id)actionTypeToString:(unsigned long long)arg1 ;
+(id)actionFeedbackStageToString:(unsigned long long)arg1 ;
+(id)actionFeedbackTypeToString:(unsigned long long)arg1 ;
+(unsigned long long)stringToActionExperience:(id)arg1 found:(BOOL*)arg2 ;
+(unsigned long long)stringToActionFeedbackStage:(id)arg1 found:(BOOL*)arg2 ;
+(id)inverseActionFeedbackTypeMapping;
+(id)actionTypeToPETString:(unsigned long long)arg1 ;
@end

