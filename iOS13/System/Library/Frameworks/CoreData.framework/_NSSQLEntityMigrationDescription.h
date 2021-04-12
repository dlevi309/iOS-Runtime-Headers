/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/


#import <CoreData/CoreData-Structs.h>
@class NSEntityMapping, NSMutableDictionary, NSSQLEntity, NSMutableArray;

@interface _NSSQLEntityMigrationDescription : NSObject {

	NSEntityMapping* _entityMapping;
	NSMutableDictionary* _sqlValuesByColumnName;
	NSMutableDictionary* _sourceEntitiesByToOneWithNewEntityKey;
	NSSQLEntity* _dstEntity;
	NSSQLEntity* _srcEntity;
	int _migrationType;
	NSMutableArray* _addedManyToManys;
	NSMutableArray* _removedManyToManys;
	NSMutableArray* _transformedManyToManys;
	NSMutableArray* _processedTransforms;
	NSMutableArray* _pendingTransforms;
	BOOL _updateUsingCopy;

}

@property (nonatomic,readonly) NSSQLEntity * sourceEntity;                                 //@synthesize srcEntity=_srcEntity - In the implementation block
@property (nonatomic,readonly) NSSQLEntity * destinationEntity;                            //@synthesize dstEntity=_dstEntity - In the implementation block
@property (nonatomic,readonly) NSEntityMapping * entityMapping;                            //@synthesize entityMapping=_entityMapping - In the implementation block
@property (nonatomic,readonly) int migrationType;                                          //@synthesize migrationType=_migrationType - In the implementation block
@property (assign,nonatomic) BOOL migrationNeedsCopyDueToConstraintMigration;              //@synthesize updateUsingCopy=_updateUsingCopy - In the implementation block
-(void)dealloc;
-(id)description;
-(NSSQLEntity *)destinationEntity;
-(NSSQLEntity *)sourceEntity;
-(void)_populateSQLValuesByPropertyFromTransforms:(id)arg1 migrationContext:(NSSQLMigrationContext)arg2 ;
-(void)_populateSQLValuesForVirtualToOnesWithMigrationContext:(NSSQLMigrationContext)arg1 ;
-(NSEntityMapping *)entityMapping;
-(void)_populateSQLValuesForDestinationToOne:(id)arg1 fromSourceToOne:(id)arg2 ;
-(id)_unmappedRelationshipForFormerlyVirtualToOne:(id)arg1 migrationContext:(NSSQLMigrationContext)arg2 ;
-(void)_generateSQLValueMappingsWithMigrationContext:(NSSQLMigrationContext)arg1 ;
-(id)transformedManyToManys;
-(id)initWithEntityMapping:(id)arg1 sourceEntity:(id)arg2 destinationEntity:(id)arg3 ;
-(void)_changeToCopyMigrationType;
-(id)sourceEntitiesByToOneWithNewEntityKey;
-(id)sqlValueForColumnName:(id)arg1 migrationContext:(NSSQLMigrationContext)arg2 ;
-(void)populateForeignKeyUpdateDataWithMigrationContext:(NSSQLMigrationContext)arg1 ;
-(id)addedManyToManys;
-(id)removedManyToManys;
-(id)nextPropertyTransform;
-(id)newCloudKitMetadataUpdateStatements;
-(int)migrationType;
-(BOOL)migrationNeedsCopyDueToConstraintMigration;
-(void)setMigrationNeedsCopyDueToConstraintMigration:(BOOL)arg1 ;
@end

