/*
* Generated on Thursday, January 14, 2021 at 2:21:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/


#import <CoreData/CoreData-Structs.h>
@interface NSMergePolicy : NSObject {

	unsigned long long _type;
	void* _reserved2;
	void* _reserved3;

}

@property (readonly) unsigned long long mergeType; 
+(void)initialize;
+(id)rollbackMergePolicy;
+(id)overwriteMergePolicy;
+(id)errorMergePolicy;
+(BOOL)accessInstanceVariablesDirectly;
+(id)mergeByPropertyObjectTrumpMergePolicy;
+(id)mergeByPropertyStoreTrumpMergePolicy;
-(unsigned long long)mergeType;
-(id)initWithType:(unsigned long long)arg1 ;
-(BOOL)_rollbackResolveConstraintConflict:(id)arg1 ;
-(id)_electPreexistingDesignatedOriginalFrom:(id)arg1 ;
-(id)init;
-(id)_unresolvedConflictFor:(id)arg1 ;
-(BOOL)_resolveContextConstraintConflict:(id)arg1 ;
-(id)initWithMergeType:(unsigned long long)arg1 ;
-(id)_electDesignatedOriginalForConflict:(id)arg1 ;
-(BOOL)_byPropertyObjectTrumpResolveConstraintConflict:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)_eliminateContendersResolveConstraintConflict:(id)arg1 withKeeper:(id)arg2 ;
-(BOOL)resolveConstraintConflicts:(id)arg1 error:(id*)arg2 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)mergeToManyRelationshipForSourceObject:(id)arg1 withOldSnapshot:(id)arg2 newSnapshot:(id)arg3 andAncestor:(id)arg4 andLegacyPath:(BOOL)arg5 ;
-(BOOL)_mergeContendersResolveConstraintConflict:(id)arg1 withKeeper:(id)arg2 ;
-(BOOL)_byPropertyObjectTrumpMergeObject:(id)arg1 ontoObject:(id)arg2 writeAll:(BOOL)arg3 ;
-(id)_unresolvedObjectsForContextConflict:(id)arg1 ;
-(void)_mergeChangesStoreUpdatesTrumpForObject:(id)arg1 withRecord:(id)arg2 ;
-(BOOL)_valuesOnObject:(id)arg1 matchAgainstValues:(id)arg2 ;
-(id)_electNewlyInsertedDesignatedOriginalFrom:(id)arg1 ;
-(void)_mergeToManyRelationshipsForObject:(id)arg1 ontoObject:(id)arg2 ;
-(void)_mergeValuesForObject:(id)arg1 ontoObject:(id)arg2 ;
-(unsigned long long)type;
-(BOOL)resolveConflicts:(id)arg1 error:(id*)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)resolveConflict:(id)arg1 ;
-(void)_mergeChangesObjectUpdatesTrumpForObject:(id)arg1 withRecord:(id)arg2 ;
-(BOOL)_byPropertyStoreTrumpResolveConstraintConflict:(id)arg1 ;
-(void)_mergeToManyUnionRelationshipsForObject:(id)arg1 andObject:(id)arg2 ;
-(void)_mergeDeletionWithStoreChangesForObject:(id)arg1 withRecord:(id)arg2 ;
-(BOOL)resolveOptimisticLockingVersionConflicts:(id)arg1 error:(id*)arg2 ;
-(void)_mergeToManyUnionRelationshipsForConstraintConflict:(id)arg1 ;
-(BOOL)resolveConstraintConflict:(id)arg1 error:(id*)arg2 ;
-(void)_mergeToManyRelationshipsForConstraintConflict:(id)arg1 withDesignatedOriginal:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)_overwriteResolveConstraintConflict:(id)arg1 ;
-(void)dealloc;
-(BOOL)_didSomethingElseResolveDBConflict:(id)arg1 ;
@end

