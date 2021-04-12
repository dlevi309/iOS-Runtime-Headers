/*
* Generated on Monday, March 1, 2021 at 2:33:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
*/


@interface FRPersonalizationUtilities : NSObject
+(id)sortItems:(id)arg1 readonlyPersonalizationAggregateStore:(id)arg2 personalizationWhitelist:(id)arg3 configurableValues:(id)arg4 userProfile:(id)arg5 translatedTagIDs:(id)arg6 sortOptions:(long long)arg7 configurationSet:(long long)arg8 ;
+(id)diversifyItems:(id)arg1 withPreselectedItems:(id)arg2 limit:(unsigned long long)arg3 similarityStartExpectation:(double)arg4 similarityEndExpectation:(double)arg5 publisherDiversificationSlope:(double)arg6 publisherDiversificationYIntercept:(double)arg7 ;
+(double)decayedDiversificationPenaltyWithInitialValue:(double)arg1 finalValue:(double)arg2 halfLife:(double)arg3 baselineAggregate:(id)arg4 ;
+(id)sortItems:(id)arg1 readonlyPersonalizationAggregateStore:(id)arg2 personalizationWhitelist:(id)arg3 configurableValues:(id)arg4 userProfile:(id)arg5 ;
+(id)limitItems:(id)arg1 byHourlyFlowRate:(double)arg2 itemFilterPerPublisher:(double)arg3 timeInterval:(double)arg4 ;
+(id)diversifyItems:(id)arg1 withLimit:(unsigned long long)arg2 similarityStartExpectation:(double)arg3 similarityEndExpectation:(double)arg4 publisherDiversificationSlope:(double)arg5 publisherDiversificationYIntercept:(double)arg6 ;
@end

