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

@interface NSSet : NSObject <NSCopying, NSMutableCopying, NSSecureCoding, NSFastEnumeration>

@property (readonly) unsigned long long count; 
+(BOOL)supportsSecureCoding;
+(id)setWithObject:(id)arg1 ;
+(id)setWithObjects:(id)arg1 ;
+(id)setWithObjects:(const id*)arg1 count:(unsigned long long)arg2 ;
+(id)newSetWithObjects:(const id*)arg1 count:(unsigned long long)arg2 ;
+(id)setWithOrderedSet:(id)arg1 range:(NSRange)arg2 ;
+(id)setWithArray:(id)arg1 range:(NSRange)arg2 ;
+(id)setWithOrderedSet:(id)arg1 copyItems:(BOOL)arg2 ;
+(id)setWithSet:(id)arg1 copyItems:(BOOL)arg2 ;
+(BOOL)supportsSecureCoding;
+(id)setWithOrderedSet:(id)arg1 ;
+(id)setWithOrderedSet:(id)arg1 range:(NSRange)arg2 copyItems:(BOOL)arg3 ;
+(id)setWithArray:(id)arg1 copyItems:(BOOL)arg2 ;
+(id)setWithArray:(id)arg1 range:(NSRange)arg2 copyItems:(BOOL)arg3 ;
+(id)setWithArray:(id)arg1 ;
+(id)setWithSet:(id)arg1 ;
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)set;
-(void)removeObserver:(id)arg1 forKeyPath:(id)arg2 ;
-(id)_distinctUnionOfArraysForKeyPath:(id)arg1 ;
-(void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void*)arg4 ;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(id)valueForKey:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)_distinctUnionOfSetsForKeyPath:(id)arg1 ;
-(id)replacementObjectForPortCoder:(id)arg1 ;
-(id)_sumForKeyPath:(id)arg1 ;
-(id)_countForKeyPath:(id)arg1 ;
-(id)valueForKeyPath:(id)arg1 ;
-(Class)classForCoder;
-(id)filteredSetUsingPredicate:(id)arg1 ;
-(id)_distinctUnionOfObjectsForKeyPath:(id)arg1 ;
-(id)_avgForKeyPath:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_minForKeyPath:(id)arg1 ;
-(id)_maxForKeyPath:(id)arg1 ;
-(void)removeObserver:(id)arg1 forKeyPath:(id)arg2 context:(void*)arg3 ;
-(id)sortedArrayUsingDescriptors:(id)arg1 ;
-(void)getObjects:(id*)arg1 count:(unsigned long long)arg2 ;
-(BOOL)isNSSet__;
-(BOOL)__getValue:(id*)arg1 forObj:(id)arg2 ;
-(id)objectPassingTest:(/*^block*/id)arg1 ;
-(id)initWithOrderedSet:(id)arg1 range:(NSRange)arg2 copyItems:(BOOL)arg3 ;
-(void)__applyValues:(/*function pointer*/void*)arg1 context:(void*)arg2 ;
-(id)initWithArray:(id)arg1 range:(NSRange)arg2 copyItems:(BOOL)arg3 ;
-(id)initWithArray:(id)arg1 range:(NSRange)arg2 ;
-(BOOL)intersectsOrderedSet:(id)arg1 ;
-(BOOL)isSubsetOfOrderedSet:(id)arg1 ;
-(id)objectWithOptions:(unsigned long long)arg1 passingTest:(/*^block*/id)arg2 ;
-(id)initWithOrderedSet:(id)arg1 range:(NSRange)arg2 ;
-(id)initWithOrderedSet:(id)arg1 copyItems:(BOOL)arg2 ;
-(id)members:(id)arg1 notFoundMarker:(id)arg2 ;
-(id)initWithObject:(id)arg1 ;
-(unsigned long long)_cfTypeID;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_NS19*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(unsigned long long)countForObject:(id)arg1 ;
-(id)initWithObjects:(const id*)arg1 count:(unsigned long long)arg2 ;
-(id)objectEnumerator;
-(BOOL)isEqualToSet:(id)arg1 ;
-(id)anyObject;
-(id)descriptionWithLocale:(id)arg1 ;
-(void)enumerateObjectsUsingBlock:(/*^block*/id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)sortedArrayWithOptions:(unsigned long long)arg1 usingComparator:(/*^block*/id)arg2 ;
-(void)makeObjectsPerformSelector:(SEL)arg1 ;
-(unsigned long long)count;
-(void)makeObjectsPerformSelector:(SEL)arg1 withObject:(id)arg2 ;
-(void)getObjects:(id*)arg1 range:(NSRange)arg2 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(BOOL)containsObject:(id)arg1 ;
-(id)member:(id)arg1 ;
-(id)initWithOrderedSet:(id)arg1 ;
-(id)allObjects;
-(BOOL)isSubsetOfSet:(id)arg1 ;
-(id)initWithSet:(id)arg1 copyItems:(BOOL)arg2 ;
-(id)description;
-(BOOL)intersectsSet:(id)arg1 ;
-(void)enumerateObjectsWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)descriptionWithLocale:(id)arg1 indent:(unsigned long long)arg2 ;
-(id)objectsWithOptions:(unsigned long long)arg1 passingTest:(/*^block*/id)arg2 ;
-(id)setByAddingObjectsFromArray:(id)arg1 ;
-(id)setByAddingObjectsFromSet:(id)arg1 ;
-(void)getObjects:(id*)arg1 ;
-(id)setByAddingObject:(id)arg1 ;
-(id)initWithArray:(id)arg1 copyItems:(BOOL)arg2 ;
-(unsigned long long)hash;
-(id)sortedArrayUsingComparator:(/*^block*/id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithObjects:(id)arg1 ;
-(id)objectsPassingTest:(/*^block*/id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithSet:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithArray:(id)arg1 ;
@end

