/*
* Generated on Monday, March 1, 2021 at 2:34:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDDataSyncEntity.h>

@interface HDSampleSyncEntity : HDDataSyncEntity
+(int)nanoSyncObjectType;
+(BOOL)supportsSpeculativeNanoSyncChanges;
+(id)_predicateForSyncSession:(id)arg1 ;
+(id)_basePruningPredicateForDate:(id)arg1 profile:(id)arg2 ;
+(id)_predicateForDateIntervalInSyncSession:(id)arg1 ;
+(Class)_syncedSampleTypeClass;
+(id)_predicateForSampleAgeInSyncSession:(id)arg1 sampleTypeClass:(Class)arg2 ;
@end

