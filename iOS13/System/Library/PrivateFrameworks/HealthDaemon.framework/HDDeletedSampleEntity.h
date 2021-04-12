/*
* Generated on Monday, March 1, 2021 at 2:34:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <HealthDaemon/HDDeletedObjectEntity.h>

@interface HDDeletedSampleEntity : HDDeletedObjectEntity
+(long long)protectionClass;
+(id)databaseTable;
+(id)entityEncoderForProfile:(id)arg1 database:(id)arg2 purpose:(long long)arg3 encodingOptions:(id)arg4 authorizationFilter:(/*^block*/id)arg5 ;
+(long long)nextSyncAnchorWithStartAnchor:(long long)arg1 predicate:(id)arg2 session:(id)arg3 healthDatabase:(id)arg4 error:(id*)arg5 ;
+(BOOL)enumerateEntitiesForSyncWithProperties:(id)arg1 predicate:(id)arg2 session:(id)arg3 syncAnchorRange:(HDSyncAnchorRange)arg4 limit:(unsigned long long)arg5 lastSyncAnchor:(long long*)arg6 healthDatabase:(id)arg7 error:(id*)arg8 block:(/*^block*/id)arg9 ;
+(const SCD_Struct_HD0*)columnDefinitionsWithCount:(unsigned long long*)arg1 ;
+(id)codableObjectsFromObjectCollection:(id)arg1 ;
+(BOOL)addCodableObject:(id)arg1 toCollection:(id)arg2 ;
+(BOOL)isConcreteEntity;
+(Class)_entityClassForDeletion;
+(BOOL)enumerateDeletedSamplesWithType:(id)arg1 profile:(id)arg2 restrictedSourceEntities:(id)arg3 limit:(unsigned long long)arg4 anchor:(long long)arg5 error:(id*)arg6 handler:(/*^block*/id)arg7 ;
+(id)insertDeletedObject:(id)arg1 dataType:(id)arg2 provenanceIdentifier:(id)arg3 deletionDate:(id)arg4 inDatabase:(id)arg5 error:(id*)arg6 ;
+(id)_externalSyncMetadataForRow:(HDSQLiteRowRef)arg1 ;
+(BOOL)insertCodableDeletedSamples:(id)arg1 provenance:(id)arg2 profile:(id)arg3 error:(id*)arg4 ;
@end

