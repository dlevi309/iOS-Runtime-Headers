/*
* Generated on Thursday, January 14, 2021 at 2:20:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSKeyValueMutableOrderedSet.h>

@class NSKeyValueGetter, NSKeyValueSetter;

@interface NSKeyValueSlowMutableOrderedSet : NSKeyValueMutableOrderedSet {

	NSKeyValueGetter* _valueGetter;
	NSKeyValueSetter* _valueSetter;
	BOOL _treatNilValuesLikeEmptyOrderedSets;
	char _padding[3];

}
-(void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2 ;
-(void)removeObjectsAtIndexes:(id)arg1 ;
-(void)replaceObjectsAtIndexes:(id)arg1 withObjects:(id)arg2 ;
-(id)_createNonNilMutableOrderedSetValueWithSelector:(SEL)arg1 ;
-(void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(unsigned long long)indexOfObject:(id)arg1 ;
-(id)objectsAtIndexes:(id)arg1 ;
-(void)_raiseNilValueExceptionWithSelector:(SEL)arg1 ;
-(unsigned long long)count;
-(void)getObjects:(id*)arg1 range:(NSRange)arg2 ;
-(id)_nonNilOrderedSetValueWithSelector:(SEL)arg1 ;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(void)removeObjectAtIndex:(unsigned long long)arg1 ;
-(void)insertObjects:(id)arg1 atIndexes:(id)arg2 ;
-(void)_proxyNonGCFinalize;
-(id)_proxyInitWithContainer:(id)arg1 getter:(id)arg2 ;
@end

