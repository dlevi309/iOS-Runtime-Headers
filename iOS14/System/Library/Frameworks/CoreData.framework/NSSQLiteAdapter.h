/*
* Generated on Thursday, January 14, 2021 at 2:21:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/


#import <CoreData/CoreData-Structs.h>
@class NSSQLCore, NSSQLModel;

@interface NSSQLiteAdapter : NSObject {

	NSSQLCore* _sqlCore;
	NSSQLModel* _model;
	CFDictionaryRef _cachedDeleteTriggersByEntity;
	os_unfair_lock_s _lock;

}
+(id)generateStatementForCheckingUniqueProperties:(id)arg1 onObjects:(id)arg2 usingSQLCore:(id)arg3 ;
+(id)generateStatementForCheckingMulticolumnConstraint:(id)arg1 onObjects:(id)arg2 usingSQLCore:(id)arg3 ;
+(id)generateSubselectForColumn:(id)arg1 givenObjects:(id)arg2 ;
-(id)sqlCore;
-(id)generateSQLStatmentForSourcesAndOrderKeysForDestination:(id)arg1 inManyToMany:(id)arg2 ;
-(id)newDropIndexStatementsForEntity:(id)arg1 defaultIndicesOnly:(BOOL)arg2 ;
-(id)newUpdateStatementWithRow:(id)arg1 originalRow:(id)arg2 withMask:(CFBitVectorRef)arg3 ;
-(id)newDeleteStatementWithRow:(id)arg1 ;
-(id)newCreatePrimaryKeyTableStatement;
-(id)generateSQLStatmentForSourcesAndOrderKeysForDestination:(id)arg1 inToMany:(id)arg2 ;
-(id)newSelectStatementWithFetchRequest:(id)arg1 ignoreInheritance:(BOOL)arg2 ;
-(id)createSQLStatementsForRTreeTriggersForLocationAttribute:(id)arg1 withSQLEntity:(id)arg2 existingRtreeTables:(id)arg3 ;
-(void)_generateFragmentsForEntity:(id)arg1 inArray:(id)arg2 ;
-(id)generateRTreeIndexStatementsForIndex:(id)arg1 onEntity:(id)arg2 ;
-(id)newStatementWithEntity:(id)arg1 ;
-(id)newCopyAndInsertStatementForManyToMany:(id)arg1 toManyToMany:(id)arg2 intermediateTableName:(id)arg3 invertColumns:(BOOL)arg4 ;
-(id)createCleanupSQLForRelationship:(id)arg1 existing:(CFDictionaryRef)arg2 correlationTableTriggers:(CFDictionaryRef)arg3 batchHistory:(CFDictionaryRef)arg4 error:(id*)arg5 ;
-(id)_statementForFetchRequestContext:(id)arg1 ignoreInheritance:(BOOL)arg2 countOnly:(BOOL)arg3 nestingLevel:(unsigned)arg4 ;
-(id)generateBinaryIndexStatementsForIndex:(id)arg1 onEntity:(id)arg2 ;
-(id)newCorrelationMasterReorderStatementForRelationship:(id)arg1 ;
-(id)generateDeleteStatementsForRequest:(id)arg1 error:(id*)arg2 ;
-(id)generateBatchDeleteUpdateHistoryStatementEntity:(id)arg1 andRelationship:(id)arg2 useInverse:(BOOL)arg3 ;
-(id)newCreateIndexStatementForColumn:(id)arg1 ;
-(id)typeStringForColumn:(id)arg1 ;
-(id)newSelectStatementWithFetchRequestContext:(id)arg1 ignoreInheritance:(BOOL)arg2 ;
-(id)newRenameTableStatementFromManyToMany:(id)arg1 toManyToMany:(id)arg2 orToRandomSpot:(id)arg3 ;
-(id)newPrimaryKeyInitializeStatementForEntity:(id)arg1 withInitialMaxPK:(long long)arg2 ;
-(id)newDropTableStatementForTableNamed:(id)arg1 ;
-(unsigned char)sqlTypeForExpressionConstantValue:(id)arg1 ;
-(void)_useModel:(id)arg1 ;
-(id)generateDeleteHistoryTriggerForEntity:(id)arg1 error:(id*)arg2 ;
-(id)newConstrainedValuesUpdateStatementWithRow:(id)arg1 ;
-(id)newCreateTempTableStatementForEntity:(id)arg1 withAttributesToConstrain:(id)arg2 ;
-(id)newCorrelationInsertStatementForRelationship:(id)arg1 ;
-(id)newDropIndexStatementForColumnWithName:(id)arg1 inTableWithName:(id)arg2 ;
-(id)initWithSQLCore:(id)arg1 ;
-(id)newInsertStatementWithRow:(id)arg1 ;
-(BOOL)generateBatchDeleteUpdateHistoryTriggerForEntity:(id)arg1 andRelationship:(id)arg2 batchHistory:(CFDictionaryRef)arg3 error:(id*)arg4 ;
-(id)newDropIndexStatementForCorrelationTable:(id)arg1 ;
-(id)newDropIndexStatementsForEntity:(id)arg1 ;
-(id)newCreateIndexStatementForOrderedRelationship:(id)arg1 ;
-(id)newCreateTableStatementForManyToMany:(id)arg1 ;
-(id)newSimplePrimaryKeyUpdateStatementForEntity:(id)arg1 ;
-(id)newCreateIndexStatementsForEntity:(id)arg1 ;
-(id)newCorrelationDeleteStatementForRelationship:(id)arg1 ;
-(id)newCountStatementWithFetchRequestContext:(id)arg1 ;
-(id)newStatementWithoutEntity;
-(id)newCreateIndexStatementForColumnWithName:(id)arg1 inTableWithName:(id)arg2 ;
-(id)newCreateTriggersForEntity:(id)arg1 existingRtreeTables:(id)arg2 ;
-(void)_cacheTriggers:(id)arg1 forEntity:(id)arg2 ;
-(id)newDropTableStatementOrFailForTableNamed:(id)arg1 ;
-(id)_cachedTriggersForEntity:(id)arg1 ;
-(BOOL)generateTriggerForEntity:(id)arg1 alreadyCreated:(CFDictionaryRef)arg2 correlations:(CFDictionaryRef)arg3 batchHistory:(CFDictionaryRef)arg4 fragments:(id)arg5 error:(id*)arg6 ;
-(id)sqliteVersion;
-(id)generateBatchDeleteUpdateHistoryStatementEntity:(id)arg1 andRelationship:(id)arg2 ;
-(id)newComplexPrimaryKeyUpdateStatementForEntity:(id)arg1 ;
-(id)typeStringForSQLType:(unsigned char)arg1 ;
-(id)newRenameTableStatementFrom:(id)arg1 to:(id)arg2 ;
-(id)createSQLStatementsForTriggerAttribute:(id)arg1 withSQLEntity:(id)arg2 ;
-(id)_generateExternalDataRefStatementsForEntities:(id)arg1 inRequestContext:(id)arg2 ;
-(id)newCreateIndexStatementForColumns:(id)arg1 name:(id)arg2 ;
-(id)newCreateIndexStatementsForEntity:(id)arg1 defaultIndicesOnly:(BOOL)arg2 ;
-(BOOL)generateCorrelationTableTriggerStatementsForRelationship:(id)arg1 existing:(CFDictionaryRef)arg2 correlationTableTriggers:(CFDictionaryRef)arg3 error:(id*)arg4 ;
-(id)generateDropRTreeIndexStatementsForIndex:(id)arg1 onEntity:(id)arg2 ;
-(id)newGeneratorWithStatement:(id)arg1 ;
-(id)newStatementWithSQLString:(id)arg1 ;
-(id)generateTriggerStatementsForEntity:(id)arg1 usingRelationshipCleanupSQL:(id)arg2 error:(id*)arg3 ;
-(id)newCorrelationMasterReorderStatementPart2ForRelationship:(id)arg1 ;
-(id)generateDropBinaryIndexStatementsForIndex:(id)arg1 onEntity:(id)arg2 ;
-(id)newCreateTableStatementForEntity:(id)arg1 ;
-(id)newCreateIndexStatementForCorrelationTable:(id)arg1 ;
-(void)dealloc;
-(id)newCorrelationReorderStatementForRelationship:(id)arg1 ;
-(id)newDropIndexStatementForColumn:(id)arg1 ;
@end
