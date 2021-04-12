/*
* Generated on Thursday, January 14, 2021 at 2:21:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/CoreData-Structs.h>
#import <libobjc.A.dylib/NSFetchRequestResult.h>

@class NSManagedObjectContext, NSManagedObjectID, NSString, NSEntityDescription;

@interface NSManagedObject : NSObject <NSFetchRequestResult> {

	int _cd_rc;
	unsigned _cd_lockingInfo;
	unsigned _cd_stateFlags;
	unsigned _cd_extraFlags;
	id _cd_rawData;
	NSManagedObjectContext* _cd_managedObjectContext;
	NSManagedObjectID* _cd_objectID;
	SCD_Struct_NS13* _cd_extras;
	id _cd_queueReference;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSManagedObjectContext * managedObjectContext; 
@property (nonatomic,readonly) NSEntityDescription * entity; 
@property (nonatomic,readonly) NSManagedObjectID * objectID; 
@property (getter=isInserted,nonatomic,readonly) BOOL inserted; 
@property (getter=isUpdated,nonatomic,readonly) BOOL updated; 
@property (getter=isDeleted,nonatomic,readonly) BOOL deleted; 
@property (nonatomic,readonly) BOOL hasChanges; 
@property (nonatomic,readonly) BOOL hasPersistentChangedValues; 
@property (getter=isFault,nonatomic,readonly) BOOL fault; 
@property (nonatomic,readonly) unsigned long long faultingState; 
+(id)alloc;
+(void)initialize;
+(id)entityName;
+(void)release;
+(id)entity;
+(id)fetchRequest;
+(BOOL)resolveInstanceMethod:(SEL)arg1 ;
+(id)retain;
+(void)_release_1;
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)_retain_1;
+(void)_entityDeallocated;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(id)allocWithEntity:(id)arg1 ;
+(BOOL)_isGeneratedClass;
+(id)alloc_10_4;
+(id)_PFPlaceHolderSingleton;
+(id)allocWithZone_10_4:(NSZone*)arg1 ;
+(char*)_transientPropertiesChangesMask__;
+(id)_PFPlaceHolderSingleton_core;
+(BOOL)contextShouldIgnoreUnmodeledPropertyChanges;
+(BOOL)_useFastValidationMethod;
+(BOOL)_isGeneratedClass_1;
+(SCD_Struct_NS14*)_PFMOClassFactoryData;
+(unsigned)allocBatch:(id*)arg1 withEntity:(id)arg2 count:(unsigned)arg3 ;
+(void)_initializeAccessorStubs;
+(void)_initializePrimitiveAccessorStubs;
+(id)batchAllocateWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2 count:(unsigned)arg3 ;
+(BOOL)_hasOverriddenAwake;
+(BOOL)resolveClassMethod:(SEL)arg1 ;
+(Class)classForEntity:(id)arg1 ;
-(BOOL)validateRequiredAttributesForObject:(id)arg1 error:(id*)arg2 ;
-(id)_removeObsoleteKeysFromDictionary:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setValuesWithObject:(id)arg1 ;
-(id)_obsoleteAttributes;
-(void)awakeFromFetch;
-(void)didSave;
-(void)awakeFromInsert;
-(void)setObservationInfo:(void*)arg1 ;
-(NSManagedObjectContext *)managedObjectContext;
-(void)willTurnIntoFault;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(void)willSave;
-(void)prepareForDeletion;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(void)willChangeValueForKey:(id)arg1 ;
-(id)dictionaryWithValuesForKeys:(id)arg1 ;
-(oneway void)release;
-(NSEntityDescription *)entity;
-(void)willChangeValueForKey:(id)arg1 withSetMutation:(unsigned long long)arg2 usingObjects:(id)arg3 ;
-(void)didChangeValueForKey:(id)arg1 withSetMutation:(unsigned long long)arg2 usingObjects:(id)arg3 ;
-(id)init;
-(BOOL)_tryRetain;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(id)initWithContext:(id)arg1 ;
-(void)willChange:(unsigned long long)arg1 valuesAtIndexes:(id)arg2 forKey:(id)arg3 ;
-(id)retain;
-(void)didChangeValueForKey:(id)arg1 ;
-(BOOL)_isDeallocating;
-(id)valueForKey:(id)arg1 ;
-(id)valueForUndefinedKey:(id)arg1 ;
-(void)didChange:(unsigned long long)arg1 valuesAtIndexes:(id)arg2 forKey:(id)arg3 ;
-(void)setValuesForKeysWithDictionary:(id)arg1 ;
-(id)mutableOrderedSetValueForKey:(id)arg1 ;
-(NSManagedObjectID *)objectID;
-(id)mutableArrayValueForKey:(id)arg1 ;
-(id)_implicitObservationInfo;
-(BOOL)validateValue:(id*)arg1 forKey:(id)arg2 error:(id*)arg3 ;
-(void*)observationInfo;
-(BOOL)isDeleted;
-(NSString *)description;
-(BOOL)validateForUpdate:(id*)arg1 ;
-(id)mutableSetValueForKey:(id)arg1 ;
-(BOOL)isUpdated;
-(BOOL)implementsSelector:(SEL)arg1 ;
-(unsigned long long)retainCount;
-(BOOL)hasChanges;
-(id)primitiveValueForKey:(id)arg1 ;
-(void)_setVersionReference__:(unsigned)arg1 ;
-(void)willAccessValueForKey:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)isInserted;
-(BOOL)validateForInsert:(id*)arg1 ;
-(BOOL)isFault;
-(void)willFireFault;
-(void)didFireFault;
-(void)_setGenericValue:(id)arg1 forKey:(id)arg2 withIndex:(long long)arg3 flags:(long long)arg4 ;
-(id)_genericValueForKey:(id)arg1 withIndex:(long long)arg2 flags:(long long)arg3 ;
-(void)didAccessValueForKey:(id)arg1 ;
-(id)_genericMutableSetValueForKey:(id)arg1 withIndex:(long long)arg2 flags:(long long)arg3 ;
-(id)changedValues;
-(id)_genericMutableOrderedSetValueForKey:(id)arg1 withIndex:(long long)arg2 flags:(long long)arg3 ;
-(BOOL)hasFaultForRelationshipNamed:(id)arg1 ;
-(BOOL)validateForDelete:(id*)arg1 ;
-(void)awakeFromSnapshotEvents:(unsigned long long)arg1 ;
-(void)setPrimitiveValue:(id)arg1 forKey:(id)arg2 ;
-(id)dictionaryWithPropertyValues;
-(unsigned long long)faultingState;
-(id)committedValuesForKeys:(id)arg1 ;
-(id)changedValuesForCurrentEvent;
-(BOOL)hasPersistentChangedValues;
-(id)objectIDsForRelationshipNamed:(id)arg1 ;
-(id)bindableObjectPublisher;
-(void)setBindableObjectPublisher:(id)arg1 ;
-(void)willRefresh:(BOOL)arg1 ;
-(void)didRefresh:(BOOL)arg1 ;
-(unsigned)_versionReference__;
-(id)_initWithEntity:(id)arg1 withID:(id)arg2 withHandler:(id)arg3 withContext:(id)arg4 ;
-(void)_didChangeValue:(id)arg1 forRelationship:(id)arg2 named:(id)arg3 withInverse:(id)arg4 ;
-(id)_orderKeysForRelationshipWithName__:(id)arg1 ;
-(BOOL)_updateLocationsOfObjectsToLocationByOrderKey:(id)arg1 inRelationshipWithName:(id)arg2 error:(id*)arg3 ;
-(BOOL)_defaultValidation:(id*)arg1 error:(id*)arg2 ;
-(void)didTurnIntoFault;
-(void)setNilValueForKey:(id)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(/*function pointer*/void*)methodForSelector:(SEL)arg1 ;
@end

