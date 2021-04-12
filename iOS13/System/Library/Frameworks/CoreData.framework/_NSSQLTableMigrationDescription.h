/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/


#import <CoreData/CoreData-Structs.h>
@class NSSQLEntity, NSMutableArray, NSMutableDictionary, NSNumber, NSMutableSet;

@interface _NSSQLTableMigrationDescription : NSObject {

	NSSQLEntity* _rootEntity;
	NSSQLEntity* _sourceRootEntity;
	int _migrationType;
	NSMutableArray* _addedEntityMigrations;
	NSMutableArray* _removedEntityMigrations;
	NSMutableArray* _copiedEntityMigrations;
	NSMutableArray* _transformedEntityMigrations;
	NSMutableDictionary* _migrationByEntity;
	NSMutableArray* _addedManyToManys;
	NSMutableArray* _removedManyToManys;
	NSMutableArray* _transformedManyToManys;
	NSMutableDictionary* _tempTableNames;
	NSNumber* _hasComplexSchemaTransformations;
	NSMutableSet* _addedColumnSet;
	NSMutableSet* _renamedColumnSet;
	NSMutableSet* _renamedMTMSet;
	NSMutableSet* _raisedColumnSet;
	NSMutableSet* _droppedEntitySet;
	NSMutableSet* _columnsUpgradedToMandatory;

}

@property (nonatomic,readonly) int migrationType;                     //@synthesize migrationType=_migrationType - In the implementation block
@property (nonatomic,readonly) NSSQLEntity * rootEntity;              //@synthesize rootEntity=_rootEntity - In the implementation block
-(void)dealloc;
-(id)description;
-(NSSQLEntity *)rootEntity;
-(id)newCloudKitMetadataUpdateStatements;
-(int)migrationType;
-(id)_addedManyToManys;
-(id)_removedManyToManys;
-(id)_transformedManyToManys;
-(id)_sourceRootEntity;
-(BOOL)_doAttributesHaveChangesRequiringCopyForMigration:(id)arg1 withContext:(NSSQLMigrationContext)arg2 ;
-(BOOL)_doRelationshipsHaveChangesRequiringCopyForMigration:(id)arg1 inContext:(NSSQLMigrationContext)arg2 ;
-(void)_determineSchemaTransformationComplexityInMigrationContext:(NSSQLMigrationContext)arg1 ;
-(BOOL)_hasComplexSchemaTransformationsInMigrationContext:(NSSQLMigrationContext)arg1 ;
-(id)_tempNameForTableName:(id)arg1 ;
-(id)createDeleteStatementForEntityMigrations:(id)arg1 migrationContext:(NSSQLMigrationContext)arg2 ;
-(id)createInsertStatementForEntityMigration:(id)arg1 migrationContext:(NSSQLMigrationContext)arg2 ;
-(id)createFEKUpdateStatementsForEntityMigration:(id)arg1 migrationContext:(NSSQLMigrationContext)arg2 ;
-(id)createUpdateStatementForEntityMigration:(id)arg1 migrationContext:(NSSQLMigrationContext)arg2 ;
-(id)newCopyAndInsertStatementForToOne:(id)arg1 toManyToMany:(id)arg2 fromTableName:(id)arg3 invertColumns:(BOOL)arg4 migrationContext:(NSSQLMigrationContext)arg5 ;
-(id)createDefaultValuePopulationStatementsForAddedColumnsEntityMigration:(id)arg1 migrationContext:(NSSQLMigrationContext)arg2 ;
-(id)_retainedRemovedSubEntitiesOfEntity:(id)arg1 ;
-(id)initWithRootEntity:(id)arg1 migrationType:(int)arg2 ;
-(void)addEntityMigrationDescription:(id)arg1 ;
-(void)appendStatementsToRenameTables:(id)arg1 migrationContext:(NSSQLMigrationContext)arg2 ;
-(void)appendStatementsToCreateOrDropTables:(id)arg1 migrationContext:(NSSQLMigrationContext)arg2 ;
-(void)appendStatementsToPerformMigration:(id)arg1 migrationContext:(NSSQLMigrationContext)arg2 ;
-(void)appendStatementsToCompleteMigration:(id)arg1 migrationContext:(NSSQLMigrationContext)arg2 ;
-(void)appendDefaultValueStatementsToCompleteMigration:(id)arg1 migrationContext:(NSSQLMigrationContext)arg2 ;
@end

