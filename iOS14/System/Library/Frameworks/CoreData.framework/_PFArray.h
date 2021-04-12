/*
* Generated on Thursday, January 14, 2021 at 2:21:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreFoundation/NSArray.h>

@class _PFWeakReference;

@interface _PFArray : NSArray {

	int _cd_rc;
	unsigned _count;
	id* _array;
	_PFWeakReference* _weakContext;
	struct {
		unsigned shouldRetain : 1;
		unsigned shouldRelease : 1;
		unsigned useExtendedRelease : 1;
		unsigned freeBackingArray : 1;
		unsigned copyBackingArray : 1;
		unsigned managedObjects : 1;
		unsigned _RESERVED : 27;
	}  _flags;

}
+(void)initialize;
+(Class)classForKeyedUnarchiver;
+(BOOL)accessInstanceVariablesDirectly;
-(oneway void)release;
-(unsigned long long)indexOfObjectIdenticalTo:(id)arg1 ;
-(id)initWithObjects:(id*)arg1 count:(unsigned)arg2 andFlags:(unsigned)arg3 ;
-(id)initWithObjects:(id*)arg1 count:(unsigned)arg2 andFlags:(unsigned)arg3 andContext:(id)arg4 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_PF4*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(BOOL)_tryRetain;
-(unsigned long long)indexOfObject:(id)arg1 inRange:(NSRange)arg2 ;
-(id)initWithObjects:(const id*)arg1 count:(unsigned long long)arg2 ;
-(unsigned long long)indexOfObject:(id)arg1 ;
-(id)retain;
-(BOOL)_isDeallocating;
-(unsigned long long)count;
-(void)getObjects:(id*)arg1 range:(NSRange)arg2 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)indexOfObjectIdenticalTo:(id)arg1 inRange:(NSRange)arg2 ;
-(Class)classForCoder;
-(void)getObjects:(id*)arg1 ;
-(unsigned long long)retainCount;
-(id)subarrayWithRange:(NSRange)arg1 ;
-(id)managedObjectIDAtIndex:(unsigned long long)arg1 ;
-(id)newArrayFromObjectIDs;
-(unsigned long long)indexOfManagedObjectForObjectID:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)arrayFromObjectIDs;
@end

