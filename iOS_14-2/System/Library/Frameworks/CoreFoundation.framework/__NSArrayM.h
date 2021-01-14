/*
* Generated on Thursday, January 14, 2021 at 2:20:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/NSMutableArray.h>

@interface __NSArrayM : NSMutableArray {

	A{__cow_state_t}* cow;
	SCD_Struct_NS4* storage;

}
+(id)allocWithZone:(NSZone*)arg1 ;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2 ;
-(unsigned long long)indexOfObjectIdenticalTo:(id)arg1 ;
-(void)removeLastObject;
-(void)replaceObjectsInRange:(NSRange)arg1 withObjects:(const id*)arg2 count:(unsigned long long)arg3 ;
-(void)_mutate;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_NS1*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)objectAtIndexedSubscript:(unsigned long long)arg1 ;
-(void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)insertObjects:(const id*)arg1 count:(unsigned long long)arg2 atIndex:(unsigned long long)arg3 ;
-(id)mutableCopy;
-(unsigned long long)count;
-(void)getObjects:(id*)arg1 range:(NSRange)arg2 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(void)addObject:(id)arg1 ;
-(void)removeObjectAtIndex:(unsigned long long)arg1 ;
-(void)enumerateObjectsWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)copy;
-(void)removeObjectsInRange:(NSRange)arg1 ;
-(void)exchangeObjectAtIndex:(unsigned long long)arg1 withObjectAtIndex:(unsigned long long)arg2 ;
-(void)removeAllObjects;
-(void)setObject:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setObject:(id)arg1 atIndexedSubscript:(unsigned long long)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

