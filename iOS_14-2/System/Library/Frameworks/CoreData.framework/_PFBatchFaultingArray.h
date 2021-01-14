/*
* Generated on Thursday, January 14, 2021 at 2:21:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
		unsigned _LRUEntryCount : 11;
		unsigned _RESERVED : 12;
	}  _flags;

}
+(id)alloc;
+(void)initialize;
+(Class)classForKeyedUnarchiver;
+(id)allocWithZone:(NSZone*)arg1 ;
+(BOOL)accessInstanceVariablesDirectly;
-(id)indexesOfObjectsAtIndexes:(id)arg1 options:(unsigned long long)arg2 passingTest:(/*^block*/id)arg3 ;
-(id)sortedArrayUsingFunction:(/*function pointer*/void*)arg1 context:(void*)arg2 ;
-(oneway void)release;
-(unsigned long long)indexOfObjectIdenticalTo:(id)arg1 ;
-(BOOL)isEqualToArray:(id)arg1 ;
-(id)filteredArrayUsingPredicate:(id)arg1 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_PF4*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(BOOL)_tryRetain;
-(id)objectAtIndexedSubscript:(unsigned long long)arg1 ;
-(unsigned long long)indexOfObject:(id)arg1 inRange:(NSRange)arg2 ;
-(unsigned long long)indexOfObject:(id)arg1 ;
-(id)objectsAtIndexes:(id)arg1 ;
-(unsigned long long)indexOfObjectWithOptions:(unsigned long long)arg1 passingTest:(/*^block*/id)arg2 ;
-(id)retain;
-(BOOL)_isDeallocating;
-(void)enumerateObjectsAtIndexes:(id)arg1 options:(unsigned long long)arg2 usingBlock:(/*^block*/id)arg3 ;
-(id)valueForKey:(id)arg1 ;
-(unsigned long long)indexOfObjectAtIndexes:(id)arg1 options:(unsigned long long)arg2 passingTest:(/*^block*/id)arg3 ;
-(id)sortedArrayWithOptions:(unsigned long long)arg1 usingComparator:(/*^block*/id)arg2 ;
-(id)indexesOfObjectsWithOptions:(unsigned long long)arg1 passingTest:(/*^block*/id)arg2 ;
-(unsigned long long)count;
-(void)getObjects:(id*)arg1 range:(NSRange)arg2 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)initWithPFArray:(id)arg1 andRequest:(id)arg2 andContext:(id)arg3 ;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)indexOfObjectIdenticalTo:(id)arg1 inRange:(NSRange)arg2 ;
-(id)valueForKeyPath:(id)arg1 ;
-(id)description;
-(void)enumerateObjectsWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(Class)classForCoder;
-(void)getObjects:(id*)arg1 ;
-(unsigned long long)retainCount;
-(id)sortedArrayUsingFunction:(/*function pointer*/void*)arg1 context:(void*)arg2 hint:(id)arg3 ;
-(id)subarrayWithRange:(NSRange)arg1 ;
-(id)managedObjectIDAtIndex:(unsigned long long)arg1 ;
-(id)sortedArrayUsingComparator:(/*^block*/id)arg1 ;
-(id)sortedArrayUsingDescriptors:(id)arg1 ;
-(id)sortedArrayUsingSelector:(SEL)arg1 ;
-(id)newArrayFromObjectIDs;
-(unsigned long long)indexOfManagedObjectForObjectID:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)arrayFromObjectIDs;
@end

