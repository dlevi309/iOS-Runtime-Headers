/*
* Generated on Thursday, January 14, 2021 at 2:20:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(BOOL)supportsSecureCoding;
+(id)weakObjectsHashTable;
+(id)hashTableWithWeakObjects;
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)hashTableWithOptions:(unsigned long long)arg1 ;
-(void)removeItem:(const void*)arg1 ;
-(void)removeAllItems;
-(unsigned long long)weakCount;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_NS24*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)init;
-(id)objectEnumerator;
-(id)anyObject;
-(id)mutableSet;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)count;
-(id)initWithOptions:(unsigned long long)arg1 capacity:(unsigned long long)arg2 ;
-(void)getKeys:(const void*)arg1 count:(unsigned long long*)arg2 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(BOOL)containsObject:(id)arg1 ;
-(id)member:(id)arg1 ;
-(NSSet *)setRepresentation;
-(BOOL)intersectsHashTable:(id)arg1 ;
-(void)unionHashTable:(id)arg1 ;
-(NSArray *)allObjects;
-(void)minusHashTable:(id)arg1 ;
-(BOOL)isSubsetOfHashTable:(id)arg1 ;
-(void*)getItem:(const void*)arg1 ;
-(id)description;
-(void)addObject:(id)arg1 ;
-(Class)classForCoder;
-(id)copy;
-(BOOL)isEqualToHashTable:(id)arg1 ;
-(void)intersectHashTable:(id)arg1 ;
-(id)initWithPointerFunctions:(id)arg1 capacity:(unsigned long long)arg2 ;
-(NSPointerFunctions *)pointerFunctions;
-(void)removeAllObjects;
-(void)removeObject:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)insertKnownAbsentItem:(const void*)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

