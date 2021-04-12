/*
* Generated on Monday, March 1, 2021 at 2:34:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@interface HDQuantitySampleValueEnumerator : NSObject
+(BOOL)orderedQuantityValuesBySeriesForPredicate:(id)arg1 transaction:(id)arg2 options:(long long)arg3 error:(id*)arg4 handler:(/*^block*/id)arg5 ;
+(id)_queryForEnumerationWithPredicate:(id)arg1 transaction:(id)arg2 options:(long long)arg3 ;
+(id)_propertiesForEnumeration;
+(BOOL)orderedQuantityValuesForPredicate:(id)arg1 transaction:(id)arg2 options:(long long)arg3 error:(id*)arg4 handler:(/*^block*/id)arg5 ;
+(long long)_enumerateWithEnumerator:(id)arg1 endTime:(double)arg2 error:(id*)arg3 handler:(/*^block*/id)arg4 ;
+(BOOL)orderedQuantityValuesBySeriesForPredicate:(id)arg1 profile:(id)arg2 options:(long long)arg3 error:(id*)arg4 handler:(/*^block*/id)arg5 ;
+(BOOL)orderedQuantityValuesForPredicate:(id)arg1 profile:(id)arg2 options:(long long)arg3 error:(id*)arg4 handler:(/*^block*/id)arg5 ;
@end

