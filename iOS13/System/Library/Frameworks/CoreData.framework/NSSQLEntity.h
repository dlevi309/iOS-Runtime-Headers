/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreData/NSStoreMapping.h>

@class NSSQLModel, NSEntityDescription, NSString, NSMutableDictionary, NSArray, NSMutableArray, NSSQLPrimaryKey, NSSQLEntityKey, NSSQLOptLockKey, NSSQLStoreMappingGenerator, NSKnownKeysMappingStrategy, NSSQLEntity_DerivedAttributesExtension, NSDictionary;

@interface NSSQLEntity : NSStoreMapping {

	NSSQLModel* _model;
	NSEntityDescription* _entityDescription;
	NSString* _tableName;
	NSMutableDictionary* _properties;
	NSArray* _propertyAllCache;
	NSArray* _propertiesAllToManysCache;
	NSArray* _propertyManyToManyCache;
	NSMutableArray* _columnsToFetch;
	NSMutableArray* _ekColumns;
	NSMutableArray* _fkColumns;
	NSMutableArray* _fokColumns;
	NSMutableArray* _attrColumns;
	NSMutableArray* _virtualFKs;
	NSSQLPrimaryKey* _primaryKey;
	NSSQLEntityKey* _entityKey;
	NSSQLOptLockKey* _optLockKey;
	NSMutableArray* _subentities;
	NSSQLEntity* _superentity;
	NSSQLEntity* _rootEntity;
	NSSQLStoreMappingGenerator* _mappingGenerator;
	unsigned _entityID;
	unsigned _subentityMaxID;
	NSRange _toOneRange;
	NSMutableArray* _uniqueProperties;
	NSMutableArray* _multicolumnUniquenessConstraints;
	void* _fetch_entity_plan;
	NSMutableDictionary* _rtreeIndices;
	NSKnownKeysMappingStrategy* _propertyMapping;
	void* _odiousHashHackStorage;
	NSMutableArray* _derivedAttributes;
	NSSQLEntity_DerivedAttributesExtension* _derivedAttributeExtension;
	struct {
		unsigned _hasAttributesWithExternalDataReferences : 1;
		unsigned _hasAttributesWithFileBackedFutures : 1;
		unsigned _reserved : 30;
	}  _sqlentityFlags;

}

@property (nonatomic,readonly) NSDictionary * rtreeIndexes; 
-(void)dealloc;
-(id)description;
-(id)name;
-(void)finalize;
-(id)attributes;
-(id)model;
-(id)properties;
-(id)propertiesByName;
-(id)propertyMapping;
-(id)entityDescription;
-(id)tempTableName;
-(id)relationshipNamed:(id)arg1 ;
-(id)subentities;
-(id)manyToManyRelationships;
-(unsigned)entityID;
-(id)propertyNamed:(id)arg1 ;
-(id)tableName;
-(BOOL)hasInheritance;
-(unsigned)subentityMaxID;
-(id)superentity;
-(id)foreignKeyColumns;
-(id)foreignEntityKeyColumns;
-(id)foreignOrderKeyColumns;
-(id)attributeColumns;
-(id)primaryKey;
-(id)subentityKey;
-(id)optLockKey;
-(id)uniqueProperties;
-(id)externalName;
-(id)_propertySearchMapping;
-(void)_addSubentity:(id)arg1 ;
-(void)setSubentities:(id)arg1 ;
-(id)toManyRelationships;
-(void*)_odiousHashHack;
-(id)attributeNamed:(id)arg1 ;
-(id)rtreeIndexForIndexNamed:(id)arg1 ;
-(id)mappingGenerator;
-(void)copyValuesForReadOnlyFetch:(id)arg1 ;
-(BOOL)hasAttributesWithFileBackedFutures;
-(BOOL)hasAttributesWithExternalDataReferences;
-(BOOL)isRootEntity;
-(id)rootEntity;
-(NSDictionary *)rtreeIndexes;
-(id)derivedAttributesExtension;
-(void)_generateIndexes;
-(void)_doPostModelGenerationCleanup;
-(id)entitySpecificPropertiesPassing:(/*^block*/id)arg1 ;
-(id)subhierarchyColumnMatching:(id)arg1 ;
-(id)columnsToFetch;
-(BOOL)hasSubentities;
-(void)_addRootColumnToFetch:(id)arg1 ;
-(void)_addColumnToFetch:(id)arg1 ;
-(void)_addForeignOrderKeyForToOne:(id)arg1 entity:(id)arg2 ;
-(id)_addVirtualToOneForToMany:(id)arg1 withInheritedProperty:(id)arg2 ;
-(void)addDerivedAttribute:(id)arg1 ;
-(void)_generateProperties;
-(void)setSuperentity:(id)arg1 ;
-(unsigned)_generateIDWithSuperEntity:(id)arg1 nextID:(unsigned)arg2 ;
-(id)multicolumnUniquenessConstraints;
-(BOOL)_collectFKSlots:(id)arg1 error:(id*)arg2 ;
-(void)addDerivationKeypath:(id)arg1 forAttribute:(id)arg2 ;
-(BOOL)_isValidFunctionForDerivations:(id)arg1 ;
-(id)binaryIndexForIndexDescription:(id)arg1 ;
-(id)rtreeIndexForIndexDescription:(id)arg1 ;
-(id)initWithModel:(id)arg1 entityDescription:(id)arg2 ;
-(id)entitySpecificProperties;
-(id)entitySpecificRelationships;
-(id)entitySpecificAttributes;
-(unsigned)fetchIndexForKey:(id)arg1 ;
-(id)columnsToCreate;
-(id)virtualForeignKeyColumns;
-(void)setEntityID:(unsigned)arg1 ;
-(BOOL)isKindOfSQLEntity:(id)arg1 ;
-(id)_sqlPropertyWithRenamingIdentifier:(id)arg1 ;
-(void)_generateInverseRelationshipsAndMore;
-(void)_organizeConstraints;
-(void)_generateMulticolumnUniquenessConstraints;
-(void)addUniquedProperty:(id)arg1 ;
-(BOOL)_entityIsBroken:(id*)arg1 ;
-(id)derivedAttributes;
-(BOOL)_generateAttributeDerivations:(id*)arg1 ;
-(NSRange)_toOneRange;
-(BOOL)addPropertiesForReadOnlyFetch:(id)arg1 keys:(id)arg2 context:(id)arg3 ;
-(id)indexForIndexDescription:(id)arg1 ;
@end

