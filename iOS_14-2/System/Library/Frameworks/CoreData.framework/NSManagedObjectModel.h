/*
* Generated on Thursday, January 14, 2021 at 2:21:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/CoreData-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class _PFVMData, NSMutableDictionary, NSSet, NSDictionary, NSArray;

@interface NSManagedObjectModel : NSObject <NSSecureCoding, NSCoding, NSCopying, NSFastEnumeration> {

	_PFVMData* _dataForOptimization;
	id* _optimizationHints;
	id* _additionalPrivateIvars;
	NSMutableDictionary* _entities;
	NSMutableDictionary* _configurations;
	NSMutableDictionary* _fetchRequestTemplates;
	NSSet* _versionIdentifiers;
	struct {
		unsigned _isInUse : 1;
		unsigned _isImmutable : 1;
		unsigned _isOptimizedForEncoding : 1;
		unsigned _hasEntityWithConstraints : 1;
		unsigned _skipUserInfoTombstones : 1;
		unsigned _reservedEntityDescription : 27;
	}  _managedObjectModelFlags;

}

@property (assign,setter=_setModelsReferenceIDOffset:,nonatomic) long long _modelsReferenceIDOffset; 
@property (copy,readonly) NSDictionary * entitiesByName; 
@property (retain) NSArray * entities; 
@property (readonly) NSArray * configurations; 
@property (retain) NSDictionary * localizationDictionary; 
@property (copy,readonly) NSDictionary * fetchRequestTemplatesByName; 
@property (copy) NSSet * versionIdentifiers; 
@property (copy,readonly) NSDictionary * entityVersionHashesByName; 
+(BOOL)supportsSecureCoding;
+(id)mergedModelFromBundles:(id)arg1 ;
+(id)modelByMergingModels:(id)arg1 ;
+(id)_modelPathsFromBundles:(id)arg1 ;
+(void)_deepCollectEntitiesInArray:(id)arg1 entity:(id)arg2 ;
+(id)modelByMergingModels:(id)arg1 forStoreMetadata:(id)arg2 ;
+(id)mergedModelFromBundles:(id)arg1 forStoreMetadata:(id)arg2 ;
+(id)versionsHashesForModelAtURL:(id)arg1 error:(id*)arg2 ;
+(BOOL)versionHashes:(id)arg1 compatibleWithStoreMetadata:(id)arg2 ;
+(id)_newModelFromOptimizedEncoding:(id)arg1 error:(id*)arg2 ;
+(long long)_debugOptimizedModelLayout;
-(BOOL)isEditable;
-(id)versionHash;
-(void)_createCachesAndOptimizeState;
-(id)immutableCopy;
-(NSArray *)entities;
-(id)initWithContentsOfURL:(id)arg1 ;
-(id)_entityVersionHashesDigest;
-(BOOL)_hasPrecomputedKeyOrder;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_PF4*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)init;
-(id)initWithContentsOfOptimizedURL:(id)arg1 ;
-(id)_initWithEntities:(id)arg1 ;
-(BOOL)isConfiguration:(id)arg1 compatibleWithStoreMetadata:(id)arg2 ;
-(BOOL)_hasEntityWithDerivedAttribute;
-(void)encodeWithCoder:(id)arg1 ;
-(NSDictionary *)fetchRequestTemplatesByName;
-(void)setVersionIdentifiers:(NSSet *)arg1 ;
-(NSDictionary *)entitiesByName;
-(void)_stripForMigration;
-(void)_setIsEditable:(BOOL)arg1 ;
-(long long)_modelsReferenceIDOffset;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)_removeEntities:(id)arg1 fromConfiguration:(id)arg2 ;
-(id)_entityVersionHashesDigestFrom:(id)arg1 ;
-(id)_configurationsByName;
-(id)initWithContentsOfURL:(id)arg1 forStoreMetadata:(id)arg2 ;
-(void)_setLocalizationPolicy:(id)arg1 ;
-(id)_versionIdentifiersAsArray;
-(id)description;
-(id)fetchRequestFromTemplateWithName:(id)arg1 substitutionVariables:(id)arg2 ;
-(void)_addVersionIdentifiers:(id)arg1 ;
-(BOOL)_isSkippingUserInfoTombstones;
-(void)setLocalizationDictionary:(NSDictionary *)arg1 ;
-(id)_optimizedEncoding:(id*)arg1 ;
-(void)_traverseTombstonesAndMark:(BOOL)arg1 ;
-(id)_entityVersionHashesByNameInStyle:(unsigned long long)arg1 ;
-(BOOL)_isOptimizedForEncoding;
-(void)_unmarkTombstones;
-(id)_localizationPolicy;
-(id)_entityForName:(id)arg1 ;
-(id)_initWithContentsOfURL:(id)arg1 options:(unsigned long long)arg2 ;
-(void)_flattenProperties;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)fetchRequestTemplateForName:(id)arg1 ;
-(void)_finalizeIndexes;
-(void)_removeEntity:(id)arg1 ;
-(void)_addEntities:(id)arg1 toConfiguration:(id)arg2 ;
-(BOOL)_hasEntityWithUniquenessConstraints;
-(void)_markTombstones;
-(void)setEntities:(NSArray *)arg1 ;
-(void)_setModelsReferenceIDOffset:(long long)arg1 ;
-(NSArray *)configurations;
-(void)setFetchRequestTemplate:(id)arg1 forName:(id)arg2 ;
-(id)_sortedEntitiesForConfiguration:(id)arg1 ;
-(void)_setIsEditable:(BOOL)arg1 optimizationStyle:(unsigned long long)arg2 ;
-(void)_skipUserInfoTombstones:(BOOL)arg1 ;
-(void)_throwIfNotEditable;
-(NSDictionary *)localizationDictionary;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)_restoreValidation;
-(id)_modelForVersionHashes:(id)arg1 ;
-(BOOL)_isConfiguration:(id)arg1 inStyle:(unsigned long long)arg2 compatibleWithStoreMetadata:(id)arg3 ;
-(void)setEntities:(id)arg1 forConfiguration:(id)arg2 ;
-(id)_precomputedKeysForEntity:(id)arg1 ;
-(id)_entitiesByVersionHash;
-(NSSet *)versionIdentifiers;
-(NSDictionary *)entityVersionHashesByName;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(id)entitiesForConfiguration:(id)arg1 ;
-(void)_addEntity:(id)arg1 ;
-(void)_removeEntityNamed:(id)arg1 ;
@end

