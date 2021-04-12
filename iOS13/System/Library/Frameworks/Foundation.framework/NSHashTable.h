/*
* Generated on Monday, March 1, 2021 at 2:30:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class NSPointerFunctions, NSArray, NSSet;

@interface NSHashTable : NSObject <NSCopying, NSSecureCoding, NSFastEnumeration>

@property (copy,readonly) NSPointerFunctions * pointerFunctions; 
@property (readonly) unsigned long long count; 
@property (copy,readonly) NSArray * allObjects; 
@property (nonatomic,readonly) id anyObject; 
@property (copy,readonly) NSSet * setRepresentation; 
+(id)alloc;
+(id)allocWithZone:(NSZone*)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)hashTableWithWeakObjects;
+(id)weakObjectsHashTable;
+(id)hashTableWithOptions:(unsigned long long)arg1 ;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)copy;
-(unsigned long long)count;
-(id)member:(id)arg1 ;
-(id)objectEnumerator;
-(void)addObject:(id)arg1 ;
-(void)removeObject:(id)arg1 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_NS6*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)removeAllObjects;
-(BOOL)containsObject:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(Class)classForCoder;
-(NSArray *)allObjects;
-(id)anyObject;
-(NSPointerFunctions *)pointerFunctions;
-(id)initWithOptions:(unsigned long long)arg1 capacity:(unsigned long long)arg2 ;
-(void*)getItem:(const void*)arg1 ;
-(void)removeItem:(const void*)arg1 ;
-(void)removeAllItems;
-(unsigned long long)weakCount;
-(void)insertKnownAbsentItem:(const void*)arg1 ;
-(void)getKeys:(const void*)arg1 count:(unsigned long long*)arg2 ;
-(id)initWithPointerFunctions:(id)arg1 capacity:(unsigned long long)arg2 ;
-(BOOL)intersectsHashTable:(id)arg1 ;
-(BOOL)isEqualToHashTable:(id)arg1 ;
-(BOOL)isSubsetOfHashTable:(id)arg1 ;
-(void)intersectHashTable:(id)arg1 ;
-(void)unionHashTable:(id)arg1 ;
-(void)minusHashTable:(id)arg1 ;
-(id)mutableSet;
-(NSSet *)setRepresentation;
@end

