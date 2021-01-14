/*
* Generated on Thursday, January 14, 2021 at 2:20:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class NSPointerFunctions;

@interface NSMapTable : NSObject <NSCopying, NSSecureCoding, NSFastEnumeration>

@property (copy,readonly) NSPointerFunctions * keyPointerFunctions; 
@property (copy,readonly) NSPointerFunctions * valuePointerFunctions; 
@property (readonly) unsigned long long count; 
+(id)alloc;
+(BOOL)supportsSecureCoding;
+(id)mapTableWithKeyOptions:(unsigned long long)arg1 valueOptions:(unsigned long long)arg2 ;
+(id)mapTableWithStrongToStrongObjects;
+(id)mapTableWithWeakToStrongObjects;
+(id)mapTableWithStrongToWeakObjects;
+(id)strongToStrongObjectsMapTable;
+(id)mapTableWithWeakToWeakObjects;
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)weakToWeakObjectsMapTable;
+(id)weakToStrongObjectsMapTable;
+(id)strongToWeakObjectsMapTable;
-(id)bs_filter:(/*^block*/id)arg1 ;
-(id)bs_safeObjectForKey:(id)arg1 ofType:(Class)arg2 ;
-(void)bs_setSafeObject:(id)arg1 forKey:(id)arg2 ;
-(id)bs_takeObjectForKey:(id)arg1 ;
-(void)bs_each:(/*^block*/id)arg1 ;
-(id)dictionaryRepresentation;
-(void)removeAllItems;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_NS24*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)init;
-(id)objectEnumerator;
-(unsigned long long)getKeys:(const void*)arg1 values:(const void*)arg2 ;
-(unsigned long long)__capacity;
-(void)encodeWithCoder:(id)arg1 ;
-(NSPointerFunctions *)keyPointerFunctions;
-(unsigned long long)count;
-(void)removeObjectForKey:(id)arg1 ;
-(NSPointerFunctions *)valuePointerFunctions;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)enumerator;
-(BOOL)mapMember:(const void*)arg1 originalKey:(const void*)arg2 value:(const void*)arg3 ;
-(id)mutableDictionary;
-(id)description;
-(void)setItem:(const void*)arg1 forKey:(const void*)arg2 ;
-(id)keyEnumerator;
-(Class)classForCoder;
-(id)copy;
-(id)objectForKey:(id)arg1 ;
-(void)setItem:(const void*)arg1 forAbsentKey:(const void*)arg2 ;
-(void)removeAllObjects;
-(id)allValues;
-(id)initWithCoder:(id)arg1 ;
-(void*)existingItemForSetItem:(const void*)arg1 forAbsentKey:(const void*)arg2 ;
-(void)replaceItem:(const void*)arg1 forExistingKey:(const void*)arg2 ;
-(id)initWithKeyPointerFunctions:(id)arg1 valuePointerFunctions:(id)arg2 capacity:(unsigned long long)arg3 ;
-(id)allKeys;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setItem:(const void*)arg1 forKnownAbsentKey:(const void*)arg2 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(id)initWithKeyOptions:(unsigned long long)arg1 valueOptions:(unsigned long long)arg2 capacity:(unsigned long long)arg3 ;
@end

