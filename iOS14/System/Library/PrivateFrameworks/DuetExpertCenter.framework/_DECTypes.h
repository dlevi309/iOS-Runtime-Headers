/*
* Generated on Thursday, January 14, 2021 at 2:25:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
*/


@interface _DECTypes : NSObject
+(id)stringForMMEventType:(unsigned long long)arg1 ;
+(unsigned long long)categoryForItem:(id)arg1 ;
+(id)consumerMapping;
+(long long)selectSingleReason:(long long)arg1 ;
+(void)invokeBlockOverCategoriesMatching:(unsigned long long)arg1 block:(/*^block*/id)arg2 ;
+(id)stringForConsumerType:(unsigned long long)arg1 ;
+(id)stringForConsumerSubtype:(unsigned char)arg1 ;
+(id)stringForCategory:(unsigned long long)arg1 ;
+(id)stringForPredictionReason:(long long)arg1 ;
+(id)mmConsumerMapping;
+(id)consumerSubtypeMapping;
+(id)stringForLaunchSource:(long long)arg1 ;
+(unsigned long long)mmConsumerTypeOfConsumerType:(unsigned long long)arg1 consumerSubType:(unsigned char)arg2 ;
+(id)stringForAppPredictionSources:(long long)arg1 ;
+(id)mmEventTypeMapping;
+(id)outcomeMapping;
+(unsigned long long)intersectCategories:(unsigned long long)arg1 withCategories:(unsigned long long)arg2 ;
+(id)categoryMapping;
+(id)stringForMMConsumerType:(unsigned long long)arg1 ;
+(id)predictionReasonMapping;
+(id)stringForOutcome:(unsigned long long)arg1 ;
@end

