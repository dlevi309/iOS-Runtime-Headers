/*
* Generated on Thursday, January 14, 2021 at 2:20:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/NSKeyValueMutableSet.h>

@class NSKeyValueGetter, NSKeyValueSetter;

@interface NSKeyValueSlowMutableSet : NSKeyValueMutableSet {

	NSKeyValueGetter* _valueGetter;
	NSKeyValueSetter* _valueSetter;
	BOOL _treatNilValuesLikeEmptySets;
	char _padding[3];

}
-(void)intersectSet:(id)arg1 ;
-(void)setSet:(id)arg1 ;
-(id)objectEnumerator;
-(id)_createMutableSetValueWithSelector:(SEL)arg1 ;
-(void)_raiseNilValueExceptionWithSelector:(SEL)arg1 ;
-(unsigned long long)count;
-(void)minusSet:(id)arg1 ;
-(void)unionSet:(id)arg1 ;
-(void)addObjectsFromArray:(id)arg1 ;
-(id)member:(id)arg1 ;
-(void)addObject:(id)arg1 ;
-(id)_setValueWithSelector:(SEL)arg1 ;
-(void)removeAllObjects;
-(void)removeObject:(id)arg1 ;
-(void)_proxyNonGCFinalize;
-(id)_proxyInitWithContainer:(id)arg1 getter:(id)arg2 ;
@end

