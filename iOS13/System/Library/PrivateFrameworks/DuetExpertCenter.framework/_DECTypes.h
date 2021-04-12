/*
* Generated on Monday, March 1, 2021 at 2:32:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
*/


@interface _DECTypes : NSObject
+(id)stringForCategory:(unsigned long long)arg1 ;
+(id)stringForConsumerType:(unsigned long long)arg1 ;
+(id)stringForConsumerSubtype:(unsigned char)arg1 ;
+(id)stringForOutcome:(unsigned long long)arg1 ;
+(id)stringForPredictionReason:(long long)arg1 ;
+(id)stringForMMEventType:(unsigned long long)arg1 ;
+(id)stringForMMConsumerType:(unsigned long long)arg1 ;
+(unsigned long long)mmConsumerTypeOfConsumerType:(unsigned long long)arg1 consumerSubType:(unsigned char)arg2 ;
+(void)invokeBlockOverCategoriesMatching:(unsigned long long)arg1 block:(/*^block*/id)arg2 ;
+(unsigned long long)intersectCategories:(unsigned long long)arg1 withCategories:(unsigned long long)arg2 ;
+(unsigned long long)categoryForItem:(id)arg1 ;
+(id)stringForLaunchSource:(long long)arg1 ;
+(id)stringForAppPredictionSources:(long long)arg1 ;
+(id)categoryMapping;
+(id)consumerMapping;
+(id)consumerSubtypeMapping;
+(id)outcomeMapping;
+(id)predictionReasonMapping;
+(id)mmEventTypeMapping;
+(id)mmConsumerMapping;
+(long long)selectSingleReason:(long long)arg1 ;
@end

