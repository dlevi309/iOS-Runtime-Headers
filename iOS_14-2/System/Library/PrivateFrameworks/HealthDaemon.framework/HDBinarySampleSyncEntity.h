/*
* Generated on Thursday, January 14, 2021 at 2:25:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDSampleSyncEntity.h>

@interface HDBinarySampleSyncEntity : HDSampleSyncEntity
+(unsigned long long)supportedNanoSyncDirectionsForProtocolVersion:(int)arg1 ;
+(id)syncEntityIdentifier;
+(int)nanoSyncObjectType;
+(Class)healthEntityClass;
+(BOOL)_insertObjectsFromCodableObjectCollection:(id)arg1 syncStore:(id)arg2 profile:(id)arg3 error:(id*)arg4 ;
+(id)_objectWithCodable:(id)arg1 ;
+(id)_basePruningPredicateForDate:(id)arg1 profile:(id)arg2 ;
+(Class)_syncedSampleTypeClass;
+(BOOL)_insertObjectFromBinaryCodable:(id)arg1 syncStore:(id)arg2 profile:(id)arg3 provenance:(id)arg4 error:(id*)arg5 ;
@end

