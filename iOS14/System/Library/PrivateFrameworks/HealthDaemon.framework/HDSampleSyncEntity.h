/*
* Generated on Thursday, January 14, 2021 at 2:25:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDDataSyncEntity.h>

@interface HDSampleSyncEntity : HDDataSyncEntity
+(BOOL)supportsSpeculativeNanoSyncChanges;
+(id)_predicateForSyncSession:(id)arg1 ;
+(id)_basePruningPredicateForDate:(id)arg1 profile:(id)arg2 ;
+(id)_predicateForDateIntervalInSyncSession:(id)arg1 ;
+(Class)_syncedSampleTypeClass;
+(id)_predicateForSampleAgeInSyncSession:(id)arg1 sampleTypeClass:(Class)arg2 ;
+(id)_predicateForSampleAgeWithMaximumObjectAgeByType:(id)arg1 defaultMaxAge:(id)arg2 sessionStartDate:(id)arg3 ;
@end

