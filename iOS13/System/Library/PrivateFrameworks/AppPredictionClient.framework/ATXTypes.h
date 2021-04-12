/*
* Generated on Monday, March 1, 2021 at 2:32:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
*/


@interface ATXTypes : NSObject
+(id)stringForConsumerType:(unsigned long long)arg1 ;
+(id)stringForConsumerSubtype:(unsigned char)arg1 ;
+(id)consumerMapping;
+(id)consumerSubtypeMapping;
+(id)stringForEngagementType:(unsigned long long)arg1 ;
+(id)inverseConsumerSubtypeMapping;
+(id)validConsumerTypes;
+(id)validConsumerTypeList;
+(id)validConsumerSubTypes;
+(id)validConsumerSubTypeList;
+(id)uiTypeForConsumerSubType:(unsigned char)arg1 ;
+(unsigned long long)engagementTypeForString:(id)arg1 found:(BOOL*)arg2 ;
+(unsigned long long)consumerTypeForString:(id)arg1 found:(BOOL*)arg2 ;
+(unsigned char)consumerSubtypeForString:(id)arg1 found:(BOOL*)arg2 ;
+(unsigned long long)consumerTypeForSubType:(unsigned char)arg1 ;
+(BOOL)isActionSpotlightConsumerSubType:(unsigned char)arg1 ;
+(void)iterConsumerTypesWithBlock:(/*^block*/id)arg1 ;
+(void)iterConsumerSubTypesWithBlock:(/*^block*/id)arg1 ;
@end

