/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/CoreData-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class NSMutableDictionary, NSSet, NSDictionary, NSArray;

@interface NSManagedObjectModel : NSObject <NSSecureCoding, NSCoding, NSCopying, NSFastEnumeration> {

	id _dataForOptimization;
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
+(id)_modelPathsFromBundles:(id)arg1 ;
+(id)modelByMergingModels:(id)arg1 ;
+(void)_deepCollectEntitiesInArray:(id)arg1 entity:(id)arg2 ;
+(id)modelByMergingModels:(id)arg1 forStoreMetadata:(id)arg2 ;
+(id)mergedModelFromBundles:(id)arg1 forStoreMetadata:(id)arg2 ;
+(id)versionsHashesForModelAtURL:(id)arg1 error:(id*)arg2 ;
+(BOOL)versionHashes:(id)arg1 compatibleWithStoreMetadata:(id)arg2 ;
+(id)_newModelFromOptimizedEncoding:(id)arg1 error:(id*)arg2 ;
+(long long)_debugOptimizedModelLayout;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_PF3*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithContentsOfURL:(id)arg1 ;
-(NSArray *)entities;
-(BOOL)isConfiguration:(id)arg1 compatibleWithStoreMetadata:(id)arg2 ;
-(NSSet *)versionIdentifiers;
-(BOOL)isEditable;
-(NSArray *)configurations;
-(id)entitiesForConfiguration:(id)arg1 ;
-(NSDictionary *)entityVersionHashesByName;
-(id)_entityForName:(id)arg1 ;
-(NSDictionary *)entitiesByName;
-(void)_setModelsReferenceIDOffset:(long long)arg1 ;
-(void)setEntities:(NSArray *)arg1 ;
-(void)_setIsEditable:(BOOL)arg1 ;
-(id)versionHash;
-(long long)_modelsReferenceIDOffset;
-(void)_throwIfNotEditable;
-(void)_createCachesAndOptimizeState;
-(void)_removeEntity:(id)arg1 ;
-(void)_addEntity:(id)arg1 ;
-(void)_flattenProperties;
-(BOOL)_isOptimizedForEncoding;
-(void)_stripForMigration;
-(void)_restoreValidation;
-(void)_finalizeIndexes;
-(id)_localizationPolicy;
-(BOOL)_hasEntityWithUniquenessConstraints;
-(NSDictionary *)fetchRequestTemplatesByName;
-(id)fetchRequestTemplateForName:(id)arg1 ;
-(void)_setLocalizationPolicy:(id)arg1 ;
-(void)_addEntities:(id)arg1 toConfiguration:(id)arg2 ;
-(void)setFetchRequestTemplate:(id)arg1 forName:(id)arg2 ;
-(void)_addVersionIdentifiers:(id)arg1 ;
-(id)_modelForVersionHashes:(id)arg1 ;
-(id)_initWithEntities:(id)arg1 ;
-(id)_initWithContentsOfURL:(id)arg1 options:(unsigned long long)arg2 ;
-(void)setEntities:(id)arg1 forConfiguration:(id)arg2 ;
-(void)setVersionIdentifiers:(NSSet *)arg1 ;
-(NSDictionary *)localizationDictionary;
-(void)setLocalizationDictionary:(NSDictionary *)arg1 ;
-(id)_entityVersionHashesByNameInStyle:(unsigned long long)arg1 ;
-(BOOL)_isConfiguration:(id)arg1 inStyle:(unsigned long long)arg2 compatibleWithStoreMetadata:(id)arg3 ;
-(id)fetchRequestFromTemplateWithName:(id)arg1 substitutionVariables:(id)arg2 ;
-(void)_setIsEditable:(BOOL)arg1 optimizationStyle:(unsigned long long)arg2 ;
-(id)_optimizedEncoding:(id*)arg1 ;
-(id)initWithContentsOfURL:(id)arg1 forStoreMetadata:(id)arg2 ;
-(id)initWithContentsOfOptimizedURL:(id)arg1 ;
-(id)_entityVersionHashesDigestFrom:(id)arg1 ;
-(BOOL)_hasPrecomputedKeyOrder;
-(void)_traverseTombstonesAndMark:(BOOL)arg1 ;
-(void)_markTombstones;
-(void)_removeEntities:(id)arg1 fromConfiguration:(id)arg2 ;
-(void)_removeEntityNamed:(id)arg1 ;
-(id)immutableCopy;
-(id)_entityVersionHashesDigest;
-(id)_precomputedKeysForEntity:(id)arg1 ;
-(void)_skipUserInfoTombstones:(BOOL)arg1 ;
-(BOOL)_isSkippingUserInfoTombstones;
-(void)_unmarkTombstones;
-(id)_configurationsByName;
-(id)_sortedEntitiesForConfiguration:(id)arg1 ;
-(id)_entitiesByVersionHash;
-(id)_versionIdentifiersAsArray;
@end

