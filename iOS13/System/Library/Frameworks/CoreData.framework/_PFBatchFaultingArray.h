/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreFoundation/NSArray.h>

@class _PFArray, NSManagedObjectContext, NSCachingFetchRequest;

@interface _PFBatchFaultingArray : NSArray {

	int _cd_rc;
	unsigned _count;
	_PFArray* _array;
	unsigned* _entryFlags;
	NSManagedObjectContext* _moc;
	NSCachingFetchRequest* _request;
	unsigned _batchSize;
	unsigned* _LRUBatches;
	struct {
		unsigned _LRUIndex : 8;
		unsigned _uniformEntity : 1;
		unsigned _RESERVED : 23;
	}  _flags;

}
+(id)alloc;
+(id)allocWithZone:(NSZone*)arg1 ;
+(void)initialize;
+(BOOL)accessInstanceVariablesDirectly;
+(Class)classForKeyedUnarchiver;
-(unsigned long long)retainCount;
-(void)dealloc;
-(id)retain;
-(oneway void)release;
-(id)description;
-(BOOL)_tryRetain;
-(BOOL)_isDeallocating;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(unsigned long long)count;
-(void)getObjects:(id*)arg1 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_PF3*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(void)getObjects:(id*)arg1 range:(NSRange)arg2 ;
-(unsigned long long)indexOfObject:(id)arg1 ;
-(void)enumerateObjectsWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(unsigned long long)indexOfObjectIdenticalTo:(id)arg1 ;
-(id)objectAtIndexedSubscript:(unsigned long long)arg1 ;
-(Class)classForCoder;
-(BOOL)isEqualToArray:(id)arg1 ;
-(id)objectsAtIndexes:(id)arg1 ;
-(unsigned long long)indexOfObject:(id)arg1 inRange:(NSRange)arg2 ;
-(id)indexesOfObjectsAtIndexes:(id)arg1 options:(unsigned long long)arg2 passingTest:(/*^block*/id)arg3 ;
-(id)indexesOfObjectsWithOptions:(unsigned long long)arg1 passingTest:(/*^block*/id)arg2 ;
-(unsigned long long)indexOfObjectWithOptions:(unsigned long long)arg1 passingTest:(/*^block*/id)arg2 ;
-(unsigned long long)indexOfObjectAtIndexes:(id)arg1 options:(unsigned long long)arg2 passingTest:(/*^block*/id)arg3 ;
-(id)sortedArrayWithOptions:(unsigned long long)arg1 usingComparator:(/*^block*/id)arg2 ;
-(void)enumerateObjectsAtIndexes:(id)arg1 options:(unsigned long long)arg2 usingBlock:(/*^block*/id)arg3 ;
-(unsigned long long)indexOfObjectIdenticalTo:(id)arg1 inRange:(NSRange)arg2 ;
-(id)sortedArrayUsingComparator:(/*^block*/id)arg1 ;
-(id)sortedArrayUsingFunction:(/*function pointer*/void*)arg1 context:(void*)arg2 ;
-(id)sortedArrayUsingSelector:(SEL)arg1 ;
-(id)subarrayWithRange:(NSRange)arg1 ;
-(id)valueForKey:(id)arg1 ;
-(Class)classForArchiver;
-(id)sortedArrayUsingFunction:(/*function pointer*/void*)arg1 context:(void*)arg2 hint:(id)arg3 ;
-(id)valueForKeyPath:(id)arg1 ;
-(id)sortedArrayUsingDescriptors:(id)arg1 ;
-(id)filteredArrayUsingPredicate:(id)arg1 ;
-(id)initWithPFArray:(id)arg1 andRequest:(id)arg2 andContext:(id)arg3 ;
-(id)newArrayFromObjectIDs;
-(id)arrayFromObjectIDs;
-(unsigned long long)indexOfManagedObjectForObjectID:(id)arg1 ;
-(id)managedObjectIDAtIndex:(unsigned long long)arg1 ;
-(id)_newSubArrayInRange:(NSRange)arg1 asMutable:(BOOL)arg2 ;
-(void)_internalDealloc;
-(id)retainedObjectAtIndex:(unsigned long long)arg1 ;
-(void)_turnAllBatchesIntoObjects;
-(void)_turnAllBatchesIntoFaults;
-(id)_pinnedObjectAtIndex:(unsigned long long)arg1 ;
@end

