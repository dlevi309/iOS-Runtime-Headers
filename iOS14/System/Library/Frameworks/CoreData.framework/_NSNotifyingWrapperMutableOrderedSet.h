/*
* Generated on Thursday, January 14, 2021 at 2:21:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreFoundation/NSMutableOrderedSet.h>

@class NSManagedObject, NSString, NSMutableOrderedSet;

@interface _NSNotifyingWrapperMutableOrderedSet : NSMutableOrderedSet {

	NSManagedObject* _container;
	NSString* _key;
	NSMutableOrderedSet* _mutableOrderedSet;

}
+(Class)classForKeyedUnarchiver;
-(void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2 ;
-(void)sortUsingComparator:(/*^block*/id)arg1 ;
-(void)intersectOrderedSet:(id)arg1 ;
-(id)indexesOfObjectsPassingTest:(/*^block*/id)arg1 ;
-(void)moveObjectsAtIndexes:(id)arg1 toIndex:(unsigned long long)arg2 ;
-(unsigned long long)indexOfObject:(id)arg1 inSortedRange:(NSRange)arg2 options:(unsigned long long)arg3 usingComparator:(/*^block*/id)arg4 ;
-(void)removeObjectsAtIndexes:(id)arg1 ;
-(void)replaceObjectsAtIndexes:(id)arg1 withObjects:(id)arg2 ;
-(BOOL)intersectsOrderedSet:(id)arg1 ;
-(BOOL)isSubsetOfOrderedSet:(id)arg1 ;
-(unsigned long long)indexOfObjectPassingTest:(/*^block*/id)arg1 ;
-(id)reverseObjectEnumerator;
-(void)intersectSet:(id)arg1 ;
-(BOOL)_reorderObjectsToLocationsByOrderKey:(id)arg1 error:(id*)arg2 ;
-(id)reversedOrderedSet;
-(id)indexesOfObjectsAtIndexes:(id)arg1 options:(unsigned long long)arg2 passingTest:(/*^block*/id)arg3 ;
-(void)replaceObjectsInRange:(NSRange)arg1 withObjects:(const id*)arg2 count:(unsigned long long)arg3 ;
-(void)unionOrderedSet:(id)arg1 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_PF4*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(id)objectEnumerator;
-(void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(unsigned long long)indexOfObject:(id)arg1 ;
-(void)insertObjects:(id*)arg1 count:(unsigned long long)arg2 atIndex:(unsigned long long)arg3 ;
-(id)objectsAtIndexes:(id)arg1 ;
-(unsigned long long)indexOfObjectWithOptions:(unsigned long long)arg1 passingTest:(/*^block*/id)arg2 ;
-(id)descriptionWithLocale:(id)arg1 ;
-(void)enumerateObjectsUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateObjectsAtIndexes:(id)arg1 options:(unsigned long long)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)removeObjectsInArray:(id)arg1 ;
-(id)valueForKey:(id)arg1 ;
-(unsigned long long)indexOfObjectAtIndexes:(id)arg1 options:(unsigned long long)arg2 passingTest:(/*^block*/id)arg3 ;
-(id)array;
-(id)sortedArrayWithOptions:(unsigned long long)arg1 usingComparator:(/*^block*/id)arg2 ;
-(BOOL)isEqualToOrderedSet:(id)arg1 ;
-(id)indexesOfObjectsWithOptions:(unsigned long long)arg1 passingTest:(/*^block*/id)arg2 ;
-(unsigned long long)count;
-(void)getObjects:(id*)arg1 range:(NSRange)arg2 ;
-(void)minusSet:(id)arg1 ;
-(void)unionSet:(id)arg1 ;
-(id)lastObject;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)sortRange:(NSRange)arg1 options:(unsigned long long)arg2 usingComparator:(/*^block*/id)arg3 ;
-(void)addObjectsFromArray:(id)arg1 ;
-(id)firstObject;
-(BOOL)containsObject:(id)arg1 ;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(id)allObjects;
-(BOOL)isSubsetOfSet:(id)arg1 ;
-(id)valueForKeyPath:(id)arg1 ;
-(id)description;
-(void)addObject:(id)arg1 ;
-(BOOL)intersectsSet:(id)arg1 ;
-(void)removeObjectAtIndex:(unsigned long long)arg1 ;
-(void)enumerateObjectsWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)descriptionWithLocale:(id)arg1 indent:(unsigned long long)arg2 ;
-(Class)classForCoder;
-(void)removeObjectsInRange:(NSRange)arg1 ;
-(void)getObjects:(id*)arg1 ;
-(void)sortWithOptions:(unsigned long long)arg1 usingComparator:(/*^block*/id)arg2 ;
-(void)insertObjects:(id)arg1 atIndexes:(id)arg2 ;
-(void)exchangeObjectAtIndex:(unsigned long long)arg1 withObjectAtIndex:(unsigned long long)arg2 ;
-(void)removeAllObjects;
-(void)addObjects:(const id*)arg1 count:(unsigned long long)arg2 ;
-(void)removeObject:(id)arg1 ;
-(id)sortedArrayUsingComparator:(/*^block*/id)arg1 ;
-(id)set;
-(void)setObject:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)minusOrderedSet:(id)arg1 ;
-(id)initWithContainer:(id)arg1 key:(id)arg2 mutableOrderedSet:(id)arg3 ;
-(id)_orderedObjectsAndKeys;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

