/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/


#import <CoreData/CoreData-Structs.h>
@class NSSQLCore, NSSQLModel, NSSQLiteAdapter, NSMappingModel, NSSQLiteConnection, NSArray, NSMutableDictionary, NSMutableArray;

@interface _NSSQLiteStoreMigrator : NSObject {

	NSSQLCore* _store;
	NSSQLModel* _dstModel;
	NSSQLModel* _srcModel;
	NSSQLiteAdapter* _adapter;
	NSMappingModel* _mappingModel;
	NSSQLiteConnection* _connection;
	NSArray* _tableGenerationSQL;
	NSArray* _existingTableNames;
	NSMutableDictionary* _reindexedEntities;
	NSMutableDictionary* _reindexedPropertiesByEntity;
	NSMutableDictionary* _sourceToDestinationEntityMap;
	NSMutableDictionary* _addedEntityMigrations;
	NSMutableDictionary* _removedEntityMigrations;
	NSMutableDictionary* _transformedEntityMigrations;
	NSMutableDictionary* _copiedEntityMigrations;
	NSMutableDictionary* _tableMigrationDescriptionsByEntity;
	BOOL _hasPKTableChanges;
	NSMutableArray* _pkTableUpdateStatements;
	NSMutableDictionary* _attributeExtensionsToUpdate;
	NSMutableArray* _indexesToCreate;
	NSMutableArray* _indexesToDrop;
	NSMutableArray* _defaultValueStatements;
	NSMutableArray* _derivationsToDrop;
	NSMutableArray* _derivationsToRun;
	NSMutableDictionary* _historyMigrationPropertyDataForEntityCache;
	NSMutableArray* _cloudKitUpdateStatements;
	BOOL _hasCloudKitTables;

}

@property (nonatomic,readonly) NSSQLiteAdapter * adapter;                              //@synthesize adapter=_adapter - In the implementation block
@property (nonatomic,readonly) NSSQLModel * dstModel;                                  //@synthesize dstModel=_dstModel - In the implementation block
@property (nonatomic,readonly) NSSQLModel * srcModel;                                  //@synthesize srcModel=_srcModel - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * historyMigrationCache;              //@synthesize historyMigrationPropertyDataForEntityCache=_historyMigrationPropertyDataForEntityCache - In the implementation block
@property (assign,nonatomic) BOOL hasCloudKitTables;                                   //@synthesize hasCloudKitTables=_hasCloudKitTables - In the implementation block
@property (nonatomic,readonly) NSSQLiteConnection * connection; 
+(BOOL)_annotatesMigrationMetadata;
+(void)_setAnnotatesMigrationMetadata:(BOOL)arg1 ;
-(void)dealloc;
-(NSSQLiteConnection *)connection;
-(void)_disconnect;
-(NSSQLiteAdapter *)adapter;
-(NSMutableDictionary *)historyMigrationCache;
-(NSSQLModel *)srcModel;
-(NSSQLModel *)dstModel;
-(id)initWithStore:(id)arg1 destinationModel:(id)arg2 mappingModel:(id)arg3 ;
-(BOOL)performMigration:(id*)arg1 ;
-(id)entityMigrationDescriptionForEntity:(id)arg1 ;
-(BOOL)hasCloudKitTables;
-(id)tableMigrationDescriptionForEntity:(id)arg1 ;
-(id)_originalRootsForAddedEntity:(id)arg1 ;
-(id)createEntityMigrationStatements;
-(id)createStatementsForUpdatingEntityKeys;
-(void)generatePKTableUpdateStatements;
-(BOOL)deleteStatementsForHistory;
-(id)updateStatementsForHistoryChanges;
-(BOOL)validateMigratedDataFromEntityMapping:(id)arg1 error:(id*)arg2 ;
-(long long)_countNullsInColumn:(id)arg1 forEntity:(id)arg2 ;
-(long long)_countUnreferencedPrimaryKeysForEntity:(id)arg1 inForeignKeyColumnName:(id)arg2 fromTable:(id)arg3 ;
-(BOOL)validateMandatoryAttribute:(id)arg1 onEntity:(id)arg2 error:(id*)arg3 ;
-(BOOL)validateMandatoryRelationship:(id)arg1 onEntity:(id)arg2 error:(id*)arg3 ;
-(void)_populateTableMigrationDescriptions;
-(void)_determinePropertyDependenciesOnIDForEntity:(id)arg1 ;
-(void)_determineAttributeTriggerToMigrateForAttributeNamed:(id)arg1 withSourceEntity:(id)arg2 andDestinationEntity:(id)arg3 ;
-(void)_determineRTreeExtensionsToMigrateForAttributeNamed:(id)arg1 withSourceEntity:(id)arg2 andDestinationEntity:(id)arg3 ;
-(void)_determineIndexesToMigrateForSourceEntity:(id)arg1 andDestinationEntity:(id)arg2 ;
-(void)_determineUniquenessConstraintsToMigrateForSourceEntity:(id)arg1 andDestinationEntity:(id)arg2 ;
-(void)_determineDerivedAttributesToMigrateForSourceEntity:(id)arg1 andDestinationEntity:(id)arg2 ;
-(/*^block*/id)_indexMigrationBlockForSourceEntity:(id)arg1 andDestinationEntity:(id)arg2 ;
-(BOOL)_sourceTableIsClean:(id)arg1 ;
-(void)_determineReindexedEntitiesAndAffectedProperties;
-(void)_populateEntityMigrationDescriptionsAndEntityMap;
-(void)_addEntityMigration:(id)arg1 toTableMigrationForRootEntity:(id)arg2 tableMigrationType:(int)arg3 ;
-(BOOL)shiftTombstones;
-(BOOL)clearTombstoneColumnsForRange:(NSRange)arg1 ;
-(void)_addReindexedProperty:(id)arg1 toSetForEntity:(id)arg2 ;
-(void)setHistoryMigrationCache:(NSMutableDictionary *)arg1 ;
-(void)setHasCloudKitTables:(BOOL)arg1 ;
@end

