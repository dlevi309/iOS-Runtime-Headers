/*
* Generated on Thursday, January 14, 2021 at 2:21:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreFoundation/NSOrderedSet.h>

@class NSArray, _PFWeakReference;

@interface _PFFetchedResultOrderedSetWrapper : NSOrderedSet {

	int _cd_rc;
	NSArray* _underlyingArray;
	_PFWeakReference* _weakmoc;

}
+(id)alloc;
+(Class)classForKeyedUnarchiver;
+(id)allocWithZone:(NSZone*)arg1 ;
+(BOOL)accessInstanceVariablesDirectly;
-(id)indexesOfObjectsAtIndexes:(id)arg1 options:(unsigned long long)arg2 passingTest:(/*^block*/id)arg3 ;
-(oneway void)release;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_PF4*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(BOOL)_tryRetain;
-(id)objectEnumerator;
-(unsigned long long)indexOfObject:(id)arg1 ;
-(unsigned long long)indexOfObjectWithOptions:(unsigned long long)arg1 passingTest:(/*^block*/id)arg2 ;
-(id)retain;
-(id)descriptionWithLocale:(id)arg1 ;
-(BOOL)_isDeallocating;
-(void)enumerateObjectsAtIndexes:(id)arg1 options:(unsigned long long)arg2 usingBlock:(/*^block*/id)arg3 ;
-(unsigned long long)indexOfObjectAtIndexes:(id)arg1 options:(unsigned long long)arg2 passingTest:(/*^block*/id)arg3 ;
-(id)array;
-(id)sortedArrayWithOptions:(unsigned long long)arg1 usingComparator:(/*^block*/id)arg2 ;
-(BOOL)isEqualToOrderedSet:(id)arg1 ;
-(id)indexesOfObjectsWithOptions:(unsigned long long)arg1 passingTest:(/*^block*/id)arg2 ;
-(unsigned long long)count;
-(void)getObjects:(id*)arg1 range:(NSRange)arg2 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(BOOL)containsObject:(id)arg1 ;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(id)allObjects;
-(id)description;
-(void)enumerateObjectsWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(Class)classForCoder;
-(void)getObjects:(id*)arg1 ;
-(unsigned long long)retainCount;
-(id)managedObjectIDAtIndex:(unsigned long long)arg1 ;
-(id)sortedArrayUsingComparator:(/*^block*/id)arg1 ;
-(id)initWithArray:(id)arg1 andContext:(id)arg2 ;
-(id)newArrayFromObjectIDs;
-(unsigned long long)indexOfManagedObjectForObjectID:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(id)arrayFromObjectIDs;
@end

