/*
* Generated on Thursday, January 14, 2021 at 2:21:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreFoundation/NSMutableArray.h>

@class _PFArray, NSMutableArray;

@interface _PFMutableProxyArray : NSMutableArray {

	int _cd_rc;
	unsigned _editCount;
	unsigned _offset;
	unsigned _limit;
	_PFArray* _originalArray;
	NSMutableArray* _updatedObjectsArray;
	CFArrayRef _indicesVeneer;

}
+(Class)classForKeyedUnarchiver;
-(void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2 ;
-(oneway void)release;
-(unsigned long long)indexOfObjectIdenticalTo:(id)arg1 ;
-(void)removeLastObject;
-(void)finalize;
-(BOOL)_tryRetain;
-(unsigned long long)indexOfObject:(id)arg1 inRange:(NSRange)arg2 ;
-(void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(unsigned long long)indexOfObject:(id)arg1 ;
-(id)mutableCopy;
-(id)retain;
-(BOOL)_isDeallocating;
-(unsigned long long)count;
-(void)getObjects:(id*)arg1 range:(NSRange)arg2 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)indexOfObjectIdenticalTo:(id)arg1 inRange:(NSRange)arg2 ;
-(void)addObject:(id)arg1 ;
-(void)removeObjectAtIndex:(unsigned long long)arg1 ;
-(Class)classForCoder;
-(id)copy;
-(unsigned long long)retainCount;
-(id)subarrayWithRange:(NSRange)arg1 ;
-(id)managedObjectIDAtIndex:(unsigned long long)arg1 ;
-(id)newArrayFromObjectIDs;
-(id)initWithPFArray:(id)arg1 ;
-(unsigned long long)indexOfManagedObjectForObjectID:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)arrayFromObjectIDs;
-(id)initWithPFArray:(id)arg1 inRange:(NSRange)arg2 ;
@end

