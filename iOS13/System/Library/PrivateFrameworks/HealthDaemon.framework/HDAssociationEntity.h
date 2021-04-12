/*
* Generated on Monday, March 1, 2021 at 2:34:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <HealthDaemon/HDHealthEntity.h>

@interface HDAssociationEntity : HDHealthEntity
+(id)indices;
+(long long)protectionClass;
+(id)databaseTable;
+(id)joinClausesForProperty:(id)arg1 ;
+(const SCD_Struct_HD0*)columnDefinitionsWithCount:(unsigned long long*)arg1 ;
+(id)propertyForSyncProvenance;
+(id)uniquedColumns;
+(BOOL)associateSampleUUIDs:(id)arg1 withSampleUUID:(id)arg2 profile:(id)arg3 error:(id*)arg4 ;
+(id)privateSubEntities;
+(BOOL)_insertEntriesWithParentUUID:(id)arg1 childUUIDsData:(id)arg2 provenance:(long long)arg3 enforceSameSource:(BOOL)arg4 permitPendingAssociations:(BOOL)arg5 profile:(id)arg6 error:(id*)arg7 ;
+(BOOL)_insertEntriesWithParentUUID:(id)arg1 childUUIDsData:(id)arg2 provenance:(long long)arg3 context:(id)arg4 error:(id*)arg5 ;
+(BOOL)_insertAssociationEntryWithAssociationID:(long long)arg1 objectID:(long long)arg2 provenance:(long long)arg3 database:(id)arg4 error:(id*)arg5 ;
+(BOOL)_insertPendingAssociationsForParentUUID:(id)arg1 childUUIDData:(id)arg2 provenance:(long long)arg3 database:(id)arg4 error:(id*)arg5 ;
+(BOOL)_insertPendingAssociationForParentUUID:(id)arg1 childUUIDBytes:(unsigned char)arg2 provenance:(long long)arg3 database:(id)arg4 error:(id*)arg5 ;
+(id)tableAliases;
+(id)associationPropertyForEntityClass:(Class)arg1 ;
+(BOOL)associateSampleUUIDData:(id)arg1 withSampleUUID:(id)arg2 profile:(id)arg3 error:(id*)arg4 ;
+(BOOL)insertEntriesWithAssociation:(id)arg1 objects:(id)arg2 enforceSameSource:(BOOL)arg3 profile:(id)arg4 database:(id)arg5 error:(id*)arg6 ;
+(BOOL)insertEntriesWithAssociationUUID:(id)arg1 objectUUIDsData:(id)arg2 profile:(id)arg3 error:(id*)arg4 ;
+(BOOL)copyAssociationsFromObject:(id)arg1 toObject:(id)arg2 profile:(id)arg3 error:(id*)arg4 ;
+(BOOL)copyAssociationsFromObjectID:(id)arg1 toObjectID:(id)arg2 profile:(id)arg3 error:(id*)arg4 ;
+(id)journalEntryForAssociation:(id)arg1 objects:(id)arg2 ;
+(BOOL)realizePendingAssociationsWithTransaction:(id)arg1 startingAnchor:(long long)arg2 error:(id*)arg3 ;
+(id)objectIDsForAssociationEntityWithPersistentID:(long long)arg1 profile:(id)arg2 error:(id*)arg3 ;
+(id)deleteStatementForAssociationWithDatabase:(id)arg1 ;
+(id)deleteStatementForObjectAssociationsWithDatabase:(id)arg1 ;
+(BOOL)_enumerateAssociationsWithPredicate:(id)arg1 syncEntityClass:(Class)arg2 session:(id)arg3 syncAnchorRange:(HDSyncAnchorRange)arg4 lastSyncAnchor:(long long*)arg5 healthDatabase:(id)arg6 error:(id*)arg7 block:(/*^block*/id)arg8 ;
@end

