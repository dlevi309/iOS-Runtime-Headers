/*
* Generated on Monday, March 1, 2021 at 2:30:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSPointerArray.h>

@interface NSConcretePointerArray : NSPointerArray {

	NSSlice* slice;
	unsigned long long count;
	unsigned long long capacity;
	unsigned long long options;
	unsigned long long mutations;
	BOOL needsCompaction;

}
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)count;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_NS6*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)initWithOptions:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithPointerFunctions:(id)arg1 ;
-(id)pointerFunctions;
-(void*)pointerAtIndex:(unsigned long long)arg1 ;
-(void)addPointer:(void*)arg1 ;
-(void)removePointerAtIndex:(unsigned long long)arg1 ;
-(void)insertPointer:(void*)arg1 atIndex:(unsigned long long)arg2 ;
-(void)replacePointerAtIndex:(unsigned long long)arg1 withPointer:(void*)arg2 ;
-(void)compact;
-(void)setCount:(unsigned long long)arg1 ;
-(void)arrayGrow:(unsigned long long)arg1 ;
-(void)_markNeedsCompaction;
-(unsigned long long)indexOfPointer:(void*)arg1 ;
-(void)removePointer:(void*)arg1 ;
@end

