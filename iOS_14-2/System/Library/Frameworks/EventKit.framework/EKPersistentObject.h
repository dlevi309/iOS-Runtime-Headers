/*
* Generated on Thursday, January 14, 2021 at 2:21:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
*/

#import <EventKit/EventKit-Structs.h>
#import <libobjc.A.dylib/EKProtocolObject.h>
#import <libobjc.A.dylib/EKFrozenMeltedPair.h>

@class NSDictionary, EKEventStore, EKObjectID, NSMutableSet, NSMutableDictionary, NSString;

@interface EKPersistentObject : NSObject <EKProtocolObject, EKFrozenMeltedPair> {

	opaque_pthread_mutex_t _lock;
	EKEventStore* _eventStore;
	EKObjectID* _objectID;
	unsigned _flags;
	NSMutableSet* _coCommitObjects;
	NSMutableDictionary* _loadedProperties;
	NSMutableDictionary* _updatedProperties;

}

@property (nonatomic,readonly) int entityType; 
@property (nonatomic,readonly) EKEventStore * eventStore; 
@property (nonatomic,readonly) BOOL canBeConvertedToFullObject; 
@property (nonatomic,readonly) BOOL isPartialObject; 
@property (nonatomic,readonly) NSDictionary * preFrozenRelationshipObjects; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL isFrozen; 
@property (nonatomic,readonly) NSString * uniqueIdentifier; 
@property (nonatomic,readonly) NSString * semanticIdentifier; 
+(id)relations;
+(id)_relationForKey:(id)arg1 ;
+(BOOL)_shouldRetainPropertyForKey:(id)arg1 ;
+(id)allObjectsWithChangesRelatedToObjects:(id)arg1 ;
+(id)defaultPropertiesToLoad;
+(Class)alternateUniverseClass;
+(Class)meltedClass;
+(id)propertiesUnavailableForPartialObjects;
+(Class)frozenClass;
-(BOOL)isNew;
-(int)entityType;
-(EKEventStore *)eventStore;
-(id)changeSet;
-(BOOL)refresh;
-(id)dump;
-(BOOL)pushDirtyProperties:(id*)arg1 ;
-(id)initWithObject:(id)arg1 ;
-(BOOL)setAttributes:(id)arg1 relations:(id)arg2 objectID:(id)arg3 eventStore:(id)arg4 error:(id*)arg5 ;
-(BOOL)_isPendingDelete;
-(BOOL)_isPendingUpdate;
-(id)_loadedPropertyKeys;
-(id)_loadedPropertyForKey:(id)arg1 ;
-(NSString *)semanticIdentifier;
-(void)_releaseLoadedProperties;
-(void)_setDefaultPropertiesLoaded:(BOOL)arg1 ;
-(void)_loadDefaultPropertiesIfNeeded;
-(void)_takeValues:(id)arg1 forKeys:(id)arg2 ;
-(void)_setProperty:(id)arg1 forKey:(id)arg2 forRelation:(id)arg3 isUpdatedProperty:(BOOL)arg4 ;
-(void)_createUpdatedPropertiesIfNeeded;
-(BOOL)_loadRelationForKey:(id)arg1 value:(id*)arg2 ;
-(void)_createLoadedPropertiesIfNeeded;
-(BOOL)_loadChildIdentifiersForKey:(id)arg1 values:(id*)arg2 ;
-(void)_setProperty:(id)arg1 forKey:(id)arg2 isUpdatedProperty:(BOOL)arg3 ;
-(void)_addObjectCore:(id)arg1 toValues:(id)arg2 relation:(id)arg3 ;
-(void)_removeObjectCore:(id)arg1 fromValues:(id)arg2 relation:(id)arg3 ;
-(id)_primitiveValueForKey:(id)arg1 loader:(/*^block*/id)arg2 ;
-(void)_primitiveSetValue:(id)arg1 forKey:(id)arg2 daemonSetter:(/*^block*/id)arg3 ;
-(id)_loadStringValueForKey:(id)arg1 ;
-(BOOL)isPropertyLoaded:(id)arg1 ;
-(BOOL)_areDefaultPropertiesLoaded;
-(void)_setProperty:(id)arg1 forKey:(id)arg2 isRelation:(BOOL)arg3 isUpdatedProperty:(BOOL)arg4 ;
-(void)_takeValuesForDefaultPropertyKeys:(id)arg1 values:(id)arg2 ;
-(id)coCommitObjects;
-(void)saved;
-(void)_setPendingInsert:(BOOL)arg1 ;
-(void)_setPendingUpdate:(BOOL)arg1 ;
-(void)_setPendingDelete:(BOOL)arg1 ;
-(void)primitiveAddRelatedObject:(id)arg1 forKey:(id)arg2 ;
-(void)primitiveRemoveRelatedObject:(id)arg1 forKey:(id)arg2 ;
-(void)takeValues:(id)arg1 forKeys:(id)arg2 ;
-(double)primitiveDoubleValueForKey:(id)arg1 ;
-(void)primitiveSetDoubleValue:(double)arg1 forKey:(id)arg2 ;
-(void)takeValuesForDefaultPropertyKeys:(id)arg1 values:(id)arg2 ;
-(BOOL)isDirty;
-(id)init;
-(id)_propertyForKey:(id)arg1 ;
-(BOOL)_isNew;
-(void)changed;
-(NSString *)uniqueIdentifier;
-(void)_setObjectID:(id)arg1 ;
-(BOOL)isPropertyDirty:(id)arg1 ;
-(id)objectID;
-(id)primitiveStringValueForKey:(id)arg1 ;
-(void)primitiveSetStringValue:(id)arg1 forKey:(id)arg2 ;
-(int)primitiveIntValueForKey:(id)arg1 ;
-(void)primitiveSetIntValue:(int)arg1 forKey:(id)arg2 ;
-(void)primitiveSetRelationValue:(id)arg1 forKey:(id)arg2 ;
-(id)primitiveRelationValueForKey:(id)arg1 ;
-(id)primitiveDataValueForKey:(id)arg1 ;
-(void)primitiveSetDataValue:(id)arg1 forKey:(id)arg2 ;
-(BOOL)primitiveBoolValueForKey:(id)arg1 ;
-(void)primitiveSetBoolValue:(BOOL)arg1 forKey:(id)arg2 ;
-(id)primitiveDateValueForKey:(id)arg1 ;
-(void)primitiveSetDateValue:(id)arg1 forKey:(id)arg2 ;
-(BOOL)isPropertyUnavailable:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ignoringProperties:(id)arg2 ;
-(BOOL)existsInStore;
-(id)frozenObject;
-(id)loadedPropertyForKey:(id)arg1 ;
-(BOOL)_isPendingInsert;
-(void)addCoCommitObject:(id)arg1 ;
-(id)existingMeltedObject;
-(BOOL)isCompletelyEqual:(id)arg1 ;
-(BOOL)isPartialObject;
-(BOOL)canBeConvertedToFullObject;
-(NSDictionary *)preFrozenRelationshipObjects;
-(id)meltedObjectInStore:(id)arg1 ;
-(void)reset;
-(id)primitiveNumberValueForKey:(id)arg1 ;
-(void)primitiveSetNumberValue:(id)arg1 forKey:(id)arg2 ;
-(id)initWithAlternateUniverseObject:(id)arg1 inEventStore:(id)arg2 withUpdatedChildObjects:(id)arg3 ;
-(void)_setEventStore:(id)arg1 ;
-(void)unloadPropertyForKey:(id)arg1 ;
-(Class)frozenClass;
-(void)rollback;
-(BOOL)isFrozen;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

