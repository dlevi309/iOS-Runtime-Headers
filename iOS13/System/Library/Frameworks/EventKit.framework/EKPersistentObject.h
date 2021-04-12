/*
* Generated on Monday, March 1, 2021 at 2:32:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	NSMutableSet* _dirtyProperties;
	unsigned _flags;
	NSMutableDictionary* _loadedProperties;
	NSMutableDictionary* _committedProperties;

}

@property (nonatomic,retain) NSMutableDictionary * committedProperties;                  //@synthesize committedProperties=_committedProperties - In the implementation block
@property (nonatomic,readonly) int entityType; 
@property (nonatomic,readonly) EKEventStore * eventStore; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL canBeConvertedToFullObject; 
@property (nonatomic,readonly) BOOL isPartialObject; 
@property (nonatomic,readonly) NSDictionary * preFrozenRelationshipObjects; 
@property (nonatomic,readonly) BOOL isFrozen; 
@property (nonatomic,readonly) NSString * uniqueIdentifier; 
@property (nonatomic,readonly) NSString * semanticIdentifier; 
+(id)relations;
+(Class)frozenClass;
+(id)defaultPropertiesToLoad;
+(Class)meltedClass;
+(id)propertiesUnavailableForPartialObjects;
+(Class)alternateUniverseClass;
+(id)_relationForKey:(id)arg1 ;
+(BOOL)_shouldRetainPropertyForKey:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithObject:(id)arg1 ;
-(id)dump;
-(void)reset;
-(NSString *)uniqueIdentifier;
-(id)objectID;
-(void)rollback;
-(id)changeSet;
-(BOOL)refresh;
-(BOOL)isFrozen;
-(BOOL)isDirty;
-(void)_setObjectID:(id)arg1 ;
-(id)dirtyProperties;
-(BOOL)isPropertyDirty:(id)arg1 ;
-(void)_setProperty:(id)arg1 forKey:(id)arg2 ;
-(id)_propertyForKey:(id)arg1 ;
-(void)changed;
-(BOOL)isNew;
-(int)entityType;
-(EKEventStore *)eventStore;
-(id)committedValueForKey:(id)arg1 ;
-(BOOL)isPartialObject;
-(BOOL)canBeConvertedToFullObject;
-(Class)frozenClass;
-(id)meltedObjectInStore:(id)arg1 ;
-(id)primitiveRelationValueForKey:(id)arg1 ;
-(void)primitiveSetStringValue:(id)arg1 forKey:(id)arg2 ;
-(id)primitiveStringValueForKey:(id)arg1 ;
-(id)primitiveURLValueForKey:(id)arg1 ;
-(void)primitiveSetURLValue:(id)arg1 forKey:(id)arg2 ;
-(int)primitiveIntValueForKey:(id)arg1 ;
-(void)primitiveSetIntValue:(int)arg1 forKey:(id)arg2 ;
-(id)primitiveDateValueForKey:(id)arg1 ;
-(void)primitiveSetDateValue:(id)arg1 forKey:(id)arg2 ;
-(BOOL)primitiveBoolValueForKey:(id)arg1 ;
-(void)primitiveSetRelationValue:(id)arg1 forKey:(id)arg2 ;
-(id)primitiveDataValueForKey:(id)arg1 ;
-(void)primitiveSetDataValue:(id)arg1 forKey:(id)arg2 ;
-(void)primitiveSetBoolValue:(BOOL)arg1 forKey:(id)arg2 ;
-(BOOL)_isNew;
-(id)frozenObject;
-(BOOL)existsInStore;
-(BOOL)_isPendingInsert;
-(id)existingMeltedObject;
-(BOOL)isPropertyUnavailable:(id)arg1 ;
-(BOOL)isCompletelyEqual:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ignoringProperties:(id)arg2 ;
-(NSString *)semanticIdentifier;
-(NSDictionary *)preFrozenRelationshipObjects;
-(id)primitiveNumberValueForKey:(id)arg1 ;
-(void)primitiveSetNumberValue:(id)arg1 forKey:(id)arg2 ;
-(void)unloadPropertyForKey:(id)arg1 ;
-(void)_setEventStore:(id)arg1 ;
-(id)initWithAlternateUniverseObject:(id)arg1 inEventStore:(id)arg2 withUpdatedChildObjects:(id)arg3 ;
-(BOOL)pushDirtyProperties:(id*)arg1 ;
-(BOOL)setAttributes:(id)arg1 relations:(id)arg2 objectID:(id)arg3 eventStore:(id)arg4 error:(id*)arg5 ;
-(BOOL)_isPendingUpdate;
-(BOOL)_isPendingDelete;
-(id)_loadedPropertyKeys;
-(void)_releaseLoadedProperties;
-(void)_setDefaultPropertiesLoaded:(BOOL)arg1 ;
-(void)_setProperty:(id)arg1 forKey:(id)arg2 forRelation:(id)arg3 ;
-(void)_createLoadedPropertiesIfNeeded;
-(BOOL)_loadRelationForKey:(id)arg1 value:(id*)arg2 ;
-(void)_loadDefaultPropertiesIfNeeded;
-(BOOL)_loadChildIdentifiersForKey:(id)arg1 values:(id*)arg2 ;
-(void)_addDirtyProperty:(id)arg1 ;
-(void)_addObjectCore:(id)arg1 toValues:(id)arg2 relation:(id)arg3 ;
-(void)_removeObjectCore:(id)arg1 fromValues:(id)arg2 relation:(id)arg3 ;
-(id)_primitiveValueForKey:(id)arg1 loader:(/*^block*/id)arg2 ;
-(void)_primitiveSetValue:(id)arg1 forKey:(id)arg2 daemonSetter:(/*^block*/id)arg3 ;
-(id)_loadStringValueForKey:(id)arg1 ;
-(void)_takeValues:(id)arg1 forKeys:(id)arg2 ;
-(BOOL)isPropertyLoaded:(id)arg1 ;
-(void)_setProperty:(id)arg1 forKey:(id)arg2 isRelation:(BOOL)arg3 ;
-(void)_takeValuesForDefaultPropertyKeys:(id)arg1 values:(id)arg2 ;
-(BOOL)_areDefaultPropertiesLoaded;
-(void)saved;
-(void)_setPendingInsert:(BOOL)arg1 ;
-(void)_setPendingUpdate:(BOOL)arg1 ;
-(void)_setPendingDelete:(BOOL)arg1 ;
-(void)primitiveAddRelatedObject:(id)arg1 forKey:(id)arg2 ;
-(void)primitiveRemoveRelatedObject:(id)arg1 forKey:(id)arg2 ;
-(double)primitiveDoubleValueForKey:(id)arg1 ;
-(void)primitiveSetDoubleValue:(double)arg1 forKey:(id)arg2 ;
-(void)takeValues:(id)arg1 forKeys:(id)arg2 ;
-(void)takeValuesForDefaultPropertyKeys:(id)arg1 values:(id)arg2 ;
-(NSMutableDictionary *)committedProperties;
-(void)setCommittedProperties:(NSMutableDictionary *)arg1 ;
@end

