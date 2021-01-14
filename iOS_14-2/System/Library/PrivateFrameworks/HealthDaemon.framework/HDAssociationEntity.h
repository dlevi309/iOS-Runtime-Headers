/*
* Generated on Thursday, January 14, 2021 at 2:25:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <HealthDaemon/HDHealthEntity.h>

@interface HDAssociationEntity : HDHealthEntity
+(id)databaseTable;
+(id)uniquedColumns;
+(const SCD_Struct_HD0*)columnDefinitionsWithCount:(unsigned long long*)arg1 ;
+(id)deleteStatementForAssociationWithTransaction:(id)arg1 ;
+(BOOL)_insertAssociationEntryWithAssociationID:(long long)arg1 objectID:(long long)arg2 provenance:(long long)arg3 database:(id)arg4 error:(id*)arg5 ;
+(id)deleteStatementForObjectAssociationsWithTransaction:(id)arg1 ;
+(BOOL)copyAssociationsFromObjectID:(id)arg1 toObjectID:(id)arg2 profile:(id)arg3 error:(id*)arg4 ;
+(id)propertyForSyncProvenance;
+(id)tableAliases;
+(long long)protectionClass;
+(BOOL)_enumerateAssociationsWithPredicate:(id)arg1 syncEntityClass:(Class)arg2 session:(id)arg3 syncAnchorRange:(HDSyncAnchorRange)arg4 lastSyncAnchor:(long long*)arg5 healthDatabase:(id)arg6 error:(id*)arg7 block:(/*^block*/id)arg8 ;
+(id)indices;
+(BOOL)_insertEntriesWithParentUUID:(id)arg1 childUUIDsData:(id)arg2 provenance:(long long)arg3 context:(id)arg4 error:(id*)arg5 ;
+(id)journalEntryForAssociation:(id)arg1 objects:(id)arg2 ;
+(id)joinClausesForProperty:(id)arg1 ;
+(id)associationPropertyForEntityClass:(Class)arg1 ;
+(id)objectIDsForAssociationEntityWithPersistentID:(long long)arg1 profile:(id)arg2 error:(id*)arg3 ;
+(BOOL)insertEntriesWithAssociation:(id)arg1 objects:(id)arg2 enforceSameSource:(BOOL)arg3 profile:(id)arg4 transaction:(id)arg5 error:(id*)arg6 ;
+(BOOL)_insertPendingAssociationForParentUUID:(id)arg1 childUUIDBytes:(unsigned char)arg2 provenance:(long long)arg3 database:(id)arg4 error:(id*)arg5 ;
+(BOOL)copyAssociationsFromObject:(id)arg1 toObject:(id)arg2 profile:(id)arg3 error:(id*)arg4 ;
+(BOOL)associateSampleUUIDData:(id)arg1 withSampleUUID:(id)arg2 profile:(id)arg3 error:(id*)arg4 ;
+(BOOL)realizePendingAssociationsWithTransaction:(id)arg1 startingAnchor:(long long)arg2 error:(id*)arg3 ;
+(id)countOfObjectsAssociatedWithObjectUUID:(id)arg1 profile:(id)arg2 error:(id*)arg3 ;
+(BOOL)insertEntriesWithAssociationUUID:(id)arg1 objectUUIDsData:(id)arg2 profile:(id)arg3 error:(id*)arg4 ;
+(BOOL)_insertPendingAssociationsForParentUUID:(id)arg1 childUUIDData:(id)arg2 provenance:(long long)arg3 database:(id)arg4 error:(id*)arg5 ;
+(BOOL)_insertEntriesWithParentUUID:(id)arg1 childUUIDsData:(id)arg2 provenance:(long long)arg3 enforceSameSource:(BOOL)arg4 permitPendingAssociations:(BOOL)arg5 profile:(id)arg6 error:(id*)arg7 ;
+(BOOL)associateSampleUUIDs:(id)arg1 withSampleUUID:(id)arg2 profile:(id)arg3 error:(id*)arg4 ;
+(id)privateSubEntities;
@end

