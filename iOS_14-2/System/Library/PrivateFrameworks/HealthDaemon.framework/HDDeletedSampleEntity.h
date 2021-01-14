/*
* Generated on Thursday, January 14, 2021 at 2:25:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <HealthDaemon/HDDeletedObjectEntity.h>

@interface HDDeletedSampleEntity : HDDeletedObjectEntity
+(id)databaseTable;
+(BOOL)isConcreteEntity;
+(const SCD_Struct_HD0*)columnDefinitionsWithCount:(unsigned long long*)arg1 ;
+(id)codableObjectsFromObjectCollection:(id)arg1 ;
+(id)entityEncoderForProfile:(id)arg1 transaction:(id)arg2 purpose:(long long)arg3 encodingOptions:(id)arg4 authorizationFilter:(/*^block*/id)arg5 ;
+(BOOL)addCodableObject:(id)arg1 toCollection:(id)arg2 ;
+(BOOL)insertCodableDeletedSamples:(id)arg1 provenance:(id)arg2 profile:(id)arg3 error:(id*)arg4 ;
+(id)_externalSyncMetadataForRow:(HDSQLiteRowRef)arg1 ;
+(long long)protectionClass;
+(long long)nextSyncAnchorWithStartAnchor:(long long)arg1 predicate:(id)arg2 session:(id)arg3 healthDatabase:(id)arg4 error:(id*)arg5 ;
+(BOOL)enumerateDeletedSamplesWithType:(id)arg1 profile:(id)arg2 restrictedSourceEntities:(id)arg3 limit:(unsigned long long)arg4 anchor:(long long)arg5 error:(id*)arg6 handler:(/*^block*/id)arg7 ;
+(id)insertDeletedObject:(id)arg1 dataType:(id)arg2 provenanceIdentifier:(id)arg3 deletionDate:(id)arg4 persistStartAndEndDates:(BOOL)arg5 startTimestamp:(double)arg6 endTimestamp:(double)arg7 inDatabase:(id)arg8 error:(id*)arg9 ;
+(Class)_entityClassForDeletion;
+(BOOL)enumerateEntitiesForSyncWithProperties:(id)arg1 predicate:(id)arg2 session:(id)arg3 syncAnchorRange:(HDSyncAnchorRange)arg4 limit:(unsigned long long)arg5 lastSyncAnchor:(long long*)arg6 healthDatabase:(id)arg7 error:(id*)arg8 block:(/*^block*/id)arg9 ;
@end

