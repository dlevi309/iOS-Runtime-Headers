/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(BOOL)accessInstanceVariablesDirectly;
+(Class)classForKeyedUnarchiver;
-(unsigned long long)retainCount;
-(void)dealloc;
-(id)retain;
-(oneway void)release;
-(BOOL)_tryRetain;
-(BOOL)_isDeallocating;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)initWithObjects:(const id*)arg1 count:(unsigned long long)arg2 ;
-(unsigned long long)count;
-(void)getObjects:(id*)arg1 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_PF3*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(void)getObjects:(id*)arg1 range:(NSRange)arg2 ;
-(unsigned long long)indexOfObject:(id)arg1 ;
-(unsigned long long)indexOfObjectIdenticalTo:(id)arg1 ;
-(Class)classForCoder;
-(unsigned)_flags;
-(unsigned long long)indexOfObject:(id)arg1 inRange:(NSRange)arg2 ;
-(unsigned long long)indexOfObjectIdenticalTo:(id)arg1 inRange:(NSRange)arg2 ;
-(id)subarrayWithRange:(NSRange)arg1 ;
-(Class)classForArchiver;
-(id)initWithObjects:(id*)arg1 count:(unsigned)arg2 andFlags:(unsigned)arg3 andContext:(id)arg4 ;
-(id)initWithObjects:(id*)arg1 count:(unsigned)arg2 andFlags:(unsigned)arg3 ;
-(id)newArrayFromObjectIDs;
-(id*)_objectsPointer;
-(id)arrayFromObjectIDs;
-(unsigned long long)indexOfManagedObjectForObjectID:(id)arg1 ;
-(id)managedObjectIDAtIndex:(unsigned long long)arg1 ;
-(void)_setShouldRelease:(BOOL)arg1 ;
-(void)_setShouldUseExtendedRelease:(BOOL)arg1 ;
@end

