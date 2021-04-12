/*
* Generated on Monday, March 1, 2021 at 2:34:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <HealthDaemon/HDHealthEntity.h>
#import <libobjc.A.dylib/HDSQLiteEntity.h>

@class NSString;

@interface HDDataEntity : HDHealthEntity <HDSQLiteEntity>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(long long)protectionClass;
+(id)foreignKeys;
+(id)databaseTable;
+(id)disambiguatedSQLForProperty:(id)arg1 ;
+(id)joinClausesForProperty:(id)arg1 ;
+(id)entityEncoderForProfile:(id)arg1 database:(id)arg2 purpose:(long long)arg3 encodingOptions:(id)arg4 authorizationFilter:(/*^block*/id)arg5 ;
+(const SCD_Struct_HD0*)columnDefinitionsWithCount:(unsigned long long*)arg1 ;
+(id)propertyForSyncProvenance;
+(id)predicateForObjectsFromAppleWatchSources:(BOOL)arg1 profile:(id)arg2 error:(id*)arg3 ;
+(id)entityEnumeratorWithProfile:(id)arg1 ;
+(id)defaultForeignKey;
+(id)insertDataObject:(id)arg1 withProvenance:(id)arg2 inDatabase:(id)arg3 persistentID:(id)arg4 error:(id*)arg5 ;
+(id)codableObjectsFromObjectCollection:(id)arg1 ;
+(BOOL)addCodableObject:(id)arg1 toCollection:(id)arg2 ;
+(BOOL)isConcreteEntity;
+(long long)preferredEntityType;
+(id)predicateMatchingPreferredEntityTypeIfRequiredWithPredicate:(id)arg1 ;
+(Class)baseDataEntityClass;
+(BOOL)requiresSampleTypePredicate;
+(id)anyInDatabase:(id)arg1 predicate:(id)arg2 error:(id*)arg3 ;
+(id)orderingTermForSortDescriptor:(id)arg1 ;
+(id)sourceIDsForObjectsOfType:(long long)arg1 profile:(id)arg2 predicate:(id)arg3 error:(id*)arg4 ;
+(long long)countOfObjectsWithPredicate:(id)arg1 healthDatabase:(id)arg2 error:(id*)arg3 ;
+(Class)_deletedEntityClass;
+(Class)_entityClassForDeletion;
+(BOOL)enumerateAssociatedObjectsForIdentifier:(long long)arg1 inDatabase:(id)arg2 error:(id*)arg3 associatedObjectHandler:(/*^block*/id)arg4 ;
+(/*^block*/id)objectInsertionFilterForProfile:(id)arg1 ;
+(id)columnNamesForTimeOffset;
+(id)objectWithUUID:(id)arg1 encodingOptions:(id)arg2 profile:(id)arg3 error:(id*)arg4 ;
+(id)_insertDataObject:(id)arg1 withProvenanceID:(id)arg2 inDatabase:(id)arg3 error:(id*)arg4 ;
+(long long)compareForReplacmentWithObject:(id)arg1 existingObject:(id)arg2 ;
+(BOOL)_shouldReplaceExistingObject:(id)arg1 withObject:(id)arg2 dataEntityClass:(Class)arg3 ;
+(long long)shouldInsertObject:(id)arg1 sourceID:(id)arg2 profile:(id)arg3 database:(id)arg4 objectToReplace:(id*)arg5 objectID:(id*)arg6 error:(id*)arg7 ;
+(id)_primitiveInsertDataObject:(id)arg1 insertionContext:(id)arg2 entityClass:(Class)arg3 provenanceEntityID:(long long)arg4 profile:(id)arg5 database:(id)arg6 error:(id*)arg7 ;
+(BOOL)replaceExistingObject:(id)arg1 existingObjectID:(id)arg2 replacementObject:(id)arg3 replacementObjectID:(id)arg4 profile:(id)arg5 database:(id)arg6 error:(id*)arg7 ;
+(BOOL)supportsObjectMerging;
+(id)mergeDataObject:(id)arg1 provenance:(id)arg2 profile:(id)arg3 database:(id)arg4 error:(id*)arg5 insertHandler:(/*^block*/id)arg6 ;
+(BOOL)_validateObjectsToInsert:(id)arg1 insertionContext:(id)arg2 profile:(id)arg3 error:(id*)arg4 ;
+(BOOL)_insertDataObject:(id)arg1 insertionContext:(id)arg2 provenanceEntityID:(long long)arg3 profile:(id)arg4 database:(id)arg5 insertedEntityID:(id*)arg6 error:(id*)arg7 ;
+(BOOL)journalObjects:(id)arg1 insertionContext:(id)arg2 profile:(id)arg3 error:(id*)arg4 ;
+(HDDeleteObjectDataDefn)_deleteInfoForObjectWithUUID:(id)arg1 database:(id)arg2 error:(id*)arg3 ;
+(id)_sourceBundleIdentifierForSourceEntities:(id)arg1 profile:(id)arg2 error:(id*)arg3 ;
+(id)_objectWithPredicate:(id)arg1 encodingOptions:(id)arg2 profile:(id)arg3 error:(id*)arg4 ;
+(BOOL)participatesInInsertion;
+(id)_insertBaseDataObject:(id)arg1 withProvenance:(id)arg2 inDatabase:(id)arg3 error:(id*)arg4 ;
+(BOOL)_removeObjectWithPersistentID:(long long)arg1 database:(id)arg2 error:(id*)arg3 ;
+(BOOL)isBackedByTable;
+(void)insertDataObjects:(id)arg1 insertionContext:(id)arg2 profile:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
+(void)deleteDataObjects:(id)arg1 restrictedSourceEntities:(id)arg2 failIfNotFound:(BOOL)arg3 profile:(id)arg4 recursiveDeleteAuthorizationBlock:(/*^block*/id)arg5 completionHandler:(/*^block*/id)arg6 ;
+(id)dataEntityForObject:(id)arg1 profile:(id)arg2 error:(id*)arg3 ;
+(id)sourceIDForObjectID:(id)arg1 type:(long long)arg2 profile:(id)arg3 errorOut:(id*)arg4 ;
+(id)predicateForObjectsFromLocalSourceWithBundleIdentifier:(id)arg1 profile:(id)arg2 error:(id*)arg3 ;
+(id)objectWithID:(id)arg1 encodingOptions:(id)arg2 profile:(id)arg3 error:(id*)arg4 ;
+(BOOL)generateSyncObjectsForSession:(id)arg1 predicate:(id)arg2 syncAnchorRange:(HDSyncAnchorRange)arg3 maxEncodedBytesPerMessage:(long long)arg4 profile:(id)arg5 messageHandler:(id)arg6 error:(id*)arg7 ;
+(BOOL)acceptsObject:(id)arg1 ;
+(id)deleteStatementsForRelatedEntitiesInDatabase:(id)arg1 ;
@end

