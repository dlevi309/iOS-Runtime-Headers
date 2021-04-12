/*
* Generated on Monday, March 1, 2021 at 2:32:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/


@interface HKHeartRateVariabilityUtilities : NSObject
+(id)_hrvType;
+(void)queryForParentSequenceOfHRV:(id)arg1 healthStore:(id)arg2 completion:(/*^block*/id)arg3 ;
+(id)_sequenceType;
+(void)deleteHRVSample:(id)arg1 healthStore:(id)arg2 predicate:(id)arg3 options:(unsigned long long)arg4 completion:(/*^block*/id)arg5 ;
+(void)deleteHRVSamplesFromStartDate:(id)arg1 endDate:(id)arg2 predicate:(id)arg3 options:(unsigned long long)arg4 healthStore:(id)arg5 completion:(/*^block*/id)arg6 ;
+(id)instantaneousBPMsForHeartbeatSeriesSample:(id)arg1 ;
@end

