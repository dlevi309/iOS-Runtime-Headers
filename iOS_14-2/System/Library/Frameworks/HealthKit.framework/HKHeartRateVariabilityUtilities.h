/*
* Generated on Thursday, January 14, 2021 at 2:21:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/


@interface HKHeartRateVariabilityUtilities : NSObject
+(id)_hrvType;
+(id)_sequenceType;
+(void)queryForParentSequenceOfHRV:(id)arg1 healthStore:(id)arg2 completion:(/*^block*/id)arg3 ;
+(void)deleteHRVSample:(id)arg1 healthStore:(id)arg2 predicate:(id)arg3 options:(unsigned long long)arg4 completion:(/*^block*/id)arg5 ;
+(void)deleteHRVSamplesFromStartDate:(id)arg1 endDate:(id)arg2 predicate:(id)arg3 options:(unsigned long long)arg4 healthStore:(id)arg5 completion:(/*^block*/id)arg6 ;
+(id)instantaneousBPMsForHeartbeatSeriesSample:(id)arg1 ;
@end

