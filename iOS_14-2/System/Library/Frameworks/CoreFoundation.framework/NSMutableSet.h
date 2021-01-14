/*
* Generated on Thursday, January 14, 2021 at 2:20:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/NSSet.h>

@interface NSMutableSet : NSSet
+(id)setWithCapacity:(unsigned long long)arg1 ;
-(Class)classForCoder;
-(void)filterUsingPredicate:(id)arg1 ;
-(void)setOrderedSet:(id)arg1 ;
-(void)addObjectsFromSet:(id)arg1 ;
-(void)addObjectsFromOrderedSet:(id)arg1 range:(NSRange)arg2 ;
-(void)intersectOrderedSet:(id)arg1 ;
-(void)addObjectsFromArray:(id)arg1 range:(NSRange)arg2 ;
-(void)addObjectsFromOrderedSet:(id)arg1 ;
-(void)removeObjectsPassingTest:(/*^block*/id)arg1 ;
-(void)removeObjectsWithOptions:(unsigned long long)arg1 passingTest:(/*^block*/id)arg2 ;
-(void)removeObjectsInOrderedSet:(id)arg1 ;
-(void)removeObjectsInOrderedSet:(id)arg1 range:(NSRange)arg2 ;
-(void)removeObjectsInArray:(id)arg1 range:(NSRange)arg2 ;
-(void)intersectSet:(id)arg1 ;
-(void)_mutate;
-(void)unionOrderedSet:(id)arg1 ;
-(void)setSet:(id)arg1 ;
-(void)removeObjectsInSet:(id)arg1 ;
-(id)initWithObjects:(const id*)arg1 count:(unsigned long long)arg2 ;
-(void)removeObjectsInArray:(id)arg1 ;
-(void)minusSet:(id)arg1 ;
-(void)unionSet:(id)arg1 ;
-(void)addObjectsFromArray:(id)arg1 ;
-(void)setObject:(id)arg1 ;
-(void)addObject:(id)arg1 ;
-(id)setByAddingObjectsFromArray:(id)arg1 ;
-(id)setByAddingObjectsFromSet:(id)arg1 ;
-(void)removeAllObjects;
-(void)addObjects:(const id*)arg1 count:(unsigned long long)arg2 ;
-(void)removeObject:(id)arg1 ;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(void)minusOrderedSet:(id)arg1 ;
-(void)replaceObject:(id)arg1 ;
-(void)setArray:(id)arg1 ;
@end

