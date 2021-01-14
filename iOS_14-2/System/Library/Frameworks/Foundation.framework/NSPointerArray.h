/*
* Generated on Thursday, January 14, 2021 at 2:20:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSPointerFunctions;

@interface NSPointerArray : NSObject <NSFastEnumeration, NSCopying, NSSecureCoding>

@property (copy,readonly) NSPointerFunctions * pointerFunctions; 
@property (assign) unsigned long long count; 
+(BOOL)supportsSecureCoding;
+(id)pointerArrayWithWeakObjects;
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)weakObjectsPointerArray;
+(id)strongObjectsPointerArray;
+(id)pointerArrayWithPointerFunctions:(id)arg1 ;
+(id)pointerArrayWithOptions:(unsigned long long)arg1 ;
+(id)pointerArrayWithStrongObjects;
-(void)addPointer:(void*)arg1 ;
-(void)setCount:(unsigned long long)arg1 ;
-(id)initWithOptions:(unsigned long long)arg1 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_NS24*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)init;
-(void*)pointerAtIndex:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)count;
-(void)removePointerAtIndex:(unsigned long long)arg1 ;
-(id)initWithPointerFunctions:(id)arg1 ;
-(id)mutableArray;
-(id)allObjects;
-(Class)classForCoder;
-(void)replacePointerAtIndex:(unsigned long long)arg1 withPointer:(void*)arg2 ;
-(NSPointerFunctions *)pointerFunctions;
-(id)initWithCoder:(id)arg1 ;
-(void)insertPointer:(void*)arg1 atIndex:(unsigned long long)arg2 ;
-(void)compact;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

