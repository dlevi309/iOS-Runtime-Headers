/*
* Generated on Thursday, January 14, 2021 at 2:20:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@interface NSOrderedSet : NSObject <NSCopying, NSMutableCopying, NSSecureCoding, NSFastEnumeration>

@property (readonly) unsigned long long count; 
+(BOOL)supportsSecureCoding;
+(id)orderedSetWithOrderedSet:(id)arg1 range:(NSRange)arg2 copyItems:(BOOL)arg3 ;
+(id)orderedSetWithObjects:(const id*)arg1 count:(unsigned long long)arg2 ;
+(id)orderedSetWithSet:(id)arg1 copyItems:(BOOL)arg2 ;
+(BOOL)supportsSecureCoding;
+(id)orderedSetWithObject:(id)arg1 ;
+(id)orderedSetWithArray:(id)arg1 ;
+(id)orderedSetWithObjects:(id)arg1 ;
+(id)orderedSetWithOrderedSet:(id)arg1 copyItems:(BOOL)arg2 ;
+(id)orderedSetWithSet:(id)arg1 ;
+(id)orderedSetWithArray:(id)arg1 range:(NSRange)arg2 ;
+(id)orderedSetWithOrderedSet:(id)arg1 ;
+(id)newOrderedSetWithObjects:(const id*)arg1 count:(unsigned long long)arg2 ;
+(id)orderedSetWithArray:(id)arg1 range:(NSRange)arg2 copyItems:(BOOL)arg3 ;
+(id)orderedSetWithOrderedSet:(id)arg1 range:(NSRange)arg2 ;
+(id)orderedSetWithArray:(id)arg1 copyItems:(BOOL)arg2 ;
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)orderedSet;
-(void)removeObserver:(id)arg1 forKeyPath:(id)arg2 ;
-(id)differenceFromOrderedSet:(id)arg1 withOptions:(unsigned long long)arg2 usingEquivalenceTest:(/*^block*/id)arg3 ;
-(void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void*)arg4 ;
-(id)_mutableOrderedSetValueForKeyPath:(id)arg1 ofObjectAtIndex:(unsigned long long)arg2 ;
-(BOOL)_validateValue:(inout id*)arg1 forKeyPath:(id)arg2 ofObjectAtIndex:(unsigned long long)arg3 error:(out id*)arg4 ;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(id)_mutableArrayValueForKeyPath:(id)arg1 ofObjectAtIndex:(unsigned long long)arg2 ;
-(id)_mutableSetValueForKeyPath:(id)arg1 ofObjectAtIndex:(unsigned long long)arg2 ;
-(id)differenceFromOrderedSet:(id)arg1 withOptions:(unsigned long long)arg2 ;
-(id)valueForKey:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)_valueForKeyPath:(id)arg1 ofObjectAtIndex:(unsigned long long)arg2 ;
-(void)_setValue:(id)arg1 forKeyPath:(id)arg2 ofObjectAtIndex:(unsigned long long)arg3 ;
-(id)filteredOrderedSetUsingPredicate:(id)arg1 ;
-(id)orderedSetByApplyingDifference:(id)arg1 ;
-(id)differenceFromOrderedSet:(id)arg1 ;
-(id)_sumForKeyPath:(id)arg1 ;
-(id)_countForKeyPath:(id)arg1 ;
-(id)valueForKeyPath:(id)arg1 ;
-(Class)classForCoder;
-(id)_avgForKeyPath:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_minForKeyPath:(id)arg1 ;
-(id)_maxForKeyPath:(id)arg1 ;
-(void)removeObserver:(id)arg1 forKeyPath:(id)arg2 context:(void*)arg3 ;
-(id)sortedArrayUsingDescriptors:(id)arg1 ;
-(id)sortedArrayFromRange:(NSRange)arg1 options:(unsigned long long)arg2 usingComparator:(/*^block*/id)arg3 ;
-(id)indexesOfObjectsPassingTest:(/*^block*/id)arg1 ;
-(id)objectPassingTest:(/*^block*/id)arg1 ;
-(unsigned long long)indexOfObject:(id)arg1 inSortedRange:(NSRange)arg2 options:(unsigned long long)arg3 usingComparator:(/*^block*/id)arg4 ;
-(id)initWithOrderedSet:(id)arg1 range:(NSRange)arg2 copyItems:(BOOL)arg3 ;
-(id)initWithArray:(id)arg1 range:(NSRange)arg2 copyItems:(BOOL)arg3 ;
-(id)objectsAtIndexes:(id)arg1 options:(unsigned long long)arg2 passingTest:(/*^block*/id)arg3 ;
-(id)initWithArray:(id)arg1 range:(NSRange)arg2 ;
-(BOOL)isNSOrderedSet__;
-(BOOL)intersectsOrderedSet:(id)arg1 ;
-(BOOL)isSubsetOfOrderedSet:(id)arg1 ;
-(id)objectWithOptions:(unsigned long long)arg1 passingTest:(/*^block*/id)arg2 ;
-(unsigned long long)indexOfObjectPassingTest:(/*^block*/id)arg1 ;
-(BOOL)containsObject:(id)arg1 inRange:(NSRange)arg2 ;
-(id)initWithOrderedSet:(id)arg1 range:(NSRange)arg2 ;
-(unsigned long long)countForObject:(id)arg1 inRange:(NSRange)arg2 ;
-(id)reverseObjectEnumerator;
-(id)initWithOrderedSet:(id)arg1 copyItems:(BOOL)arg2 ;
-(id)objectAtIndexes:(id)arg1 options:(unsigned long long)arg2 passingTest:(/*^block*/id)arg3 ;
-(id)reversedOrderedSet;
-(id)indexesOfObjectsAtIndexes:(id)arg1 options:(unsigned long long)arg2 passingTest:(/*^block*/id)arg3 ;
-(id)initWithObject:(id)arg1 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_NS19*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)objectAtIndexedSubscript:(unsigned long long)arg1 ;
-(unsigned long long)indexOfObject:(id)arg1 inRange:(NSRange)arg2 ;
-(unsigned long long)countForObject:(id)arg1 ;
-(id)initWithObjects:(const id*)arg1 count:(unsigned long long)arg2 ;
-(id)objectEnumerator;
-(unsigned long long)indexOfObject:(id)arg1 ;
-(id)objectsAtIndexes:(id)arg1 ;
-(unsigned long long)indexOfObjectWithOptions:(unsigned long long)arg1 passingTest:(/*^block*/id)arg2 ;
-(id)descriptionWithLocale:(id)arg1 ;
-(void)enumerateObjectsUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateObjectsAtIndexes:(id)arg1 options:(unsigned long long)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)indexOfObjectAtIndexes:(id)arg1 options:(unsigned long long)arg2 passingTest:(/*^block*/id)arg3 ;
-(id)array;
-(id)sortedArrayWithOptions:(unsigned long long)arg1 usingComparator:(/*^block*/id)arg2 ;
-(BOOL)isEqualToOrderedSet:(id)arg1 ;
-(id)indexesOfObjectsWithOptions:(unsigned long long)arg1 passingTest:(/*^block*/id)arg2 ;
-(unsigned long long)count;
-(void)getObjects:(id*)arg1 range:(NSRange)arg2 ;
-(id)lastObject;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)firstObject;
-(BOOL)containsObject:(id)arg1 ;
-(id)initWithOrderedSet:(id)arg1 ;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(id)allObjects;
-(BOOL)isSubsetOfSet:(id)arg1 ;
-(id)initWithSet:(id)arg1 copyItems:(BOOL)arg2 ;
-(id)description;
-(BOOL)intersectsSet:(id)arg1 ;
-(void)enumerateObjectsWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)descriptionWithLocale:(id)arg1 indent:(unsigned long long)arg2 ;
-(id)objectsWithOptions:(unsigned long long)arg1 passingTest:(/*^block*/id)arg2 ;
-(void)getObjects:(id*)arg1 ;
-(id)initWithArray:(id)arg1 copyItems:(BOOL)arg2 ;
-(unsigned long long)hash;
-(id)sortedArrayUsingComparator:(/*^block*/id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)set;
-(id)initWithObjects:(id)arg1 ;
-(id)objectsPassingTest:(/*^block*/id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithSet:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithArray:(id)arg1 ;
@end

