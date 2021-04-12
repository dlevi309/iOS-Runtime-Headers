/*
* Generated on Thursday, January 14, 2021 at 2:24:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
*/


@interface ATXTypes : NSObject
+(id)validConsumerTypes;
+(void)iterConsumerTypesWithBlock:(/*^block*/id)arg1 ;
+(id)uiTypeForActionConsumerSubType:(unsigned char)arg1 ;
+(id)consumerMapping;
+(unsigned long long)consumerTypeForString:(id)arg1 found:(BOOL*)arg2 ;
+(unsigned long long)engagementTypeForString:(id)arg1 found:(BOOL*)arg2 ;
+(id)stringForConsumerType:(unsigned long long)arg1 ;
+(unsigned long long)consumerTypeForSubType:(unsigned char)arg1 ;
+(void)iterConsumerSubTypesWithBlock:(/*^block*/id)arg1 ;
+(id)stringForConsumerSubtype:(unsigned char)arg1 ;
+(BOOL)isActionSpotlightConsumerSubType:(unsigned char)arg1 ;
+(id)validConsumerSubTypes;
+(id)inverseConsumerSubtypeMapping;
+(id)consumerSubtypeMapping;
+(unsigned char)consumerSubtypeForString:(id)arg1 found:(BOOL*)arg2 ;
+(id)validConsumerTypeList;
+(id)stringForEngagementType:(unsigned long long)arg1 ;
+(id)safeStringForConsumerSubtype:(unsigned char)arg1 ;
+(id)validConsumerSubTypeList;
@end

