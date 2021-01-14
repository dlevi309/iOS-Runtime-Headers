/*
* Generated on Thursday, January 14, 2021 at 2:20:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSHashTable.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface NSConcreteHashTable : NSHashTable <NSSecureCoding> {

	NSSlice* slice;
	unsigned long long count;
	unsigned long long capacity;
	unsigned long long options;
	unsigned long long mutations;

}
+(BOOL)supportsSecureCoding;
-(void)removeItem:(const void*)arg1 ;
-(void)removeAllItems;
-(void)insertItem:(const void*)arg1 ;
-(void)rehash;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_NS24*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)init;
-(id)objectEnumerator;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)count;
-(void)raiseCountUnderflowException;
-(id)initWithOptions:(unsigned long long)arg1 capacity:(unsigned long long)arg2 ;
-(void)getKeys:(const void*)arg1 count:(unsigned long long*)arg2 ;
-(id)allObjects;
-(void*)getItem:(const void*)arg1 ;
-(unsigned long long)rehashAround:(unsigned long long)arg1 ;
-(id)description;
-(void)addObject:(id)arg1 ;
-(id)copy;
-(id)initWithPointerFunctions:(id)arg1 capacity:(unsigned long long)arg2 ;
-(id)pointerFunctions;
-(void)assign:(unsigned long long)arg1 key:(const void*)arg2 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)insertKnownAbsentItem:(const void*)arg1 ;
-(void)hashGrow;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

