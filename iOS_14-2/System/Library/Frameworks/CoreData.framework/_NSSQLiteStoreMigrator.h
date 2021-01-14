/*
* Generated on Thursday, January 14, 2021 at 2:21:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/


@class NSSQLCore, NSSQLModel, NSSQLiteAdapter, NSMappingModel, NSSQLiteConnection, NSArray, NSMutableDictionary, NSMutableArray, NSString;

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
	BOOL _hasDeferredLightweightMigration;
	NSString* _destinationConfigurationForCloudKitValidation;

}

@property (nonatomic,retain) NSString * destinationConfigurationForCloudKitValidation;              //@synthesize destinationConfigurationForCloudKitValidation=_destinationConfigurationForCloudKitValidation - In the implementation block
+(BOOL)_annotatesMigrationMetadata;
+(void)_setAnnotatesMigrationMetadata:(BOOL)arg1 ;
-(NSString *)destinationConfigurationForCloudKitValidation;
-(void)setDestinationConfigurationForCloudKitValidation:(NSString *)arg1 ;
-(void)dealloc;
@end

