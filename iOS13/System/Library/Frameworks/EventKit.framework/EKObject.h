/*
* Generated on Monday, March 1, 2021 at 2:32:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
*/

#import <libobjc.A.dylib/EKFrozenMeltedPair.h>
#import <libobjc.A.dylib/EKProtocolMutableObject.h>

@class NSString, EKPersistentObject, EKChangeSet, NSMutableDictionary, NSDictionary, EKObjectValidationContext, EKEventStore;

@interface EKObject : NSObject <EKFrozenMeltedPair, EKProtocolMutableObject> {

	EKPersistentObject* _persistentObject;
	EKChangeSet* _changeSet;
	NSMutableDictionary* __cachedMeltedObjects;
	NSDictionary* _additionalFrozenProperties;
	NSMutableDictionary* __cachedValues;
	EKObjectValidationContext* __validationContext;

}

@property (nonatomic,retain) EKEventStore * eventStore; 
@property (nonatomic,retain) EKChangeSet * changeSet;                                     //@synthesize changeSet=_changeSet - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * _cachedMeltedObjects;                  //@synthesize _cachedMeltedObjects=__cachedMeltedObjects - In the implementation block
@property (nonatomic,retain) NSDictionary * additionalFrozenProperties;                   //@synthesize additionalFrozenProperties=_additionalFrozenProperties - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * _cachedValues;                         //@synthesize _cachedValues=__cachedValues - In the implementation block
@property (nonatomic,retain) EKObjectValidationContext * _validationContext;              //@synthesize _validationContext=__validationContext - In the implementation block
@property (nonatomic,retain) EKPersistentObject * backingObject; 
@property (nonatomic,readonly) BOOL hasChanges; 
@property (getter=isNew,nonatomic,readonly) BOOL new; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL isFrozen; 
@property (nonatomic,readonly) BOOL isPartialObject; 
@property (nonatomic,readonly) NSString * uniqueIdentifier; 
@property (nonatomic,readonly) NSString * semanticIdentifier; 
@property (nonatomic,readonly) BOOL canBeConvertedToFullObject; 
@property (nonatomic,readonly) NSDictionary * preFrozenRelationshipObjects; 
+(Class)frozenClass;
+(Class)meltedClass;
+(id)knownRelationshipSingleValueKeys;
+(BOOL)isMeltedAndNotWeakRelationshipObject:(id)arg1 forKey:(id)arg2 ;
+(id)knownRelationshipMultiValueKeys;
+(id)propertiesUnavailableForPartialObjects;
+(id)knownRelationshipWeakKeys;
+(BOOL)isWeakRelationship;
+(id)knownDerivedRelationshipKeys;
+(BOOL)_isWeakRelationMeltedObject:(id)arg1 forKey:(id)arg2 ;
+(id)knownImmutableKeys;
+(unsigned long long)_numberOfSharedLocksForUnitTesting;
+(BOOL)isDerivedRelationship;
+(id)knownDerivedAndSingleValueRelationshipKeys;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithObject:(id)arg1 ;
-(void)addChanges:(id)arg1 ;
-(void)reset;
-(BOOL)_reset;
-(BOOL)hasChanges;
-(NSString *)uniqueIdentifier;
-(void)setCachedValue:(id)arg1 forKey:(id)arg2 ;
-(id)cachedValueForKey:(id)arg1 ;
-(NSMutableDictionary *)_cachedValues;
-(id)objectID;
-(void)rollback;
-(void)refetch;
-(EKChangeSet *)changeSet;
-(void)setChangeSet:(EKChangeSet *)arg1 ;
-(BOOL)validate:(id*)arg1 ;
-(BOOL)refresh;
-(BOOL)isFrozen;
-(BOOL)_hasChanges;
-(BOOL)hasUnsavedChanges;
-(void)applyChanges:(id)arg1 ;
-(BOOL)isDeleted;
-(id)changedKeys;
-(id)_readWriteLock;
-(BOOL)isNew;
-(BOOL)revert;
-(void)_sharedInit;
-(EKEventStore *)eventStore;
-(BOOL)_hasChangesForKey:(id)arg1 ;
-(void)setEventStore:(EKEventStore *)arg1 ;
-(int)rowID;
-(id)committedValueForKey:(id)arg1 ;
-(BOOL)isSaved;
-(EKObjectValidationContext *)_validationContext;
-(BOOL)isPartialObject;
-(BOOL)canBeConvertedToFullObject;
-(id)singleChangedValueForKey:(id)arg1 ;
-(void)setSingleChangedValue:(id)arg1 forKey:(id)arg2 ;
-(id)cachedValueForKey:(id)arg1 populateBlock:(/*^block*/id)arg2 ;
-(void)clearCachedValueForKey:(id)arg1 ;
-(Class)frozenClass;
-(id)initWithPersistentObject:(id)arg1 ;
-(EKPersistentObject *)backingObject;
-(id)meltedObjectInStore:(id)arg1 ;
-(id)prepareReminderKitObjectForSaveWithUpdatedBackingObjectProvider:(id)arg1 ;
-(id)cachedMeltedChildIdentifierToParentMap;
-(void)setBackingObject:(EKPersistentObject *)arg1 ;
-(void)markAsNew;
-(id)persistentObject;
-(BOOL)_isNew;
-(BOOL)_isPropertyUnavailable:(id)arg1 convertToFullObjectIfUnavailable:(BOOL)arg2 ;
-(void)rebaseSkippingRelationProperties:(id)arg1 ;
-(void)_initChangeSetIfNone;
-(void)rebase;
-(id)frozenObject;
-(void)addMultiChangedObjectValue:(id)arg1 forKey:(id)arg2 ;
-(void)setPersistentObject:(id)arg1 ;
-(BOOL)existsInStore;
-(void)_rollbackCommon;
-(BOOL)_resetCommon;
-(BOOL)_refreshCommon;
-(id)_previousValueForKey:(id)arg1 ;
-(void)_markAsNewCommon;
-(void)_markAsNotNewCommon;
-(void)_markAsDeletedCommon;
-(void)_markAsUndeletedCommon;
-(void)_markAsSavedCommon;
-(void)_markAsCommittedCommon;
-(void)markAsCommitted;
-(void)_performBlockOnOwnedCachedRelatedObjects:(/*^block*/id)arg1 ;
-(id)cachedMeltedObjectForSingleValueKey:(id)arg1 ;
-(id)cachedMeltedObjectsForMultiValueKey:(id)arg1 ;
-(void)_updatePersistentValueForKey:(id)arg1 ;
-(id)_propertyValueForKey:(id)arg1 ;
-(void)updatePersistentObject;
-(id)meltedAndCachedSingleRelationObjectForKey:(id)arg1 ;
-(id)meltedAndCachedMultiRelationObjectsForKey:(id)arg1 ;
-(void)markAsSaved;
-(void)updatePersistentObjectSkippingProperties:(id)arg1 ;
-(id)existingMeltedObject;
-(BOOL)isPropertyUnavailable:(id)arg1 ;
-(BOOL)isCompletelyEqual:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ignoringProperties:(id)arg2 ;
-(NSString *)semanticIdentifier;
-(NSDictionary *)preFrozenRelationshipObjects;
-(void)markAsNotNew;
-(void)markAsDeleted;
-(void)markAsUndeleted;
-(void)updatePersistentValueForKeyIfNeeded:(id)arg1 ;
-(void)didCommit;
-(void)insertPersistentObjectIfNeeded;
-(void)deletePersistentObject;
-(NSMutableDictionary *)_cachedMeltedObjects;
-(void)set_cachedMeltedObjects:(NSMutableDictionary *)arg1 ;
-(NSDictionary *)additionalFrozenProperties;
-(void)setAdditionalFrozenProperties:(NSDictionary *)arg1 ;
-(void)set_cachedValues:(NSMutableDictionary *)arg1 ;
-(void)set_validationContext:(EKObjectValidationContext *)arg1 ;
-(void)updateMeltedAndCachedSingleRelationObject:(id)arg1 forKey:(id)arg2 frozenClass:(Class)arg3 ;
-(void)updateMeltedAndCachedMultiRelationObjects:(id)arg1 forKey:(id)arg2 ;
-(void)addCachedMeltedObject:(id)arg1 forMultiValueKey:(id)arg2 ;
-(void)removeCachedMeltedObject:(id)arg1 forMultiValueKey:(id)arg2 ;
-(BOOL)_isOnlyChangedKey:(id)arg1 ;
-(void)emptyMeltedCacheForKey:(id)arg1 ;
-(BOOL)isUndeleted;
-(BOOL)_resetIfBackingObjectIsOfClass:(Class)arg1 fetchResetFrozenObjectBlock:(/*^block*/id)arg2 ;
-(id)privacyDescription;
-(id)frozenOrMeltedCachedSingleRelationObjectForKey:(id)arg1 ;
-(void)addChangesFromObject:(id)arg1 except:(id)arg2 ;
-(void)addChangesFromObject:(id)arg1 keep:(id)arg2 ;
-(void)emptyMeltedCacheForKeys:(id)arg1 ;
-(void)_resetMeltedCache;
-(void)_performWithReadLock:(/*^block*/id)arg1 ;
-(void)_performWithWriteLock:(/*^block*/id)arg1 ;
-(BOOL)validateWithOwner:(id)arg1 error:(id*)arg2 ;
-(void)_resetWithFrozenObject:(id)arg1 ;
-(unsigned long long)_cachedMeltedObjectsCount;
-(BOOL)_hasChangeHelperInKeys:(id)arg1 ignoreKeys:(id)arg2 checkUnsaved:(BOOL)arg3 ;
-(BOOL)hasUnsavedChangesIgnoreKeys:(id)arg1 ;
-(BOOL)_hasUnsavedChangesInKeys:(id)arg1 ignoreKeys:(id)arg2 ;
-(BOOL)_hasChangesForKey:(id)arg1 checkUnsaved:(BOOL)arg2 ;
-(id)_singleRelationshipKeysToCheckForChanges;
-(id)_multiRelationshipKeysToCheckForChanges;
-(BOOL)_areOnlyChangedKeys:(id)arg1 ;
-(void)_addChangesFromObject:(id)arg1 except:(id)arg2 keep:(id)arg3 ;
-(void)addChangesFromObject:(id)arg1 ;
-(void)updatedMeltedCacheForChangeSet:(id)arg1 ;
-(void)addMultiChangedObjectValues:(id)arg1 forKey:(id)arg2 ;
-(void)removeMultiChangedObjectValues:(id)arg1 forKey:(id)arg2 ;
-(id)multiChangedObjectValuesForKey:(id)arg1 ;
-(void)_addCachedMeltedObject:(id)arg1 forMultiValueKey:(id)arg2 ;
-(void)updateMultiValueCacheForChangeSet:(id)arg1 preservingExistingAdds:(BOOL)arg2 ;
-(void)_applyDefinedAfterFirstSaveFrom:(id)arg1 ;
-(void)_applyKnownImmutableValuesFrom:(id)arg1 ;
-(void)setCachedMeltedObjects:(id)arg1 forMultiValueKey:(id)arg2 ;
-(void)_updateCachedMeltedObjectSetForMultiValueKey:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)_removeCachedMeltedObject:(id)arg1 forMultiValueKey:(id)arg2 ;
-(void)removeMultiChangedObjectValue:(id)arg1 forKey:(id)arg2 ;
-(void)setCachedMeltedObject:(id)arg1 forSingleValueKey:(id)arg2 ;
-(void)replaceMultiChangedObjectValuesWithObjectValues:(id)arg1 forKey:(id)arg2 ;
-(id)_convertBackingObjectsWithPath:(id)arg1 updateBackingObjects:(BOOL)arg2 allChangedBackingObjects:(id)arg3 eventStore:(id)arg4 updatedBackingObjectProvider:(id)arg5 ;
-(id)backingObjectOfChildObject:(id)arg1 withRelationshipKey:(id)arg2 ;
-(void)_cachedMeltedChildIdentifierToParentMap:(id)arg1 ;
-(void)clearCachedValuesForKeys:(id)arg1 ;
-(id)cachedValueForKey:(id)arg1 expectingCachedValue:(id)arg2 forMasterKey:(id)arg3 relatedKeys:(id)arg4 populateBlock:(/*^block*/id)arg5 ;
-(BOOL)hasUnsavedChangesInKeys:(id)arg1 ;
-(BOOL)_refreshable;
-(unsigned long long)meltedAndCachedMultiRelationCountForKey:(id)arg1 ;
-(void)emptyMeltedCache;
@end

