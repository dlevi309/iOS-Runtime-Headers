/*
* Generated on Thursday, January 14, 2021 at 2:21:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)primaryKey;
-(unsigned)entityID;
-(void)copyValuesForReadOnlyFetch:(id)arg1 ;
-(id)manyToManyRelationships;
-(id)tableName;
-(id)model;
-(id)properties;
-(void*)_odiousHashHack;
-(id)_addVirtualToOneForToMany:(id)arg1 withInheritedProperty:(id)arg2 ;
-(unsigned)fetchIndexForKey:(id)arg1 ;
-(void)setSubentities:(id)arg1 ;
-(void)_addColumnToFetch:(id)arg1 ;
-(id)optLockKey;
-(BOOL)hasAttributesWithExternalDataReferences;
-(id)columnsToCreate;
-(id)subentities;
-(void)setSuperentity:(id)arg1 ;
-(void)_generateIndexes;
-(BOOL)_entityIsBroken:(id*)arg1 ;
-(BOOL)hasSubentities;
-(id)multicolumnUniquenessConstraints;
-(void)_generateInverseRelationshipsAndMore;
-(id)_sqlPropertyWithRenamingIdentifier:(id)arg1 ;
-(id)entitySpecificAttributes;
-(id)foreignEntityKeyColumns;
-(void)setEntityID:(unsigned)arg1 ;
-(id)attributeNamed:(id)arg1 ;
-(id)propertyMapping;
-(BOOL)addPropertiesForReadOnlyFetch:(id)arg1 keys:(id)arg2 context:(id)arg3 ;
-(void)addUniquedProperty:(id)arg1 ;
-(id)rtreeIndexForIndexNamed:(id)arg1 ;
-(id)rtreeIndexForIndexDescription:(id)arg1 ;
-(id)superentity;
-(BOOL)isKindOfSQLEntity:(id)arg1 ;
-(id)name;
-(id)rootEntity;
-(id)attributes;
-(id)entityDescription;
-(void)_generateProperties;
-(unsigned)_generateIDWithSuperEntity:(id)arg1 nextID:(unsigned)arg2 ;
-(id)description;
-(id)indexForIndexDescription:(id)arg1 ;
-(NSDictionary *)rtreeIndexes;
-(id)subhierarchyColumnMatching:(id)arg1 ;
-(id)foreignOrderKeyColumns;
-(void)_doPostModelGenerationCleanup;
-(void)addDerivationKeypath:(id)arg1 forAttribute:(id)arg2 ;
-(void)_addForeignOrderKeyForToOne:(id)arg1 entity:(id)arg2 ;
-(id)toManyRelationships;
-(id)subentityKey;
-(id)_propertySearchMapping;
-(id)entitySpecificRelationships;
-(BOOL)_generateAttributeDerivations:(id*)arg1 ;
-(void)_addRootColumnToFetch:(id)arg1 ;
-(id)propertiesByName;
-(BOOL)hasInheritance;
-(void)addDerivedAttribute:(id)arg1 ;
-(id)columnsToFetch;
-(BOOL)_collectFKSlots:(id)arg1 error:(id*)arg2 ;
-(id)mappingGenerator;
-(id)attributeColumns;
-(void)_organizeConstraints;
-(void)_addSubentity:(id)arg1 ;
-(id)derivedAttributesExtension;
-(id)entitySpecificProperties;
-(id)relationshipNamed:(id)arg1 ;
-(NSRange)_toOneRange;
-(id)virtualForeignKeyColumns;
-(void)_generateMulticolumnUniquenessConstraints;
-(id)initWithModel:(id)arg1 entityDescription:(id)arg2 ;
-(id)derivedAttributes;
-(BOOL)hasAttributesWithFileBackedFutures;
-(id)externalName;
-(id)uniqueProperties;
-(BOOL)_isValidFunctionForDerivations:(id)arg1 ;
-(BOOL)isRootEntity;
-(id)binaryIndexForIndexDescription:(id)arg1 ;
-(id)entitySpecificPropertiesPassing:(/*^block*/id)arg1 ;
-(id)tempTableName;
-(void)dealloc;
-(unsigned)subentityMaxID;
-(id)foreignKeyColumns;
-(id)propertyNamed:(id)arg1 ;
@end

