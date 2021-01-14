/*
* Generated on Thursday, January 14, 2021 at 2:21:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/


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
	NSMutableSet* _renamedTableSet;
	NSMutableSet* _renamedColumnSet;
	NSMutableSet* _renamedMTMSet;
	NSMutableSet* _raisedColumnSet;
	NSMutableSet* _droppedEntitySet;
	NSMutableSet* _collapsedEntitySet;
	NSMutableSet* _columnsUpgradedToMandatory;
	NSMutableSet* _delayedDropColumnSet;

}

@property (nonatomic,readonly) NSSQLEntity * rootEntity;              //@synthesize rootEntity=_rootEntity - In the implementation block
-(NSSQLEntity *)rootEntity;
-(id)description;
-(void)dealloc;
@end

