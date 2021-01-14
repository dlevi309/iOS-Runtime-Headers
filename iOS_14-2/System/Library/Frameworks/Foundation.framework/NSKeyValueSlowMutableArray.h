/*
* Generated on Thursday, January 14, 2021 at 2:20:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSKeyValueMutableArray.h>

@class NSKeyValueGetter, NSKeyValueSetter;

@interface NSKeyValueSlowMutableArray : NSKeyValueMutableArray {

	NSKeyValueGetter* _valueGetter;
	NSKeyValueSetter* _valueSetter;
	BOOL _treatNilValuesLikeEmptyArrays;
	char _padding[3];

}
-(void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2 ;
-(void)removeObjectsAtIndexes:(id)arg1 ;
-(void)replaceObjectsAtIndexes:(id)arg1 withObjects:(id)arg2 ;
-(void)removeLastObject;
-(void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(id)_createNonNilMutableArrayValueWithSelector:(SEL)arg1 ;
-(id)objectsAtIndexes:(id)arg1 ;
-(void)_raiseNilValueExceptionWithSelector:(SEL)arg1 ;
-(unsigned long long)count;
-(void)getObjects:(id*)arg1 range:(NSRange)arg2 ;
-(id)_nonNilArrayValueWithSelector:(SEL)arg1 ;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(void)addObject:(id)arg1 ;
-(void)removeObjectAtIndex:(unsigned long long)arg1 ;
-(void)insertObjects:(id)arg1 atIndexes:(id)arg2 ;
-(void)_proxyNonGCFinalize;
-(id)_proxyInitWithContainer:(id)arg1 getter:(id)arg2 ;
@end

