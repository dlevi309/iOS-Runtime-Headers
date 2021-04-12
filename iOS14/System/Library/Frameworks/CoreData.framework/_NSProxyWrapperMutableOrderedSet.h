/*
* Generated on Thursday, January 14, 2021 at 2:21:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreData/_NSNotifyingWrapperMutableOrderedSet.h>

@class _NSFaultingMutableOrderedSetMutationMethods;

@interface _NSProxyWrapperMutableOrderedSet : _NSNotifyingWrapperMutableOrderedSet {

	_NSFaultingMutableOrderedSetMutationMethods* _mutationMethods;

}
-(void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2 ;
-(void)sortUsingComparator:(/*^block*/id)arg1 ;
-(void)intersectOrderedSet:(id)arg1 ;
-(void)removeObjectsAtIndexes:(id)arg1 ;
-(void)intersectSet:(id)arg1 ;
-(void)unionOrderedSet:(id)arg1 ;
-(void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)insertObjects:(id*)arg1 count:(unsigned long long)arg2 atIndex:(unsigned long long)arg3 ;
-(void)removeObjectsInArray:(id)arg1 ;
-(void)minusSet:(id)arg1 ;
-(void)unionSet:(id)arg1 ;
-(void)sortRange:(NSRange)arg1 options:(unsigned long long)arg2 usingComparator:(/*^block*/id)arg3 ;
-(void)addObjectsFromArray:(id)arg1 ;
-(void)addObject:(id)arg1 ;
-(void)removeObjectAtIndex:(unsigned long long)arg1 ;
-(void)removeObjectsInRange:(NSRange)arg1 ;
-(void)sortWithOptions:(unsigned long long)arg1 usingComparator:(/*^block*/id)arg2 ;
-(void)insertObjects:(id)arg1 atIndexes:(id)arg2 ;
-(void)removeAllObjects;
-(void)addObjects:(const id*)arg1 count:(unsigned long long)arg2 ;
-(void)minusOrderedSet:(id)arg1 ;
-(void)dealloc;
@end

