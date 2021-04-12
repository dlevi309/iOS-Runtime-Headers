/*
* Generated on Thursday, January 14, 2021 at 2:24:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
*/


@protocol ATXActionPredictionInterface
@required
-(void)shouldDisplayDailyRoutineForContext:(id)arg1 reply:(/*^block*/id)arg2;
-(void)getActionPredictionsForContext:(id)arg1 includeBundleIds:(id)arg2 excludeBundleIds:(id)arg3 includeActionTypes:(id)arg4 excludeActionTypes:(id)arg5 limit:(unsigned long long)arg6 reply:(/*^block*/id)arg7;
-(void)removeActionPredictionNotificationsMatchingSuggestion:(id)arg1 reply:(/*^block*/id)arg2;
-(void)getActionPredictionsForCandidateBundleIdentifiers:(id)arg1 candidateActionTypes:(id)arg2 consumerType:(unsigned long long)arg3 consumerSubType:(unsigned char)arg4 limit:(int)arg5 reply:(/*^block*/id)arg6;

@end

